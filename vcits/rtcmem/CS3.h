/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AVIAEINumberingAndDataStructures"
 * 	found in "/tmp/gen_env/build/asn1/ISO14816_AVIAEINumberingAndDataStructures.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/rtcmem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=RTCMEM`
 */

#ifndef	_CS3_H_
#define	_CS3_H_


#include <asn_application.h>

/* Including external dependencies */
#include "StartTime.h"
#include "StopTime.h"
#include "GeoGraphicalLimit.h"
#include "ServiceApplicationLimit.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CS3 */
typedef struct CS3 {
	StartTime_t	 startTime;
	StopTime_t	 stopTime;
	GeoGraphicalLimit_t	 geographLimit;
	ServiceApplicationLimit_t	 serviceAppLimit;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CS3_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CS3;

#ifdef __cplusplus
}
#endif

#endif	/* _CS3_H_ */
#include <asn_internal.h>
