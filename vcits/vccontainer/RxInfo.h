/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "VC-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/custom/VC-Container-PDU-Descriptions.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/vccontainer -R -no-gen-example -fcompound-names -fno-include-deps -pdu=RawRxMessage -pdu=RawTxMessage`
 */

#ifndef	_RxInfo_H_
#define	_RxInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TimeVal.h"
#include <NativeInteger.h>
#include "RxSecurity.h"
#include "PositionInfo.h"
#include "AreaTypeInfo.h"
#include "MACAddress.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RxInfo */
typedef struct RxInfo {
	TimeVal_t	 timestamp;
	long	 rssi;
	long	 dataRate;
	long	 trafficClassID;
	long	 remainHopLimit;
	RxSecurity_t	 security;
	PositionInfo_t	 positionInfo;
	AreaTypeInfo_t	 areaTypeInfo;
	MACAddress_t	 sourceMacAddress;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RxInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RxInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_RxInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_RxInfo_1[9];

#ifdef __cplusplus
}
#endif

#endif	/* _RxInfo_H_ */
#include <asn_internal.h>
