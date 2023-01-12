/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/tmp/gen_env/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/rtcmem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=RTCMEM`
 */

#include "BasicVehicleRole.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_BasicVehicleRole_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_BasicVehicleRole_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  5,  5,  0,  22 }	/* (0..22,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_BasicVehicleRole_value2enum_1[] = {
	{ 0,	12,	"basicVehicle" },
	{ 1,	15,	"publicTransport" },
	{ 2,	16,	"specialTransport" },
	{ 3,	14,	"dangerousGoods" },
	{ 4,	8,	"roadWork" },
	{ 5,	10,	"roadRescue" },
	{ 6,	9,	"emergency" },
	{ 7,	9,	"safetyCar" },
	{ 8,	12,	"none-unknown" },
	{ 9,	5,	"truck" },
	{ 10,	10,	"motorcycle" },
	{ 11,	14,	"roadSideSource" },
	{ 12,	6,	"police" },
	{ 13,	4,	"fire" },
	{ 14,	9,	"ambulance" },
	{ 15,	3,	"dot" },
	{ 16,	7,	"transit" },
	{ 17,	10,	"slowMoving" },
	{ 18,	7,	"stopNgo" },
	{ 19,	7,	"cyclist" },
	{ 20,	10,	"pedestrian" },
	{ 21,	12,	"nonMotorized" },
	{ 22,	8,	"military" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_BasicVehicleRole_enum2value_1[] = {
	14,	/* ambulance(14) */
	0,	/* basicVehicle(0) */
	19,	/* cyclist(19) */
	3,	/* dangerousGoods(3) */
	15,	/* dot(15) */
	6,	/* emergency(6) */
	13,	/* fire(13) */
	22,	/* military(22) */
	10,	/* motorcycle(10) */
	21,	/* nonMotorized(21) */
	8,	/* none-unknown(8) */
	20,	/* pedestrian(20) */
	12,	/* police(12) */
	1,	/* publicTransport(1) */
	5,	/* roadRescue(5) */
	11,	/* roadSideSource(11) */
	4,	/* roadWork(4) */
	7,	/* safetyCar(7) */
	17,	/* slowMoving(17) */
	2,	/* specialTransport(2) */
	18,	/* stopNgo(18) */
	16,	/* transit(16) */
	9	/* truck(9) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_BasicVehicleRole_specs_1 = {
	asn_MAP_BasicVehicleRole_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_BasicVehicleRole_enum2value_1,	/* N => "tag"; sorted by N */
	23,	/* Number of elements in the maps */
	24,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_BasicVehicleRole_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_BasicVehicleRole = {
	"BasicVehicleRole",
	"BasicVehicleRole",
	&asn_OP_NativeEnumerated,
	asn_DEF_BasicVehicleRole_tags_1,
	sizeof(asn_DEF_BasicVehicleRole_tags_1)
		/sizeof(asn_DEF_BasicVehicleRole_tags_1[0]), /* 1 */
	asn_DEF_BasicVehicleRole_tags_1,	/* Same as above */
	sizeof(asn_DEF_BasicVehicleRole_tags_1)
		/sizeof(asn_DEF_BasicVehicleRole_tags_1[0]), /* 1 */
	{ &asn_OER_type_BasicVehicleRole_constr_1, &asn_PER_type_BasicVehicleRole_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_BasicVehicleRole_specs_1	/* Additional specs */
};

