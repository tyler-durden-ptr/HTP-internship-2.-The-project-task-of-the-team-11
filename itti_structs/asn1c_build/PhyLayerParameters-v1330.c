/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "PhyLayerParameters-v1330.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_cch_InterfMitigation_MaxNumCCs_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 32)) {
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
memb_crs_InterfMitigationTM1toTM9_r13_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_cch_InterfMitigation_RefRecTypeA_r13_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_cch_InterfMitigation_RefRecTypeA_r13_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_cch_InterfMitigation_RefRecTypeB_r13_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_cch_InterfMitigation_RefRecTypeB_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_cch_InterfMitigation_MaxNumCCs_r13_constr_6 CC_NOTUSED = {
	{ 1, 1 }	/* (1..32) */,
	-1};
static asn_per_constraints_t asn_PER_memb_cch_InterfMitigation_MaxNumCCs_r13_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_crs_InterfMitigationTM1toTM9_r13_constr_7 CC_NOTUSED = {
	{ 1, 1 }	/* (1..32) */,
	-1};
static asn_per_constraints_t asn_PER_memb_crs_InterfMitigationTM1toTM9_r13_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (1..32) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_cch_InterfMitigation_RefRecTypeA_r13_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_cch_InterfMitigation_RefRecTypeA_r13_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_cch_InterfMitigation_RefRecTypeA_r13_specs_2 = {
	asn_MAP_cch_InterfMitigation_RefRecTypeA_r13_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_cch_InterfMitigation_RefRecTypeA_r13_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cch_InterfMitigation_RefRecTypeA_r13_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cch_InterfMitigation_RefRecTypeA_r13_2 = {
	"cch-InterfMitigation-RefRecTypeA-r13",
	"cch-InterfMitigation-RefRecTypeA-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_cch_InterfMitigation_RefRecTypeA_r13_tags_2,
	sizeof(asn_DEF_cch_InterfMitigation_RefRecTypeA_r13_tags_2)
		/sizeof(asn_DEF_cch_InterfMitigation_RefRecTypeA_r13_tags_2[0]) - 1, /* 1 */
	asn_DEF_cch_InterfMitigation_RefRecTypeA_r13_tags_2,	/* Same as above */
	sizeof(asn_DEF_cch_InterfMitigation_RefRecTypeA_r13_tags_2)
		/sizeof(asn_DEF_cch_InterfMitigation_RefRecTypeA_r13_tags_2[0]), /* 2 */
	{ &asn_OER_type_cch_InterfMitigation_RefRecTypeA_r13_constr_2, &asn_PER_type_cch_InterfMitigation_RefRecTypeA_r13_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cch_InterfMitigation_RefRecTypeA_r13_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_cch_InterfMitigation_RefRecTypeB_r13_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_cch_InterfMitigation_RefRecTypeB_r13_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_cch_InterfMitigation_RefRecTypeB_r13_specs_4 = {
	asn_MAP_cch_InterfMitigation_RefRecTypeB_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_cch_InterfMitigation_RefRecTypeB_r13_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cch_InterfMitigation_RefRecTypeB_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cch_InterfMitigation_RefRecTypeB_r13_4 = {
	"cch-InterfMitigation-RefRecTypeB-r13",
	"cch-InterfMitigation-RefRecTypeB-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_cch_InterfMitigation_RefRecTypeB_r13_tags_4,
	sizeof(asn_DEF_cch_InterfMitigation_RefRecTypeB_r13_tags_4)
		/sizeof(asn_DEF_cch_InterfMitigation_RefRecTypeB_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_cch_InterfMitigation_RefRecTypeB_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_cch_InterfMitigation_RefRecTypeB_r13_tags_4)
		/sizeof(asn_DEF_cch_InterfMitigation_RefRecTypeB_r13_tags_4[0]), /* 2 */
	{ &asn_OER_type_cch_InterfMitigation_RefRecTypeB_r13_constr_4, &asn_PER_type_cch_InterfMitigation_RefRecTypeB_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cch_InterfMitigation_RefRecTypeB_r13_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_PhyLayerParameters_v1330_1[] = {
	{ ATF_POINTER, 4, offsetof(struct PhyLayerParameters_v1330, cch_InterfMitigation_RefRecTypeA_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cch_InterfMitigation_RefRecTypeA_r13_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cch-InterfMitigation-RefRecTypeA-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct PhyLayerParameters_v1330, cch_InterfMitigation_RefRecTypeB_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cch_InterfMitigation_RefRecTypeB_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cch-InterfMitigation-RefRecTypeB-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct PhyLayerParameters_v1330, cch_InterfMitigation_MaxNumCCs_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_cch_InterfMitigation_MaxNumCCs_r13_constr_6, &asn_PER_memb_cch_InterfMitigation_MaxNumCCs_r13_constr_6,  memb_cch_InterfMitigation_MaxNumCCs_r13_constraint_1 },
		0, 0, /* No default value */
		"cch-InterfMitigation-MaxNumCCs-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct PhyLayerParameters_v1330, crs_InterfMitigationTM1toTM9_r13),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_crs_InterfMitigationTM1toTM9_r13_constr_7, &asn_PER_memb_crs_InterfMitigationTM1toTM9_r13_constr_7,  memb_crs_InterfMitigationTM1toTM9_r13_constraint_1 },
		0, 0, /* No default value */
		"crs-InterfMitigationTM1toTM9-r13"
		},
};
static const int asn_MAP_PhyLayerParameters_v1330_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_PhyLayerParameters_v1330_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PhyLayerParameters_v1330_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cch-InterfMitigation-RefRecTypeA-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cch-InterfMitigation-RefRecTypeB-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cch-InterfMitigation-MaxNumCCs-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* crs-InterfMitigationTM1toTM9-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_PhyLayerParameters_v1330_specs_1 = {
	sizeof(struct PhyLayerParameters_v1330),
	offsetof(struct PhyLayerParameters_v1330, _asn_ctx),
	asn_MAP_PhyLayerParameters_v1330_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_PhyLayerParameters_v1330_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PhyLayerParameters_v1330 = {
	"PhyLayerParameters-v1330",
	"PhyLayerParameters-v1330",
	&asn_OP_SEQUENCE,
	asn_DEF_PhyLayerParameters_v1330_tags_1,
	sizeof(asn_DEF_PhyLayerParameters_v1330_tags_1)
		/sizeof(asn_DEF_PhyLayerParameters_v1330_tags_1[0]), /* 1 */
	asn_DEF_PhyLayerParameters_v1330_tags_1,	/* Same as above */
	sizeof(asn_DEF_PhyLayerParameters_v1330_tags_1)
		/sizeof(asn_DEF_PhyLayerParameters_v1330_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_PhyLayerParameters_v1330_1,
	4,	/* Elements count */
	&asn_SPC_PhyLayerParameters_v1330_specs_1	/* Additional specs */
};

