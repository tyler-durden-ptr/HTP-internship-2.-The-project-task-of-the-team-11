/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_ThresholdEUTRA_H_
#define	_ThresholdEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RSRP-Range.h"
#include "RSRQ-Range.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ThresholdEUTRA_PR {
	ThresholdEUTRA_PR_NOTHING,	/* No components present */
	ThresholdEUTRA_PR_threshold_RSRP,
	ThresholdEUTRA_PR_threshold_RSRQ
} ThresholdEUTRA_PR;

/* ThresholdEUTRA */
typedef struct ThresholdEUTRA {
	ThresholdEUTRA_PR present;
	union ThresholdEUTRA_u {
		RSRP_Range_t	 threshold_RSRP;
		RSRQ_Range_t	 threshold_RSRQ;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ThresholdEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ThresholdEUTRA;
extern asn_CHOICE_specifics_t asn_SPC_ThresholdEUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_ThresholdEUTRA_1[2];
extern asn_per_constraints_t asn_PER_type_ThresholdEUTRA_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _ThresholdEUTRA_H_ */
#include <asn_internal.h>
