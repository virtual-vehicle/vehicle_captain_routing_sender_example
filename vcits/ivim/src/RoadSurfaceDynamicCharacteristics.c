/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "/tmp/gen_env/build/asn1/ISO19321IVIv2.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#include "RoadSurfaceDynamicCharacteristics.h"

asn_TYPE_member_t asn_MBR_RoadSurfaceDynamicCharacteristics_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RoadSurfaceDynamicCharacteristics, condition),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Condition,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"condition"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RoadSurfaceDynamicCharacteristics, temperature),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IVI_Temperature,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"temperature"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RoadSurfaceDynamicCharacteristics, iceOrWaterDepth),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Depth,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iceOrWaterDepth"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RoadSurfaceDynamicCharacteristics, treatment),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TreatmentType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"treatment"
		},
};
static const ber_tlv_tag_t asn_DEF_RoadSurfaceDynamicCharacteristics_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RoadSurfaceDynamicCharacteristics_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* condition */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* temperature */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* iceOrWaterDepth */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* treatment */
};
asn_SEQUENCE_specifics_t asn_SPC_RoadSurfaceDynamicCharacteristics_specs_1 = {
	sizeof(struct RoadSurfaceDynamicCharacteristics),
	offsetof(struct RoadSurfaceDynamicCharacteristics, _asn_ctx),
	asn_MAP_RoadSurfaceDynamicCharacteristics_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RoadSurfaceDynamicCharacteristics = {
	"RoadSurfaceDynamicCharacteristics",
	"RoadSurfaceDynamicCharacteristics",
	&asn_OP_SEQUENCE,
	asn_DEF_RoadSurfaceDynamicCharacteristics_tags_1,
	sizeof(asn_DEF_RoadSurfaceDynamicCharacteristics_tags_1)
		/sizeof(asn_DEF_RoadSurfaceDynamicCharacteristics_tags_1[0]), /* 1 */
	asn_DEF_RoadSurfaceDynamicCharacteristics_tags_1,	/* Same as above */
	sizeof(asn_DEF_RoadSurfaceDynamicCharacteristics_tags_1)
		/sizeof(asn_DEF_RoadSurfaceDynamicCharacteristics_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RoadSurfaceDynamicCharacteristics_1,
	4,	/* Elements count */
	&asn_SPC_RoadSurfaceDynamicCharacteristics_specs_1	/* Additional specs */
};

