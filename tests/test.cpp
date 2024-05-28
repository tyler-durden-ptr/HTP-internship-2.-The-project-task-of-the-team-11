#include <Runner.h>
#include <entity/ErabReleaseResponseWrapper.h>
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

TEST(UeBlindRequest, ExampleSerialization) {
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

TEST(UeBlindRequest, ExampleDeserialization) {
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

TEST(ErabReleaseResponse, SerializeAndDeserialize) {
  // Создание объекта ErabReleaseResponse
  ErabReleaseResponseWrapper response;
  response.cp_ue_id = 1234;
  response.erab_release_id_list = {1, 2, 3};

  using vran::cplane::common::RrcCause;
  response.erab_failed_list.emplace_back(1, RrcCause::CAUSE_RADIO_NETWORK, 10);
  response.erab_failed_list.emplace_back(2, RrcCause::CAUSE_TRANSPORT, 20);

  // Сериализация объекта
  rapidjson::Document config;
  response.serialize(config);

  // Преобразование в строку для сравнения
  rapidjson::StringBuffer buffer;
  rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
  config.Accept(writer);
  std::string serializedResponse = buffer.GetString();

  // Десериализация объекта
  ErabReleaseResponseWrapper deserializedResponse;
  deserializedResponse.deserialize(config);

  // Проверка результата
  EXPECT_EQ(response.cp_ue_id, deserializedResponse.cp_ue_id);
  EXPECT_EQ(response.erab_release_id_list, deserializedResponse.erab_release_id_list);
  EXPECT_EQ(response.erab_failed_list.size(), deserializedResponse.erab_failed_list.size());

  for (size_t i = 0; i < response.erab_failed_list.size(); i++) {
    EXPECT_EQ(response.erab_failed_list[i].e_rab_id, deserializedResponse.erab_failed_list[i].e_rab_id);
    EXPECT_EQ(response.erab_failed_list[i].cause, deserializedResponse.erab_failed_list[i].cause);
    EXPECT_EQ(response.erab_failed_list[i].cause_value, deserializedResponse.erab_failed_list[i].cause_value);
  }
}

TEST(UeBlindRequest, FileWithSeveralItti2) {
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

TEST(InvalidITTI, WriterDontWaitInvalidMessages) {
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
