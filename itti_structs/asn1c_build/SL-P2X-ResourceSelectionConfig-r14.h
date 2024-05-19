/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_SL_P2X_ResourceSelectionConfig_r14_H_
#define	_SL_P2X_ResourceSelectionConfig_r14_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SL_P2X_ResourceSelectionConfig_r14__partialSensing_r14 {
	SL_P2X_ResourceSelectionConfig_r14__partialSensing_r14_true	= 0
} e_SL_P2X_ResourceSelectionConfig_r14__partialSensing_r14;
typedef enum SL_P2X_ResourceSelectionConfig_r14__randomSelection_r14 {
	SL_P2X_ResourceSelectionConfig_r14__randomSelection_r14_true	= 0
} e_SL_P2X_ResourceSelectionConfig_r14__randomSelection_r14;

/* SL-P2X-ResourceSelectionConfig-r14 */
typedef struct SL_P2X_ResourceSelectionConfig_r14 {
	long	*partialSensing_r14	/* OPTIONAL */;
	long	*randomSelection_r14	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_P2X_ResourceSelectionConfig_r14_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_partialSensing_r14_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_randomSelection_r14_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SL_P2X_ResourceSelectionConfig_r14;
extern asn_SEQUENCE_specifics_t asn_SPC_SL_P2X_ResourceSelectionConfig_r14_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_P2X_ResourceSelectionConfig_r14_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SL_P2X_ResourceSelectionConfig_r14_H_ */
#include <asn_internal.h>
