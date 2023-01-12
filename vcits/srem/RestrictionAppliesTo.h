/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/tmp/gen_env/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/srem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SREM`
 */

#ifndef	_RestrictionAppliesTo_H_
#define	_RestrictionAppliesTo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RestrictionAppliesTo {
	RestrictionAppliesTo_none	= 0,
	RestrictionAppliesTo_equippedTransit	= 1,
	RestrictionAppliesTo_equippedTaxis	= 2,
	RestrictionAppliesTo_equippedOther	= 3,
	RestrictionAppliesTo_emissionCompliant	= 4,
	RestrictionAppliesTo_equippedBicycle	= 5,
	RestrictionAppliesTo_weightCompliant	= 6,
	RestrictionAppliesTo_heightCompliant	= 7,
	RestrictionAppliesTo_pedestrians	= 8,
	RestrictionAppliesTo_slowMovingPersons	= 9,
	RestrictionAppliesTo_wheelchairUsers	= 10,
	RestrictionAppliesTo_visualDisabilities	= 11,
	RestrictionAppliesTo_audioDisabilities	= 12,
	RestrictionAppliesTo_otherUnknownDisabilities	= 13
	/*
	 * Enumeration is extensible
	 */
} e_RestrictionAppliesTo;

/* RestrictionAppliesTo */
typedef long	 RestrictionAppliesTo_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RestrictionAppliesTo_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RestrictionAppliesTo;
extern const asn_INTEGER_specifics_t asn_SPC_RestrictionAppliesTo_specs_1;
asn_struct_free_f RestrictionAppliesTo_free;
asn_struct_print_f RestrictionAppliesTo_print;
asn_constr_check_f RestrictionAppliesTo_constraint;
ber_type_decoder_f RestrictionAppliesTo_decode_ber;
der_type_encoder_f RestrictionAppliesTo_encode_der;
xer_type_decoder_f RestrictionAppliesTo_decode_xer;
xer_type_encoder_f RestrictionAppliesTo_encode_xer;
oer_type_decoder_f RestrictionAppliesTo_decode_oer;
oer_type_encoder_f RestrictionAppliesTo_encode_oer;
per_type_decoder_f RestrictionAppliesTo_decode_uper;
per_type_encoder_f RestrictionAppliesTo_encode_uper;
per_type_decoder_f RestrictionAppliesTo_decode_aper;
per_type_encoder_f RestrictionAppliesTo_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RestrictionAppliesTo_H_ */
#include <asn_internal.h>
