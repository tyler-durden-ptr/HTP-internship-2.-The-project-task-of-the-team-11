/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "MIMO-CA-ParametersPerBoBCPerTM-r13.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_dmrs_Enhancements_r13_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_dmrs_Enhancements_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_dmrs_Enhancements_r13_value2enum_4[] = {
	{ 0,	9,	"different" }
};
static const unsigned int asn_MAP_dmrs_Enhancements_r13_enum2value_4[] = {
	0	/* different(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_dmrs_Enhancements_r13_specs_4 = {
	asn_MAP_dmrs_Enhancements_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_dmrs_Enhancements_r13_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dmrs_Enhancements_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dmrs_Enhancements_r13_4 = {
	"dmrs-Enhancements-r13",
	"dmrs-Enhancements-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_dmrs_Enhancements_r13_tags_4,
	sizeof(asn_DEF_dmrs_Enhancements_r13_tags_4)
		/sizeof(asn_DEF_dmrs_Enhancements_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_dmrs_Enhancements_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_dmrs_Enhancements_r13_tags_4)
		/sizeof(asn_DEF_dmrs_Enhancements_r13_tags_4[0]), /* 2 */
	{ &asn_OER_type_dmrs_Enhancements_r13_constr_4, &asn_PER_type_dmrs_Enhancements_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dmrs_Enhancements_r13_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MIMO_CA_ParametersPerBoBCPerTM_r13_1[] = {
	{ ATF_POINTER, 3, offsetof(struct MIMO_CA_ParametersPerBoBCPerTM_r13, nonPrecoded_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_NonPrecodedCapabilities_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonPrecoded-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct MIMO_CA_ParametersPerBoBCPerTM_r13, beamformed_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MIMO_BeamformedCapabilityList_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"beamformed-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct MIMO_CA_ParametersPerBoBCPerTM_r13, dmrs_Enhancements_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dmrs_Enhancements_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dmrs-Enhancements-r13"
		},
};
static const int asn_MAP_MIMO_CA_ParametersPerBoBCPerTM_r13_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_MIMO_CA_ParametersPerBoBCPerTM_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MIMO_CA_ParametersPerBoBCPerTM_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nonPrecoded-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* beamformed-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* dmrs-Enhancements-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_MIMO_CA_ParametersPerBoBCPerTM_r13_specs_1 = {
	sizeof(struct MIMO_CA_ParametersPerBoBCPerTM_r13),
	offsetof(struct MIMO_CA_ParametersPerBoBCPerTM_r13, _asn_ctx),
	asn_MAP_MIMO_CA_ParametersPerBoBCPerTM_r13_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MIMO_CA_ParametersPerBoBCPerTM_r13_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MIMO_CA_ParametersPerBoBCPerTM_r13 = {
	"MIMO-CA-ParametersPerBoBCPerTM-r13",
	"MIMO-CA-ParametersPerBoBCPerTM-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_MIMO_CA_ParametersPerBoBCPerTM_r13_tags_1,
	sizeof(asn_DEF_MIMO_CA_ParametersPerBoBCPerTM_r13_tags_1)
		/sizeof(asn_DEF_MIMO_CA_ParametersPerBoBCPerTM_r13_tags_1[0]), /* 1 */
	asn_DEF_MIMO_CA_ParametersPerBoBCPerTM_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_MIMO_CA_ParametersPerBoBCPerTM_r13_tags_1)
		/sizeof(asn_DEF_MIMO_CA_ParametersPerBoBCPerTM_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MIMO_CA_ParametersPerBoBCPerTM_r13_1,
	3,	/* Elements count */
	&asn_SPC_MIMO_CA_ParametersPerBoBCPerTM_r13_specs_1	/* Additional specs */
};

