//
// Created by michael_b on 5/19/2024.
//

#include <rapidjson/document.h>

#include <vector>
#include <algorithm>
#include <iterator>
#include <stdexcept>
#include <sstream>
#include <string>
#include <string_view>
#include <utility>
#include <type_traits>

#include "UeBlindRequestWrapper.h"

static rapidjson::Value serializeNonTrivialObject(const CellsToAddMod& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const PhysCellIdRange& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const BlackCellsToAddMod& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasSubframePatternConfigNeigh_r10& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasSubframePattern_r10& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasSubframePattern_r10::MeasSubframePattern_r10_u::MeasSubframePattern_r10__subframePatternTDD_r10& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const AltTTT_CellsToAddMod_r12& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasObjectEUTRA::MeasObjectEUTRA__t312_r12& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasDS_Config_r12& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasDS_Config_r12::MeasDS_Config_r12_u::MeasDS_Config_r12__setup& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasDS_Config_r12::MeasDS_Config_r12_u::MeasDS_Config_r12__setup::MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasDS_Config_r12::MeasDS_Config_r12_u::MeasDS_Config_r12__setup::MeasDS_Config_r12__setup__ds_OccasionDuration_r12& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasCSI_RS_Config_r12& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const RMTC_Config_r13& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const RMTC_Config_r13::RMTC_Config_r13_u::RMTC_Config_r13__setup& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const WhiteCellsToAddMod_r13& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasObjectEUTRA& value, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasObjectUTRA::MeasObjectUTRA__cellsToAddModList& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const CellsToAddModUTRA_FDD& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const CellsToAddModUTRA_TDD& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasObjectUTRA::MeasObjectUTRA__cellForWhichToReportCGI& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const CSG_AllowedReportingCells_r9& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasObjectUTRA& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const CarrierFreqsGERAN& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const CarrierFreqsGERAN::CarrierFreqsGERAN__followingARFCNs& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const CarrierFreqsGERAN::CarrierFreqsGERAN__followingARFCNs::CarrierFreqsGERAN__followingARFCNs_u::CarrierFreqsGERAN__followingARFCNs__equallySpacedARFCNs& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const CarrierFreqCDMA2000& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const CellsToAddModCDMA2000& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasObjectCDMA2000& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const WLAN_CarrierInfo_r13& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasObjectWLAN_r13::MeasObjectWLAN_r13__carrierFreq_r13& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const WLAN_Identifiers_r12& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasObjectWLAN_r13& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasObjectToAddMod& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const PhysCellIdGERAN& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasObjectGERAN& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ReportConfigEUTRA::ReportConfigEUTRA__triggerType::ReportConfigEUTRA__triggerType_u::ReportConfigEUTRA__triggerType__periodical& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ThresholdEUTRA& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ReportConfigEUTRA::ReportConfigEUTRA__triggerType::ReportConfigEUTRA__triggerType_u::ReportConfigEUTRA__triggerType__event::ReportConfigEUTRA__triggerType__event__eventId& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ReportConfigEUTRA::ReportConfigEUTRA__triggerType::ReportConfigEUTRA__triggerType_u::ReportConfigEUTRA__triggerType__event& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ReportConfigEUTRA::ReportConfigEUTRA__triggerType& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ReportConfigEUTRA::ReportConfigEUTRA__alternativeTimeToTrigger_r12& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const RSRQ_RangeConfig_r12& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ReportConfigEUTRA::ReportConfigEUTRA__rs_sinr_Config_r13::ReportConfigEUTRA__rs_sinr_Config_r13_u::ReportConfigEUTRA__rs_sinr_Config_r13__setup& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ReportConfigEUTRA::ReportConfigEUTRA__rs_sinr_Config_r13& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasRSSI_ReportConfig_r13& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const UL_DelayConfig_r13::UL_DelayConfig_r13_u::UL_DelayConfig_r13__setup& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const UL_DelayConfig_r13& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ReportConfigEUTRA& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT::ReportConfigInterRAT__triggerType::ReportConfigInterRAT__triggerType_u::ReportConfigInterRAT__triggerType__periodical& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ThresholdUTRA& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT::ReportConfigInterRAT__triggerType::ReportConfigInterRAT__triggerType_u::ReportConfigInterRAT__triggerType__event::ReportConfigInterRAT__triggerType__event__eventId::ReportConfigInterRAT__triggerType__event__eventId_u::ReportConfigInterRAT__triggerType__event__eventId__eventB1::ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT::ReportConfigInterRAT__triggerType::ReportConfigInterRAT__triggerType_u::ReportConfigInterRAT__triggerType__event::ReportConfigInterRAT__triggerType__event__eventId::ReportConfigInterRAT__triggerType__event__eventId_u::ReportConfigInterRAT__triggerType__event__eventId__eventB1& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT::ReportConfigInterRAT__triggerType::ReportConfigInterRAT__triggerType_u::ReportConfigInterRAT__triggerType__event::ReportConfigInterRAT__triggerType__event__eventId::ReportConfigInterRAT__triggerType__event__eventId_u::ReportConfigInterRAT__triggerType__event__eventId__eventB2::ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT::ReportConfigInterRAT__triggerType::ReportConfigInterRAT__triggerType_u::ReportConfigInterRAT__triggerType__event::ReportConfigInterRAT__triggerType__event__eventId::ReportConfigInterRAT__triggerType__event__eventId_u::ReportConfigInterRAT__triggerType__event__eventId__eventB2& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT::ReportConfigInterRAT__triggerType::ReportConfigInterRAT__triggerType_u::ReportConfigInterRAT__triggerType__event::ReportConfigInterRAT__triggerType__event__eventId::ReportConfigInterRAT__triggerType__event__eventId_u::ReportConfigInterRAT__triggerType__event__eventId__eventW1_r13& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT::ReportConfigInterRAT__triggerType::ReportConfigInterRAT__triggerType_u::ReportConfigInterRAT__triggerType__event::ReportConfigInterRAT__triggerType__event__eventId::ReportConfigInterRAT__triggerType__event__eventId_u::ReportConfigInterRAT__triggerType__event__eventId__eventW2_r13& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT::ReportConfigInterRAT__triggerType::ReportConfigInterRAT__triggerType_u::ReportConfigInterRAT__triggerType__event::ReportConfigInterRAT__triggerType__event__eventId::ReportConfigInterRAT__triggerType__event__eventId_u::ReportConfigInterRAT__triggerType__event__eventId__eventW3_r13& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT::ReportConfigInterRAT__triggerType::ReportConfigInterRAT__triggerType_u::ReportConfigInterRAT__triggerType__event::ReportConfigInterRAT__triggerType__event__eventId& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT::ReportConfigInterRAT__triggerType::ReportConfigInterRAT__triggerType_u::ReportConfigInterRAT__triggerType__event& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT::ReportConfigInterRAT__triggerType& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT::ReportConfigInterRAT__b2_Threshold1_v1250& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ReportQuantityWLAN_r13& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ReportConfigToAddMod::ReportConfigToAddMod__reportConfig& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const ReportConfigToAddMod& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasIdToAddMod& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const QuantityConfigEUTRA& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const QuantityConfigUTRA& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const QuantityConfigGERAN& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const QuantityConfigUTRA_v1020& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const QuantityConfigEUTRA_v1250& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const QuantityConfigEUTRA_v1310& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const QuantityConfigWLAN_r13& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const QuantityConfig& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasGapConfig::MeasGapConfig_u::MeasGapConfig__setup::MeasGapConfig__setup__gapOffset& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasGapConfig::MeasGapConfig_u::MeasGapConfig__setup& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasGapConfig& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const PreRegistrationInfoHRPD& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MobilityStateParameters& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const SpeedStateScaleFactors& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasConfig::MeasConfig__speedStatePars::MeasConfig__speedStatePars_u::MeasConfig__speedStatePars__setup& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasConfig::MeasConfig__speedStatePars& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasObjectEUTRA_v9e0& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasObjectToAddMod_v9e0& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasConfig::MeasConfig__measScaleFactor_r12& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasIdToAddModExt_r12& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasObjectToAddModExt_r13::MeasObjectToAddModExt_r13__measObject_r13& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasObjectToAddModExt_r13& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasIdToAddMod_v1310& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasGapConfigPerCC_r14& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasGapConfigPerCC_List_r14::MeasGapConfigPerCC_List_r14_u::MeasGapConfigPerCC_List_r14__setup& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasGapConfigPerCC_List_r14& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasGapSharingConfig_r14::MeasGapSharingConfig_r14_u::MeasGapSharingConfig_r14__setup& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasGapSharingConfig_r14& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const PhysCellIdRangeUTRA_FDD_r9& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasConfig& obj, auto& alloc);

