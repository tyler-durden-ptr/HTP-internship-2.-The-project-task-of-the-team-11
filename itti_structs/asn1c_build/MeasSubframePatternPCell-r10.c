/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "MeasSubframePatternPCell-r10.h"

static asn_oer_constraints_t asn_OER_type_MeasSubframePatternPCell_r10_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_MeasSubframePatternPCell_r10_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_MeasSubframePatternPCell_r10_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasSubframePatternPCell_r10, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasSubframePatternPCell_r10, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MeasSubframePattern_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"setup"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_MeasSubframePatternPCell_r10_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup */
};
asn_CHOICE_specifics_t asn_SPC_MeasSubframePatternPCell_r10_specs_1 = {
	sizeof(struct MeasSubframePatternPCell_r10),
	offsetof(struct MeasSubframePatternPCell_r10, _asn_ctx),
	offsetof(struct MeasSubframePatternPCell_r10, present),
	sizeof(((struct MeasSubframePatternPCell_r10 *)0)->present),
	asn_MAP_MeasSubframePatternPCell_r10_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_MeasSubframePatternPCell_r10 = {
	"MeasSubframePatternPCell-r10",
	"MeasSubframePatternPCell-r10",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_MeasSubframePatternPCell_r10_constr_1, &asn_PER_type_MeasSubframePatternPCell_r10_constr_1, CHOICE_constraint },
	asn_MBR_MeasSubframePatternPCell_r10_1,
	2,	/* Elements count */
	&asn_SPC_MeasSubframePatternPCell_r10_specs_1	/* Additional specs */
};

