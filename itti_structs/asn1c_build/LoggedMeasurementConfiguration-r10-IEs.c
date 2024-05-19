/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "LoggedMeasurementConfiguration-r10-IEs.h"

static int
memb_traceRecordingSessionRef_r10_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 2)) {
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
memb_tce_Id_r10_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 1)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_traceRecordingSessionRef_r10_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	2	/* (SIZE(2..2)) */};
static asn_per_constraints_t asn_PER_memb_traceRecordingSessionRef_r10_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_tce_Id_r10_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	1	/* (SIZE(1..1)) */};
static asn_per_constraints_t asn_PER_memb_tce_Id_r10_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  1,  1 }	/* (SIZE(1..1)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_LoggedMeasurementConfiguration_r10_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasurementConfiguration_r10_IEs, traceReference_r10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TraceReference_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"traceReference-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasurementConfiguration_r10_IEs, traceRecordingSessionRef_r10),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_traceRecordingSessionRef_r10_constr_3, &asn_PER_memb_traceRecordingSessionRef_r10_constr_3,  memb_traceRecordingSessionRef_r10_constraint_1 },
		0, 0, /* No default value */
		"traceRecordingSessionRef-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasurementConfiguration_r10_IEs, tce_Id_r10),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ &asn_OER_memb_tce_Id_r10_constr_4, &asn_PER_memb_tce_Id_r10_constr_4,  memb_tce_Id_r10_constraint_1 },
		0, 0, /* No default value */
		"tce-Id-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasurementConfiguration_r10_IEs, absoluteTimeInfo_r10),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_AbsoluteTimeInfo_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"absoluteTimeInfo-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct LoggedMeasurementConfiguration_r10_IEs, areaConfiguration_r10),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_AreaConfiguration_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"areaConfiguration-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasurementConfiguration_r10_IEs, loggingDuration_r10),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LoggingDuration_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"loggingDuration-r10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct LoggedMeasurementConfiguration_r10_IEs, loggingInterval_r10),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LoggingInterval_r10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"loggingInterval-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct LoggedMeasurementConfiguration_r10_IEs, nonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LoggedMeasurementConfiguration_v1080_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nonCriticalExtension"
		},
};
static const int asn_MAP_LoggedMeasurementConfiguration_r10_IEs_oms_1[] = { 4, 7 };
static const ber_tlv_tag_t asn_DEF_LoggedMeasurementConfiguration_r10_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_LoggedMeasurementConfiguration_r10_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* traceReference-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* traceRecordingSessionRef-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tce-Id-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* absoluteTimeInfo-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* areaConfiguration-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* loggingDuration-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* loggingInterval-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* nonCriticalExtension */
};
asn_SEQUENCE_specifics_t asn_SPC_LoggedMeasurementConfiguration_r10_IEs_specs_1 = {
	sizeof(struct LoggedMeasurementConfiguration_r10_IEs),
	offsetof(struct LoggedMeasurementConfiguration_r10_IEs, _asn_ctx),
	asn_MAP_LoggedMeasurementConfiguration_r10_IEs_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_LoggedMeasurementConfiguration_r10_IEs_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_LoggedMeasurementConfiguration_r10_IEs = {
	"LoggedMeasurementConfiguration-r10-IEs",
	"LoggedMeasurementConfiguration-r10-IEs",
	&asn_OP_SEQUENCE,
	asn_DEF_LoggedMeasurementConfiguration_r10_IEs_tags_1,
	sizeof(asn_DEF_LoggedMeasurementConfiguration_r10_IEs_tags_1)
		/sizeof(asn_DEF_LoggedMeasurementConfiguration_r10_IEs_tags_1[0]), /* 1 */
	asn_DEF_LoggedMeasurementConfiguration_r10_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_LoggedMeasurementConfiguration_r10_IEs_tags_1)
		/sizeof(asn_DEF_LoggedMeasurementConfiguration_r10_IEs_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_LoggedMeasurementConfiguration_r10_IEs_1,
	8,	/* Elements count */
	&asn_SPC_LoggedMeasurementConfiguration_r10_IEs_specs_1	/* Additional specs */
};

