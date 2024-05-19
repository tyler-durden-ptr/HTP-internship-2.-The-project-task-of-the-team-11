/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "RadioResourceConfigDedicated.h"

static asn_oer_constraints_t asn_OER_type_mac_MainConfig_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_mac_MainConfig_constr_5 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_mac_MainConfig_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigDedicated__mac_MainConfig, choice.explicitValue),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MAC_MainConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"explicitValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigDedicated__mac_MainConfig, choice.defaultValue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"defaultValue"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_mac_MainConfig_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* explicitValue */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* defaultValue */
};
static asn_CHOICE_specifics_t asn_SPC_mac_MainConfig_specs_5 = {
	sizeof(struct RadioResourceConfigDedicated__mac_MainConfig),
	offsetof(struct RadioResourceConfigDedicated__mac_MainConfig, _asn_ctx),
	offsetof(struct RadioResourceConfigDedicated__mac_MainConfig, present),
	sizeof(((struct RadioResourceConfigDedicated__mac_MainConfig *)0)->present),
	asn_MAP_mac_MainConfig_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mac_MainConfig_5 = {
	"mac-MainConfig",
	"mac-MainConfig",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_mac_MainConfig_constr_5, &asn_PER_type_mac_MainConfig_constr_5, CHOICE_constraint },
	asn_MBR_mac_MainConfig_5,
	2,	/* Elements count */
	&asn_SPC_mac_MainConfig_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RadioResourceConfigDedicated_1[] = {
	{ ATF_POINTER, 13, offsetof(struct RadioResourceConfigDedicated, srb_ToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRB_ToAddModList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"srb-ToAddModList"
		},
	{ ATF_POINTER, 12, offsetof(struct RadioResourceConfigDedicated, drb_ToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_ToAddModList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-ToAddModList"
		},
	{ ATF_POINTER, 11, offsetof(struct RadioResourceConfigDedicated, drb_ToReleaseList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_ToReleaseList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"drb-ToReleaseList"
		},
	{ ATF_POINTER, 10, offsetof(struct RadioResourceConfigDedicated, mac_MainConfig),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_mac_MainConfig_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mac-MainConfig"
		},
	{ ATF_POINTER, 9, offsetof(struct RadioResourceConfigDedicated, sps_Config),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SPS_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sps-Config"
		},
	{ ATF_POINTER, 8, offsetof(struct RadioResourceConfigDedicated, physicalConfigDedicated),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysicalConfigDedicated,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physicalConfigDedicated"
		},
	{ ATF_POINTER, 7, offsetof(struct RadioResourceConfigDedicated, rlf_TimersAndConstants_r9),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RLF_TimersAndConstants_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlf-TimersAndConstants-r9"
		},
	{ ATF_POINTER, 6, offsetof(struct RadioResourceConfigDedicated, measSubframePatternPCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MeasSubframePatternPCell_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measSubframePatternPCell-r10"
		},
	{ ATF_POINTER, 5, offsetof(struct RadioResourceConfigDedicated, neighCellsCRS_Info_r11),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NeighCellsCRS_Info_r11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"neighCellsCRS-Info-r11"
		},
	{ ATF_POINTER, 4, offsetof(struct RadioResourceConfigDedicated, naics_Info_r12),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NAICS_AssistanceInfo_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"naics-Info-r12"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioResourceConfigDedicated, neighCellsCRS_Info_r13),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NeighCellsCRS_Info_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"neighCellsCRS-Info-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioResourceConfigDedicated, rlf_TimersAndConstants_r13),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RLF_TimersAndConstants_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rlf-TimersAndConstants-r13"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigDedicated, sps_Config_v1430),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SPS_Config_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sps-Config-v1430"
		},
};
static const int asn_MAP_RadioResourceConfigDedicated_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
static const ber_tlv_tag_t asn_DEF_RadioResourceConfigDedicated_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RadioResourceConfigDedicated_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srb-ToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drb-ToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* drb-ToReleaseList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* mac-MainConfig */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sps-Config */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* physicalConfigDedicated */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* rlf-TimersAndConstants-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* measSubframePatternPCell-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* neighCellsCRS-Info-r11 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* naics-Info-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* neighCellsCRS-Info-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* rlf-TimersAndConstants-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 } /* sps-Config-v1430 */
};
asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigDedicated_specs_1 = {
	sizeof(struct RadioResourceConfigDedicated),
	offsetof(struct RadioResourceConfigDedicated, _asn_ctx),
	asn_MAP_RadioResourceConfigDedicated_tag2el_1,
	13,	/* Count of tags in the map */
	asn_MAP_RadioResourceConfigDedicated_oms_1,	/* Optional members */
	6, 7,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigDedicated = {
	"RadioResourceConfigDedicated",
	"RadioResourceConfigDedicated",
	&asn_OP_SEQUENCE,
	asn_DEF_RadioResourceConfigDedicated_tags_1,
	sizeof(asn_DEF_RadioResourceConfigDedicated_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigDedicated_tags_1[0]), /* 1 */
	asn_DEF_RadioResourceConfigDedicated_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioResourceConfigDedicated_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigDedicated_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RadioResourceConfigDedicated_1,
	13,	/* Elements count */
	&asn_SPC_RadioResourceConfigDedicated_specs_1	/* Additional specs */
};

