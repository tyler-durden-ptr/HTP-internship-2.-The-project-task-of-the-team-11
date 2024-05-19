/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "AntennaInfoUL-r10.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_transmissionModeUL_r10_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_transmissionModeUL_r10_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_fourAntennaPortActivated_r10_constr_11 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_fourAntennaPortActivated_r10_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_transmissionModeUL_r10_value2enum_2[] = {
	{ 0,	3,	"tm1" },
	{ 1,	3,	"tm2" },
	{ 2,	6,	"spare6" },
	{ 3,	6,	"spare5" },
	{ 4,	6,	"spare4" },
	{ 5,	6,	"spare3" },
	{ 6,	6,	"spare2" },
	{ 7,	6,	"spare1" }
};
static const unsigned int asn_MAP_transmissionModeUL_r10_enum2value_2[] = {
	7,	/* spare1(7) */
	6,	/* spare2(6) */
	5,	/* spare3(5) */
	4,	/* spare4(4) */
	3,	/* spare5(3) */
	2,	/* spare6(2) */
	0,	/* tm1(0) */
	1	/* tm2(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_transmissionModeUL_r10_specs_2 = {
	asn_MAP_transmissionModeUL_r10_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_transmissionModeUL_r10_enum2value_2,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_transmissionModeUL_r10_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_transmissionModeUL_r10_2 = {
	"transmissionModeUL-r10",
	"transmissionModeUL-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_transmissionModeUL_r10_tags_2,
	sizeof(asn_DEF_transmissionModeUL_r10_tags_2)
		/sizeof(asn_DEF_transmissionModeUL_r10_tags_2[0]) - 1, /* 1 */
	asn_DEF_transmissionModeUL_r10_tags_2,	/* Same as above */
	sizeof(asn_DEF_transmissionModeUL_r10_tags_2)
		/sizeof(asn_DEF_transmissionModeUL_r10_tags_2[0]), /* 2 */
	{ &asn_OER_type_transmissionModeUL_r10_constr_2, &asn_PER_type_transmissionModeUL_r10_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_transmissionModeUL_r10_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_fourAntennaPortActivated_r10_value2enum_11[] = {
	{ 0,	5,	"setup" }
};
static const unsigned int asn_MAP_fourAntennaPortActivated_r10_enum2value_11[] = {
	0	/* setup(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_fourAntennaPortActivated_r10_specs_11 = {
	asn_MAP_fourAntennaPortActivated_r10_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_fourAntennaPortActivated_r10_enum2value_11,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_fourAntennaPortActivated_r10_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fourAntennaPortActivated_r10_11 = {
	"fourAntennaPortActivated-r10",
	"fourAntennaPortActivated-r10",
	&asn_OP_NativeEnumerated,
	asn_DEF_fourAntennaPortActivated_r10_tags_11,
	sizeof(asn_DEF_fourAntennaPortActivated_r10_tags_11)
		/sizeof(asn_DEF_fourAntennaPortActivated_r10_tags_11[0]) - 1, /* 1 */
	asn_DEF_fourAntennaPortActivated_r10_tags_11,	/* Same as above */
	sizeof(asn_DEF_fourAntennaPortActivated_r10_tags_11)
		/sizeof(asn_DEF_fourAntennaPortActivated_r10_tags_11[0]), /* 2 */
	{ &asn_OER_type_fourAntennaPortActivated_r10_constr_11, &asn_PER_type_fourAntennaPortActivated_r10_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_fourAntennaPortActivated_r10_specs_11	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_AntennaInfoUL_r10_1[] = {
	{ ATF_POINTER, 2, offsetof(struct AntennaInfoUL_r10, transmissionModeUL_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_transmissionModeUL_r10_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"transmissionModeUL-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct AntennaInfoUL_r10, fourAntennaPortActivated_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_fourAntennaPortActivated_r10_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"fourAntennaPortActivated-r10"
		},
};
static const int asn_MAP_AntennaInfoUL_r10_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_AntennaInfoUL_r10_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_AntennaInfoUL_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* transmissionModeUL-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* fourAntennaPortActivated-r10 */
};
asn_SEQUENCE_specifics_t asn_SPC_AntennaInfoUL_r10_specs_1 = {
	sizeof(struct AntennaInfoUL_r10),
	offsetof(struct AntennaInfoUL_r10, _asn_ctx),
	asn_MAP_AntennaInfoUL_r10_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_AntennaInfoUL_r10_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_AntennaInfoUL_r10 = {
	"AntennaInfoUL-r10",
	"AntennaInfoUL-r10",
	&asn_OP_SEQUENCE,
	asn_DEF_AntennaInfoUL_r10_tags_1,
	sizeof(asn_DEF_AntennaInfoUL_r10_tags_1)
		/sizeof(asn_DEF_AntennaInfoUL_r10_tags_1[0]), /* 1 */
	asn_DEF_AntennaInfoUL_r10_tags_1,	/* Same as above */
	sizeof(asn_DEF_AntennaInfoUL_r10_tags_1)
		/sizeof(asn_DEF_AntennaInfoUL_r10_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_AntennaInfoUL_r10_1,
	2,	/* Elements count */
	&asn_SPC_AntennaInfoUL_r10_specs_1	/* Additional specs */
};

