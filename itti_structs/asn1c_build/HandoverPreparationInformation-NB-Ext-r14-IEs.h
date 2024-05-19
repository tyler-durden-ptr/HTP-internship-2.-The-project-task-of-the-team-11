/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-InterNodeDefinitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_HandoverPreparationInformation_NB_Ext_r14_IEs_H_
#define	_HandoverPreparationInformation_NB_Ext_r14_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* HandoverPreparationInformation-NB-Ext-r14-IEs */
typedef struct HandoverPreparationInformation_NB_Ext_r14_IEs {
	OCTET_STRING_t	*ue_RadioAccessCapabilityInfoExt_r14	/* OPTIONAL */;
	struct HandoverPreparationInformation_NB_Ext_r14_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HandoverPreparationInformation_NB_Ext_r14_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_HandoverPreparationInformation_NB_Ext_r14_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_HandoverPreparationInformation_NB_Ext_r14_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_HandoverPreparationInformation_NB_Ext_r14_IEs_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _HandoverPreparationInformation_NB_Ext_r14_IEs_H_ */
#include <asn_internal.h>
