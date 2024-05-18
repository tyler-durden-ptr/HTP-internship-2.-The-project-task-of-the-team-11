/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_SCG_ConfigInfo_v1330_IEs_H_
#define	_SCG_ConfigInfo_v1330_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasResultListRSSI_SCG_r13;
struct SCG_ConfigInfo_v1430_IEs;

/* SCG-ConfigInfo-v1330-IEs */
typedef struct SCG_ConfigInfo_v1330_IEs {
	struct MeasResultListRSSI_SCG_r13	*measResultListRSSI_SCG_r13	/* OPTIONAL */;
	struct SCG_ConfigInfo_v1430_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SCG_ConfigInfo_v1330_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SCG_ConfigInfo_v1330_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_SCG_ConfigInfo_v1330_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_SCG_ConfigInfo_v1330_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasResultListRSSI-SCG-r13.h"
#include "SCG-ConfigInfo-v1430-IEs.h"

#endif	/* _SCG_ConfigInfo_v1330_IEs_H_ */
#include <asn_internal.h>