//
// Created by michael_b on 5/19/2024.
//

#include <rapidjson/document.h>
#include <rapidjson/writer.h>
#include <rapidjson/stringbuffer.h>
#include <rapidjson/prettywriter.h>

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

[[noreturn]] static void throwEnumException() {
    throw std::domain_error("Unexpected enum value");
}

static rapidjson::Value serializeNonTrivialObject(const CellsToAddMod& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const PhysCellIdRange& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const BlackCellsToAddMod& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasSubframePatternConfigNeigh_r10& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasSubframePattern_r10& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasSubframePattern_r10::MeasSubframePattern_r10_u::MeasSubframePattern_r10__subframePatternTDD_r10& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const AltTTT_CellsToAddMod_r12& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasObjectEUTRA_t::MeasObjectEUTRA__t312_r12& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasDS_Config_r12& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasDS_Config_r12::MeasDS_Config_r12_u::MeasDS_Config_r12__setup& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasDS_Config_r12::MeasDS_Config_r12_u::MeasDS_Config_r12__setup::MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasDS_Config_r12::MeasDS_Config_r12_u::MeasDS_Config_r12__setup::MeasDS_Config_r12__setup__ds_OccasionDuration_r12& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasCSI_RS_Config_r12& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const RMTC_Config_r13& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const RMTC_Config_r13::RMTC_Config_r13_u::RMTC_Config_r13__setup& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const WhiteCellsToAddMod_r13& obj, auto& alloc);
static rapidjson::Value serializeNonTrivialObject(const MeasObjectEUTRA_t& value, auto& alloc);
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

template <typename T, typename Alloc, typename ValueType = decltype(**std::declval<T>().list.array)>
static rapidjson::Value serializeASequence(const T* seq, Alloc& alloc) {
        rapidjson::Value result;
        std::vector<ValueType> valueVector;
        std::copy_n(*seq->list.array,seq->list.count,
                    std::back_inserter(valueVector));
        result.AddMember("list", serializeVector(valueVector, alloc), alloc);
        return result;
}

static void writeASequenceValue(rapidjson::Value& result, std::string_view str, const auto* ptr, auto& alloc) {
    if (ptr != nullptr) {
        result.AddMember(str, serializeASequence(ptr, alloc), alloc);
    }
}

static void writeTrivialValue(rapidjson::Value& result, std::string_view str, const auto* ptr, auto& alloc) {
    if (ptr != nullptr) {
        result.AddMember(str, *ptr, alloc);
    }
}

static void writeNonTrivialValue(rapidjson::Value& result, std::string_view str, const auto* ptr, auto& alloc) {
    if (ptr != nullptr) {
        result.AddMember(str, serializeNonTrivialObject(*ptr, alloc), alloc);
    }
}

static rapidjson::Value serializeBitString(const BIT_STRING_t& bitString, auto& alloc) {
    rapidjson::Value value;
    value.AddMember("bits_unused", bitString.bits_unused, alloc);
    std::vector<uint8_t> vec;
    std::copy_n(bitString.buf, bitString.size, std::back_inserter(vec));
    value.AddMember("buf", serializeVector(vec, alloc), alloc);
    return value;
}

static rapidjson::Value serializeOctetString(const OCTET_STRING& octetString, auto& alloc) {
    std::vector<uint8_t> vec;
    std::copy_n(octetString.buf, octetString.size, std::back_inserter(vec));
    return serializeVector(vec, alloc);
}

static rapidjson::Value serializeNonTrivialObject(const CellsToAddMod& obj, auto& alloc) {
    rapidjson::Value value;
    value.AddMember("cellIndex", obj.cellIndex, alloc);
    value.AddMember("physCellId", obj.physCellId, alloc);
    value.AddMember("cellIndividualOffset", obj.cellIndividualOffset, alloc);
    return value;
}

