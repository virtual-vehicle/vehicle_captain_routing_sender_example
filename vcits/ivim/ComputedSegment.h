/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "/tmp/gen_env/build/asn1/ISO19321IVIv2.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#ifndef	_ComputedSegment_H_
#define	_ComputedSegment_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Zid.h"
#include "LanePosition.h"
#include "IviLaneWidth.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DeltaReferencePosition;

/* ComputedSegment */
typedef struct ComputedSegment {
	Zid_t	 zoneId;
	LanePosition_t	 laneNumber;
	IviLaneWidth_t	 laneWidth;
	long	*offsetDistance;	/* OPTIONAL */
	struct DeltaReferencePosition	*offsetPosition;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ComputedSegment_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ComputedSegment;
extern asn_SEQUENCE_specifics_t asn_SPC_ComputedSegment_specs_1;
extern asn_TYPE_member_t asn_MBR_ComputedSegment_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _ComputedSegment_H_ */
#include <asn_internal.h>
