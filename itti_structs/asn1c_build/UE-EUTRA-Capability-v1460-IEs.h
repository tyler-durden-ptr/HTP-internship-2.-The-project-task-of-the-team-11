/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_UE_EUTRA_Capability_v1460_IEs_H_
#define	_UE_EUTRA_Capability_v1460_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "Other-Parameters-v1460.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-EUTRA-Capability-v1460-IEs */
typedef struct UE_EUTRA_Capability_v1460_IEs {
	long	*ue_CategoryDL_v1460	/* OPTIONAL */;
	Other_Parameters_v1460_t	 otherParameters_v1460;
	struct UE_EUTRA_Capability_v1460_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v1460_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1460_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1460_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1460_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _UE_EUTRA_Capability_v1460_IEs_H_ */
#include <asn_internal.h>