static rapidjson::Value serializeNonTrivialObject(const PhysCellIdRange& obj, auto& alloc) {
    rapidjson::Value physCellInRangeValue;
    physCellInRangeValue.AddMember("start", obj.start, alloc);
    /* TODO: how to parse BlackCellsToAddMod_t.physCellIdRange.range pointer, because there is no size of array */
    physCellInRangeValue.AddMember("range", reinterpret_cast<uint64_t>(obj.range), alloc);
    return physCellInRangeValue;
}

static rapidjson::Value serializeNonTrivialObject(const BlackCellsToAddMod& obj, auto& alloc) {
    rapidjson::Value value;
    value.AddMember("cellIndex", obj.cellIndex, alloc);
    value.AddMember("physCellIdRange", serializeNonTrivialObject(obj.physCellIdRange, alloc), alloc);
    return value;
}

static rapidjson::Value serializeNonTrivialObject(const MeasSubframePatternConfigNeigh_r10& obj, auto& alloc) {
    rapidjson::Value value;
    switch (obj.present) {
        case MeasSubframePatternConfigNeigh_r10_PR_release:
            value.AddMember("release", rapidjson::Value(obj.choice.release), alloc);
            break;
        case MeasSubframePatternConfigNeigh_r10_PR_setup:
            value.AddMember("measSubframePatternNeigh_r10",
                            serializeNonTrivialObject(obj.choice.setup.measSubframePatternNeigh_r10, alloc), alloc);
            value.AddMember("measSubframeCellList_r10",
                            serializeASequence(obj.choice.setup.measSubframeCellList_r10, alloc), alloc);
            break;
        case MeasSubframePatternConfigNeigh_r10_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return value;
}

static rapidjson::Value serializeNonTrivialObject(const MeasSubframePattern_r10& obj, auto& alloc) {
    rapidjson::Value value;
    switch (obj.present) {
        case MeasSubframePattern_r10_PR_subframePatternFDD_r10:
            value.AddMember("subframePatternFDD_r10",
                            serializeBitString(obj.choice.subframePatternFDD_r10, alloc),
                            alloc);
            break;
        case MeasSubframePattern_r10_PR_subframePatternTDD_r10:
            value.AddMember("subframePatternTDD_r10",
                            serializeNonTrivialObject(obj.choice.subframePatternTDD_r10, alloc),
                            alloc);
            break;
        case MeasSubframePattern_r10_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return value;
}

static rapidjson::Value serializeNonTrivialObject(const MeasSubframePattern_r10::MeasSubframePattern_r10_u::MeasSubframePattern_r10__subframePatternTDD_r10& obj, auto& alloc) {
    rapidjson::Value value;
    switch (obj.present) {
        case MeasSubframePattern_r10__subframePatternTDD_r10_PR_subframeConfig1_5_r10:
            value.AddMember("subframeConfig1_5_r10",
                            serializeBitString(obj.choice.subframeConfig1_5_r10, alloc), alloc);
            break;
        case MeasSubframePattern_r10__subframePatternTDD_r10_PR_subframeConfig0_r10:
            value.AddMember("subframeConfig0_r10",
                            serializeBitString(obj.choice.subframeConfig0_r10, alloc), alloc);
            break;
        case MeasSubframePattern_r10__subframePatternTDD_r10_PR_subframeConfig6_r10:
            value.AddMember("subframeConfig6_r10",
                            serializeBitString(obj.choice.subframeConfig6_r10, alloc), alloc);
            break;
        case MeasSubframePattern_r10__subframePatternTDD_r10_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return value;
}

static rapidjson::Value serializeNonTrivialObject(const AltTTT_CellsToAddMod_r12& obj, auto& alloc) {
    rapidjson::Value value;
    value.AddMember("cellIndex_r12", obj.cellIndex_r12, alloc);
    value.AddMember("physCellIdRange_r12", serializeNonTrivialObject(obj.physCellIdRange_r12, alloc), alloc);
    return value;
}

static rapidjson::Value serializeNonTrivialObject(const MeasObjectEUTRA_t::MeasObjectEUTRA__t312_r12& obj, auto& alloc) {
    rapidjson::Value value;
    switch (obj.present) {
        case MeasObjectEUTRA__t312_r12_PR_release:
            value.AddMember("release", obj.choice.release, alloc);
            break;
        case MeasObjectEUTRA__t312_r12_PR_setup:
            value.AddMember("setup", obj.choice.setup, alloc);
            break;
        case MeasObjectEUTRA__t312_r12_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return value;
}

static rapidjson::Value serializeNonTrivialObject(const MeasDS_Config_r12& obj, auto& alloc) {
    rapidjson::Value value;
    switch (obj.present) {
        case MeasDS_Config_r12_PR_release:
            value.AddMember("release", obj.choice.release, alloc);
            break;
        case MeasDS_Config_r12_PR_setup:
            value.AddMember("setup", serializeNonTrivialObject(obj.choice.setup, alloc), alloc);
            break;
        case MeasDS_Config_r12_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return value;
}

static rapidjson::Value serializeNonTrivialObject(const MeasDS_Config_r12::MeasDS_Config_r12_u::MeasDS_Config_r12__setup& obj, auto& alloc) {
    rapidjson::Value value;
    value.AddMember("dmtc_PeriodOffset_r12",
                    serializeNonTrivialObject(obj.dmtc_PeriodOffset_r12, alloc), alloc);
    value.AddMember("ds_OccasionDuration_r12",
                    serializeNonTrivialObject(obj.ds_OccasionDuration_r12, alloc), alloc);
    writeASequenceValue(value, "measCSI_RS_ToRemoveList_r12", obj.measCSI_RS_ToRemoveList_r12, alloc);
    writeASequenceValue(value, "measCSI_RS_ToAddModList_r12", obj.measCSI_RS_ToAddModList_r12, alloc);
    return value;
}

static rapidjson::Value serializeNonTrivialObject(const MeasDS_Config_r12::MeasDS_Config_r12_u::MeasDS_Config_r12__setup::MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12& obj, auto& alloc) {
    rapidjson::Value value;
    switch (obj.present) {
        case MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12_PR_ms40_r12:
            value.AddMember("ms40_r12", obj.choice.ms40_r12, alloc);
            break;
        case MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12_PR_ms80_r12:
            value.AddMember("ms80_r12", obj.choice.ms80_r12, alloc);
            break;
        case MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12_PR_ms160_r12:
            value.AddMember("ms160_r12", obj.choice.ms160_r12, alloc);
            break;
        case MeasDS_Config_r12__setup__dmtc_PeriodOffset_r12_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return value;
}

static rapidjson::Value serializeNonTrivialObject(const MeasDS_Config_r12::MeasDS_Config_r12_u::MeasDS_Config_r12__setup::MeasDS_Config_r12__setup__ds_OccasionDuration_r12& obj, auto& alloc) {
    rapidjson::Value value;
    switch (obj.present) {
        case MeasDS_Config_r12__setup__ds_OccasionDuration_r12_PR_durationFDD_r12:
            value.AddMember("durationFDD_r12", obj.choice.durationFDD_r12, alloc);
            break;
        case MeasDS_Config_r12__setup__ds_OccasionDuration_r12_PR_durationTDD_r12:
            value.AddMember("durationTDD_r12", obj.choice.durationTDD_r12, alloc);
            break;
        case MeasDS_Config_r12__setup__ds_OccasionDuration_r12_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return value;
}

static rapidjson::Value serializeNonTrivialObject(const MeasCSI_RS_Config_r12& obj, auto& alloc) {
    rapidjson::Value value;
    value.AddMember("measCSI_RS_Id_r12", obj.measCSI_RS_Id_r12, alloc);
    value.AddMember("physCellId_r12", obj.physCellId_r12, alloc);
    value.AddMember("scramblingIdentity_r12", obj.scramblingIdentity_r12, alloc);
    value.AddMember("resourceConfig_r12", obj.resourceConfig_r12, alloc);
    value.AddMember("subframeOffset_r12", obj.subframeOffset_r12, alloc);
    value.AddMember("csi_RS_IndividualOffset_r12", obj.csi_RS_IndividualOffset_r12, alloc);
    return value;
}

static rapidjson::Value serializeNonTrivialObject(const RMTC_Config_r13& obj, auto& alloc) {
    rapidjson::Value value;
    switch (obj.present) {
        case RMTC_Config_r13_PR_release:
            value.AddMember("release", obj.choice.release, alloc);
            break;
        case RMTC_Config_r13_PR_setup:
            value.AddMember("setup", serializeNonTrivialObject(obj.choice.setup, alloc), alloc);
            break;
        case RMTC_Config_r13_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return value;
}

static rapidjson::Value serializeNonTrivialObject(const RMTC_Config_r13::RMTC_Config_r13_u::RMTC_Config_r13__setup& obj, auto& alloc) {
    rapidjson::Value value;
    value.AddMember("rmtc_Period_r13", obj.rmtc_Period_r13, alloc);
    if (obj.rmtc_SubframeOffset_r13 != nullptr) {
        value.AddMember("rmtc_SubframeOffset_r13", *obj.rmtc_SubframeOffset_r13, alloc);
    }
    value.AddMember("measDuration_r13", obj.measDuration_r13, alloc);
    return value;
}

static rapidjson::Value serializeNonTrivialObject(const WhiteCellsToAddMod_r13& obj, auto& alloc) {
    rapidjson::Value value;
    value.AddMember("cellIndex_r13", obj.cellIndex_r13, alloc);
    value.AddMember("physCellIdRange_r13", serializeNonTrivialObject(obj.physCellIdRange_r13, alloc), alloc);
    return value;
}

static rapidjson::Value serializeNonTrivialObject(const MeasObjectEUTRA_t& value, auto& alloc) {
    rapidjson::Value result;
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
    switch (obj.present) {
        case MeasObjectUTRA__cellsToAddModList_PR_cellsToAddModListUTRA_FDD:
            writeASequenceValue(result, "cellsToAddModListUTRA_FDD", obj.choice.cellsToAddModListUTRA_FDD, alloc);
            break;
        case MeasObjectUTRA__cellsToAddModList_PR_cellsToAddModListUTRA_TDD:
            writeASequenceValue(result, "cellsToAddModListUTRA_TDD", obj.choice.cellsToAddModListUTRA_TDD, alloc);
            break;
        case MeasObjectUTRA__cellsToAddModList_PR_NOTHING:
            break;
        default: throwEnumException();
    }
}

static rapidjson::Value serializeNonTrivialObject(const CellsToAddModUTRA_FDD& obj, auto& alloc) {
    rapidjson::Value result;
    result.AddMember("cellIndex", obj.cellIndex, alloc);
    result.AddMember("physCellId", obj.physCellId, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const CellsToAddModUTRA_TDD& obj, auto& alloc) {
    rapidjson::Value result;
    result.AddMember("cellIndex", obj.cellIndex, alloc);
    result.AddMember("physCellId", obj.physCellId, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasObjectUTRA::MeasObjectUTRA__cellForWhichToReportCGI& obj, auto& alloc) {
    rapidjson::Value result;
    switch (obj.present) {
        case MeasObjectUTRA__cellForWhichToReportCGI_PR_utra_FDD:
            writeASequenceValue(result, "utra_FDD", obj.choice.utra_FDD, alloc);
            break;
        case MeasObjectUTRA__cellForWhichToReportCGI_PR_utra_TDD:
            writeASequenceValue(result, "utra_TDD", obj.choice.utra_TDD, alloc);
            break;
        case MeasObjectUTRA__cellForWhichToReportCGI_PR_NOTHING:
            break;
        default: throwEnumException();
    }
}

static rapidjson::Value serializeNonTrivialObject(const CSG_AllowedReportingCells_r9& obj, auto& alloc) {
    rapidjson::Value result;
    writeASequenceValue(result, "physCellIdRangeUTRA_FDDList_r9", obj.physCellIdRangeUTRA_FDDList_r9, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasObjectUTRA& obj, auto& alloc) {
    rapidjson::Value result;
    result.AddMember("carrierFreq", obj.carrierFreq, alloc);
    result.AddMember("offsetFreq", obj.offsetFreq, alloc);
    writeASequenceValue(result, "cellsToRemoveList", obj.cellsToRemoveList, alloc);
    if (obj.cellsToAddModList != nullptr) { // TODO: throw if nullptr, because is not an optional field
        result.AddMember("cellsToAddModList", serializeNonTrivialObject(obj.cellsToAddModList, alloc), alloc);
    }
    if (obj.cellForWhichToReportCGI != nullptr) { // TODO: throw if nullptr, because is not an optional field
        result.AddMember("cellForWhichToReportCGI", serializeNonTrivialObject(obj.cellForWhichToReportCGI, alloc), alloc);
    }
    writeNonTrivialValue(result, "csg_allowedReportingCells_v930",
                         serializeNonTrivialObject(obj.csg_allowedReportingCells_v930, alloc), alloc);
    writeTrivialValue(result, "reducedMeasPerformance_r12", obj.reducedMeasPerformance_r12, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const CarrierFreqsGERAN& obj, auto& alloc) {
    rapidjson::Value result;
    result.AddMember("startingARFCN", obj.startingARFCN, alloc);
    result.AddMember("bandIndicator", obj.bandIndicator, alloc);
    result.AddMember("followingARFCNs", serializeNonTrivialObject(obj.followingARFCNs, alloc), alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const CarrierFreqsGERAN::CarrierFreqsGERAN__followingARFCNs& obj, auto& alloc) {
    rapidjson::Value result;
    switch (obj.present) {
        case CarrierFreqsGERAN__followingARFCNs_PR_explicitListOfARFCNs:
            writeASequenceValue(result, "explicitListOfARFCNs", obj.choice.explicitListOfARFCNs, alloc);
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
    result.AddMember("arfcn_Spacing", obj.arfcn_Spacing, alloc);
    result.AddMember("numberOfFollowingARFCNs", obj.numberOfFollowingARFCNs, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const CarrierFreqCDMA2000& obj, auto& alloc) {
    rapidjson::Value result;
    result.AddMember("bandClass", obj.bandClass, alloc);
    result.AddMember("arfcn", obj.arfcn, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const CellsToAddModCDMA2000& obj, auto& alloc) {
    rapidjson::Value result;
    result.AddMember("cellIndex", obj.cellIndex, alloc);
    result.AddMember("physCellId", obj.physCellId, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasObjectCDMA2000& obj, auto& alloc) {
    rapidjson::Value result;
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
    writeTrivialValue(result, "operatingClass_r13", obj.operatingClass_r13, alloc);
    writeTrivialValue(result, "countryCode_r13", obj.countryCode_r13, alloc);
    writeASequenceValue(result, "channelNumbers_r13", obj.channelNumbers_r13, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasObjectWLAN_r13::MeasObjectWLAN_r13__carrierFreq_r13& obj, auto& alloc) {
    rapidjson::Value result;
    switch (obj.present) {
        case MeasObjectWLAN_r13__carrierFreq_r13_PR_bandIndicatorListWLAN_r13:
            writeASequenceValue(result, "bandIndicatorListWLAN_r13", obj.choice.bandIndicatorListWLAN_r13, alloc);
            break;
        case MeasObjectWLAN_r13__carrierFreq_r13_PR_carrierInfoListWLAN_r13:
            result.AddMember("carrierInfoListWLAN_r13", serializeNonTrivialObject(obj.choice.carrierInfoListWLAN_r13, alloc), alloc);
            break;
        case MeasObjectWLAN_r13__carrierFreq_r13_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const WLAN_Identifiers_r12& obj, auto& alloc) {
    rapidjson::Value result;
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
    if (obj.carrierFreq_r13 != nullptr) { // TODO: throw if nullptr, because is not an optional field
        result.AddMember("carrierFreq_r13", serializeNonTrivialObject(*obj.carrierFreq_r13, alloc), alloc);
    }
    writeASequenceValue(result, "wlan_ToAddModList_r13", obj.wlan_ToAddModList_r13, alloc);
    writeASequenceValue(result, "wlan_ToRemoveList_r13", obj.wlan_ToRemoveList_r13, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasObjectToAddMod& obj, auto& alloc) {
    rapidjson::Value result;
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

// ------
static rapidjson::Value serializeNonTrivialObject(const ReportConfigToAddMod::ReportConfigToAddMod__reportConfig& obj, auto& alloc) {
    rapidjson::Value result;
    switch (obj.present) {
        case ReportConfigToAddMod__reportConfig_PR_reportConfigEUTRA:
            // TODO: ReportConfigEUTRA
        case ReportConfigToAddMod__reportConfig_PR_reportConfigInterRAT:
            // TODO: ReportConfigInterRAT
        case ReportConfigToAddMod__reportConfig_PR_NOTHING:
            break;
        default: throwEnumException();
    }
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const ReportConfigToAddMod& obj, auto& alloc) {
    rapidjson::Value result;
    result.AddMember("reportConfigId", obj.reportConfigId, alloc);
    result.AddMember("reportConfig", serializeNonTrivialObject(obj.reportConfig, alloc), alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const MeasIdToAddMod& obj, auto& alloc) {
    rapidjson::Value result;
    result.AddMember("measId", obj.measId, alloc);
    result.AddMember("measObjectId", obj.measObjectId, alloc);
    result.AddMember("reportConfigId", obj.reportConfigId, alloc);
    return result;
}

static rapidjson::Value serializeNonTrivialObject(const QuantityConfig& obj, auto& alloc) {
    // TODO
}

static rapidjson::Value serializeNonTrivialObject(const MeasGapConfig& obj, auto& alloc) {
    // TODO
}

static rapidjson::Value serializeNonTrivialObject(const PreRegistrationInfoHRPD& obj, auto& alloc) {
    // TODO
}

static rapidjson::Value serializeNonTrivialObject(const MeasConfig::MeasConfig__speedStatePars& obj, auto& alloc) {
    // TODO
}

static rapidjson::Value serializeNonTrivialObject(const MeasObjectToAddMod_v9e0& obj, auto& alloc) {
    // TODO
}

static rapidjson::Value serializeNonTrivialObject(const MeasConfig::MeasConfig__measScaleFactor_r12& obj, auto& alloc) {
    // TODO
}

static rapidjson::Value serializeNonTrivialObject(const MeasIdToAddModExt_r12& obj, auto& alloc) {
    // TODO
}

static rapidjson::Value serializeNonTrivialObject(const MeasObjectToAddModExt_r13& obj, auto& alloc) {
    // TODO
}

static rapidjson::Value serializeNonTrivialObject(const MeasIdToAddMod_v1310& obj, auto& alloc) {
    // TODO
}

static rapidjson::Value serializeNonTrivialObject(const MeasGapConfigPerCC_List_r14& obj, auto& alloc) {
    // TODO
}

static rapidjson::Value serializeNonTrivialObject(const MeasGapSharingConfig_r14& obj, auto& alloc) {
    // TODO
}

static rapidjson::Value serializeNonTrivialObject(const MeasConfig& obj, auto& alloc) {
    rapidjson::Value result;
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


void UeBlindRequestWrapper::serialize(rapidjson::Document& config) {
    auto& allocator = config.GetAllocator();
    config.SetObject();
    config.AddMember("target_cell_id", target_cell_id, allocator);
    if (measConfig != nullptr) { // TODO: throw if nullptr, because is not an optional field
        config.AddMember("measScaleFactor_r12", serializeNonTrivialObject(*measConfig, allocator), allocator);
    }

}


void UeBlindRequestWrapper::deserialize(const rapidjson::Document & config){

}
