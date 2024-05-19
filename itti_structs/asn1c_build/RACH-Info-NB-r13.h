/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_RACH_Info_NB_r13_H_
#define	_RACH_Info_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RACH_Info_NB_r13__ra_ResponseWindowSize_r13 {
	RACH_Info_NB_r13__ra_ResponseWindowSize_r13_pp2	= 0,
	RACH_Info_NB_r13__ra_ResponseWindowSize_r13_pp3	= 1,
	RACH_Info_NB_r13__ra_ResponseWindowSize_r13_pp4	= 2,
	RACH_Info_NB_r13__ra_ResponseWindowSize_r13_pp5	= 3,
	RACH_Info_NB_r13__ra_ResponseWindowSize_r13_pp6	= 4,
	RACH_Info_NB_r13__ra_ResponseWindowSize_r13_pp7	= 5,
	RACH_Info_NB_r13__ra_ResponseWindowSize_r13_pp8	= 6,
	RACH_Info_NB_r13__ra_ResponseWindowSize_r13_pp10	= 7
} e_RACH_Info_NB_r13__ra_ResponseWindowSize_r13;
typedef enum RACH_Info_NB_r13__mac_ContentionResolutionTimer_r13 {
	RACH_Info_NB_r13__mac_ContentionResolutionTimer_r13_pp1	= 0,
	RACH_Info_NB_r13__mac_ContentionResolutionTimer_r13_pp2	= 1,
	RACH_Info_NB_r13__mac_ContentionResolutionTimer_r13_pp3	= 2,
	RACH_Info_NB_r13__mac_ContentionResolutionTimer_r13_pp4	= 3,
	RACH_Info_NB_r13__mac_ContentionResolutionTimer_r13_pp8	= 4,
	RACH_Info_NB_r13__mac_ContentionResolutionTimer_r13_pp16	= 5,
	RACH_Info_NB_r13__mac_ContentionResolutionTimer_r13_pp32	= 6,
	RACH_Info_NB_r13__mac_ContentionResolutionTimer_r13_pp64	= 7
} e_RACH_Info_NB_r13__mac_ContentionResolutionTimer_r13;

/* RACH-Info-NB-r13 */
typedef struct RACH_Info_NB_r13 {
	long	 ra_ResponseWindowSize_r13;
	long	 mac_ContentionResolutionTimer_r13;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RACH_Info_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ra_ResponseWindowSize_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mac_ContentionResolutionTimer_r13_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RACH_Info_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_RACH_Info_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_RACH_Info_NB_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RACH_Info_NB_r13_H_ */
#include <asn_internal.h>
