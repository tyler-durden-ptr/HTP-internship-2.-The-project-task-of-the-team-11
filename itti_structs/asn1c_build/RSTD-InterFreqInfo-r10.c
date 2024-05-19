/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "RSTD-InterFreqInfo-r10.h"

static int
memb_measPRS_Offset_r10_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 39)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_measPRS_Offset_r10_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (0..39) */,
	-1};
static asn_per_constraints_t asn_PER_memb_measPRS_Offset_r10_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  39 }	/* (0..39) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_RSTD_InterFreqInfo_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10, carrierFreq_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RSTD_InterFreqInfo_r10, measPRS_Offset_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_measPRS_Offset_r10_constr_3, &asn_PER_memb_measPRS_Offset_r10_constr_3,  memb_measPRS_Offset_r10_constraint_1 },
		0, 0, /* No default value */
		"measPRS-Offset-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct RSTD_InterFreqInfo_r10, carrierFreq_v1090),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA_v9e0,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"carrierFreq-v1090"
		},
};
static const int asn_MAP_RSTD_InterFreqInfo_r10_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_RSTD_InterFreqInfo_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RSTD_InterFreqInfo_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* carrierFreq-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measPRS-Offset-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* carrierFreq-v1090 */
};
asn_SEQUENCE_specifics_t asn_SPC_RSTD_InterFreqInfo_r10_specs_1 = {
	sizeof(struct RSTD_InterFreqInfo_r10),
	offsetof(struct RSTD_InterFreqInfo_r10, _asn_ctx),
	asn_MAP_RSTD_InterFreqInfo_r10_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RSTD_InterFreqInfo_r10_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RSTD_InterFreqInfo_r10 = {
	"RSTD-InterFreqInfo-r10",
	"RSTD-InterFreqInfo-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_RSTD_InterFreqInfo_r10_tags_1,
	sizeof(asn_DEF_RSTD_InterFreqInfo_r10_tags_1)
		/sizeof(asn_DEF_RSTD_InterFreqInfo_r10_tags_1[0]), /* 1 */
	asn_DEF_RSTD_InterFreqInfo_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_RSTD_InterFreqInfo_r10_tags_1)
		/sizeof(asn_DEF_RSTD_InterFreqInfo_r10_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RSTD_InterFreqInfo_r10_1,
	3,	/* Elements count */
	&asn_SPC_RSTD_InterFreqInfo_r10_specs_1	/* Additional specs */
};

