/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/tmp/gen_env/../vehicle_captain_its_asn1_specifications/etsi/cdd_ts102894_2/ITS-Container.asn"
 * 	`asn1c -D /tmp/gen_env/vcits/srem -R -no-gen-example -fcompound-names -fno-include-deps -pdu=SREM`
 */

#ifndef	_RoadworksSubCauseCode_H_
#define	_RoadworksSubCauseCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RoadworksSubCauseCode {
	RoadworksSubCauseCode_unavailable	= 0,
	RoadworksSubCauseCode_majorRoadworks	= 1,
	RoadworksSubCauseCode_roadMarkingWork	= 2,
	RoadworksSubCauseCode_slowMovingRoadMaintenance	= 3,
	RoadworksSubCauseCode_shortTermStationaryRoadworks	= 4,
	RoadworksSubCauseCode_streetCleaning	= 5,
	RoadworksSubCauseCode_winterService	= 6
} e_RoadworksSubCauseCode;

/* RoadworksSubCauseCode */
typedef long	 RoadworksSubCauseCode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RoadworksSubCauseCode;
asn_struct_free_f RoadworksSubCauseCode_free;
asn_struct_print_f RoadworksSubCauseCode_print;
asn_constr_check_f RoadworksSubCauseCode_constraint;
ber_type_decoder_f RoadworksSubCauseCode_decode_ber;
der_type_encoder_f RoadworksSubCauseCode_encode_der;
xer_type_decoder_f RoadworksSubCauseCode_decode_xer;
xer_type_encoder_f RoadworksSubCauseCode_encode_xer;
oer_type_decoder_f RoadworksSubCauseCode_decode_oer;
oer_type_encoder_f RoadworksSubCauseCode_encode_oer;
per_type_decoder_f RoadworksSubCauseCode_decode_uper;
per_type_encoder_f RoadworksSubCauseCode_encode_uper;
per_type_decoder_f RoadworksSubCauseCode_decode_aper;
per_type_encoder_f RoadworksSubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RoadworksSubCauseCode_H_ */
#include <asn_internal.h>
