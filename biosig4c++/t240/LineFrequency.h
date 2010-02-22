/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "FEF-IntermediateDraft"
 * 	found in "../annexb-snacc-122001.asn1"
 */

#ifndef	_LineFrequency_H_
#define	_LineFrequency_H_


#include <asn_application.h>

/* Including external dependencies */
#include <INTEGER.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum LineFrequency {
	LineFrequency_line_f_unspec	= 0,
	LineFrequency_line_f_50hz	= 1,
	LineFrequency_line_f_60hz	= 2
} e_LineFrequency;

/* LineFrequency */
typedef INTEGER_t	 LineFrequency_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LineFrequency;
asn_struct_free_f LineFrequency_free;
asn_struct_print_f LineFrequency_print;
asn_constr_check_f LineFrequency_constraint;
ber_type_decoder_f LineFrequency_decode_ber;
der_type_encoder_f LineFrequency_encode_der;
xer_type_decoder_f LineFrequency_decode_xer;
xer_type_encoder_f LineFrequency_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _LineFrequency_H_ */