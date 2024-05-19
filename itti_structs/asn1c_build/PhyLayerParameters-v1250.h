/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_PhyLayerParameters_v1250_H_
#define	_PhyLayerParameters_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PhyLayerParameters_v1250__e_HARQ_Pattern_FDD_r12 {
	PhyLayerParameters_v1250__e_HARQ_Pattern_FDD_r12_supported	= 0
} e_PhyLayerParameters_v1250__e_HARQ_Pattern_FDD_r12;
typedef enum PhyLayerParameters_v1250__enhanced_4TxCodebook_r12 {
	PhyLayerParameters_v1250__enhanced_4TxCodebook_r12_supported	= 0
} e_PhyLayerParameters_v1250__enhanced_4TxCodebook_r12;
typedef enum PhyLayerParameters_v1250__phy_TDD_ReConfig_TDD_PCell_r12 {
	PhyLayerParameters_v1250__phy_TDD_ReConfig_TDD_PCell_r12_supported	= 0
} e_PhyLayerParameters_v1250__phy_TDD_ReConfig_TDD_PCell_r12;
typedef enum PhyLayerParameters_v1250__phy_TDD_ReConfig_FDD_PCell_r12 {
	PhyLayerParameters_v1250__phy_TDD_ReConfig_FDD_PCell_r12_supported	= 0
} e_PhyLayerParameters_v1250__phy_TDD_ReConfig_FDD_PCell_r12;
typedef enum PhyLayerParameters_v1250__pusch_FeedbackMode_r12 {
	PhyLayerParameters_v1250__pusch_FeedbackMode_r12_supported	= 0
} e_PhyLayerParameters_v1250__pusch_FeedbackMode_r12;
typedef enum PhyLayerParameters_v1250__pusch_SRS_PowerControl_SubframeSet_r12 {
	PhyLayerParameters_v1250__pusch_SRS_PowerControl_SubframeSet_r12_supported	= 0
} e_PhyLayerParameters_v1250__pusch_SRS_PowerControl_SubframeSet_r12;
typedef enum PhyLayerParameters_v1250__csi_SubframeSet_r12 {
	PhyLayerParameters_v1250__csi_SubframeSet_r12_supported	= 0
} e_PhyLayerParameters_v1250__csi_SubframeSet_r12;
typedef enum PhyLayerParameters_v1250__noResourceRestrictionForTTIBundling_r12 {
	PhyLayerParameters_v1250__noResourceRestrictionForTTIBundling_r12_supported	= 0
} e_PhyLayerParameters_v1250__noResourceRestrictionForTTIBundling_r12;
typedef enum PhyLayerParameters_v1250__discoverySignalsInDeactSCell_r12 {
	PhyLayerParameters_v1250__discoverySignalsInDeactSCell_r12_supported	= 0
} e_PhyLayerParameters_v1250__discoverySignalsInDeactSCell_r12;

/* Forward declarations */
struct NAICS_Capability_List_r12;

/* PhyLayerParameters-v1250 */
typedef struct PhyLayerParameters_v1250 {
	long	*e_HARQ_Pattern_FDD_r12	/* OPTIONAL */;
	long	*enhanced_4TxCodebook_r12	/* OPTIONAL */;
	BIT_STRING_t	*tdd_FDD_CA_PCellDuplex_r12	/* OPTIONAL */;
	long	*phy_TDD_ReConfig_TDD_PCell_r12	/* OPTIONAL */;
	long	*phy_TDD_ReConfig_FDD_PCell_r12	/* OPTIONAL */;
	long	*pusch_FeedbackMode_r12	/* OPTIONAL */;
	long	*pusch_SRS_PowerControl_SubframeSet_r12	/* OPTIONAL */;
	long	*csi_SubframeSet_r12	/* OPTIONAL */;
	long	*noResourceRestrictionForTTIBundling_r12	/* OPTIONAL */;
	long	*discoverySignalsInDeactSCell_r12	/* OPTIONAL */;
	struct NAICS_Capability_List_r12	*naics_Capability_List_r12	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhyLayerParameters_v1250_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_e_HARQ_Pattern_FDD_r12_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_enhanced_4TxCodebook_r12_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_phy_TDD_ReConfig_TDD_PCell_r12_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_phy_TDD_ReConfig_FDD_PCell_r12_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pusch_FeedbackMode_r12_11;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pusch_SRS_PowerControl_SubframeSet_r12_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_csi_SubframeSet_r12_15;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_noResourceRestrictionForTTIBundling_r12_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_discoverySignalsInDeactSCell_r12_19;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PhyLayerParameters_v1250;
extern asn_SEQUENCE_specifics_t asn_SPC_PhyLayerParameters_v1250_specs_1;
extern asn_TYPE_member_t asn_MBR_PhyLayerParameters_v1250_1[11];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NAICS-Capability-List-r12.h"

#endif	/* _PhyLayerParameters_v1250_H_ */
#include <asn_internal.h>
