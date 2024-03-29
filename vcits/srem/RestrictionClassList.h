/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "DSRC"
 * 	found in "/tmp/gen_env/build/asn1/ISO-TS-19091-addgrp-C-2018-patched.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/srem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SREM`
 */

#ifndef	_RestrictionClassList_H_
#define	_RestrictionClassList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RestrictionClassAssignment;

/* RestrictionClassList */
typedef struct RestrictionClassList {
	A_SEQUENCE_OF(struct RestrictionClassAssignment) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RestrictionClassList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RestrictionClassList;
extern asn_SET_OF_specifics_t asn_SPC_RestrictionClassList_specs_1;
extern asn_TYPE_member_t asn_MBR_RestrictionClassList_1[1];
extern asn_per_constraints_t asn_PER_type_RestrictionClassList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RestrictionClassList_H_ */
#include <asn_internal.h>
