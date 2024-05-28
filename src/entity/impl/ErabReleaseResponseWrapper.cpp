#include <entity/include/ErabReleaseResponseWrapper.h>

#include <rapidjson/document.h>

#include <format>
#include <stdexcept>
#include <string_view>

using e_rab_id_t = uint8_t;

void ErabReleaseResponseWrapper::serialize(rapidjson::Document& config) const {
  rapidjson::Value val;
  val.SetObject();
  rapidjson::Document::AllocatorType& allocator = config.GetAllocator();

  val.AddMember("cp_ue_id", cp_ue_id, allocator);

  rapidjson::Value releaseList(rapidjson::kArrayType);
  for (const auto& id : erab_release_id_list) {
    rapidjson::Value erabId;
    erabId.SetInt(id);
    releaseList.PushBack(erabId, allocator);
  }
  val.AddMember("erab_release_id_list", releaseList, allocator);

  rapidjson::Value failedList(rapidjson::kArrayType);
  for (const auto& item : erab_failed_list) {
    rapidjson::Value erabToFail(rapidjson::kObjectType);
    erabToFail.AddMember("id", item.e_rab_id, allocator);
    erabToFail.AddMember("cause", static_cast<int>(item.cause), allocator);
    erabToFail.AddMember("cause_value", item.cause_value, allocator);
    failedList.PushBack(erabToFail, allocator);
  }
  val.AddMember("erab_failed_list", failedList, allocator);

  config.SetObject();
  config.AddMember("ErabReleaseResponse", val, allocator);
}

void ErabReleaseResponseWrapper::deserialize(const rapidjson::Value& config) {
  const rapidjson::Value& val = getChecked(config, "ErabReleaseResponse");
  cp_ue_id = getChecked(val, "cp_ue_id").GetInt();

  const rapidjson::Value& releaseList = getChecked(val, "erab_release_id_list");
  for (rapidjson::SizeType i = 0; i < releaseList.Size(); i++) {
    erab_release_id_list.push_back(static_cast<e_rab_id_t>(releaseList[i].GetInt()));
  }

  const rapidjson::Value& failedList = getChecked(val, "erab_failed_list");
  using vran::cplane::common::RrcCause;
  for (rapidjson::SizeType i = 0; i < failedList.Size(); i++) {
    erab_failed_list.emplace_back(getChecked(failedList[i], "id").GetUint(),
                                  static_cast<RrcCause>(getChecked(failedList[i], "cause").GetInt()),
                                  getChecked(failedList[i], "cause_value").GetUint());
  }
}