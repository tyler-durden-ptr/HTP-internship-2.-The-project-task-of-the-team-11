/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_PhysicalConfigDedicatedSCell_r10_H_
#define	_PhysicalConfigDedicatedSCell_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include <NULL.h>
#include <constr_CHOICE.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PhysicalConfigDedicatedSCell_r10__pucch_Cell_r13 {
	PhysicalConfigDedicatedSCell_r10__pucch_Cell_r13_true	= 0
} e_PhysicalConfigDedicatedSCell_r10__pucch_Cell_r13;
typedef enum PhysicalConfigDedicatedSCell_r10__pucch_SCell_PR {
	PhysicalConfigDedicatedSCell_r10__pucch_SCell_PR_NOTHING,	/* No components present */
	PhysicalConfigDedicatedSCell_r10__pucch_SCell_PR_release,
	PhysicalConfigDedicatedSCell_r10__pucch_SCell_PR_setup
} PhysicalConfigDedicatedSCell_r10__pucch_SCell_PR;
typedef enum PhysicalConfigDedicatedSCell_r10__must_Config_r14_PR {
	PhysicalConfigDedicatedSCell_r10__must_Config_r14_PR_NOTHING,	/* No components present */
	PhysicalConfigDedicatedSCell_r10__must_Config_r14_PR_release,
	PhysicalConfigDedicatedSCell_r10__must_Config_r14_PR_setup
} PhysicalConfigDedicatedSCell_r10__must_Config_r14_PR;
typedef enum PhysicalConfigDedicatedSCell_r10__must_Config_r14__setup__k_max_r14 {
	PhysicalConfigDedicatedSCell_r10__must_Config_r14__setup__k_max_r14_l1	= 0,
	PhysicalConfigDedicatedSCell_r10__must_Config_r14__setup__k_max_r14_l3	= 1
} e_PhysicalConfigDedicatedSCell_r10__must_Config_r14__setup__k_max_r14;
typedef enum PhysicalConfigDedicatedSCell_r10__must_Config_r14__setup__p_a_must_r14 {
	PhysicalConfigDedicatedSCell_r10__must_Config_r14__setup__p_a_must_r14_dB_6	= 0,
	PhysicalConfigDedicatedSCell_r10__must_Config_r14__setup__p_a_must_r14_dB_4dot77	= 1,
	PhysicalConfigDedicatedSCell_r10__must_Config_r14__setup__p_a_must_r14_dB_3	= 2,
	PhysicalConfigDedicatedSCell_r10__must_Config_r14__setup__p_a_must_r14_dB_1dot77	= 3,
	PhysicalConfigDedicatedSCell_r10__must_Config_r14__setup__p_a_must_r14_dB0	= 4,
	PhysicalConfigDedicatedSCell_r10__must_Config_r14__setup__p_a_must_r14_dB1	= 5,
	PhysicalConfigDedicatedSCell_r10__must_Config_r14__setup__p_a_must_r14_dB2	= 6,
	PhysicalConfigDedicatedSCell_r10__must_Config_r14__setup__p_a_must_r14_dB3	= 7
} e_PhysicalConfigDedicatedSCell_r10__must_Config_r14__setup__p_a_must_r14;

