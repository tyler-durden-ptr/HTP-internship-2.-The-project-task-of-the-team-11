/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "RRCConnectionResume-NB-r13-IEs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_drb_ContinueROHC_r13_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_drb_ContinueROHC_r13_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_drb_ContinueROHC_r13_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_drb_ContinueROHC_r13_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_drb_ContinueROHC_r13_specs_4 = {
	asn_MAP_drb_ContinueROHC_r13_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_drb_ContinueROHC_r13_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_drb_ContinueROHC_r13_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_drb_ContinueROHC_r13_4 = {
	"drb-ContinueROHC-r13",
	"drb-ContinueROHC-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_drb_ContinueROHC_r13_tags_4,
	sizeof(asn_DEF_drb_ContinueROHC_r13_tags_4)
		/sizeof(asn_DEF_drb_ContinueROHC_r13_tags_4[0]) - 1, /* 1 */
	asn_DEF_drb_ContinueROHC_r13_tags_4,	/* Same as above */
	sizeof(asn_DEF_drb_ContinueROHC_r13_tags_4)
		/sizeof(asn_DEF_drb_ContinueROHC_r13_tags_4[0]), /* 2 */
	{ &asn_OER_type_drb_ContinueROHC_r13_constr_4, &asn_PER_type_drb_ContinueROHC_r13_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_drb_ContinueROHC_r13_specs_4	/* Additional specs */
};

static const ber_tlv_tag_t asn_DEF_nonCriticalExtension_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtension_specs_7 = {
	sizeof(struct RRCConnectionResume_NB_r13_IEs__nonCriticalExtension),
	offsetof(struct RRCConnectionResume_NB_r13_IEs__nonCriticalExtension, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtension_7 = {
	"nonCriticalExtension",
	"nonCriticalExtension",
	&asn_OP_SEQUENCE,
	asn_DEF_nonCriticalExtension_tags_7,
	sizeof(asn_DEF_nonCriticalExtension_tags_7)
		/sizeof(asn_DEF_nonCriticalExtension_tags_7[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtension_tags_7,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtension_tags_7)
		/sizeof(asn_DEF_nonCriticalExtension_tags_7[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtension_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RRCConnectionResume_NB_r13_IEs_1[] = {
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionResume_NB_r13_IEs, radioResourceConfigDedicated_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigDedicated_NB_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioResourceConfigDedicated-r13"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionResume_NB_r13_IEs, nextHopChainingCount_r13),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NextHopChainingCount,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nextHopChainingCount-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCConnectionResume_NB_r13_IEs, drb_ContinueROHC_r13),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_drb_ContinueROHC_r13_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-ContinueROHC-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionResume_NB_r13_IEs, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionResume_NB_r13_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_nonCriticalExtension_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_RRCConnectionResume_NB_r13_IEs_oms_1[] = { 0, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_RRCConnectionResume_NB_r13_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionResume_NB_r13_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* radioResourceConfigDedicated-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nextHopChainingCount-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* drb-ContinueROHC-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionResume_NB_r13_IEs_specs_1 = {
	sizeof(struct RRCConnectionResume_NB_r13_IEs),
	offsetof(struct RRCConnectionResume_NB_r13_IEs, _asn_ctx),
	asn_MAP_RRCConnectionResume_NB_r13_IEs_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_RRCConnectionResume_NB_r13_IEs_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionResume_NB_r13_IEs = {
	"RRCConnectionResume-NB-r13-IEs",
	"RRCConnectionResume-NB-r13-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_RRCConnectionResume_NB_r13_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionResume_NB_r13_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionResume_NB_r13_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionResume_NB_r13_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionResume_NB_r13_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionResume_NB_r13_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RRCConnectionResume_NB_r13_IEs_1,
	5,	/* Elements count */
	&asn_SPC_RRCConnectionResume_NB_r13_IEs_specs_1	/* Additional specs */
};

