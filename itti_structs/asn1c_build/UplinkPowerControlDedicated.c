/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "UplinkPowerControlDedicated.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_p0_UE_PUSCH_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -8 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_p0_UE_PUCCH_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -8 && value <= 7)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_pSRS_Offset_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_deltaMCS_Enabled_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_deltaMCS_Enabled_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_p0_UE_PUSCH_constr_2 CC_NOTUSED = {
	{ 1, 0 }	/* (-8..7) */,
	-1};
static asn_per_constraints_t asn_PER_memb_p0_UE_PUSCH_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4, -8,  7 }	/* (-8..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_p0_UE_PUCCH_constr_7 CC_NOTUSED = {
	{ 1, 0 }	/* (-8..7) */,
	-1};
static asn_per_constraints_t asn_PER_memb_p0_UE_PUCCH_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4, -8,  7 }	/* (-8..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_pSRS_Offset_constr_8 CC_NOTUSED = {
	{ 1, 1 }	/* (0..15) */,
	-1};
static asn_per_constraints_t asn_PER_memb_pSRS_Offset_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_deltaMCS_Enabled_value2enum_3[] = {
	{ 0,	3,	"en0" },
	{ 1,	3,	"en1" }
};
static const unsigned int asn_MAP_deltaMCS_Enabled_enum2value_3[] = {
	0,	/* en0(0) */
	1	/* en1(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_deltaMCS_Enabled_specs_3 = {
	asn_MAP_deltaMCS_Enabled_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_deltaMCS_Enabled_enum2value_3,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_deltaMCS_Enabled_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_deltaMCS_Enabled_3 = {
	"deltaMCS-Enabled",
	"deltaMCS-Enabled",
	&asn_OP_NativeEnumerated,
	asn_DEF_deltaMCS_Enabled_tags_3,
	sizeof(asn_DEF_deltaMCS_Enabled_tags_3)
		/sizeof(asn_DEF_deltaMCS_Enabled_tags_3[0]) - 1, /* 1 */
	asn_DEF_deltaMCS_Enabled_tags_3,	/* Same as above */
	sizeof(asn_DEF_deltaMCS_Enabled_tags_3)
		/sizeof(asn_DEF_deltaMCS_Enabled_tags_3[0]), /* 2 */
	{ &asn_OER_type_deltaMCS_Enabled_constr_3, &asn_PER_type_deltaMCS_Enabled_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_deltaMCS_Enabled_specs_3	/* Additional specs */
};

static int asn_DFL_9_cmp_4(const void *sptr) {
	const FilterCoefficient_t *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 4 */
	return (*st != 4);
}
static int asn_DFL_9_set_4(void **sptr) {
	FilterCoefficient_t *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 4 */
	*st = 4;
	return 0;
}
asn_TYPE_member_t asn_MBR_UplinkPowerControlDedicated_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPowerControlDedicated, p0_UE_PUSCH),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_p0_UE_PUSCH_constr_2, &asn_PER_memb_p0_UE_PUSCH_constr_2,  memb_p0_UE_PUSCH_constraint_1 },
		0, 0, /* No default value */
		"p0-UE-PUSCH"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPowerControlDedicated, deltaMCS_Enabled),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_deltaMCS_Enabled_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"deltaMCS-Enabled"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPowerControlDedicated, accumulationEnabled),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"accumulationEnabled"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPowerControlDedicated, p0_UE_PUCCH),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_p0_UE_PUCCH_constr_7, &asn_PER_memb_p0_UE_PUCCH_constr_7,  memb_p0_UE_PUCCH_constraint_1 },
		0, 0, /* No default value */
		"p0-UE-PUCCH"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UplinkPowerControlDedicated, pSRS_Offset),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_pSRS_Offset_constr_8, &asn_PER_memb_pSRS_Offset_constr_8,  memb_pSRS_Offset_constraint_1 },
		0, 0, /* No default value */
		"pSRS-Offset"
		},
	{ ATF_POINTER, 1, offsetof(struct UplinkPowerControlDedicated, filterCoefficient),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FilterCoefficient,
		0,
		{ 0, 0, 0 },
		&asn_DFL_9_cmp_4,	/* Compare DEFAULT 4 */
		&asn_DFL_9_set_4,	/* Set DEFAULT 4 */
		"filterCoefficient"
		},
};
static const int asn_MAP_UplinkPowerControlDedicated_oms_1[] = { 5 };
static const ber_tlv_tag_t asn_DEF_UplinkPowerControlDedicated_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UplinkPowerControlDedicated_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* p0-UE-PUSCH */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* deltaMCS-Enabled */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* accumulationEnabled */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* p0-UE-PUCCH */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* pSRS-Offset */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* filterCoefficient */
};
asn_SEQUENCE_specifics_t asn_SPC_UplinkPowerControlDedicated_specs_1 = {
	sizeof(struct UplinkPowerControlDedicated),
	offsetof(struct UplinkPowerControlDedicated, _asn_ctx),
	asn_MAP_UplinkPowerControlDedicated_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_UplinkPowerControlDedicated_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UplinkPowerControlDedicated = {
	"UplinkPowerControlDedicated",
	"UplinkPowerControlDedicated",
	&asn_OP_SEQUENCE,
	asn_DEF_UplinkPowerControlDedicated_tags_1,
	sizeof(asn_DEF_UplinkPowerControlDedicated_tags_1)
		/sizeof(asn_DEF_UplinkPowerControlDedicated_tags_1[0]), /* 1 */
	asn_DEF_UplinkPowerControlDedicated_tags_1,	/* Same as above */
	sizeof(asn_DEF_UplinkPowerControlDedicated_tags_1)
		/sizeof(asn_DEF_UplinkPowerControlDedicated_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UplinkPowerControlDedicated_1,
	6,	/* Elements count */
	&asn_SPC_UplinkPowerControlDedicated_specs_1	/* Additional specs */
};

