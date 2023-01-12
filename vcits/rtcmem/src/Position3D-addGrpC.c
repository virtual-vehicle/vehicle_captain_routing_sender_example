/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "/tmp/gen_env/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/rtcmem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=RTCMEM`
 */

#include "Position3D-addGrpC.h"

asn_TYPE_member_t asn_MBR_Position3D_addGrpC_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Position3D_addGrpC, altitude),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Altitude,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"altitude"
		},
};
static const ber_tlv_tag_t asn_DEF_Position3D_addGrpC_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Position3D_addGrpC_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* altitude */
};
asn_SEQUENCE_specifics_t asn_SPC_Position3D_addGrpC_specs_1 = {
	sizeof(struct Position3D_addGrpC),
	offsetof(struct Position3D_addGrpC, _asn_ctx),
	asn_MAP_Position3D_addGrpC_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Position3D_addGrpC = {
	"Position3D-addGrpC",
	"Position3D-addGrpC",
	&asn_OP_SEQUENCE,
	asn_DEF_Position3D_addGrpC_tags_1,
	sizeof(asn_DEF_Position3D_addGrpC_tags_1)
		/sizeof(asn_DEF_Position3D_addGrpC_tags_1[0]), /* 1 */
	asn_DEF_Position3D_addGrpC_tags_1,	/* Same as above */
	sizeof(asn_DEF_Position3D_addGrpC_tags_1)
		/sizeof(asn_DEF_Position3D_addGrpC_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Position3D_addGrpC_1,
	1,	/* Elements count */
	&asn_SPC_Position3D_addGrpC_specs_1	/* Additional specs */
};