[[noreturn]] static void throwEnumException() {
    throw std::domain_error("Unexpected enum value");
}

template <typename T, typename Alloc>
static rapidjson::Value serializeObject(const T& obj, Alloc& alloc) {
    if constexpr (std::is_arithmetic_v<T>) {
        return rapidjson::Value(obj);
    } else {
        return serializeNonTrivialObject(obj, alloc);
    }
}

template <typename T, typename Alloc>
static rapidjson::Value serializeVector(const std::vector<T>& vec, Alloc& alloc) {
    rapidjson::Value result;
    result.SetArray();
    for (const auto& elem : vec) {
        result.PushBack(serializeObject(elem, alloc), alloc);
    }
    return result;
}

template <typename T, typename Alloc, typename ValueType = std::remove_cvref_t<decltype(**std::declval<T>().list.array)>>
static rapidjson::Value serializeASequence(const T* seq, Alloc& alloc) {
        rapidjson::Value result;
        result.SetObject();
        std::vector<ValueType> valueVector;
        std::copy_n(*seq->list.array,seq->list.count,
                    std::back_inserter(valueVector));
        result.AddMember("list", serializeVector(valueVector, alloc), alloc);
        return result;
}

static void writeASequenceValue(rapidjson::Value& result, std::string_view str, const auto* ptr, auto& alloc) {
    if (ptr != nullptr) { // TODO: Lvalue reference - string ref
        result.AddMember(rapidjson::StringRef(str.data()), serializeASequence(ptr, alloc), alloc);
    }
}

static void writeTrivialValue(rapidjson::Value& result, std::string_view str, const auto* ptr, auto& alloc) {
    if (ptr != nullptr) {
        result.AddMember(rapidjson::StringRef(str.data()), rapidjson::Value(*ptr), alloc);
    }
}

static void writeNonTrivialValue(rapidjson::Value& result, std::string_view str, const auto* ptr, auto& alloc) {
    if (ptr != nullptr) {
        result.AddMember(rapidjson::StringRef(str.data()), serializeNonTrivialObject(*ptr, alloc), alloc);
    }
}

static rapidjson::Value serializeBitString(const BIT_STRING_t& bitString, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("bits_unused", bitString.bits_unused, alloc);
    std::vector<uint8_t> vec;
    std::copy_n(bitString.buf, bitString.size, std::back_inserter(vec));
    result.AddMember("buf", serializeVector(vec, alloc), alloc);
    return result;
}

static rapidjson::Value serializeOctetString(const OCTET_STRING& octetString, auto& alloc) {
    std::vector<uint8_t> vec;
    std::copy_n(octetString.buf, octetString.size, std::back_inserter(vec));
    return serializeVector(vec, alloc);
}

