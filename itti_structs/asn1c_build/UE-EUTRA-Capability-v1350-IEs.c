/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "UE-EUTRA-Capability-v1350-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_ue_CategoryDL_v1350_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ue_CategoryDL_v1350_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ue_CategoryUL_v1350_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ue_CategoryUL_v1350_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ue_CategoryDL_v1350_value2enum_2[] = {
	{ 0,	6,	"oneBis" }
};
static const unsigned int asn_MAP_ue_CategoryDL_v1350_enum2value_2[] = {
	0	/* oneBis(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ue_CategoryDL_v1350_specs_2 = {
	asn_MAP_ue_CategoryDL_v1350_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_ue_CategoryDL_v1350_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ue_CategoryDL_v1350_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_CategoryDL_v1350_2 = {
	"ue-CategoryDL-v1350",
	"ue-CategoryDL-v1350",
	&asn_OP_NativeEnumerated,
	asn_DEF_ue_CategoryDL_v1350_tags_2,
	sizeof(asn_DEF_ue_CategoryDL_v1350_tags_2)
		/sizeof(asn_DEF_ue_CategoryDL_v1350_tags_2[0]) - 1, /* 1 */
	asn_DEF_ue_CategoryDL_v1350_tags_2,	/* Same as above */
	sizeof(asn_DEF_ue_CategoryDL_v1350_tags_2)
		/sizeof(asn_DEF_ue_CategoryDL_v1350_tags_2[0]), /* 2 */
	{ &asn_OER_type_ue_CategoryDL_v1350_constr_2, &asn_PER_type_ue_CategoryDL_v1350_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ue_CategoryDL_v1350_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ue_CategoryUL_v1350_value2enum_4[] = {
	{ 0,	6,	"oneBis" }
};
static const unsigned int asn_MAP_ue_CategoryUL_v1350_enum2value_4[] = {
	0	/* oneBis(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ue_CategoryUL_v1350_specs_4 = {
	asn_MAP_ue_CategoryUL_v1350_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_ue_CategoryUL_v1350_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ue_CategoryUL_v1350_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_CategoryUL_v1350_4 = {
	"ue-CategoryUL-v1350",
	"ue-CategoryUL-v1350",
	&asn_OP_NativeEnumerated,
	asn_DEF_ue_CategoryUL_v1350_tags_4,
	sizeof(asn_DEF_ue_CategoryUL_v1350_tags_4)
		/sizeof(asn_DEF_ue_CategoryUL_v1350_tags_4[0]) - 1, /* 1 */
	asn_DEF_ue_CategoryUL_v1350_tags_4,	/* Same as above */
	sizeof(asn_DEF_ue_CategoryUL_v1350_tags_4)
		/sizeof(asn_DEF_ue_CategoryUL_v1350_tags_4[0]), /* 2 */
	{ &asn_OER_type_ue_CategoryUL_v1350_constr_4, &asn_PER_type_ue_CategoryUL_v1350_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ue_CategoryUL_v1350_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_UE_EUTRA_Capability_v1350_IEs_1[] = {
	{ ATF_POINTER, 2, offsetof(struct UE_EUTRA_Capability_v1350_IEs, ue_CategoryDL_v1350),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ue_CategoryDL_v1350_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-CategoryDL-v1350"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v1350_IEs, ue_CategoryUL_v1350),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ue_CategoryUL_v1350_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-CategoryUL-v1350"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_EUTRA_Capability_v1350_IEs, ce_Parameters_v1350),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CE_Parameters_v1350,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ce-Parameters-v1350"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_EUTRA_Capability_v1350_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_EUTRA_Capability_v1360_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_UE_EUTRA_Capability_v1350_IEs_oms_1[] = { 0, 1, 3 };
static const ber_tlv_tag_t asn_DEF_UE_EUTRA_Capability_v1350_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_EUTRA_Capability_v1350_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ue-CategoryDL-v1350 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ue-CategoryUL-v1350 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ce-Parameters-v1350 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_UE_EUTRA_Capability_v1350_IEs_specs_1 = {
	sizeof(struct UE_EUTRA_Capability_v1350_IEs),
	offsetof(struct UE_EUTRA_Capability_v1350_IEs, _asn_ctx),
	asn_MAP_UE_EUTRA_Capability_v1350_IEs_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_UE_EUTRA_Capability_v1350_IEs_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1350_IEs = {
	"UE-EUTRA-Capability-v1350-IEs",
	"UE-EUTRA-Capability-v1350-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_UE_EUTRA_Capability_v1350_IEs_tags_1,
	sizeof(asn_DEF_UE_EUTRA_Capability_v1350_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1350_IEs_tags_1[0]), /* 1 */
	asn_DEF_UE_EUTRA_Capability_v1350_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_EUTRA_Capability_v1350_IEs_tags_1)
		/sizeof(asn_DEF_UE_EUTRA_Capability_v1350_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UE_EUTRA_Capability_v1350_IEs_1,
	4,	/* Elements count */
	&asn_SPC_UE_EUTRA_Capability_v1350_IEs_specs_1	/* Additional specs */
};

