/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_PCCH_Message_H_
#define	_PCCH_Message_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PCCH-MessageType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* PCCH-Message */
typedef struct PCCH_Message {
	PCCH_MessageType_t	 message;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PCCH_Message_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PCCH_Message;

#ifdef __cplusplus
}
#endif

#endif	/* _PCCH_Message_H_ */
#include <asn_internal.h>
