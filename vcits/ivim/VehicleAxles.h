/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/is_ts103301/iso-patched/ISO14906(2018)EfcDsrcApplicationv6-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#ifndef	_VehicleAxles_H_
#define	_VehicleAxles_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Int1.h"
#include <NativeEnumerated.h>
#include "TrailerAxles.h"
#include "TractorAxles.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VehicleAxles__vehicleAxlesNumber__tyreType {
	VehicleAxles__vehicleAxlesNumber__tyreType_notSpecified	= 0,
	VehicleAxles__vehicleAxlesNumber__tyreType_singleTyre	= 1,
	VehicleAxles__vehicleAxlesNumber__tyreType_dualTyres	= 2,
	VehicleAxles__vehicleAxlesNumber__tyreType_reservedForUse	= 3
} e_VehicleAxles__vehicleAxlesNumber__tyreType;

/* VehicleAxles */
typedef struct VehicleAxles {
	Int1_t	 vehicleFirstAxleHeight;
	struct VehicleAxles__vehicleAxlesNumber {
		long	 tyreType;
		struct VehicleAxles__vehicleAxlesNumber__numberOfAxles {
			TrailerAxles_t	 trailerAxles;
			TractorAxles_t	 tractorAxles;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} numberOfAxles;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} vehicleAxlesNumber;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} VehicleAxles_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_tyreType_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_VehicleAxles;

#ifdef __cplusplus
}
#endif

#endif	/* _VehicleAxles_H_ */
#include <asn_internal.h>