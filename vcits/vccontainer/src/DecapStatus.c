/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "VC-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/custom/VC-Container-PDU-Descriptions.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/vccontainer -R -no-gen-example -fcompound-names -fno-include-deps -pdu=RawRxMessage -pdu=RawTxMessage`
 */

#include "DecapStatus.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_DecapStatus_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_DecapStatus_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_DecapStatus_value2enum_1[] = {
	{ 0,	4,	"none" },
	{ 1,	11,	"invalid-fmt" },
	{ 2,	12,	"verified-pkt" },
	{ 3,	16,	"unverifiable-pkt" }
};
static const unsigned int asn_MAP_DecapStatus_enum2value_1[] = {
	1,	/* invalid-fmt(1) */
	0,	/* none(0) */
	3,	/* unverifiable-pkt(3) */
	2	/* verified-pkt(2) */
};
const asn_INTEGER_specifics_t asn_SPC_DecapStatus_specs_1 = {
	asn_MAP_DecapStatus_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_DecapStatus_enum2value_1,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_DecapStatus_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_DecapStatus = {
	"DecapStatus",
	"DecapStatus",
	&asn_OP_NativeEnumerated,
	asn_DEF_DecapStatus_tags_1,
	sizeof(asn_DEF_DecapStatus_tags_1)
		/sizeof(asn_DEF_DecapStatus_tags_1[0]), /* 1 */
	asn_DEF_DecapStatus_tags_1,	/* Same as above */
	sizeof(asn_DEF_DecapStatus_tags_1)
		/sizeof(asn_DEF_DecapStatus_tags_1[0]), /* 1 */
	{ &asn_OER_type_DecapStatus_constr_1, &asn_PER_type_DecapStatus_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_DecapStatus_specs_1	/* Additional specs */
};

