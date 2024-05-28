#include <entity/include/PathSwitchRequestWrapper.h>
#include <rapidjson/document.h>

#include <iostream>

using namespace rapidjson;
using namespace vran::s1ap::lte;

// Барков Игорь

void PathSwitchRequestWrapper::serialize(rapidjson::Document& config) const {
  Value val(kObjectType);
  Document::AllocatorType& alloc = config.GetAllocator();
  val.AddMember("cp_ue_id", cp_ue_id, alloc);
  val.AddMember("src_mme_ue_s1ap_id", src_mme_ue_s1ap_id, alloc);
  Value erabSwitchList(kArrayType);
  for (const auto& erab : erab_switch_list) {
    Value erabValue(kObjectType);
    erabValue.AddMember("e_rab_id", erab.e_rab_id, alloc);
    Value sgwAddrValue(kObjectType);
    sgwAddrValue.AddMember("length", erab.sgw_addr.length, alloc);
    Value bufferArray(kArrayType);
    for (int i = 0; i < erab.sgw_addr.length; ++i) {
      bufferArray.PushBack(erab.sgw_addr.buffer[i], alloc);
    }
    sgwAddrValue.AddMember("buffer", bufferArray, alloc);
    erabValue.AddMember("sgw_addr", sgwAddrValue, alloc);
    erabValue.AddMember("sgw_teid", erab.sgw_teid, alloc);
    erabSwitchList.PushBack(erabValue, alloc);
  }
  val.AddMember("erab_switch_list", erabSwitchList, alloc);
  Value securityCapabilitiesValue(kObjectType);
  securityCapabilitiesValue.AddMember("encryption_algorithms", security_capabilities.encryption_algorithms, alloc);
  securityCapabilitiesValue.AddMember("integrity_algorithms", security_capabilities.integrity_algorithms, alloc);
  val.AddMember("security_capabilities", securityCapabilitiesValue, alloc);

  config.SetObject();
  config.AddMember("PathSwitchRequest", val, alloc);
}

void PathSwitchRequestWrapper::deserialize(const rapidjson::Value& config) {
  auto& val = getChecked(config, "PathSwitchRequest");
  cp_ue_id = getChecked(val, "cp_ue_id").GetUint();
  src_mme_ue_s1ap_id = getChecked(val, "src_mme_ue_s1ap_id").GetUint();
  const Value& erabSwitchList = getChecked(val, "erab_switch_list");
  erab_switch_list.clear();
  for (SizeType i = 0; i < erabSwitchList.Size(); ++i) {
    ERadioAccessBearerSwitchParameter erab;
    erab.e_rab_id = getChecked(erabSwitchList[i], "e_rab_id").GetUint();
    auto& sgw = getChecked(erabSwitchList[i], "sgw_addr");
    erab.sgw_addr.length = getChecked(sgw, "length").GetUint();
    const Value& bufferArray = getChecked(sgw, "buffer");
    for (SizeType j = 0; j < bufferArray.Size(); ++j) {
      erab.sgw_addr.buffer[j] = bufferArray[j].GetUint();
    }
    erab.sgw_teid = getChecked(erabSwitchList[i], "sgw_teid").GetUint();
    erab_switch_list.push_back(erab);
  }
  const Value& sec_cap = getChecked(val, "security_capabilities");
  security_capabilities.encryption_algorithms = getChecked(sec_cap, "encryption_algorithms").GetUint();
  security_capabilities.integrity_algorithms = getChecked(sec_cap, "integrity_algorithms").GetUint();
}
