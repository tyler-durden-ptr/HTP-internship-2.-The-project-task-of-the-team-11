/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#include "MBMS-ServiceInfo-r13.h"

asn_TYPE_member_t asn_MBR_MBMS_ServiceInfo_r13_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_ServiceInfo_r13, tmgi_r13),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TMGI_r9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tmgi-r13"
		},
};
static const ber_tlv_tag_t asn_DEF_MBMS_ServiceInfo_r13_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MBMS_ServiceInfo_r13_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* tmgi-r13 */
};
asn_SEQUENCE_specifics_t asn_SPC_MBMS_ServiceInfo_r13_specs_1 = {
	sizeof(struct MBMS_ServiceInfo_r13),
	offsetof(struct MBMS_ServiceInfo_r13, _asn_ctx),
	asn_MAP_MBMS_ServiceInfo_r13_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_ServiceInfo_r13 = {
	"MBMS-ServiceInfo-r13",
	"MBMS-ServiceInfo-r13",
	&asn_OP_SEQUENCE,
	asn_DEF_MBMS_ServiceInfo_r13_tags_1,
	sizeof(asn_DEF_MBMS_ServiceInfo_r13_tags_1)
		/sizeof(asn_DEF_MBMS_ServiceInfo_r13_tags_1[0]), /* 1 */
	asn_DEF_MBMS_ServiceInfo_r13_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMS_ServiceInfo_r13_tags_1)
		/sizeof(asn_DEF_MBMS_ServiceInfo_r13_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MBMS_ServiceInfo_r13_1,
	1,	/* Elements count */
	&asn_SPC_MBMS_ServiceInfo_r13_specs_1	/* Additional specs */
};

