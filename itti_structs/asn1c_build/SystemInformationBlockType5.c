/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "SystemInformationBlockType5.h"

static int
memb_lateNonCriticalExtension_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	
	if(1 /* No applicable constraints whatsoever */) {
		(void)st; /* Unused variable */
		/* Nothing is here. See below */
	}
	
	return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
}

static int
memb_scptm_FreqOffset_r14_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_lateNonCriticalExtension_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_lateNonCriticalExtension_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_scptm_FreqOffset_r14_constr_13 CC_NOTUSED = {
	{ 1, 1 }	/* (1..8) */,
	-1};
static asn_per_constraints_t asn_PER_memb_scptm_FreqOffset_r14_constr_13 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_SystemInformationBlockType5_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType5, interFreqCarrierFreqList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqCarrierFreqList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqCarrierFreqList"
		},
	{ ATF_POINTER, 10, offsetof(struct SystemInformationBlockType5, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_lateNonCriticalExtension_constr_4, &asn_PER_memb_lateNonCriticalExtension_constr_4,  memb_lateNonCriticalExtension_constraint_1 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 9, offsetof(struct SystemInformationBlockType5, interFreqCarrierFreqList_v1250),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqCarrierFreqList_v1250,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqCarrierFreqList-v1250"
		},
	{ ATF_POINTER, 8, offsetof(struct SystemInformationBlockType5, interFreqCarrierFreqListExt_r12),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqCarrierFreqListExt_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqCarrierFreqListExt-r12"
		},
	{ ATF_POINTER, 7, offsetof(struct SystemInformationBlockType5, interFreqCarrierFreqListExt_v1280),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqCarrierFreqListExt_v1280,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqCarrierFreqListExt-v1280"
		},
	{ ATF_POINTER, 6, offsetof(struct SystemInformationBlockType5, interFreqCarrierFreqList_v1310),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqCarrierFreqList_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqCarrierFreqList-v1310"
		},
	{ ATF_POINTER, 5, offsetof(struct SystemInformationBlockType5, interFreqCarrierFreqListExt_v1310),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqCarrierFreqListExt_v1310,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqCarrierFreqListExt-v1310"
		},
	{ ATF_POINTER, 4, offsetof(struct SystemInformationBlockType5, interFreqCarrierFreqList_v1350),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqCarrierFreqList_v1350,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqCarrierFreqList-v1350"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType5, interFreqCarrierFreqListExt_v1350),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqCarrierFreqListExt_v1350,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqCarrierFreqListExt-v1350"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType5, interFreqCarrierFreqListExt_v1360),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_InterFreqCarrierFreqListExt_v1360,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"interFreqCarrierFreqListExt-v1360"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType5, scptm_FreqOffset_r14),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_scptm_FreqOffset_r14_constr_13, &asn_PER_memb_scptm_FreqOffset_r14_constr_13,  memb_scptm_FreqOffset_r14_constraint_1 },
		0, 0, /* No default value */
		"scptm-FreqOffset-r14"
		},
};
static const int asn_MAP_SystemInformationBlockType5_oms_1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType5_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType5_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* interFreqCarrierFreqList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* interFreqCarrierFreqList-v1250 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* interFreqCarrierFreqListExt-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* interFreqCarrierFreqListExt-v1280 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* interFreqCarrierFreqList-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* interFreqCarrierFreqListExt-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* interFreqCarrierFreqList-v1350 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* interFreqCarrierFreqListExt-v1350 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* interFreqCarrierFreqListExt-v1360 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 } /* scptm-FreqOffset-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType5_specs_1 = {
	sizeof(struct SystemInformationBlockType5),
	offsetof(struct SystemInformationBlockType5, _asn_ctx),
	asn_MAP_SystemInformationBlockType5_tag2el_1,
	11,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType5_oms_1,	/* Optional members */
	0, 10,	/* Root/Additions */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType5 = {
	"SystemInformationBlockType5",
	"SystemInformationBlockType5",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType5_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType5_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType5_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType5_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType5_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType5_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType5_1,
	11,	/* Elements count */
	&asn_SPC_SystemInformationBlockType5_specs_1	/* Additional specs */
};

