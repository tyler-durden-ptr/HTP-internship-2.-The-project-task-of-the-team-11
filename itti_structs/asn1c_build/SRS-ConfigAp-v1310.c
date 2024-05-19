/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "SRS-ConfigAp-v1310.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_transmissionCombAp_v1310_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 2 && value <= 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_type_cyclicShiftAp_v1310_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_cyclicShiftAp_v1310_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_transmissionCombNum_r13_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_transmissionCombNum_r13_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_transmissionCombAp_v1310_constr_2 CC_NOTUSED = {
	{ 1, 1 }	/* (2..3) */,
	-1};
static asn_per_constraints_t asn_PER_memb_transmissionCombAp_v1310_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  2,  3 }	/* (2..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_cyclicShiftAp_v1310_value2enum_3[] = {
	{ 0,	3,	"cs8" },
	{ 1,	3,	"cs9" },
	{ 2,	4,	"cs10" },
	{ 3,	4,	"cs11" }
};
static const unsigned int asn_MAP_cyclicShiftAp_v1310_enum2value_3[] = {
	2,	/* cs10(2) */
	3,	/* cs11(3) */
	0,	/* cs8(0) */
	1	/* cs9(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_cyclicShiftAp_v1310_specs_3 = {
	asn_MAP_cyclicShiftAp_v1310_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_cyclicShiftAp_v1310_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_cyclicShiftAp_v1310_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_cyclicShiftAp_v1310_3 = {
	"cyclicShiftAp-v1310",
	"cyclicShiftAp-v1310",
	&asn_OP_NativeEnumerated,
	asn_DEF_cyclicShiftAp_v1310_tags_3,
	sizeof(asn_DEF_cyclicShiftAp_v1310_tags_3)
		/sizeof(asn_DEF_cyclicShiftAp_v1310_tags_3[0]) - 1, /* 1 */
	asn_DEF_cyclicShiftAp_v1310_tags_3,	/* Same as above */
	sizeof(asn_DEF_cyclicShiftAp_v1310_tags_3)
		/sizeof(asn_DEF_cyclicShiftAp_v1310_tags_3[0]), /* 2 */
	{ &asn_OER_type_cyclicShiftAp_v1310_constr_3, &asn_PER_type_cyclicShiftAp_v1310_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_cyclicShiftAp_v1310_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_transmissionCombNum_r13_value2enum_8[] = {
	{ 0,	2,	"n2" },
	{ 1,	2,	"n4" }
};
static const unsigned int asn_MAP_transmissionCombNum_r13_enum2value_8[] = {
	0,	/* n2(0) */
	1	/* n4(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_transmissionCombNum_r13_specs_8 = {
	asn_MAP_transmissionCombNum_r13_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_transmissionCombNum_r13_enum2value_8,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_transmissionCombNum_r13_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_transmissionCombNum_r13_8 = {
	"transmissionCombNum-r13",
	"transmissionCombNum-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_transmissionCombNum_r13_tags_8,
	sizeof(asn_DEF_transmissionCombNum_r13_tags_8)
		/sizeof(asn_DEF_transmissionCombNum_r13_tags_8[0]) - 1, /* 1 */
	asn_DEF_transmissionCombNum_r13_tags_8,	/* Same as above */
	sizeof(asn_DEF_transmissionCombNum_r13_tags_8)
		/sizeof(asn_DEF_transmissionCombNum_r13_tags_8[0]), /* 2 */
	{ &asn_OER_type_transmissionCombNum_r13_constr_8, &asn_PER_type_transmissionCombNum_r13_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_transmissionCombNum_r13_specs_8	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SRS_ConfigAp_v1310_1[] = {
	{ ATF_POINTER, 3, offsetof(struct SRS_ConfigAp_v1310, transmissionCombAp_v1310),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_transmissionCombAp_v1310_constr_2, &asn_PER_memb_transmissionCombAp_v1310_constr_2,  memb_transmissionCombAp_v1310_constraint_1 },
		0, 0, /* No default value */
		"transmissionCombAp-v1310"
		},
	{ ATF_POINTER, 2, offsetof(struct SRS_ConfigAp_v1310, cyclicShiftAp_v1310),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_cyclicShiftAp_v1310_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cyclicShiftAp-v1310"
		},
	{ ATF_POINTER, 1, offsetof(struct SRS_ConfigAp_v1310, transmissionCombNum_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_transmissionCombNum_r13_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transmissionCombNum-r13"
		},
};
static const int asn_MAP_SRS_ConfigAp_v1310_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_SRS_ConfigAp_v1310_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SRS_ConfigAp_v1310_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* transmissionCombAp-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cyclicShiftAp-v1310 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* transmissionCombNum-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_SRS_ConfigAp_v1310_specs_1 = {
	sizeof(struct SRS_ConfigAp_v1310),
	offsetof(struct SRS_ConfigAp_v1310, _asn_ctx),
	asn_MAP_SRS_ConfigAp_v1310_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SRS_ConfigAp_v1310_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SRS_ConfigAp_v1310 = {
	"SRS-ConfigAp-v1310",
	"SRS-ConfigAp-v1310",
	&asn_OP_SEQUENCE,
	asn_DEF_SRS_ConfigAp_v1310_tags_1,
	sizeof(asn_DEF_SRS_ConfigAp_v1310_tags_1)
		/sizeof(asn_DEF_SRS_ConfigAp_v1310_tags_1[0]), /* 1 */
	asn_DEF_SRS_ConfigAp_v1310_tags_1,	/* Same as above */
	sizeof(asn_DEF_SRS_ConfigAp_v1310_tags_1)
		/sizeof(asn_DEF_SRS_ConfigAp_v1310_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SRS_ConfigAp_v1310_1,
	3,	/* Elements count */
	&asn_SPC_SRS_ConfigAp_v1310_specs_1	/* Additional specs */
};

