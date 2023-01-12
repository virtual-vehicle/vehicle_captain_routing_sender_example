/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/tmp/gen_env/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/srem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SREM`
 */

#include "SignalRequesterInfo.h"

#include "RequestorType.h"
asn_TYPE_member_t asn_MBR_SignalRequesterInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SignalRequesterInfo, id),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_VehicleID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SignalRequesterInfo, request),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RequestID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"request"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SignalRequesterInfo, sequenceNumber),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MsgCount,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sequenceNumber"
		},
	{ ATF_POINTER, 2, offsetof(struct SignalRequesterInfo, role),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BasicVehicleRole,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"role"
		},
	{ ATF_POINTER, 1, offsetof(struct SignalRequesterInfo, typeData),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RequestorType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"typeData"
		},
};
static const int asn_MAP_SignalRequesterInfo_oms_1[] = { 3, 4 };
static const ber_tlv_tag_t asn_DEF_SignalRequesterInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SignalRequesterInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* id */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* request */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sequenceNumber */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* role */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* typeData */
};
asn_SEQUENCE_specifics_t asn_SPC_SignalRequesterInfo_specs_1 = {
	sizeof(struct SignalRequesterInfo),
	offsetof(struct SignalRequesterInfo, _asn_ctx),
	asn_MAP_SignalRequesterInfo_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_SignalRequesterInfo_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	5,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SignalRequesterInfo = {
	"SignalRequesterInfo",
	"SignalRequesterInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_SignalRequesterInfo_tags_1,
	sizeof(asn_DEF_SignalRequesterInfo_tags_1)
		/sizeof(asn_DEF_SignalRequesterInfo_tags_1[0]), /* 1 */
	asn_DEF_SignalRequesterInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_SignalRequesterInfo_tags_1)
		/sizeof(asn_DEF_SignalRequesterInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_SignalRequesterInfo_1,
	5,	/* Elements count */
	&asn_SPC_SignalRequesterInfo_specs_1	/* Additional specs */
};

