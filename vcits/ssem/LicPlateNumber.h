/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AVIAEINumberingAndDataStructures"
 * 	found in "/tmp/gen_env/build/asn1/ISO14816_AVIAEINumberingAndDataStructures.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ssem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SSEM`
 */

#ifndef	_LicPlateNumber_H_
#define	_LicPlateNumber_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LicPlateNumber */
typedef OCTET_STRING_t	 LicPlateNumber_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LicPlateNumber;
asn_struct_free_f LicPlateNumber_free;
asn_struct_print_f LicPlateNumber_print;
asn_constr_check_f LicPlateNumber_constraint;
ber_type_decoder_f LicPlateNumber_decode_ber;
der_type_encoder_f LicPlateNumber_encode_der;
xer_type_decoder_f LicPlateNumber_decode_xer;
xer_type_encoder_f LicPlateNumber_encode_xer;
oer_type_decoder_f LicPlateNumber_decode_oer;
oer_type_encoder_f LicPlateNumber_encode_oer;
per_type_decoder_f LicPlateNumber_decode_uper;
per_type_encoder_f LicPlateNumber_encode_uper;
per_type_decoder_f LicPlateNumber_decode_aper;
per_type_encoder_f LicPlateNumber_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _LicPlateNumber_H_ */
#include <asn_internal.h>
