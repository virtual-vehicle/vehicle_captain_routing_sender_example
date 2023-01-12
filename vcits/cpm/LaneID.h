/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/tmp/gen_env/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/cpm -R -no-gen-example -fcompound-names -fno-include-deps -pdu=CPM`
 */

#ifndef	_LaneID_H_
#define	_LaneID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LaneID */
typedef long	 LaneID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_LaneID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_LaneID;
asn_struct_free_f LaneID_free;
asn_struct_print_f LaneID_print;
asn_constr_check_f LaneID_constraint;
ber_type_decoder_f LaneID_decode_ber;
der_type_encoder_f LaneID_encode_der;
xer_type_decoder_f LaneID_decode_xer;
xer_type_encoder_f LaneID_encode_xer;
oer_type_decoder_f LaneID_decode_oer;
oer_type_encoder_f LaneID_encode_oer;
per_type_decoder_f LaneID_decode_uper;
per_type_encoder_f LaneID_encode_uper;
per_type_decoder_f LaneID_decode_aper;
per_type_encoder_f LaneID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LaneID_H_ */
#include <asn_internal.h>
