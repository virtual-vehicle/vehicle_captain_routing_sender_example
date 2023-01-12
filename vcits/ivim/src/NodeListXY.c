/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/tmp/gen_env/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#include "NodeListXY.h"

static asn_oer_constraints_t asn_OER_type_NodeListXY_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_NodeListXY_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_NodeListXY_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NodeListXY, choice.nodes),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NodeSetXY,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nodes"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NodeListXY, choice.computed),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ComputedLane,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"computed"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NodeListXY_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nodes */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* computed */
};
asn_CHOICE_specifics_t asn_SPC_NodeListXY_specs_1 = {
	sizeof(struct NodeListXY),
	offsetof(struct NodeListXY, _asn_ctx),
	offsetof(struct NodeListXY, present),
	sizeof(((struct NodeListXY *)0)->present),
	asn_MAP_NodeListXY_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_NodeListXY = {
	"NodeListXY",
	"NodeListXY",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_NodeListXY_constr_1, &asn_PER_type_NodeListXY_constr_1, CHOICE_constraint },
	asn_MBR_NodeListXY_1,
	2,	/* Elements count */
	&asn_SPC_NodeListXY_specs_1	/* Additional specs */
};

