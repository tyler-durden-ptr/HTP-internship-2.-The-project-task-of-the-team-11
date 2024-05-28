#include <Runner.h>
#include <entity/include/ErabReleaseResponseWrapper.h>
#include <entity/include/PathSwitchRequestWrapper.h>
#include <entity/include/UeBlindRequestWrapper.h>
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
static_assert(serializableConcept<PathSwitchRequestWrapper>);
static_assert(serializableConcept<ErabReleaseResponseWrapper>);

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
  ErabReleaseResponseWrapper response;
  response.cp_ue_id = 1234;
  response.erab_release_id_list = {1, 2, 3};

  using vran::cplane::common::RrcCause;
  response.erab_failed_list.emplace_back(1, RrcCause::CAUSE_RADIO_NETWORK, 10);
  response.erab_failed_list.emplace_back(2, RrcCause::CAUSE_TRANSPORT, 20);

  rapidjson::Document config;
  response.serialize(config);
  rapidjson::StringBuffer buffer;
  rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
  config.Accept(writer);
  std::string serializedResponse = buffer.GetString();

  ErabReleaseResponseWrapper deserializedResponse;
  deserializedResponse.deserialize(config);

  EXPECT_EQ(response.cp_ue_id, deserializedResponse.cp_ue_id);
  EXPECT_EQ(response.erab_release_id_list, deserializedResponse.erab_release_id_list);
  EXPECT_EQ(response.erab_failed_list.size(), deserializedResponse.erab_failed_list.size());

  for (size_t i = 0; i < response.erab_failed_list.size(); i++) {
    EXPECT_EQ(response.erab_failed_list[i].e_rab_id, deserializedResponse.erab_failed_list[i].e_rab_id);
    EXPECT_EQ(response.erab_failed_list[i].cause, deserializedResponse.erab_failed_list[i].cause);
    EXPECT_EQ(response.erab_failed_list[i].cause_value, deserializedResponse.erab_failed_list[i].cause_value);
  }
}

TEST(PathSwitchRequest, ExampleSerialization) {
  PathSwitchRequestWrapper wrapper;
  wrapper.cp_ue_id = 32;
  wrapper.src_mme_ue_s1ap_id = 45;
  vran::cplane::common::ERadioAccessBearerSwitchParameter er;
  er.e_rab_id = 22;
  er.sgw_addr.length = 2;
  int values[] = {1, 2};
  std::copy(std::begin(values), std::end(values), er.sgw_addr.buffer);
  er.sgw_teid = 41;
  wrapper.erab_switch_list = {er};
  wrapper.security_capabilities.encryption_algorithms = 77;
  wrapper.security_capabilities.integrity_algorithms = 88;

  rapidjson::Document d;
  wrapper.serialize(d);

  rapidjson::StringBuffer buffer;
  rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
  d.Accept(writer);
  ASSERT_EQ(
      R"({"PathSwitchRequest":{"cp_ue_id":32,"src_mme_ue_s1ap_id":45,"erab_switch_list":[{"e_rab_id":22,"sgw_addr":{"length":2,"buffer":[1,2]},"sgw_teid":41}],"security_capabilities":{"encryption_algorithms":77,"integrity_algorithms":88}}})",
      std::string(buffer.GetString(), buffer.GetLength()));
}

TEST(PathSwitchRequest, ExampleDeserialization) {
  std::string_view input =
      R"({"PathSwitchRequest":{"cp_ue_id":32,"src_mme_ue_s1ap_id":45,"erab_switch_list":[{"e_rab_id":22,"sgw_addr":{"length":2,"buffer":[1,2]},"sgw_teid":41}],"security_capabilities":{"encryption_algorithms":77,"integrity_algorithms":88}}})";
  rapidjson::Document doc;
  doc.Parse(input.data());
  PathSwitchRequestWrapper result;
  result.deserialize(doc);
  ASSERT_EQ(32, result.cp_ue_id);
  ASSERT_EQ(45, result.src_mme_ue_s1ap_id);
  vran::cplane::common::ERadioAccessBearerSwitchParameter er;
  er.e_rab_id = 22;
  er.sgw_addr.length = 2;
  int values[] = {1, 2};
  std::copy(std::begin(values), std::end(values), er.sgw_addr.buffer);
  er.sgw_teid = 41;
  std::vector<vran::cplane::common::ERadioAccessBearerSwitchParameter> ers = {er};

  for (size_t i = 0; i < ers.size(); ++i) {
    ASSERT_EQ(ers[i].e_rab_id, result.erab_switch_list[i].e_rab_id);
    for (size_t j = 0; j < ers[i].sgw_addr.length; ++j) {
      ASSERT_EQ(ers[i].sgw_addr.buffer[j], result.erab_switch_list[i].sgw_addr.buffer[j]);
    }
    ASSERT_EQ(ers[i].sgw_addr.length, result.erab_switch_list[i].sgw_addr.length);
    ASSERT_EQ(ers[i].sgw_teid, result.erab_switch_list[i].sgw_teid);
  }
  ASSERT_EQ(77, result.security_capabilities.encryption_algorithms);
  ASSERT_EQ(88, result.security_capabilities.integrity_algorithms);
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
