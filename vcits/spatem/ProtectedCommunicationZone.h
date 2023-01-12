/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/spatem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SPATEM`
 */

#ifndef	_ProtectedCommunicationZone_H_
#define	_ProtectedCommunicationZone_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtectedZoneType.h"
#include "TimestampIts.h"
#include "Latitude.h"
#include "Longitude.h"
#include "ProtectedZoneRadius.h"
#include "ProtectedZoneID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ProtectedCommunicationZone */
typedef struct ProtectedCommunicationZone {
	ProtectedZoneType_t	 protectedZoneType;
	TimestampIts_t	*expiryTime;	/* OPTIONAL */
	Latitude_t	 protectedZoneLatitude;
	Longitude_t	 protectedZoneLongitude;
	ProtectedZoneRadius_t	*protectedZoneRadius;	/* OPTIONAL */
	ProtectedZoneID_t	*protectedZoneID;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ProtectedCommunicationZone_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProtectedCommunicationZone;
extern asn_SEQUENCE_specifics_t asn_SPC_ProtectedCommunicationZone_specs_1;
extern asn_TYPE_member_t asn_MBR_ProtectedCommunicationZone_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _ProtectedCommunicationZone_H_ */
#include <asn_internal.h>