static rapidjson::Value serializeNonTrivialObject(const CellsToAddMod& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("cellIndex", obj.cellIndex, alloc);
    result.AddMember("physCellId", obj.physCellId, alloc);
    result.AddMember("cellIndividualOffset", obj.cellIndividualOffset, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const PhysCellIdRange& obj, auto& alloc) {
    rapidjson::Value physCellInRangeValue;
    physCellInRangeValue.SetObject();
    physCellInRangeValue.AddMember("start", obj.start, alloc);
    /* How to parse BlackCellsToAddMod_t.physCellIdRange.range pointer, because there is no size of array */
    physCellInRangeValue.AddMember("range", reinterpret_cast<uint64_t>(obj.range), alloc);
    return physCellInRangeValue;
}

static rapidjson::Value serializeNonTrivialObject(const BlackCellsToAddMod& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("cellIndex", obj.cellIndex, alloc);
    result.AddMember("physCellIdRange", serializeNonTrivialObject(obj.physCellIdRange, alloc), alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasSubframePatternConfigNeigh_r10& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case MeasSubframePatternConfigNeigh_r10_PR_release:
            result.AddMember("release", rapidjson::Value(obj.choice.release), alloc);
            break;
        case MeasSubframePatternConfigNeigh_r10_PR_setup:
            result.AddMember("measSubframePatternNeigh_r10",
                            serializeNonTrivialObject(obj.choice.setup.measSubframePatternNeigh_r10, alloc), alloc);
            result.AddMember("measSubframeCellList_r10",
                            serializeASequence(obj.choice.setup.measSubframeCellList_r10, alloc), alloc);
            break;
        case MeasSubframePatternConfigNeigh_r10_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasSubframePattern_r10& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case MeasSubframePattern_r10_PR_subframePatternFDD_r10:
            result.AddMember("subframePatternFDD_r10",
                            serializeBitString(obj.choice.subframePatternFDD_r10, alloc),
                            alloc);
            break;
        case MeasSubframePattern_r10_PR_subframePatternTDD_r10:
            result.AddMember("subframePatternTDD_r10",
                            serializeNonTrivialObject(obj.choice.subframePatternTDD_r10, alloc),
                            alloc);
            break;
        case MeasSubframePattern_r10_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasSubframePattern_r10::MeasSubframePattern_r10_u::MeasSubframePattern_r10__subframePatternTDD_r10& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case MeasSubframePattern_r10__subframePatternTDD_r10_PR_subframeConfig1_5_r10:
            result.AddMember("subframeConfig1_5_r10",
                            serializeBitString(obj.choice.subframeConfig1_5_r10, alloc), alloc);
            break;
        case MeasSubframePattern_r10__subframePatternTDD_r10_PR_subframeConfig0_r10:
            result.AddMember("subframeConfig0_r10",
                            serializeBitString(obj.choice.subframeConfig0_r10, alloc), alloc);
            break;
        case MeasSubframePattern_r10__subframePatternTDD_r10_PR_subframeConfig6_r10:
            result.AddMember("subframeConfig6_r10",
                            serializeBitString(obj.choice.subframeConfig6_r10, alloc), alloc);
            break;
        case MeasSubframePattern_r10__subframePatternTDD_r10_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const AltTTT_CellsToAddMod_r12& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("cellIndex_r12", obj.cellIndex_r12, alloc);
    result.AddMember("physCellIdRange_r12", serializeNonTrivialObject(obj.physCellIdRange_r12, alloc), alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasObjectEUTRA::MeasObjectEUTRA__t312_r12& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case MeasObjectEUTRA__t312_r12_PR_release:
            result.AddMember("release", obj.choice.release, alloc);
            break;
        case MeasObjectEUTRA__t312_r12_PR_setup:
            result.AddMember("setup", obj.choice.setup, alloc);
            break;
        case MeasObjectEUTRA__t312_r12_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasDS_Config_r12& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case MeasDS_Config_r12_PR_release:
            result.AddMember("release", obj.choice.release, alloc);
            break;
        case MeasDS_Config_r12_PR_setup:
            result.AddMember("setup", serializeNonTrivialObject(obj.choice.setup, alloc), alloc);
            break;
        case MeasDS_Config_r12_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasDS_Config_r12::MeasDS_Config_r12_u::MeasDS_Config_r12__setup& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("dmtc_PeriodOffset_r12",
                    serializeNonTrivialObject(obj.dmtc_PeriodOffset_r12, alloc), alloc);
    result.AddMember("ds_OccasionDuration_r12",
                    serializeNonTrivialObject(obj.ds_OccasionDuration_r12, alloc), alloc);
    writeASequenceValue(result, "measCSI_RS_ToRemoveList_r12", obj.measCSI_RS_ToRemoveList_r12, alloc);
    writeASequenceValue(result, "measCSI_RS_ToAddModList_r12", obj.measCSI_RS_ToAddModList_r12, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasDS_Config_r12::MeasDS_Config_r12_u::MeasDS_Config_r12__setup::MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12_PR_ms40_r12:
            result.AddMember("ms40_r12", obj.choice.ms40_r12, alloc);
            break;
        case MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12_PR_ms80_r12:
            result.AddMember("ms80_r12", obj.choice.ms80_r12, alloc);
            break;
        case MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12_PR_ms160_r12:
            result.AddMember("ms160_r12", obj.choice.ms160_r12, alloc);
            break;
        case MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasDS_Config_r12::MeasDS_Config_r12_u::MeasDS_Config_r12__setup::MeasDS_Config_r12__setup__ds_OccasionDuration_r12& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case MeasDS_Config_r12__setup__ds_OccasionDuration_r12_PR_durationFDD_r12:
            result.AddMember("durationFDD_r12", obj.choice.durationFDD_r12, alloc);
            break;
        case MeasDS_Config_r12__setup__ds_OccasionDuration_r12_PR_durationTDD_r12:
            result.AddMember("durationTDD_r12", obj.choice.durationTDD_r12, alloc);
            break;
        case MeasDS_Config_r12__setup__ds_OccasionDuration_r12_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasCSI_RS_Config_r12& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("measCSI_RS_Id_r12", obj.measCSI_RS_Id_r12, alloc);
    result.AddMember("physCellId_r12", obj.physCellId_r12, alloc);
    result.AddMember("scramblingIdentity_r12", obj.scramblingIdentity_r12, alloc);
    result.AddMember("resourceConfig_r12", obj.resourceConfig_r12, alloc);
    result.AddMember("subframeOffset_r12", obj.subframeOffset_r12, alloc);
    result.AddMember("csi_RS_IndividualOffset_r12", obj.csi_RS_IndividualOffset_r12, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const RMTC_Config_r13& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case RMTC_Config_r13_PR_release:
            result.AddMember("release", obj.choice.release, alloc);
            break;
        case RMTC_Config_r13_PR_setup:
            result.AddMember("setup", serializeNonTrivialObject(obj.choice.setup, alloc), alloc);
            break;
        case RMTC_Config_r13_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const RMTC_Config_r13::RMTC_Config_r13_u::RMTC_Config_r13__setup& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("rmtc_Period_r13", obj.rmtc_Period_r13, alloc);
    if (obj.rmtc_SubframeOffset_r13 != nullptr) {
        result.AddMember("rmtc_SubframeOffset_r13", *obj.rmtc_SubframeOffset_r13, alloc);
    }
    result.AddMember("measDuration_r13", obj.measDuration_r13, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const WhiteCellsToAddMod_r13& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("cellIndex_r13", obj.cellIndex_r13, alloc);
    result.AddMember("physCellIdRange_r13", serializeNonTrivialObject(obj.physCellIdRange_r13, alloc), alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasObjectEUTRA& value, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("carrierFreq", value.carrierFreq, alloc);
    result.AddMember("allowedMeasBandwidth", value.allowedMeasBandwidth, alloc);
    result.AddMember("presenceAntennaPort1", value.presenceAntennaPort1, alloc);
    result.AddMember("neighCellConfig", serializeBitString(value.neighCellConfig, alloc), alloc);
    result.AddMember("offsetFreq", value.offsetFreq == nullptr ? 15L : *value.offsetFreq, alloc);
    writeASequenceValue(result, "cellsToRemoveList", value.cellsToRemoveList, alloc);
    writeASequenceValue(result, "cellsToAddModList", value.cellsToAddModList, alloc);
    writeASequenceValue(result, "blackCellsToRemoveList", value.blackCellsToRemoveList, alloc);
    writeASequenceValue(result, "blackCellsToAddModList", value.blackCellsToAddModList, alloc);
    writeTrivialValue(result, "cellForWhichToReportCGI", value.cellForWhichToReportCGI, alloc);
    writeTrivialValue(result, "measCycleSCell_r10", value.measCycleSCell_r10, alloc);
    writeNonTrivialValue(result, "measSubframePatternConfigNeigh_r10", value.measSubframePatternConfigNeigh_r10, alloc);
    writeTrivialValue(result, "widebandRSRQ_Meas_r11", value.widebandRSRQ_Meas_r11, alloc);
    writeASequenceValue(result, "altTTT_CellsToRemoveList_r12", value.altTTT_CellsToRemoveList_r12, alloc);
    writeASequenceValue(result, "altTTT_CellsToAddModList_r12", value.altTTT_CellsToAddModList_r12, alloc);
    if (value.t312_r12 != nullptr) { // TODO: throw if nullptr, because is not an optional field
        result.AddMember("t312_r12", serializeNonTrivialObject(*value.t312_r12, alloc), alloc);
    }
    writeTrivialValue(result, "reducedMeasPerformance_r12", value.reducedMeasPerformance_r12, alloc);
    writeNonTrivialValue(result, "measDS_Config_r12", value.measDS_Config_r12, alloc);
    writeASequenceValue(result, "whiteCellsToRemoveList_r13", value.whiteCellsToRemoveList_r13, alloc);
    writeASequenceValue(result, "whiteCellsToAddModList_r13", value.whiteCellsToAddModList_r13, alloc);
    writeNonTrivialValue(result, "rmtc_Config_r13", value.rmtc_Config_r13, alloc);
    writeTrivialValue(result, "carrierFreq_r13", value.carrierFreq_r13, alloc);
    writeASequenceValue(result, "tx_ResourcePoolToRemoveList_r14", value.tx_ResourcePoolToRemoveList_r14, alloc);
    writeASequenceValue(result, "tx_ResourcePoolToAddList_r14", value.tx_ResourcePoolToAddList_r14, alloc);
    writeTrivialValue(result, "fembms_MixedCarrier_r14", value.fembms_MixedCarrier_r14, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasObjectUTRA::MeasObjectUTRA__cellsToAddModList& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case MeasObjectUTRA__cellsToAddModList_PR_cellsToAddModListUTRA_FDD:
            writeASequenceValue(result, "cellsToAddModListUTRA_FDD", &obj.choice.cellsToAddModListUTRA_FDD, alloc);
            break;
        case MeasObjectUTRA__cellsToAddModList_PR_cellsToAddModListUTRA_TDD:
            writeASequenceValue(result, "cellsToAddModListUTRA_TDD", &obj.choice.cellsToAddModListUTRA_TDD, alloc);
            break;
        case MeasObjectUTRA__cellsToAddModList_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const CellsToAddModUTRA_FDD& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("cellIndex", obj.cellIndex, alloc);
    result.AddMember("physCellId", obj.physCellId, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const CellsToAddModUTRA_TDD& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("cellIndex", obj.cellIndex, alloc);
    result.AddMember("physCellId", obj.physCellId, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasObjectUTRA::MeasObjectUTRA__cellForWhichToReportCGI& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case MeasObjectUTRA__cellForWhichToReportCGI_PR_utra_FDD:
            result.AddMember("utra_FDD", obj.choice.utra_FDD, alloc);
            break;
        case MeasObjectUTRA__cellForWhichToReportCGI_PR_utra_TDD:
            result.AddMember("utra_TDD", obj.choice.utra_TDD, alloc);
            break;
        case MeasObjectUTRA__cellForWhichToReportCGI_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const CSG_AllowedReportingCells_r9& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    writeASequenceValue(result, "physCellIdRangeUTRA_FDDList_r9", obj.physCellIdRangeUTRA_FDDList_r9, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasObjectUTRA& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("carrierFreq", obj.carrierFreq, alloc);
    result.AddMember("offsetFreq", obj.offsetFreq, alloc);
    writeASequenceValue(result, "cellsToRemoveList", obj.cellsToRemoveList, alloc);
    if (obj.cellsToAddModList != nullptr) { // TODO: throw if nullptr, because is not an optional field
        result.AddMember("cellsToAddModList", serializeNonTrivialObject(*obj.cellsToAddModList, alloc), alloc);
    }
    if (obj.cellForWhichToReportCGI != nullptr) { // TODO: throw if nullptr, because is not an optional field
        result.AddMember("cellForWhichToReportCGI", serializeNonTrivialObject(*obj.cellForWhichToReportCGI, alloc), alloc);
    }
    writeNonTrivialValue(result, "csg_allowedReportingCells_v930",obj.csg_allowedReportingCells_v930, alloc);
    writeTrivialValue(result, "reducedMeasPerformance_r12", obj.reducedMeasPerformance_r12, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const CarrierFreqsGERAN& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("startingARFCN", obj.startingARFCN, alloc);
    result.AddMember("bandIndicator", obj.bandIndicator, alloc);
    result.AddMember("followingARFCNs", serializeNonTrivialObject(obj.followingARFCNs, alloc), alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const CarrierFreqsGERAN::CarrierFreqsGERAN__followingARFCNs& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case CarrierFreqsGERAN__followingARFCNs_PR_explicitListOfARFCNs:
            writeASequenceValue(result, "explicitListOfARFCNs", &obj.choice.explicitListOfARFCNs, alloc);
            break;
        case CarrierFreqsGERAN__followingARFCNs_PR_equallySpacedARFCNs:
            result.AddMember("equallySpacedARFCNs", serializeNonTrivialObject(obj.choice.equallySpacedARFCNs, alloc), alloc);
            break;
        case CarrierFreqsGERAN__followingARFCNs_PR_variableBitMapOfARFCNs:
            result.AddMember("variableBitMapOfARFCNs", serializeOctetString(obj.choice.variableBitMapOfARFCNs, alloc), alloc);
            break;
        case CarrierFreqsGERAN__followingARFCNs_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const CarrierFreqsGERAN::CarrierFreqsGERAN__followingARFCNs::CarrierFreqsGERAN__followingARFCNs_u::CarrierFreqsGERAN__followingARFCNs__equallySpacedARFCNs& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("arfcn_Spacing", obj.arfcn_Spacing, alloc);
    result.AddMember("numberOfFollowingARFCNs", obj.numberOfFollowingARFCNs, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const CarrierFreqCDMA2000& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("bandClass", obj.bandClass, alloc);
    result.AddMember("arfcn", obj.arfcn, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const CellsToAddModCDMA2000& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("cellIndex", obj.cellIndex, alloc);
    result.AddMember("physCellId", obj.physCellId, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasObjectCDMA2000& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("cdma2000_Type", obj.cdma2000_Type, alloc);
    result.AddMember("carrierFreq", serializeNonTrivialObject(obj.carrierFreq, alloc), alloc);
    writeTrivialValue(result, "searchWindowSize", obj.searchWindowSize, alloc);
    result.AddMember("offsetFreq", obj.offsetFreq, alloc);
    writeASequenceValue(result, "cellsToRemoveList", obj.cellsToRemoveList, alloc);
    writeASequenceValue(result, "cellsToAddModList", obj.cellsToAddModList, alloc);
    writeTrivialValue(result, "cellForWhichToReportCGI", obj.cellForWhichToReportCGI, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const WLAN_CarrierInfo_r13& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    writeTrivialValue(result, "operatingClass_r13", obj.operatingClass_r13, alloc);
    writeTrivialValue(result, "countryCode_r13", obj.countryCode_r13, alloc);
    writeASequenceValue(result, "channelNumbers_r13", obj.channelNumbers_r13, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasObjectWLAN_r13::MeasObjectWLAN_r13__carrierFreq_r13& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case MeasObjectWLAN_r13__carrierFreq_r13_PR_bandIndicatorListWLAN_r13:
            writeASequenceValue(result, "bandIndicatorListWLAN_r13", &obj.choice.bandIndicatorListWLAN_r13, alloc);
            break;
        case MeasObjectWLAN_r13__carrierFreq_r13_PR_carrierInfoListWLAN_r13:
            writeASequenceValue(result, "carrierInfoListWLAN_r13", &obj.choice.carrierInfoListWLAN_r13, alloc);
            break;
        case MeasObjectWLAN_r13__carrierFreq_r13_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const WLAN_Identifiers_r12& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    if (obj.ssid_r12 != nullptr) {
        result.AddMember("ssid_r12", serializeOctetString(*obj.ssid_r12, alloc), alloc);
    }
    if (obj.bssid_r12 != nullptr) {
        result.AddMember("bssid_r12", serializeOctetString(*obj.bssid_r12, alloc), alloc);
    }
    if (obj.hessid_r12 != nullptr) {
        result.AddMember("hessid_r12", serializeOctetString(*obj.hessid_r12, alloc), alloc);
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasObjectWLAN_r13& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    if (obj.carrierFreq_r13 != nullptr) { // TODO: throw if nullptr, because is not an optional field
        result.AddMember("carrierFreq_r13", serializeNonTrivialObject(*obj.carrierFreq_r13, alloc), alloc);
    }
    writeASequenceValue(result, "wlan_ToAddModList_r13", obj.wlan_ToAddModList_r13, alloc);
    writeASequenceValue(result, "wlan_ToRemoveList_r13", obj.wlan_ToRemoveList_r13, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const PhysCellIdGERAN& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("networkColourCode", serializeBitString(obj.networkColourCode, alloc), alloc);
    result.AddMember("baseStationColourCode", serializeBitString(obj.baseStationColourCode, alloc), alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasObjectGERAN& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("carrierFreqs", serializeNonTrivialObject(obj.carrierFreqs, alloc), alloc);
    result.AddMember("offsetFreq", obj.offsetFreq, alloc);
    if (obj.ncc_Permitted != nullptr) {
        result.AddMember("ncc_Permitted", serializeBitString(*obj.ncc_Permitted, alloc), alloc);
    } else {
        /* TODO:  DEFAULT 'FF'HH */
    }
    writeNonTrivialValue(result, "cellForWhichToReportCGI", obj.cellForWhichToReportCGI, alloc);
    return result;
}


static rapidjson::Value serializeNonTrivialObject(const MeasObjectToAddMod& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("measObjectId", obj.measObjectId, alloc);
    switch (obj.measObject.present) {
        case MeasObjectToAddMod__measObject_PR_measObjectEUTRA:
            result.AddMember("measObjectEUTRA", serializeNonTrivialObject(obj.measObject.choice.measObjectEUTRA, alloc), alloc);
            break;
        case MeasObjectToAddMod__measObject_PR_measObjectUTRA:
            result.AddMember("measObjectUTRA", serializeNonTrivialObject(obj.measObject.choice.measObjectUTRA, alloc), alloc);
            break;
        case MeasObjectToAddMod__measObject_PR_measObjectGERAN:
            result.AddMember("measObjectGERAN", serializeNonTrivialObject(obj.measObject.choice.measObjectGERAN, alloc), alloc);
            break;
        case MeasObjectToAddMod__measObject_PR_measObjectCDMA2000:
            result.AddMember("measObjectCDMA2000", serializeNonTrivialObject(obj.measObject.choice.measObjectCDMA2000, alloc), alloc);
            break;
        case MeasObjectToAddMod__measObject_PR_measObjectWLAN_r13:
            result.AddMember("measObjectWLAN_r13", serializeNonTrivialObject(obj.measObject.choice.measObjectWLAN_r13, alloc), alloc);
            break;
        case MeasObjectToAddMod__measObject_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}


// ------------------------------------------------------------------


static rapidjson::Value serializeNonTrivialObject(const ReportConfigEUTRA::ReportConfigEUTRA__triggerType::ReportConfigEUTRA__triggerType_u::ReportConfigEUTRA__triggerType__periodical& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("purpose", obj.purpose, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const ThresholdEUTRA& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case ThresholdEUTRA_PR_threshold_RSRP:
            result.AddMember("threshold_RSRP", obj.choice.threshold_RSRP, alloc);
            break;
        case ThresholdEUTRA_PR_threshold_RSRQ:
            result.AddMember("threshold_RSRQ", obj.choice.threshold_RSRQ, alloc);
            break;
        case ThresholdEUTRA_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const ReportConfigEUTRA::ReportConfigEUTRA__triggerType::ReportConfigEUTRA__triggerType_u::ReportConfigEUTRA__triggerType__event::ReportConfigEUTRA__triggerType__event__eventId& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    rapidjson::Value eventResult;
    eventResult.SetObject();
    switch (obj.present) {
        case ReportConfigEUTRA__triggerType__event__eventId_PR_eventA1:
            eventResult.AddMember("a1_Threshold", serializeNonTrivialObject(obj.choice.eventA1.a1_Threshold, alloc), alloc);
            result.AddMember("eventA1", eventResult, alloc);
            break;
        case ReportConfigEUTRA__triggerType__event__eventId_PR_eventA2:
            eventResult.AddMember("a2_Threshold", serializeNonTrivialObject(obj.choice.eventA2.a2_Threshold, alloc), alloc);
            result.AddMember("eventA2", eventResult, alloc);
            break;
        case ReportConfigEUTRA__triggerType__event__eventId_PR_eventA3:
            eventResult.AddMember("a3_Offset", obj.choice.eventA3.a3_Offset, alloc);
            eventResult.AddMember("reportOnLeave", obj.choice.eventA3.reportOnLeave, alloc);
            result.AddMember("eventA3", eventResult, alloc);
            break;
        case ReportConfigEUTRA__triggerType__event__eventId_PR_eventA4:
            eventResult.AddMember("a4_Threshold", serializeNonTrivialObject(obj.choice.eventA4.a4_Threshold, alloc), alloc);
            result.AddMember("eventA4", eventResult, alloc);
            break;
        case ReportConfigEUTRA__triggerType__event__eventId_PR_eventA5:
            eventResult.AddMember("a5_Threshold1", serializeNonTrivialObject(obj.choice.eventA5.a5_Threshold1, alloc), alloc);
            eventResult.AddMember("a5_Threshold2", serializeNonTrivialObject(obj.choice.eventA5.a5_Threshold2, alloc), alloc);
            result.AddMember("eventA5", eventResult, alloc);
            break;
        case ReportConfigEUTRA__triggerType__event__eventId_PR_eventA6_r10:
            eventResult.AddMember("a6_Offset", obj.choice.eventA6_r10.a6_Offset_r10, alloc);
            eventResult.AddMember("a6_ReportOnLeave_r10", obj.choice.eventA6_r10.a6_ReportOnLeave_r10, alloc);
            result.AddMember("eventA6_r10", eventResult, alloc);
            break;
        case ReportConfigEUTRA__triggerType__event__eventId_PR_eventC1_r12:
            eventResult.AddMember("c1_Threshold_r12", obj.choice.eventC1_r12.c1_Threshold_r12, alloc);
            eventResult.AddMember("c1_ReportOnLeave_r12", obj.choice.eventC1_r12.c1_ReportOnLeave_r12, alloc);
            result.AddMember("eventC1_r12", eventResult, alloc);
            break;
        case ReportConfigEUTRA__triggerType__event__eventId_PR_eventC2_r12:
            eventResult.AddMember("c2_RefCSI_RS_r12", obj.choice.eventC2_r12.c2_RefCSI_RS_r12, alloc);
            eventResult.AddMember("c2_Offset_r12", obj.choice.eventC2_r12.c2_Offset_r12, alloc);
            eventResult.AddMember("c2_ReportOnLeave_r12", obj.choice.eventC2_r12.c2_ReportOnLeave_r12, alloc);
            result.AddMember("eventC2_r12", eventResult, alloc);
            break;
        case ReportConfigEUTRA__triggerType__event__eventId_PR_eventV1_r14:
            eventResult.AddMember("v1_Threshold_r14", obj.choice.eventV1_r14.v1_Threshold_r14, alloc);
            result.AddMember("eventV1_r14", eventResult, alloc);
            break;
        case ReportConfigEUTRA__triggerType__event__eventId_PR_eventV2_r14:
            eventResult.AddMember("v2_Threshold_r14", obj.choice.eventV2_r14.v2_Threshold_r14, alloc);
            result.AddMember("eventV2_r14", eventResult, alloc);
            break;
        case ReportConfigEUTRA__triggerType__event__eventId_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const ReportConfigEUTRA::ReportConfigEUTRA__triggerType::ReportConfigEUTRA__triggerType_u::ReportConfigEUTRA__triggerType__event& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("eventId", serializeNonTrivialObject(obj.eventId, alloc), alloc);
    result.AddMember("hysteresis", obj.hysteresis, alloc);
    result.AddMember("timeToTrigger", obj.timeToTrigger, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const ReportConfigEUTRA::ReportConfigEUTRA__triggerType& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case ReportConfigEUTRA__triggerType_PR_event:
            result.AddMember("event", serializeNonTrivialObject(obj.choice.event, alloc), alloc);
            break;
        case ReportConfigEUTRA__triggerType_PR_periodical:
            result.AddMember("periodical", serializeNonTrivialObject(obj.choice.periodical, alloc), alloc);
            break;
        case ReportConfigEUTRA__triggerType_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const ReportConfigEUTRA::ReportConfigEUTRA__alternativeTimeToTrigger_r12& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case ReportConfigEUTRA__alternativeTimeToTrigger_r12_PR_release:
            result.AddMember("release", obj.choice.release, alloc);
            break;
        case ReportConfigEUTRA__alternativeTimeToTrigger_r12_PR_setup:
            result.AddMember("setup", obj.choice.setup, alloc);
            break;
        case ReportConfigEUTRA__alternativeTimeToTrigger_r12_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const RSRQ_RangeConfig_r12& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case RSRQ_RangeConfig_r12_PR_release:
            result.AddMember("release", obj.choice.release, alloc);
            break;
        case RSRQ_RangeConfig_r12_PR_setup:
            result.AddMember("setup", obj.choice.setup, alloc);
            break;
        case RSRQ_RangeConfig_r12_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const ReportConfigEUTRA::ReportConfigEUTRA__rs_sinr_Config_r13::ReportConfigEUTRA__rs_sinr_Config_r13_u::ReportConfigEUTRA__rs_sinr_Config_r13__setup& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    writeTrivialValue(result, "triggerQuantity_v1310", obj.triggerQuantity_v1310, alloc);
    writeTrivialValue(result, "aN_Threshold1_r13", obj.aN_Threshold1_r13, alloc);
    writeTrivialValue(result, "a5_Threshold2_r13", obj.a5_Threshold2_r13, alloc);
    result.AddMember("reportQuantity_v1310", obj.reportQuantity_v1310, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const ReportConfigEUTRA::ReportConfigEUTRA__rs_sinr_Config_r13& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case ReportConfigEUTRA__rs_sinr_Config_r13_PR_release:
            result.AddMember("release", obj.choice.release, alloc);
            break;
        case ReportConfigEUTRA__rs_sinr_Config_r13_PR_setup:
            result.AddMember("setup", serializeNonTrivialObject(obj.choice.setup, alloc), alloc);
            break;
        case ReportConfigEUTRA__rs_sinr_Config_r13_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasRSSI_ReportConfig_r13& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    writeTrivialValue(result, "channelOccupancyThreshold_r13", obj.channelOccupancyThreshold_r13, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const UL_DelayConfig_r13::UL_DelayConfig_r13_u::UL_DelayConfig_r13__setup& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("delayThreshold_r13", obj.delayThreshold_r13, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const UL_DelayConfig_r13& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case UL_DelayConfig_r13_PR_release:
            result.AddMember("release", obj.choice.release, alloc);
            break;
        case UL_DelayConfig_r13_PR_setup:
            result.AddMember("setup", serializeNonTrivialObject(obj.choice.setup, alloc), alloc);
            break;
        case UL_DelayConfig_r13_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const ReportConfigEUTRA& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("triggerType", serializeNonTrivialObject(obj.triggerType, alloc), alloc);
    result.AddMember("triggerQuantity", obj.triggerQuantity, alloc);
    result.AddMember("reportQuantity", obj.reportQuantity, alloc);
    result.AddMember("maxReportCells", obj.maxReportCells, alloc);
    result.AddMember("reportInterval", obj.reportInterval, alloc);
    result.AddMember("reportAmount", obj.reportAmount, alloc);
    writeTrivialValue(result, "si_RequestForHO_r9", obj.si_RequestForHO_r9, alloc);
    writeTrivialValue(result, "ue_RxTxTimeDiffPeriodical_r9", obj.ue_RxTxTimeDiffPeriodical_r9, alloc);
    writeTrivialValue(result, "includeLocationInfo_r10", obj.includeLocationInfo_r10, alloc);
    writeTrivialValue(result, "reportAddNeighMeas_r10", obj.reportAddNeighMeas_r10, alloc);
    writeNonTrivialValue(result, "alternativeTimeToTrigger_r12", obj.alternativeTimeToTrigger_r12, alloc);
    writeTrivialValue(result, "useT312_r12", obj.useT312_r12, alloc);
    writeTrivialValue(result, "usePSCell_r12", obj.usePSCell_r12, alloc);
    writeNonTrivialValue(result, "aN_Threshold1_v1250", obj.aN_Threshold1_v1250, alloc);
    writeNonTrivialValue(result, "a5_Threshold2_v1250", obj.a5_Threshold2_v1250, alloc);
    writeTrivialValue(result, "reportStrongestCSI_RSs_r12", obj.reportStrongestCSI_RSs_r12, alloc);
    writeTrivialValue(result, "reportCRS_Meas_r12", obj.reportCRS_Meas_r12, alloc);
    writeTrivialValue(result, "triggerQuantityCSI_RS_r12", obj.triggerQuantityCSI_RS_r12, alloc);
    writeTrivialValue(result, "reportSSTD_Meas_r13", obj.reportSSTD_Meas_r13, alloc);
    writeNonTrivialValue(result, "rs_sinr_Config_r13", obj.rs_sinr_Config_r13, alloc);
    writeTrivialValue(result, "useWhiteCellList_r13", obj.useWhiteCellList_r13, alloc);
    writeNonTrivialValue(result, "measRSSI_ReportConfig_r13", obj.measRSSI_ReportConfig_r13, alloc);
    writeTrivialValue(result, "includeMultiBandInfo_r13", obj.includeMultiBandInfo_r13, alloc);
    writeNonTrivialValue(result, "ul_DelayConfig_r13", obj.ul_DelayConfig_r13, alloc);
    writeTrivialValue(result, "ue_RxTxTimeDiffPeriodicalTDD_r13", obj.ue_RxTxTimeDiffPeriodicalTDD_r13, alloc);
    writeTrivialValue(result, "purpose_v1430", obj.purpose_v1430, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT::ReportConfigInterRAT__triggerType::ReportConfigInterRAT__triggerType_u::ReportConfigInterRAT__triggerType__periodical& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("purpose", obj.purpose, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const ThresholdUTRA& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case ThresholdUTRA_PR_utra_RSCP:
            result.AddMember("utra_RSCP", obj.choice.utra_RSCP, alloc);
            break;
        case ThresholdUTRA_PR_utra_EcN0:
            result.AddMember("utra_EcN0", obj.choice.utra_EcN0, alloc);
            break;
        case ThresholdUTRA_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT::ReportConfigInterRAT__triggerType::ReportConfigInterRAT__triggerType_u::ReportConfigInterRAT__triggerType__event::ReportConfigInterRAT__triggerType__event__eventId::ReportConfigInterRAT__triggerType__event__eventId_u::ReportConfigInterRAT__triggerType__event__eventId__eventB1::ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold_PR_b1_ThresholdUTRA:
            result.AddMember("b1_ThresholdUTRA", serializeNonTrivialObject(obj.choice.b1_ThresholdUTRA, alloc), alloc);
            break;
        case ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold_PR_b1_ThresholdGERAN:
            result.AddMember("b1_ThresholdGERAN", obj.choice.b1_ThresholdGERAN, alloc);
            break;
        case ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold_PR_b1_ThresholdCDMA2000:
            result.AddMember("b1_ThresholdCDMA2000", obj.choice.b1_ThresholdCDMA2000, alloc);
            break;
        case ReportConfigInterRAT__triggerType__event__eventId__eventB1__b1_Threshold_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT::ReportConfigInterRAT__triggerType::ReportConfigInterRAT__triggerType_u::ReportConfigInterRAT__triggerType__event::ReportConfigInterRAT__triggerType__event__eventId::ReportConfigInterRAT__triggerType__event__eventId_u::ReportConfigInterRAT__triggerType__event__eventId__eventB1& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("b1_Threshold", serializeNonTrivialObject(obj.b1_Threshold, alloc), alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT::ReportConfigInterRAT__triggerType::ReportConfigInterRAT__triggerType_u::ReportConfigInterRAT__triggerType__event::ReportConfigInterRAT__triggerType__event__eventId::ReportConfigInterRAT__triggerType__event__eventId_u::ReportConfigInterRAT__triggerType__event__eventId__eventB2::ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2_PR_b2_Threshold2UTRA:
            result.AddMember("b2_Threshold2UTRA", serializeNonTrivialObject(obj.choice.b2_Threshold2UTRA, alloc), alloc);
            break;
        case ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2_PR_b2_Threshold2GERAN:
            result.AddMember("b2_Threshold2GERAN", obj.choice.b2_Threshold2GERAN, alloc);
            break;
        case ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2_PR_b2_Threshold2CDMA2000:
            result.AddMember("b2_Threshold2CDMA2000", obj.choice.b2_Threshold2CDMA2000, alloc);
            break;
        case ReportConfigInterRAT__triggerType__event__eventId__eventB2__b2_Threshold2_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT::ReportConfigInterRAT__triggerType::ReportConfigInterRAT__triggerType_u::ReportConfigInterRAT__triggerType__event::ReportConfigInterRAT__triggerType__event__eventId::ReportConfigInterRAT__triggerType__event__eventId_u::ReportConfigInterRAT__triggerType__event__eventId__eventB2& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("b2_Threshold1", serializeNonTrivialObject(obj.b2_Threshold1, alloc), alloc);
    result.AddMember("b2_Threshold2", serializeNonTrivialObject(obj.b2_Threshold2, alloc), alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT::ReportConfigInterRAT__triggerType::ReportConfigInterRAT__triggerType_u::ReportConfigInterRAT__triggerType__event::ReportConfigInterRAT__triggerType__event__eventId::ReportConfigInterRAT__triggerType__event__eventId_u::ReportConfigInterRAT__triggerType__event__eventId__eventW1_r13& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("w1_Threshold_r13", obj.w1_Threshold_r13, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT::ReportConfigInterRAT__triggerType::ReportConfigInterRAT__triggerType_u::ReportConfigInterRAT__triggerType__event::ReportConfigInterRAT__triggerType__event__eventId::ReportConfigInterRAT__triggerType__event__eventId_u::ReportConfigInterRAT__triggerType__event__eventId__eventW2_r13& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("w2_Threshold1_r13", obj.w2_Threshold1_r13, alloc);
    result.AddMember("w2_Threshold2_r13", obj.w2_Threshold2_r13, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT::ReportConfigInterRAT__triggerType::ReportConfigInterRAT__triggerType_u::ReportConfigInterRAT__triggerType__event::ReportConfigInterRAT__triggerType__event__eventId::ReportConfigInterRAT__triggerType__event__eventId_u::ReportConfigInterRAT__triggerType__event__eventId__eventW3_r13& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("w3_Threshold_r13", obj.w3_Threshold_r13, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT::ReportConfigInterRAT__triggerType::ReportConfigInterRAT__triggerType_u::ReportConfigInterRAT__triggerType__event::ReportConfigInterRAT__triggerType__event__eventId& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case ReportConfigInterRAT__triggerType__event__eventId_PR_eventB1:
            result.AddMember("eventB1", serializeNonTrivialObject(obj.choice.eventB1, alloc), alloc);
            break;
        case ReportConfigInterRAT__triggerType__event__eventId_PR_eventB2:
            result.AddMember("eventB2", serializeNonTrivialObject(obj.choice.eventB2, alloc), alloc);
            break;
        case ReportConfigInterRAT__triggerType__event__eventId_PR_eventW1_r13:
            result.AddMember("eventW1_r13", serializeNonTrivialObject(obj.choice.eventW1_r13, alloc), alloc);
            break;
        case ReportConfigInterRAT__triggerType__event__eventId_PR_eventW2_r13:
            result.AddMember("eventW2_r13", serializeNonTrivialObject(obj.choice.eventW2_r13, alloc), alloc);
            break;
        case ReportConfigInterRAT__triggerType__event__eventId_PR_eventW3_r13:
            result.AddMember("eventW3_r13", serializeNonTrivialObject(obj.choice.eventW3_r13, alloc), alloc);
            break;
        case ReportConfigInterRAT__triggerType__event__eventId_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}


static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT::ReportConfigInterRAT__triggerType::ReportConfigInterRAT__triggerType_u::ReportConfigInterRAT__triggerType__event& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("eventId", serializeNonTrivialObject(obj.eventId, alloc), alloc);
    result.AddMember("hysteresis", obj.hysteresis, alloc);
    result.AddMember("timeToTrigger", obj.timeToTrigger, alloc);
    return result;
}



static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT::ReportConfigInterRAT__triggerType& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case ReportConfigInterRAT__triggerType_PR_event:
            result.AddMember("event", serializeNonTrivialObject(obj.choice.event, alloc), alloc);
            break;
        case ReportConfigInterRAT__triggerType_PR_periodical:
            result.AddMember("periodical", serializeNonTrivialObject(obj.choice.periodical, alloc), alloc);
            break;
        case ReportConfigInterRAT__triggerType_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT::ReportConfigInterRAT__b2_Threshold1_v1250& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case ReportConfigInterRAT__b2_Threshold1_v1250_PR_release:
            result.AddMember("release", obj.choice.release, alloc);
            break;
        case ReportConfigInterRAT__b2_Threshold1_v1250_PR_setup:
            result.AddMember("setup", obj.choice.setup, alloc);
            break;
        case ReportConfigInterRAT__b2_Threshold1_v1250_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const ReportQuantityWLAN_r13& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    writeTrivialValue(result, "bandRequestWLAN_r13", obj.bandRequestWLAN_r13, alloc);
    writeTrivialValue(result, "carrierInfoRequestWLAN_r13", obj.carrierInfoRequestWLAN_r13, alloc);
    writeTrivialValue(result, "availableAdmissionCapacityRequestWLAN_r13", obj.availableAdmissionCapacityRequestWLAN_r13, alloc);
    writeTrivialValue(result, "backhaulDL_BandwidthRequestWLAN_r13", obj.backhaulDL_BandwidthRequestWLAN_r13, alloc);
    writeTrivialValue(result, "backhaulUL_BandwidthRequestWLAN_r13", obj.backhaulUL_BandwidthRequestWLAN_r13, alloc);
    writeTrivialValue(result, "channelUtilizationRequestWLAN_r13", obj.channelUtilizationRequestWLAN_r13, alloc);
    writeTrivialValue(result, "stationCountRequestWLAN_r13", obj.stationCountRequestWLAN_r13, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const ReportConfigInterRAT& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("triggerType", serializeNonTrivialObject(obj.triggerType, alloc), alloc);
    result.AddMember("maxReportCells", obj.maxReportCells, alloc);
    result.AddMember("reportInterval", obj.reportInterval, alloc);
    result.AddMember("reportAmount", obj.reportAmount, alloc);
    writeTrivialValue(result, "si_RequestForHO_r9", obj.si_RequestForHO_r9, alloc);
    writeTrivialValue(result, "reportQuantityUTRA_FDD_r10", obj.reportQuantityUTRA_FDD_r10, alloc);
    writeTrivialValue(result, "includeLocationInfo_r11", obj.includeLocationInfo_r11, alloc);
    writeNonTrivialValue(result, "b2_Threshold1_v1250", obj.b2_Threshold1_v1250, alloc);
    writeNonTrivialValue(result, "reportAnyWLAN_r14", obj.reportQuantityWLAN_r13, alloc);
    writeTrivialValue(result, "reportAnyWLAN_r14", obj.reportAnyWLAN_r14, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const ReportConfigToAddMod::ReportConfigToAddMod__reportConfig& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case ReportConfigToAddMod__reportConfig_PR_reportConfigEUTRA:
            result.AddMember("reportConfigEUTRA", serializeNonTrivialObject(obj.choice.reportConfigEUTRA, alloc), alloc);
            break;
        case ReportConfigToAddMod__reportConfig_PR_reportConfigInterRAT:
            result.AddMember("reportConfigInterRAT", serializeNonTrivialObject(obj.choice.reportConfigInterRAT, alloc), alloc);
            break;
        case ReportConfigToAddMod__reportConfig_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const ReportConfigToAddMod& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("reportConfigId", obj.reportConfigId, alloc);
    result.AddMember("reportConfig", serializeNonTrivialObject(obj.reportConfig, alloc), alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasIdToAddMod& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("measId", obj.measId, alloc);
    result.AddMember("measObjectId", obj.measObjectId, alloc);
    result.AddMember("reportConfigId", obj.reportConfigId, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const QuantityConfigEUTRA& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("filterCoefficientRSRP", obj.filterCoefficientRSRP == nullptr ? 4 : *obj.filterCoefficientRSRP, alloc);
    result.AddMember("filterCoefficientRSRQ", obj.filterCoefficientRSRQ == nullptr ? 4 : *obj.filterCoefficientRSRQ, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const QuantityConfigUTRA& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("measQuantityUTRA_FDD", obj.measQuantityUTRA_FDD, alloc);
    result.AddMember("measQuantityUTRA_TDD", obj.measQuantityUTRA_TDD, alloc);
    result.AddMember("filterCoefficient", obj.filterCoefficient == nullptr ? 4 : *obj.filterCoefficient, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const QuantityConfigGERAN& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("measQuantityGERAN", obj.measQuantityGERAN, alloc);
    result.AddMember("filterCoefficient", obj.filterCoefficient == nullptr ? 2 : *obj.filterCoefficient, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const QuantityConfigUTRA_v1020& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("filterCoefficient2_FDD_r10", obj.filterCoefficient2_FDD_r10 == nullptr ? 4 : *obj.filterCoefficient2_FDD_r10, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const QuantityConfigEUTRA_v1250& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    writeTrivialValue(result, "filterCoefficientCSI_RSRP_r12", obj.filterCoefficientCSI_RSRP_r12, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const QuantityConfigEUTRA_v1310& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("filterCoefficientRS_SINR_r13", obj.filterCoefficientRS_SINR_r13 == nullptr ? 4 : *obj.filterCoefficientRS_SINR_r13, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const QuantityConfigWLAN_r13& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("measQuantityWLAN_r13", obj.measQuantityWLAN_r13, alloc);
    result.AddMember("filterCoefficient_r13", obj.filterCoefficient_r13 == nullptr ? 4 : *obj.filterCoefficient_r13, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const QuantityConfig& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    writeNonTrivialValue(result, "quantityConfigEUTRA", obj.quantityConfigEUTRA, alloc);
    writeNonTrivialValue(result, "quantityConfigUTRA", obj.quantityConfigUTRA, alloc);
    writeNonTrivialValue(result, "quantityConfigGERAN", obj.quantityConfigGERAN, alloc);
    writeNonTrivialValue(result, "quantityConfigUTRA_v1020", obj.quantityConfigUTRA_v1020, alloc);
    writeNonTrivialValue(result, "quantityConfigEUTRA_v1250", obj.quantityConfigEUTRA_v1250, alloc);
    writeNonTrivialValue(result, "quantityConfigEUTRA_v1310", obj.quantityConfigEUTRA_v1310, alloc);
    writeNonTrivialValue(result, "quantityConfigWLAN_r13", obj.quantityConfigWLAN_r13, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasGapConfig::MeasGapConfig_u::MeasGapConfig__setup::MeasGapConfig__setup__gapOffset& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
        switch (obj.present) {
        case MeasGapConfig__setup__gapOffset_PR_gp0:
            result.AddMember("gp0", obj.choice.gp0, alloc);
            break;
        case MeasGapConfig__setup__gapOffset_PR_gp1:
            result.AddMember("gp1", obj.choice.gp1, alloc);
            break;
        case MeasGapConfig__setup__gapOffset_PR_gp2_r14:
            result.AddMember("gp2_r14", obj.choice.gp2_r14, alloc);
            break;
        case MeasGapConfig__setup__gapOffset_PR_gp3_r14:
            result.AddMember("gp3_r14", obj.choice.gp3_r14, alloc);
            break;
        case MeasGapConfig__setup__gapOffset_PR_gp_ncsg0_r14:
            result.AddMember("gp_ncsg0_r14", obj.choice.gp_ncsg0_r14, alloc);
            break;
        case MeasGapConfig__setup__gapOffset_PR_gp_ncsg1_r14:
            result.AddMember("gp_ncsg1_r14", obj.choice.gp_ncsg1_r14, alloc);
            break;
        case MeasGapConfig__setup__gapOffset_PR_gp_ncsg2_r14:
            result.AddMember("gp_ncsg2_r14", obj.choice.gp_ncsg2_r14, alloc);
            break;
        case MeasGapConfig__setup__gapOffset_PR_gp_ncsg3_r14:
            result.AddMember("gp_ncsg3_r14", obj.choice.gp_ncsg3_r14, alloc);
            break;
        case MeasGapConfig__setup__gapOffset_PR_gp_nonUniform1_r14:
            result.AddMember("gp_nonUniform1_r14", obj.choice.gp_nonUniform1_r14, alloc);
            break;
        case MeasGapConfig__setup__gapOffset_PR_gp_nonUniform2_r14:
            result.AddMember("gp_nonUniform2_r14", obj.choice.gp_nonUniform2_r14, alloc);
            break;
        case MeasGapConfig__setup__gapOffset_PR_gp_nonUniform3_r14:
            result.AddMember("gp_nonUniform3_r14", obj.choice.gp_nonUniform3_r14, alloc);
            break;
        case MeasGapConfig__setup__gapOffset_PR_gp_nonUniform4_r14:
            result.AddMember("gp_nonUniform4_r14", obj.choice.gp_nonUniform4_r14, alloc);
            break;
        case MeasGapConfig__setup__gapOffset_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasGapConfig::MeasGapConfig_u::MeasGapConfig__setup& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("gapOffset", serializeNonTrivialObject(obj.gapOffset, alloc), alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasGapConfig& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case MeasGapConfig_PR_release:
            result.AddMember("release", obj.choice.release, alloc);
            break;
        case MeasGapConfig_PR_setup:
            result.AddMember("setup", serializeNonTrivialObject(obj.choice.setup, alloc), alloc);
            break;
        case MeasGapConfig_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const PreRegistrationInfoHRPD& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("preRegistrationAllowed", obj.preRegistrationAllowed, alloc);
    writeTrivialValue(result, "preRegistrationZoneId", obj.preRegistrationZoneId, alloc);
    writeASequenceValue(result, "secondaryPreRegistrationZoneIdList", obj.secondaryPreRegistrationZoneIdList, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MobilityStateParameters& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("t_Evaluation", obj.t_Evaluation, alloc);
    result.AddMember("t_HystNormal", obj.t_HystNormal, alloc);
    result.AddMember("n_CellChangeMedium", obj.n_CellChangeMedium, alloc);
    result.AddMember("n_CellChangeHigh", obj.n_CellChangeHigh, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const SpeedStateScaleFactors& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("sf_Medium", obj.sf_Medium, alloc);
    result.AddMember("sf_High", obj.sf_High, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasConfig::MeasConfig__speedStatePars::MeasConfig__speedStatePars_u::MeasConfig__speedStatePars__setup& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("mobilityStateParameters", serializeNonTrivialObject(obj.mobilityStateParameters, alloc), alloc);
    result.AddMember("timeToTrigger_SF", serializeNonTrivialObject(obj.timeToTrigger_SF, alloc), alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasConfig::MeasConfig__speedStatePars& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case MeasConfig__speedStatePars_PR_release:
            result.AddMember("release", obj.choice.release, alloc);
            break;
        case MeasConfig__speedStatePars_PR_setup:
            result.AddMember("setup", serializeNonTrivialObject(obj.choice.setup, alloc), alloc);
            break;
        case MeasConfig__speedStatePars_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasObjectEUTRA_v9e0& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("carrierFreq_v9e0", obj.carrierFreq_v9e0, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasObjectToAddMod_v9e0& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    writeNonTrivialValue(result, "measObjectEUTRA_v9e0", obj.measObjectEUTRA_v9e0, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasConfig::MeasConfig__measScaleFactor_r12& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    switch (obj.present) {
        case MeasConfig__measScaleFactor_r12_PR_release:
            result.AddMember("release", obj.choice.release, alloc);
            break;
        case MeasConfig__measScaleFactor_r12_PR_setup:
            result.AddMember("setup", obj.choice.setup, alloc);
        case MeasConfig__measScaleFactor_r12_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasIdToAddModExt_r12& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    result.AddMember("measId_v1250", obj.measId_v1250, alloc);
    result.AddMember("measObjectId_r12", obj.measObjectId_r12, alloc);
    result.AddMember("reportConfigId_r12", obj.reportConfigId_r12, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasObjectToAddModExt_r13::MeasObjectToAddModExt_r13__measObject_r13& obj, auto& alloc) {
    rapidjson::Value result;
    switch (obj.present) {
        case MeasObjectToAddModExt_r13__measObject_r13_PR_measObjectEUTRA_r13:
            result.AddMember("measObjectEUTRA_r13", serializeNonTrivialObject(obj.choice.measObjectEUTRA_r13, alloc), alloc);
            break;
        case MeasObjectToAddModExt_r13__measObject_r13_PR_measObjectUTRA_r13:
            result.AddMember("measObjectUTRA_r13", serializeNonTrivialObject(obj.choice.measObjectUTRA_r13, alloc), alloc);
            break;
        case MeasObjectToAddModExt_r13__measObject_r13_PR_measObjectGERAN_r13:
            result.AddMember("measObjectGERAN_r13", serializeNonTrivialObject(obj.choice.measObjectGERAN_r13, alloc), alloc);
            break;
        case MeasObjectToAddModExt_r13__measObject_r13_PR_measObjectCDMA2000_r13:
            result.AddMember("measObjectCDMA2000_r13", serializeNonTrivialObject(obj.choice.measObjectCDMA2000_r13, alloc), alloc);
            break;
        case MeasObjectToAddModExt_r13__measObject_r13_PR_measObjectWLAN_v1320:
            result.AddMember("measObjectWLAN_v1320", serializeNonTrivialObject(obj.choice.measObjectWLAN_v1320, alloc), alloc);
            break;
        case MeasObjectToAddModExt_r13__measObject_r13_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasObjectToAddModExt_r13& obj, auto& alloc) {
    rapidjson::Value result;
    result.AddMember("measObjectId_r13", obj.measObjectId_r13, alloc);
    result.AddMember("measObject_r13", serializeNonTrivialObject(obj.measObject_r13, alloc), alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasIdToAddMod_v1310& obj, auto& alloc) {
    rapidjson::Value result;
    writeTrivialValue(result, "measObjectId_v1310", obj.measObjectId_v1310, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasGapConfigPerCC_r14& obj, auto& alloc) {
    rapidjson::Value result;
    result.AddMember("servCellId_r14", obj.servCellId_r14, alloc);
    result.AddMember("measGapConfigCC_r14", serializeNonTrivialObject(obj.measGapConfigCC_r14, alloc), alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasGapConfigPerCC_List_r14::MeasGapConfigPerCC_List_r14_u::MeasGapConfigPerCC_List_r14__setup& obj, auto& alloc) {
    rapidjson::Value result;
    writeASequenceValue(result, "measGapConfigToRemoveList_r14", obj.measGapConfigToRemoveList_r14, alloc);
    writeASequenceValue(result, "measGapConfigToAddModList_r14", obj.measGapConfigToAddModList_r14, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasGapConfigPerCC_List_r14& obj, auto& alloc) {
    rapidjson::Value result;
    switch (obj.present) {
        case MeasGapConfigPerCC_List_r14_PR_release:
            result.AddMember("release", obj.choice.release, alloc);
            break;
        case MeasGapConfigPerCC_List_r14_PR_setup:
            result.AddMember("setup", serializeNonTrivialObject(obj.choice.setup, alloc), alloc);
            break;
        case MeasGapConfigPerCC_List_r14_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasGapSharingConfig_r14::MeasGapSharingConfig_r14_u::MeasGapSharingConfig_r14__setup& obj, auto& alloc) {
    rapidjson::Value result;
    result.AddMember("measGapSharingScheme_r14", obj.measGapSharingScheme_r14, alloc);
    return result;
}


static rapidjson::Value serializeNonTrivialObject(const MeasGapSharingConfig_r14& obj, auto& alloc) {
    rapidjson::Value result;
    switch (obj.present) {
        case MeasGapSharingConfig_r14_PR_release:
            result.AddMember("release", obj.choice.release, alloc);
            break;
        case MeasGapSharingConfig_r14_PR_setup:
            result.AddMember("setup", serializeNonTrivialObject(obj.choice.setup, alloc), alloc);
            break;
        case MeasGapSharingConfig_r14_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const PhysCellIdRangeUTRA_FDD_r9& obj, auto& alloc) {
    rapidjson::Value result;
    result.AddMember("start_r9", obj.start_r9, alloc);
    writeTrivialValue(result, "range_r9", obj.range_r9, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasConfig& obj, auto& alloc) {
    rapidjson::Value result;
    result.SetObject();
    writeASequenceValue(result, "measObjectToRemoveList", obj.measObjectToRemoveList, alloc);
    writeASequenceValue(result, "measObjectToAddModList", obj.measObjectToAddModList, alloc);
    writeASequenceValue(result, "reportConfigToRemoveList", obj.reportConfigToRemoveList, alloc);
    writeASequenceValue(result, "reportConfigToAddModList", obj.reportConfigToAddModList, alloc);
    writeASequenceValue(result, "measIdToRemoveList", obj.measIdToRemoveList, alloc);
    writeASequenceValue(result, "measIdToAddModList", obj.measIdToAddModList, alloc);
    writeNonTrivialValue(result, "quantityConfig", obj.quantityConfig, alloc);
    writeNonTrivialValue(result, "measGapConfig", obj.measGapConfig, alloc);
    writeTrivialValue(result, "s_Measure", obj.s_Measure, alloc);
    writeNonTrivialValue(result, "preRegistrationInfoHRPD", obj.preRegistrationInfoHRPD, alloc);
    if (obj.speedStatePars != nullptr) { // TODO: throw if nullptr, because is not an optional field
        result.AddMember("speedStatePars", serializeNonTrivialObject(*obj.speedStatePars, alloc), alloc);
    }
    writeASequenceValue(result, "measObjectToAddModList_v9e0", obj.measObjectToAddModList_v9e0, alloc);
    writeTrivialValue(result, "allowInterruptions_r11", obj.allowInterruptions_r11, alloc);
    if (obj.measScaleFactor_r12 != nullptr) { // TODO: throw if nullptr, because is not an optional field
        result.AddMember("measScaleFactor_r12", serializeNonTrivialObject(*obj.measScaleFactor_r12, alloc), alloc);
    }
    writeASequenceValue(result, "measIdToRemoveListExt_r12", obj.measIdToRemoveListExt_r12, alloc);
    writeASequenceValue(result, "measIdToAddModListExt_r12", obj.measIdToAddModListExt_r12, alloc);
    writeTrivialValue(result, "measRSRQ_OnAllSymbols_r12", obj.measRSRQ_OnAllSymbols_r12, alloc);
    writeASequenceValue(result, "measObjectToRemoveListExt_r13", obj.measObjectToRemoveListExt_r13, alloc);
    writeASequenceValue(result, "measObjectToAddModListExt_r13", obj.measObjectToAddModListExt_r13, alloc);
    writeASequenceValue(result, "measIdToAddModList_v1310", obj.measIdToAddModList_v1310, alloc);
    writeASequenceValue(result, "measIdToAddModListExt_v1310", obj.measIdToAddModListExt_v1310, alloc);
    writeNonTrivialValue(result, "measGapConfigPerCC_List_r14", obj.measGapConfigPerCC_List_r14, alloc);
    writeNonTrivialValue(result, "measGapSharingConfig_r14", obj.measGapSharingConfig_r14, alloc);
    return result;
}


void UeBlindRequestWrapper::serialize(rapidjson::Document& config) const {
    auto& allocator = config.GetAllocator();
    config.SetObject();
    config.AddMember("target_cell_id", target_cell_id, allocator);
    if (measConfig != nullptr) { // TODO: throw if nullptr, because is not an optional field
        config.AddMember("measConfig", serializeNonTrivialObject(*measConfig, allocator), allocator);
    }
}


void UeBlindRequestWrapper::deserialize(const rapidjson::Document &) {
 // TODO
}
