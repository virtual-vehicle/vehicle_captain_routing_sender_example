/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/spatem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SPATEM`
 */

#ifndef	_VehicleRole_H_
#define	_VehicleRole_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VehicleRole {
	VehicleRole_default	= 0,
	VehicleRole_publicTransport	= 1,
	VehicleRole_specialTransport	= 2,
	VehicleRole_dangerousGoods	= 3,
	VehicleRole_roadWork	= 4,
	VehicleRole_rescue	= 5,
	VehicleRole_emergency	= 6,
	VehicleRole_safetyCar	= 7,
	VehicleRole_agriculture	= 8,
	VehicleRole_commercial	= 9,
	VehicleRole_military	= 10,
	VehicleRole_roadOperator	= 11,
	VehicleRole_taxi	= 12,
	VehicleRole_reserved1	= 13,
	VehicleRole_reserved2	= 14,
	VehicleRole_reserved3	= 15
} e_VehicleRole;

/* VehicleRole */
typedef long	 VehicleRole_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_VehicleRole;
asn_struct_free_f VehicleRole_free;
asn_struct_print_f VehicleRole_print;
asn_constr_check_f VehicleRole_constraint;
ber_type_decoder_f VehicleRole_decode_ber;
der_type_encoder_f VehicleRole_encode_der;
xer_type_decoder_f VehicleRole_decode_xer;
xer_type_encoder_f VehicleRole_encode_xer;
oer_type_decoder_f VehicleRole_decode_oer;
oer_type_encoder_f VehicleRole_encode_oer;
per_type_decoder_f VehicleRole_decode_uper;
per_type_encoder_f VehicleRole_encode_uper;
per_type_decoder_f VehicleRole_decode_aper;
per_type_encoder_f VehicleRole_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _VehicleRole_H_ */
#include <asn_internal.h>