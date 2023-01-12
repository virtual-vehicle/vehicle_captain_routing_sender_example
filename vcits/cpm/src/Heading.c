/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps -pdu=CPM`
 */

#include "Heading.h"

asn_TYPE_member_t asn_MBR_Heading_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Heading, headingValue),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HeadingValue,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"headingValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Heading, headingConfidence),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_HeadingConfidence,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"headingConfidence"
		},
};
static const ber_tlv_tag_t asn_DEF_Heading_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Heading_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* headingValue */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* headingConfidence */
};
asn_SEQUENCE_specifics_t asn_SPC_Heading_specs_1 = {
	sizeof(struct Heading),
	offsetof(struct Heading, _asn_ctx),
	asn_MAP_Heading_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Heading = {
	"Heading",
	"Heading",
	&asn_OP_SEQUENCE,
	asn_DEF_Heading_tags_1,
	sizeof(asn_DEF_Heading_tags_1)
		/sizeof(asn_DEF_Heading_tags_1[0]), /* 1 */
	asn_DEF_Heading_tags_1,	/* Same as above */
	sizeof(asn_DEF_Heading_tags_1)
		/sizeof(asn_DEF_Heading_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Heading_1,
	2,	/* Elements count */
	&asn_SPC_Heading_specs_1	/* Additional specs */
};