/* Forward declarations */
struct CSI_RS_ConfigNZPToReleaseList_r11;
struct CSI_RS_ConfigNZPToAddModList_r11;
struct CSI_RS_ConfigZPToReleaseList_r11;
struct CSI_RS_ConfigZPToAddModList_r11;
struct EPDCCH_Config_r11;
struct PDSCH_ConfigDedicated_v1130;
struct CQI_ReportConfig_v1130;
struct PUSCH_ConfigDedicated_v1130;
struct UplinkPowerControlDedicated_v1130;
struct AntennaInfoDedicated_v1250;
struct EIMTA_MainConfigServCell_r12;
struct CQI_ReportConfig_v1250;
struct UplinkPowerControlDedicated_v1250;
struct CSI_RS_Config_v1250;
struct PDSCH_ConfigDedicated_v1280;
struct CrossCarrierSchedulingConfig_r13;
struct PDCCH_ConfigSCell_r13;
struct CQI_ReportConfig_v1310;
struct PDSCH_ConfigDedicated_v1310;
struct SoundingRS_UL_ConfigDedicated_v1310;
struct SoundingRS_UL_ConfigDedicatedUpPTsExt_r13;
struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310;
struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13;
struct CSI_RS_Config_v1310;
struct LAA_SCellConfiguration_r13;
struct CSI_RS_ConfigNZPToAddModListExt_r13;
struct CSI_RS_ConfigNZPToReleaseListExt_r13;
struct CQI_ReportConfig_v1320;
struct LAA_SCellConfiguration_v1430;
struct SRS_TPC_PDCCH_Config_r14;
struct UplinkPUSCH_LessPowerControlDedicated_v1430;
struct PUSCH_ConfigDedicatedSCell_v1430;
struct CSI_RS_Config_v1430;
struct CSI_RS_ConfigZP_ApList_r14;
struct CQI_ReportConfig_v1430;
struct PDSCH_ConfigDedicatedSCell_v1430;
struct AntennaInfoDedicated_r10;
struct CrossCarrierSchedulingConfig_r10;
struct CSI_RS_Config_r10;
struct PDSCH_ConfigDedicated;
struct AntennaInfoUL_r10;
struct PUSCH_ConfigDedicatedSCell_r10;
struct UplinkPowerControlDedicatedSCell_r10;
struct CQI_ReportConfigSCell_r10;
struct SoundingRS_UL_ConfigDedicated;
struct SoundingRS_UL_ConfigDedicated_v1020;
struct SoundingRS_UL_ConfigDedicatedAperiodic_r10;
struct PUCCH_ConfigDedicated_r13;
struct SchedulingRequestConfigSCell_r13;
struct TPC_PDCCH_ConfigSCell_r13;
struct PUSCH_ConfigDedicated_r13;
struct UplinkPowerControlDedicatedSCell_v1310;
struct SoundingRS_AperiodicSet_r14;
struct SoundingRS_AperiodicSetUpPTsExt_r14;

