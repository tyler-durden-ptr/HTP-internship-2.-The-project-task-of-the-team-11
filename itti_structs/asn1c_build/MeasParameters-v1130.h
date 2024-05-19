/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_MeasParameters_v1130_H_
#define	_MeasParameters_v1130_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasParameters_v1130__rsrqMeasWideband_r11 {
	MeasParameters_v1130__rsrqMeasWideband_r11_supported	= 0
} e_MeasParameters_v1130__rsrqMeasWideband_r11;

/* MeasParameters-v1130 */
typedef struct MeasParameters_v1130 {
	long	*rsrqMeasWideband_r11	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasParameters_v1130_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_rsrqMeasWideband_r11_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MeasParameters_v1130;
extern asn_SEQUENCE_specifics_t asn_SPC_MeasParameters_v1130_specs_1;
extern asn_TYPE_member_t asn_MBR_MeasParameters_v1130_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _MeasParameters_v1130_H_ */
#include <asn_internal.h>
