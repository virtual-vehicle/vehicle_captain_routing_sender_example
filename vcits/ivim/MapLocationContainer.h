/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "/tmp/gen_env/build/asn1/ISO19321IVIv2.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#ifndef	_MapLocationContainer_H_
#define	_MapLocationContainer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MapReference.h"
#include "MlcParts.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MapLocationContainer */
typedef struct MapLocationContainer {
	MapReference_t	 reference;
	MlcParts_t	 parts;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MapLocationContainer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MapLocationContainer;
extern asn_SEQUENCE_specifics_t asn_SPC_MapLocationContainer_specs_1;
extern asn_TYPE_member_t asn_MBR_MapLocationContainer_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _MapLocationContainer_H_ */
#include <asn_internal.h>