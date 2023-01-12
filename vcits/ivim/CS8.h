/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "AVIAEINumberingAndDataStructures"
 * 	found in "/tmp/gen_env/build/asn1/ISO14816_AVIAEINumberingAndDataStructures.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/ivim -R -no-gen-example -fcompound-names -fno-include-deps -pdu=IVIM`
 */

#ifndef	_CS8_H_
#define	_CS8_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include "CountryCode.h"
#include "TaxCode.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CS8 */
typedef struct CS8 {
	BIT_STRING_t	 fill;
	CountryCode_t	 countryCode;
	TaxCode_t	 taxCode;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CS8_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CS8;

#ifdef __cplusplus
}
#endif

#endif	/* _CS8_H_ */
#include <asn_internal.h>