/* PhysicalConfigDedicatedSCell-r10 */
typedef struct PhysicalConfigDedicatedSCell_r10 {
	struct PhysicalConfigDedicatedSCell_r10__nonUL_Configuration_r10 {
		struct AntennaInfoDedicated_r10	*antennaInfo_r10	/* OPTIONAL */;
		struct CrossCarrierSchedulingConfig_r10	*crossCarrierSchedulingConfig_r10	/* OPTIONAL */;
		struct CSI_RS_Config_r10	*csi_RS_Config_r10	/* OPTIONAL */;
		struct PDSCH_ConfigDedicated	*pdsch_ConfigDedicated_r10	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonUL_Configuration_r10;
	struct PhysicalConfigDedicatedSCell_r10__ul_Configuration_r10 {
		struct AntennaInfoUL_r10	*antennaInfoUL_r10	/* OPTIONAL */;
		struct PUSCH_ConfigDedicatedSCell_r10	*pusch_ConfigDedicatedSCell_r10	/* OPTIONAL */;
		struct UplinkPowerControlDedicatedSCell_r10	*uplinkPowerControlDedicatedSCell_r10	/* OPTIONAL */;
		struct CQI_ReportConfigSCell_r10	*cqi_ReportConfigSCell_r10	/* OPTIONAL */;
		struct SoundingRS_UL_ConfigDedicated	*soundingRS_UL_ConfigDedicated_r10	/* OPTIONAL */;
		struct SoundingRS_UL_ConfigDedicated_v1020	*soundingRS_UL_ConfigDedicated_v1020	/* OPTIONAL */;
		struct SoundingRS_UL_ConfigDedicatedAperiodic_r10	*soundingRS_UL_ConfigDedicatedAperiodic_r10	/* OPTIONAL */;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ul_Configuration_r10;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct CSI_RS_ConfigNZPToReleaseList_r11	*csi_RS_ConfigNZPToReleaseList_r11	/* OPTIONAL */;
	struct CSI_RS_ConfigNZPToAddModList_r11	*csi_RS_ConfigNZPToAddModList_r11	/* OPTIONAL */;
	struct CSI_RS_ConfigZPToReleaseList_r11	*csi_RS_ConfigZPToReleaseList_r11	/* OPTIONAL */;
	struct CSI_RS_ConfigZPToAddModList_r11	*csi_RS_ConfigZPToAddModList_r11	/* OPTIONAL */;
	struct EPDCCH_Config_r11	*epdcch_Config_r11	/* OPTIONAL */;
	struct PDSCH_ConfigDedicated_v1130	*pdsch_ConfigDedicated_v1130	/* OPTIONAL */;
	struct CQI_ReportConfig_v1130	*cqi_ReportConfig_v1130	/* OPTIONAL */;
	struct PUSCH_ConfigDedicated_v1130	*pusch_ConfigDedicated_v1130	/* OPTIONAL */;
	struct UplinkPowerControlDedicated_v1130	*uplinkPowerControlDedicatedSCell_v1130	/* OPTIONAL */;
	struct AntennaInfoDedicated_v1250	*antennaInfo_v1250	/* OPTIONAL */;
	struct EIMTA_MainConfigServCell_r12	*eimta_MainConfigSCell_r12	/* OPTIONAL */;
	struct CQI_ReportConfig_v1250	*cqi_ReportConfigSCell_v1250	/* OPTIONAL */;
	struct UplinkPowerControlDedicated_v1250	*uplinkPowerControlDedicatedSCell_v1250	/* OPTIONAL */;
	struct CSI_RS_Config_v1250	*csi_RS_Config_v1250	/* OPTIONAL */;
	struct PDSCH_ConfigDedicated_v1280	*pdsch_ConfigDedicated_v1280	/* OPTIONAL */;
	long	*pucch_Cell_r13	/* OPTIONAL */;
	struct PhysicalConfigDedicatedSCell_r10__pucch_SCell {
		PhysicalConfigDedicatedSCell_r10__pucch_SCell_PR present;
		union PhysicalConfigDedicatedSCell_r10__pucch_SCell_u {
			NULL_t	 release;
			struct PhysicalConfigDedicatedSCell_r10__pucch_SCell__setup {
				struct PUCCH_ConfigDedicated_r13	*pucch_ConfigDedicated_r13	/* OPTIONAL */;
				struct SchedulingRequestConfigSCell_r13	*schedulingRequestConfig_r13	/* OPTIONAL */;
				struct TPC_PDCCH_ConfigSCell_r13	*tpc_PDCCH_ConfigPUCCH_SCell_r13	/* OPTIONAL */;
				struct PUSCH_ConfigDedicated_r13	*pusch_ConfigDedicated_r13	/* OPTIONAL */;
				struct UplinkPowerControlDedicatedSCell_v1310	*uplinkPowerControlDedicated_r13	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pucch_SCell;
	struct CrossCarrierSchedulingConfig_r13	*crossCarrierSchedulingConfig_r13	/* OPTIONAL */;
	struct PDCCH_ConfigSCell_r13	*pdcch_ConfigSCell_r13	/* OPTIONAL */;
	struct CQI_ReportConfig_v1310	*cqi_ReportConfig_v1310	/* OPTIONAL */;
	struct PDSCH_ConfigDedicated_v1310	*pdsch_ConfigDedicated_v1310	/* OPTIONAL */;
	struct SoundingRS_UL_ConfigDedicated_v1310	*soundingRS_UL_ConfigDedicated_v1310	/* OPTIONAL */;
	struct SoundingRS_UL_ConfigDedicatedUpPTsExt_r13	*soundingRS_UL_ConfigDedicatedUpPTsExt_r13	/* OPTIONAL */;
	struct SoundingRS_UL_ConfigDedicatedAperiodic_v1310	*soundingRS_UL_ConfigDedicatedAperiodic_v1310	/* OPTIONAL */;
	struct SoundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13	*soundingRS_UL_ConfigDedicatedAperiodicUpPTsExt_r13	/* OPTIONAL */;
	struct CSI_RS_Config_v1310	*csi_RS_Config_v1310	/* OPTIONAL */;
	struct LAA_SCellConfiguration_r13	*laa_SCellConfiguration_r13	/* OPTIONAL */;
	struct CSI_RS_ConfigNZPToAddModListExt_r13	*csi_RS_ConfigNZPToAddModListExt_r13	/* OPTIONAL */;
	struct CSI_RS_ConfigNZPToReleaseListExt_r13	*csi_RS_ConfigNZPToReleaseListExt_r13	/* OPTIONAL */;
	struct CQI_ReportConfig_v1320	*cqi_ReportConfig_v1320	/* OPTIONAL */;
	struct LAA_SCellConfiguration_v1430	*laa_SCellConfiguration_v1430	/* OPTIONAL */;
	struct SRS_TPC_PDCCH_Config_r14	*typeB_SRS_TPC_PDCCH_Config_r14	/* OPTIONAL */;
	struct UplinkPUSCH_LessPowerControlDedicated_v1430	*uplinkPUSCH_LessPowerControlDedicated_v1430	/* OPTIONAL */;
	struct PhysicalConfigDedicatedSCell_r10__soundingRS_UL_PeriodicConfigDedicatedList_r14 {
		A_SEQUENCE_OF(struct SoundingRS_UL_ConfigDedicated) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *soundingRS_UL_PeriodicConfigDedicatedList_r14;
	struct PhysicalConfigDedicatedSCell_r10__soundingRS_UL_PeriodicConfigDedicatedUpPTsExtList_r14 {
		A_SEQUENCE_OF(struct SoundingRS_UL_ConfigDedicatedUpPTsExt_r13) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *soundingRS_UL_PeriodicConfigDedicatedUpPTsExtList_r14;
	struct PhysicalConfigDedicatedSCell_r10__soundingRS_UL_AperiodicConfigDedicatedList_r14 {
		A_SEQUENCE_OF(struct SoundingRS_AperiodicSet_r14) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *soundingRS_UL_AperiodicConfigDedicatedList_r14;
	struct PhysicalConfigDedicatedSCell_r10__soundingRS_UL_ConfigDedicatedApUpPTsExtList_r14 {
		A_SEQUENCE_OF(struct SoundingRS_AperiodicSetUpPTsExt_r14) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *soundingRS_UL_ConfigDedicatedApUpPTsExtList_r14;
	struct PhysicalConfigDedicatedSCell_r10__must_Config_r14 {
		PhysicalConfigDedicatedSCell_r10__must_Config_r14_PR present;
		union PhysicalConfigDedicatedSCell_r10__must_Config_r14_u {
			NULL_t	 release;
			struct PhysicalConfigDedicatedSCell_r10__must_Config_r14__setup {
				long	 k_max_r14;
				long	*p_a_must_r14	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *must_Config_r14;
	struct PUSCH_ConfigDedicatedSCell_v1430	*pusch_ConfigDedicated_v1430	/* OPTIONAL */;
	struct CSI_RS_Config_v1430	*csi_RS_Config_v1430	/* OPTIONAL */;
	struct CSI_RS_ConfigZP_ApList_r14	*csi_RS_ConfigZP_ApList_r14	/* OPTIONAL */;
	struct CQI_ReportConfig_v1430	*cqi_ReportConfig_v1430	/* OPTIONAL */;
	BOOLEAN_t	*semiOpenLoop_r14	/* OPTIONAL */;
	struct PDSCH_ConfigDedicatedSCell_v1430	*pdsch_ConfigDedicatedSCell_v1430	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysicalConfigDedicatedSCell_r10_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_pucch_Cell_r13_31;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_k_max_r14_68;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_p_a_must_r14_71;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalConfigDedicatedSCell_r10;
extern asn_SEQUENCE_specifics_t asn_SPC_PhysicalConfigDedicatedSCell_r10_specs_1;
extern asn_TYPE_member_t asn_MBR_PhysicalConfigDedicatedSCell_r10_1[46];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CSI-RS-ConfigNZPToReleaseList-r11.h"
#include "CSI-RS-ConfigNZPToAddModList-r11.h"
#include "CSI-RS-ConfigZPToReleaseList-r11.h"
#include "CSI-RS-ConfigZPToAddModList-r11.h"
#include "EPDCCH-Config-r11.h"
#include "PDSCH-ConfigDedicated-v1130.h"
#include "CQI-ReportConfig-v1130.h"
#include "PUSCH-ConfigDedicated-v1130.h"
#include "UplinkPowerControlDedicated-v1130.h"
#include "AntennaInfoDedicated-v1250.h"
#include "EIMTA-MainConfigServCell-r12.h"
#include "CQI-ReportConfig-v1250.h"
#include "UplinkPowerControlDedicated-v1250.h"
#include "CSI-RS-Config-v1250.h"
#include "PDSCH-ConfigDedicated-v1280.h"
#include "CrossCarrierSchedulingConfig-r13.h"
#include "PDCCH-ConfigSCell-r13.h"
#include "CQI-ReportConfig-v1310.h"
#include "PDSCH-ConfigDedicated-v1310.h"
#include "SoundingRS-UL-ConfigDedicated-v1310.h"
#include "SoundingRS-UL-ConfigDedicatedUpPTsExt-r13.h"
#include "SoundingRS-UL-ConfigDedicatedAperiodic-v1310.h"
#include "SoundingRS-UL-ConfigDedicatedAperiodicUpPTsExt-r13.h"
#include "CSI-RS-Config-v1310.h"
#include "LAA-SCellConfiguration-r13.h"
#include "CSI-RS-ConfigNZPToAddModListExt-r13.h"
#include "CSI-RS-ConfigNZPToReleaseListExt-r13.h"
#include "CQI-ReportConfig-v1320.h"
#include "LAA-SCellConfiguration-v1430.h"
#include "SRS-TPC-PDCCH-Config-r14.h"
#include "UplinkPUSCH-LessPowerControlDedicated-v1430.h"
#include "PUSCH-ConfigDedicatedSCell-v1430.h"
#include "CSI-RS-Config-v1430.h"
#include "CSI-RS-ConfigZP-ApList-r14.h"
#include "CQI-ReportConfig-v1430.h"
#include "PDSCH-ConfigDedicatedSCell-v1430.h"
#include "AntennaInfoDedicated-r10.h"
#include "CrossCarrierSchedulingConfig-r10.h"
#include "CSI-RS-Config-r10.h"
#include "PDSCH-ConfigDedicated.h"
#include "AntennaInfoUL-r10.h"
#include "PUSCH-ConfigDedicatedSCell-r10.h"
#include "UplinkPowerControlDedicatedSCell-r10.h"
#include "CQI-ReportConfigSCell-r10.h"
#include "SoundingRS-UL-ConfigDedicated.h"
#include "SoundingRS-UL-ConfigDedicated-v1020.h"
#include "SoundingRS-UL-ConfigDedicatedAperiodic-r10.h"
#include "PUCCH-ConfigDedicated-r13.h"
#include "SchedulingRequestConfigSCell-r13.h"
#include "TPC-PDCCH-ConfigSCell-r13.h"
#include "PUSCH-ConfigDedicated-r13.h"
#include "UplinkPowerControlDedicatedSCell-v1310.h"
#include "SoundingRS-AperiodicSet-r14.h"
#include "SoundingRS-AperiodicSetUpPTsExt-r14.h"

#endif	/* _PhysicalConfigDedicatedSCell_r10_H_ */
#include <asn_internal.h>
