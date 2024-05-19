/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_SL_TxPoolToReleaseListExt_r13_H_
#define	_SL_TxPoolToReleaseListExt_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SL-TxPoolIdentity-v1310.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SL-TxPoolToReleaseListExt-r13 */
typedef struct SL_TxPoolToReleaseListExt_r13 {
	A_SEQUENCE_OF(SL_TxPoolIdentity_v1310_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SL_TxPoolToReleaseListExt_r13_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SL_TxPoolToReleaseListExt_r13;
extern asn_SET_OF_specifics_t asn_SPC_SL_TxPoolToReleaseListExt_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_SL_TxPoolToReleaseListExt_r13_1[1];
extern asn_per_constraints_t asn_PER_type_SL_TxPoolToReleaseListExt_r13_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SL_TxPoolToReleaseListExt_r13_H_ */
#include <asn_internal.h>
