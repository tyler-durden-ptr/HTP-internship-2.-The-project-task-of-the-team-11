/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_P_a_H_
#define	_P_a_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum P_a {
	P_a_dB_6	= 0,
	P_a_dB_4dot77	= 1,
	P_a_dB_3	= 2,
	P_a_dB_1dot77	= 3,
	P_a_dB0	= 4,
	P_a_dB1	= 5,
	P_a_dB2	= 6,
	P_a_dB3	= 7
} e_P_a;

/* P-a */
typedef long	 P_a_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_P_a_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_P_a;
extern const asn_INTEGER_specifics_t asn_SPC_P_a_specs_1;
asn_struct_free_f P_a_free;
asn_struct_print_f P_a_print;
asn_constr_check_f P_a_constraint;
ber_type_decoder_f P_a_decode_ber;
der_type_encoder_f P_a_encode_der;
xer_type_decoder_f P_a_decode_xer;
xer_type_encoder_f P_a_encode_xer;
oer_type_decoder_f P_a_decode_oer;
oer_type_encoder_f P_a_encode_oer;
per_type_decoder_f P_a_decode_uper;
per_type_encoder_f P_a_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _P_a_H_ */
#include <asn_internal.h>
