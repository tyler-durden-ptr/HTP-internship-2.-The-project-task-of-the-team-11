#include <Runner.h>
#include <entity/UeBlindRequestWrapper.h>
#include <gtest/gtest.h>
#include <rapidjson/document.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/writer.h>

#include <filesystem>
#include <fstream>
#include <iostream>
#include <memory>
#include <sstream>
#include <string>

template <typename T>
concept serializableConcept = requires(T t, rapidjson::Document& config, const rapidjson::Document& constConfig) {
  { t.serialize(config) } -> std::same_as<void>;
  { t.deserialize(constConfig) } -> std::same_as<void>;
};

static_assert(serializableConcept<UeBlindRequestWrapper>);

static std::string getDefaultRepresentation(const std::string& formatted) {
  rapidjson::Document doc;
  doc.Parse(formatted.data());
  rapidjson::StringBuffer buffer;
  rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
  doc.Accept(writer);
  return buffer.GetString();
}

TEST(UeBlindRequest, example_serialize) {
  UeBlindRequestWrapper wrapper;
  wrapper.target_cell_id = 24;
  auto measConfig = std::make_unique<MeasConfig>();
  wrapper.measConfig = measConfig.get();
  auto speedStatePars = std::make_unique<MeasConfig::MeasConfig__speedStatePars>();
  speedStatePars->present = MeasConfig__speedStatePars_PR_release;
  speedStatePars->choice.release = 100;
  measConfig->speedStatePars = speedStatePars.get();
  auto measScaleFactor_r12 = std::make_unique<MeasConfig::MeasConfig__measScaleFactor_r12>();
  measScaleFactor_r12->present = MeasConfig__measScaleFactor_r12_PR_release;
  measScaleFactor_r12->choice.release = 101;
  measConfig->measScaleFactor_r12 = measScaleFactor_r12.get();
  rapidjson::Document d;
  wrapper.serialize(d);

  rapidjson::StringBuffer buffer;
  rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
  d.Accept(writer);

  ASSERT_EQ(
      R"({"UeBlindRequest":{"target_cell_id":24,"measConfig":{"speedStatePars":{"release":100},"measScaleFactor_r12":{"release":101}}}})",
      std::string(buffer.GetString(), buffer.GetLength()));
}

TEST(UeBlindRequest, example_deserialize) {
  std::string_view input =
      R"({"UeBlindRequest":{"target_cell_id":24,"measConfig":{"speedStatePars":{"release":100},"measScaleFactor_r12":{"release":101}}}})";
  rapidjson::Document doc;
  doc.Parse(input.data());
  UeBlindRequestWrapper result;
  result.deserialize(doc);
  ASSERT_EQ(24, result.target_cell_id);
  ASSERT_EQ(MeasConfig__speedStatePars_PR_release, result.measConfig->speedStatePars->present);
  ASSERT_EQ(100, result.measConfig->speedStatePars->choice.release);
  ASSERT_EQ(MeasConfig__measScaleFactor_r12_PR_release, result.measConfig->measScaleFactor_r12->present);
  ASSERT_EQ(101, result.measConfig->measScaleFactor_r12->choice.release);
}

TEST(UeBlindRequest, file_with_several_itti_2) {
  std::ifstream inputFile("resources/2.json");
  std::string inputData;
  if (inputFile) {
    std::ostringstream ss;
    ss << inputFile.rdbuf();
    inputData = ss.str();
  }
  std::cout << std::format("Local path: {}\n", std::filesystem::current_path().c_str());
  ASSERT_GE(inputData.size(), 1);
  std::stringstream inputSs(inputData);
  std::stringstream outputSs;
  Runner::runWithStreams(inputSs, outputSs, 3);
  ASSERT_EQ(getDefaultRepresentation(inputData), getDefaultRepresentation(outputSs.str()));
}

TEST(InvalidITTI, writer_dont_wait_invalid_messages) {
  std::ifstream inputFile("resources/invalid1.json");
  std::string inputData;
  if (inputFile) {
    std::ostringstream ss;
    ss << inputFile.rdbuf();
    inputData = ss.str();
  }
  std::cout << std::format("Local path: {}\n", std::filesystem::current_path().c_str());
  ASSERT_GE(inputData.size(), 1);
  std::stringstream inputSs(inputData);
  std::stringstream outputSs;
  Runner::runWithStreams(inputSs, outputSs, 3);
  ASSERT_EQ(getDefaultRepresentation(
                R"(
[
  {
    "UeBlindRequest": {
      "target_cell_id": 8,
      "measConfig": {
        "speedStatePars": {
          "release": 200
        },
        "measScaleFactor_r12": {
          "release": 202
        }
      }
    }
  }
])"),
            getDefaultRepresentation(outputSs.str()));
}

TEST(rapidjsonLib, example) {
  // 1. Parse a JSON string into DOM.
  std::string json = R"({"project":"rapidjson","stars":10})";
  rapidjson::Document d;
  d.Parse(json.c_str());

  // 2. Modify it by DOM.
  rapidjson::Value& s = d["stars"];
  s.SetInt(s.GetInt() + 1);

  // 3. Stringify the DOM
  rapidjson::StringBuffer buffer;
  rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
  d.Accept(writer);

  // Output {"project":"rapidjson","stars":11}
  ASSERT_NE(json, std::string{buffer.GetString()});
}
