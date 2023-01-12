/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AddGrpC"
 * 	found in "/tmp/gen_env/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps -pdu=CPM`
 */

#ifndef	_SignalHeadLocation_H_
#define	_SignalHeadLocation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NodeOffsetPointXY.h"
#include "DeltaAltitude.h"
#include "SignalGroupID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SignalHeadLocation */
typedef struct SignalHeadLocation {
	NodeOffsetPointXY_t	 nodeXY;
	DeltaAltitude_t	 nodeZ;
	SignalGroupID_t	 signalGroupID;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SignalHeadLocation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SignalHeadLocation;
extern asn_SEQUENCE_specifics_t asn_SPC_SignalHeadLocation_specs_1;
extern asn_TYPE_member_t asn_MBR_SignalHeadLocation_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _SignalHeadLocation_H_ */
#include <asn_internal.h>
