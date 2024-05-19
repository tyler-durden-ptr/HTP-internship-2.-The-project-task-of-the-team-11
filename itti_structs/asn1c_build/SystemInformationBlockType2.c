/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "SystemInformationBlockType2.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
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

static asn_oer_constraints_t asn_OER_type_ul_Bandwidth_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ul_Bandwidth_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ac_BarringSkipForMMTELVoice_r12_constr_25 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ac_BarringSkipForMMTELVoice_r12_constr_25 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ac_BarringSkipForMMTELVideo_r12_constr_27 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ac_BarringSkipForMMTELVideo_r12_constr_27 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ac_BarringSkipForSMS_r12_constr_29 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ac_BarringSkipForSMS_r12_constr_29 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_voiceServiceCauseIndication_r12_constr_32 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_voiceServiceCauseIndication_r12_constr_32 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_useFullResumeID_r13_constr_39 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_useFullResumeID_r13_constr_39 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_unicastFreqHoppingInd_r13_constr_41 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_unicastFreqHoppingInd_r13_constr_41 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_videoServiceCauseIndication_r14_constr_44 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_videoServiceCauseIndication_r14_constr_44 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_lateNonCriticalExtension_constr_21 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(0..MAX)) */};
static asn_per_constraints_t asn_PER_memb_lateNonCriticalExtension_constr_21 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_SEMI_CONSTRAINED,	-1, -1,  0,  0 }	/* (SIZE(0..MAX)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ac_BarringInfo_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType2__ac_BarringInfo, ac_BarringForEmergency),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ac-BarringForEmergency"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType2__ac_BarringInfo, ac_BarringForMO_Signalling),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AC_BarringConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ac-BarringForMO-Signalling"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType2__ac_BarringInfo, ac_BarringForMO_Data),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AC_BarringConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ac-BarringForMO-Data"
		},
};
static const int asn_MAP_ac_BarringInfo_oms_2[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_ac_BarringInfo_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ac_BarringInfo_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ac-BarringForEmergency */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ac-BarringForMO-Signalling */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ac-BarringForMO-Data */
};
static asn_SEQUENCE_specifics_t asn_SPC_ac_BarringInfo_specs_2 = {
	sizeof(struct SystemInformationBlockType2__ac_BarringInfo),
	offsetof(struct SystemInformationBlockType2__ac_BarringInfo, _asn_ctx),
	asn_MAP_ac_BarringInfo_tag2el_2,
	3,	/* Count of tags in the map */
	asn_MAP_ac_BarringInfo_oms_2,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ac_BarringInfo_2 = {
	"ac-BarringInfo",
	"ac-BarringInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_ac_BarringInfo_tags_2,
	sizeof(asn_DEF_ac_BarringInfo_tags_2)
		/sizeof(asn_DEF_ac_BarringInfo_tags_2[0]) - 1, /* 1 */
	asn_DEF_ac_BarringInfo_tags_2,	/* Same as above */
	sizeof(asn_DEF_ac_BarringInfo_tags_2)
		/sizeof(asn_DEF_ac_BarringInfo_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ac_BarringInfo_2,
	3,	/* Elements count */
	&asn_SPC_ac_BarringInfo_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ul_Bandwidth_value2enum_10[] = {
	{ 0,	2,	"n6" },
	{ 1,	3,	"n15" },
	{ 2,	3,	"n25" },
	{ 3,	3,	"n50" },
	{ 4,	3,	"n75" },
	{ 5,	4,	"n100" }
};
static const unsigned int asn_MAP_ul_Bandwidth_enum2value_10[] = {
	5,	/* n100(5) */
	1,	/* n15(1) */
	2,	/* n25(2) */
	3,	/* n50(3) */
	0,	/* n6(0) */
	4	/* n75(4) */
};
static const asn_INTEGER_specifics_t asn_SPC_ul_Bandwidth_specs_10 = {
	asn_MAP_ul_Bandwidth_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_ul_Bandwidth_enum2value_10,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ul_Bandwidth_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_Bandwidth_10 = {
	"ul-Bandwidth",
	"ul-Bandwidth",
	&asn_OP_NativeEnumerated,
	asn_DEF_ul_Bandwidth_tags_10,
	sizeof(asn_DEF_ul_Bandwidth_tags_10)
		/sizeof(asn_DEF_ul_Bandwidth_tags_10[0]) - 1, /* 1 */
	asn_DEF_ul_Bandwidth_tags_10,	/* Same as above */
	sizeof(asn_DEF_ul_Bandwidth_tags_10)
		/sizeof(asn_DEF_ul_Bandwidth_tags_10[0]), /* 2 */
	{ &asn_OER_type_ul_Bandwidth_constr_10, &asn_PER_type_ul_Bandwidth_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ul_Bandwidth_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_freqInfo_8[] = {
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType2__freqInfo, ul_CarrierFreq),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ARFCN_ValueEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-CarrierFreq"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType2__freqInfo, ul_Bandwidth),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ul_Bandwidth_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-Bandwidth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType2__freqInfo, additionalSpectrumEmission),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AdditionalSpectrumEmission,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"additionalSpectrumEmission"
		},
};
static const int asn_MAP_freqInfo_oms_8[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_freqInfo_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_freqInfo_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-CarrierFreq */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-Bandwidth */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* additionalSpectrumEmission */
};
static asn_SEQUENCE_specifics_t asn_SPC_freqInfo_specs_8 = {
	sizeof(struct SystemInformationBlockType2__freqInfo),
	offsetof(struct SystemInformationBlockType2__freqInfo, _asn_ctx),
	asn_MAP_freqInfo_tag2el_8,
	3,	/* Count of tags in the map */
	asn_MAP_freqInfo_oms_8,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_freqInfo_8 = {
	"freqInfo",
	"freqInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_freqInfo_tags_8,
	sizeof(asn_DEF_freqInfo_tags_8)
		/sizeof(asn_DEF_freqInfo_tags_8[0]) - 1, /* 1 */
	asn_DEF_freqInfo_tags_8,	/* Same as above */
	sizeof(asn_DEF_freqInfo_tags_8)
		/sizeof(asn_DEF_freqInfo_tags_8[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_freqInfo_8,
	3,	/* Elements count */
	&asn_SPC_freqInfo_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ac_BarringSkipForMMTELVoice_r12_value2enum_25[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_ac_BarringSkipForMMTELVoice_r12_enum2value_25[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ac_BarringSkipForMMTELVoice_r12_specs_25 = {
	asn_MAP_ac_BarringSkipForMMTELVoice_r12_value2enum_25,	/* "tag" => N; sorted by tag */
	asn_MAP_ac_BarringSkipForMMTELVoice_r12_enum2value_25,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ac_BarringSkipForMMTELVoice_r12_tags_25[] = {
	(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ac_BarringSkipForMMTELVoice_r12_25 = {
	"ac-BarringSkipForMMTELVoice-r12",
	"ac-BarringSkipForMMTELVoice-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_ac_BarringSkipForMMTELVoice_r12_tags_25,
	sizeof(asn_DEF_ac_BarringSkipForMMTELVoice_r12_tags_25)
		/sizeof(asn_DEF_ac_BarringSkipForMMTELVoice_r12_tags_25[0]) - 1, /* 1 */
	asn_DEF_ac_BarringSkipForMMTELVoice_r12_tags_25,	/* Same as above */
	sizeof(asn_DEF_ac_BarringSkipForMMTELVoice_r12_tags_25)
		/sizeof(asn_DEF_ac_BarringSkipForMMTELVoice_r12_tags_25[0]), /* 2 */
	{ &asn_OER_type_ac_BarringSkipForMMTELVoice_r12_constr_25, &asn_PER_type_ac_BarringSkipForMMTELVoice_r12_constr_25, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ac_BarringSkipForMMTELVoice_r12_specs_25	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ac_BarringSkipForMMTELVideo_r12_value2enum_27[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_ac_BarringSkipForMMTELVideo_r12_enum2value_27[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ac_BarringSkipForMMTELVideo_r12_specs_27 = {
	asn_MAP_ac_BarringSkipForMMTELVideo_r12_value2enum_27,	/* "tag" => N; sorted by tag */
	asn_MAP_ac_BarringSkipForMMTELVideo_r12_enum2value_27,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ac_BarringSkipForMMTELVideo_r12_tags_27[] = {
	(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ac_BarringSkipForMMTELVideo_r12_27 = {
	"ac-BarringSkipForMMTELVideo-r12",
	"ac-BarringSkipForMMTELVideo-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_ac_BarringSkipForMMTELVideo_r12_tags_27,
	sizeof(asn_DEF_ac_BarringSkipForMMTELVideo_r12_tags_27)
		/sizeof(asn_DEF_ac_BarringSkipForMMTELVideo_r12_tags_27[0]) - 1, /* 1 */
	asn_DEF_ac_BarringSkipForMMTELVideo_r12_tags_27,	/* Same as above */
	sizeof(asn_DEF_ac_BarringSkipForMMTELVideo_r12_tags_27)
		/sizeof(asn_DEF_ac_BarringSkipForMMTELVideo_r12_tags_27[0]), /* 2 */
	{ &asn_OER_type_ac_BarringSkipForMMTELVideo_r12_constr_27, &asn_PER_type_ac_BarringSkipForMMTELVideo_r12_constr_27, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ac_BarringSkipForMMTELVideo_r12_specs_27	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ac_BarringSkipForSMS_r12_value2enum_29[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_ac_BarringSkipForSMS_r12_enum2value_29[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ac_BarringSkipForSMS_r12_specs_29 = {
	asn_MAP_ac_BarringSkipForSMS_r12_value2enum_29,	/* "tag" => N; sorted by tag */
	asn_MAP_ac_BarringSkipForSMS_r12_enum2value_29,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ac_BarringSkipForSMS_r12_tags_29[] = {
	(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ac_BarringSkipForSMS_r12_29 = {
	"ac-BarringSkipForSMS-r12",
	"ac-BarringSkipForSMS-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_ac_BarringSkipForSMS_r12_tags_29,
	sizeof(asn_DEF_ac_BarringSkipForSMS_r12_tags_29)
		/sizeof(asn_DEF_ac_BarringSkipForSMS_r12_tags_29[0]) - 1, /* 1 */
	asn_DEF_ac_BarringSkipForSMS_r12_tags_29,	/* Same as above */
	sizeof(asn_DEF_ac_BarringSkipForSMS_r12_tags_29)
		/sizeof(asn_DEF_ac_BarringSkipForSMS_r12_tags_29[0]), /* 2 */
	{ &asn_OER_type_ac_BarringSkipForSMS_r12_constr_29, &asn_PER_type_ac_BarringSkipForSMS_r12_constr_29, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ac_BarringSkipForSMS_r12_specs_29	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_voiceServiceCauseIndication_r12_value2enum_32[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_voiceServiceCauseIndication_r12_enum2value_32[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_voiceServiceCauseIndication_r12_specs_32 = {
	asn_MAP_voiceServiceCauseIndication_r12_value2enum_32,	/* "tag" => N; sorted by tag */
	asn_MAP_voiceServiceCauseIndication_r12_enum2value_32,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_voiceServiceCauseIndication_r12_tags_32[] = {
	(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_voiceServiceCauseIndication_r12_32 = {
	"voiceServiceCauseIndication-r12",
	"voiceServiceCauseIndication-r12",
	&asn_OP_NativeEnumerated,
	asn_DEF_voiceServiceCauseIndication_r12_tags_32,
	sizeof(asn_DEF_voiceServiceCauseIndication_r12_tags_32)
		/sizeof(asn_DEF_voiceServiceCauseIndication_r12_tags_32[0]) - 1, /* 1 */
	asn_DEF_voiceServiceCauseIndication_r12_tags_32,	/* Same as above */
	sizeof(asn_DEF_voiceServiceCauseIndication_r12_tags_32)
		/sizeof(asn_DEF_voiceServiceCauseIndication_r12_tags_32[0]), /* 2 */
	{ &asn_OER_type_voiceServiceCauseIndication_r12_constr_32, &asn_PER_type_voiceServiceCauseIndication_r12_constr_32, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_voiceServiceCauseIndication_r12_specs_32	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_useFullResumeID_r13_value2enum_39[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_useFullResumeID_r13_enum2value_39[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_useFullResumeID_r13_specs_39 = {
	asn_MAP_useFullResumeID_r13_value2enum_39,	/* "tag" => N; sorted by tag */
	asn_MAP_useFullResumeID_r13_enum2value_39,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_useFullResumeID_r13_tags_39[] = {
	(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_useFullResumeID_r13_39 = {
	"useFullResumeID-r13",
	"useFullResumeID-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_useFullResumeID_r13_tags_39,
	sizeof(asn_DEF_useFullResumeID_r13_tags_39)
		/sizeof(asn_DEF_useFullResumeID_r13_tags_39[0]) - 1, /* 1 */
	asn_DEF_useFullResumeID_r13_tags_39,	/* Same as above */
	sizeof(asn_DEF_useFullResumeID_r13_tags_39)
		/sizeof(asn_DEF_useFullResumeID_r13_tags_39[0]), /* 2 */
	{ &asn_OER_type_useFullResumeID_r13_constr_39, &asn_PER_type_useFullResumeID_r13_constr_39, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_useFullResumeID_r13_specs_39	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_unicastFreqHoppingInd_r13_value2enum_41[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_unicastFreqHoppingInd_r13_enum2value_41[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_unicastFreqHoppingInd_r13_specs_41 = {
	asn_MAP_unicastFreqHoppingInd_r13_value2enum_41,	/* "tag" => N; sorted by tag */
	asn_MAP_unicastFreqHoppingInd_r13_enum2value_41,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_unicastFreqHoppingInd_r13_tags_41[] = {
	(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_unicastFreqHoppingInd_r13_41 = {
	"unicastFreqHoppingInd-r13",
	"unicastFreqHoppingInd-r13",
	&asn_OP_NativeEnumerated,
	asn_DEF_unicastFreqHoppingInd_r13_tags_41,
	sizeof(asn_DEF_unicastFreqHoppingInd_r13_tags_41)
		/sizeof(asn_DEF_unicastFreqHoppingInd_r13_tags_41[0]) - 1, /* 1 */
	asn_DEF_unicastFreqHoppingInd_r13_tags_41,	/* Same as above */
	sizeof(asn_DEF_unicastFreqHoppingInd_r13_tags_41)
		/sizeof(asn_DEF_unicastFreqHoppingInd_r13_tags_41[0]), /* 2 */
	{ &asn_OER_type_unicastFreqHoppingInd_r13_constr_41, &asn_PER_type_unicastFreqHoppingInd_r13_constr_41, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_unicastFreqHoppingInd_r13_specs_41	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_videoServiceCauseIndication_r14_value2enum_44[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_videoServiceCauseIndication_r14_enum2value_44[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_videoServiceCauseIndication_r14_specs_44 = {
	asn_MAP_videoServiceCauseIndication_r14_value2enum_44,	/* "tag" => N; sorted by tag */
	asn_MAP_videoServiceCauseIndication_r14_enum2value_44,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_videoServiceCauseIndication_r14_tags_44[] = {
	(ASN_TAG_CLASS_CONTEXT | (23 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_videoServiceCauseIndication_r14_44 = {
	"videoServiceCauseIndication-r14",
	"videoServiceCauseIndication-r14",
	&asn_OP_NativeEnumerated,
	asn_DEF_videoServiceCauseIndication_r14_tags_44,
	sizeof(asn_DEF_videoServiceCauseIndication_r14_tags_44)
		/sizeof(asn_DEF_videoServiceCauseIndication_r14_tags_44[0]) - 1, /* 1 */
	asn_DEF_videoServiceCauseIndication_r14_tags_44,	/* Same as above */
	sizeof(asn_DEF_videoServiceCauseIndication_r14_tags_44)
		/sizeof(asn_DEF_videoServiceCauseIndication_r14_tags_44[0]), /* 2 */
	{ &asn_OER_type_videoServiceCauseIndication_r14_constr_44, &asn_PER_type_videoServiceCauseIndication_r14_constr_44, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_videoServiceCauseIndication_r14_specs_44	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_SystemInformationBlockType2_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType2, ac_BarringInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_ac_BarringInfo_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ac-BarringInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType2, radioResourceConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RadioResourceConfigCommonSIB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"radioResourceConfigCommon"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType2, ue_TimersAndConstants),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_TimersAndConstants,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ue-TimersAndConstants"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType2, freqInfo),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_freqInfo_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"freqInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType2, mbsfn_SubframeConfigList),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBSFN_SubframeConfigList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbsfn-SubframeConfigList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemInformationBlockType2, timeAlignmentTimerCommon),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeAlignmentTimer,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeAlignmentTimerCommon"
		},
	{ ATF_POINTER, 18, offsetof(struct SystemInformationBlockType2, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_lateNonCriticalExtension_constr_21, &asn_PER_memb_lateNonCriticalExtension_constr_21,  memb_lateNonCriticalExtension_constraint_1 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 17, offsetof(struct SystemInformationBlockType2, ssac_BarringForMMTEL_Voice_r9),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AC_BarringConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssac-BarringForMMTEL-Voice-r9"
		},
	{ ATF_POINTER, 16, offsetof(struct SystemInformationBlockType2, ssac_BarringForMMTEL_Video_r9),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AC_BarringConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ssac-BarringForMMTEL-Video-r9"
		},
	{ ATF_POINTER, 15, offsetof(struct SystemInformationBlockType2, ac_BarringForCSFB_r10),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AC_BarringConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ac-BarringForCSFB-r10"
		},
	{ ATF_POINTER, 14, offsetof(struct SystemInformationBlockType2, ac_BarringSkipForMMTELVoice_r12),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ac_BarringSkipForMMTELVoice_r12_25,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ac-BarringSkipForMMTELVoice-r12"
		},
	{ ATF_POINTER, 13, offsetof(struct SystemInformationBlockType2, ac_BarringSkipForMMTELVideo_r12),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ac_BarringSkipForMMTELVideo_r12_27,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ac-BarringSkipForMMTELVideo-r12"
		},
	{ ATF_POINTER, 12, offsetof(struct SystemInformationBlockType2, ac_BarringSkipForSMS_r12),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ac_BarringSkipForSMS_r12_29,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ac-BarringSkipForSMS-r12"
		},
	{ ATF_POINTER, 11, offsetof(struct SystemInformationBlockType2, ac_BarringPerPLMN_List_r12),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AC_BarringPerPLMN_List_r12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ac-BarringPerPLMN-List-r12"
		},
	{ ATF_POINTER, 10, offsetof(struct SystemInformationBlockType2, voiceServiceCauseIndication_r12),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_voiceServiceCauseIndication_r12_32,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"voiceServiceCauseIndication-r12"
		},
	{ ATF_POINTER, 9, offsetof(struct SystemInformationBlockType2, acdc_BarringForCommon_r13),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ACDC_BarringForCommon_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"acdc-BarringForCommon-r13"
		},
	{ ATF_POINTER, 8, offsetof(struct SystemInformationBlockType2, acdc_BarringPerPLMN_List_r13),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ACDC_BarringPerPLMN_List_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"acdc-BarringPerPLMN-List-r13"
		},
	{ ATF_POINTER, 7, offsetof(struct SystemInformationBlockType2, udt_RestrictingForCommon_r13),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UDT_Restricting_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"udt-RestrictingForCommon-r13"
		},
	{ ATF_POINTER, 6, offsetof(struct SystemInformationBlockType2, udt_RestrictingPerPLMN_List_r13),
		(ASN_TAG_CLASS_CONTEXT | (18 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UDT_RestrictingPerPLMN_List_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"udt-RestrictingPerPLMN-List-r13"
		},
	{ ATF_POINTER, 5, offsetof(struct SystemInformationBlockType2, cIoT_EPS_OptimisationInfo_r13),
		(ASN_TAG_CLASS_CONTEXT | (19 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CIOT_EPS_OptimisationInfo_r13,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cIoT-EPS-OptimisationInfo-r13"
		},
	{ ATF_POINTER, 4, offsetof(struct SystemInformationBlockType2, useFullResumeID_r13),
		(ASN_TAG_CLASS_CONTEXT | (20 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_useFullResumeID_r13_39,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"useFullResumeID-r13"
		},
	{ ATF_POINTER, 3, offsetof(struct SystemInformationBlockType2, unicastFreqHoppingInd_r13),
		(ASN_TAG_CLASS_CONTEXT | (21 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_unicastFreqHoppingInd_r13_41,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"unicastFreqHoppingInd-r13"
		},
	{ ATF_POINTER, 2, offsetof(struct SystemInformationBlockType2, mbsfn_SubframeConfigList_v1430),
		(ASN_TAG_CLASS_CONTEXT | (22 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBSFN_SubframeConfigList_v1430,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"mbsfn-SubframeConfigList-v1430"
		},
	{ ATF_POINTER, 1, offsetof(struct SystemInformationBlockType2, videoServiceCauseIndication_r14),
		(ASN_TAG_CLASS_CONTEXT | (23 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_videoServiceCauseIndication_r14_44,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"videoServiceCauseIndication-r14"
		},
};
static const int asn_MAP_SystemInformationBlockType2_oms_1[] = { 0, 4, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23 };
static const ber_tlv_tag_t asn_DEF_SystemInformationBlockType2_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SystemInformationBlockType2_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ac-BarringInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* radioResourceConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ue-TimersAndConstants */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* freqInfo */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* mbsfn-SubframeConfigList */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* timeAlignmentTimerCommon */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ssac-BarringForMMTEL-Voice-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* ssac-BarringForMMTEL-Video-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* ac-BarringForCSFB-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* ac-BarringSkipForMMTELVoice-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* ac-BarringSkipForMMTELVideo-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* ac-BarringSkipForSMS-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* ac-BarringPerPLMN-List-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* voiceServiceCauseIndication-r12 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* acdc-BarringForCommon-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* acdc-BarringPerPLMN-List-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 }, /* udt-RestrictingForCommon-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (18 << 2)), 18, 0, 0 }, /* udt-RestrictingPerPLMN-List-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (19 << 2)), 19, 0, 0 }, /* cIoT-EPS-OptimisationInfo-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (20 << 2)), 20, 0, 0 }, /* useFullResumeID-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (21 << 2)), 21, 0, 0 }, /* unicastFreqHoppingInd-r13 */
    { (ASN_TAG_CLASS_CONTEXT | (22 << 2)), 22, 0, 0 }, /* mbsfn-SubframeConfigList-v1430 */
    { (ASN_TAG_CLASS_CONTEXT | (23 << 2)), 23, 0, 0 } /* videoServiceCauseIndication-r14 */
};
asn_SEQUENCE_specifics_t asn_SPC_SystemInformationBlockType2_specs_1 = {
	sizeof(struct SystemInformationBlockType2),
	offsetof(struct SystemInformationBlockType2, _asn_ctx),
	asn_MAP_SystemInformationBlockType2_tag2el_1,
	24,	/* Count of tags in the map */
	asn_MAP_SystemInformationBlockType2_oms_1,	/* Optional members */
	2, 18,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType2 = {
	"SystemInformationBlockType2",
	"SystemInformationBlockType2",
	&asn_OP_SEQUENCE,
	asn_DEF_SystemInformationBlockType2_tags_1,
	sizeof(asn_DEF_SystemInformationBlockType2_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType2_tags_1[0]), /* 1 */
	asn_DEF_SystemInformationBlockType2_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemInformationBlockType2_tags_1)
		/sizeof(asn_DEF_SystemInformationBlockType2_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SystemInformationBlockType2_1,
	24,	/* Elements count */
	&asn_SPC_SystemInformationBlockType2_specs_1	/* Additional specs */
};

