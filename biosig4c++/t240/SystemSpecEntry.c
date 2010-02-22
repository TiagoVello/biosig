/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "FEF-IntermediateDraft"
 * 	found in "../annexb-snacc-122001.asn1"
 */

#include <asn_internal.h>

#include "SystemSpecEntry.h"

static asn_TYPE_member_t asn_MBR_SystemSpecEntry_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SystemSpecEntry, component_capab_id),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrivateCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"component-capab-id"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SystemSpecEntry, component_spec),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ANY,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"component-spec"
		},
};
static ber_tlv_tag_t asn_DEF_SystemSpecEntry_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SystemSpecEntry_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* component-capab-id at 560 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 1, 0, 0 } /* component-spec at 561 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SystemSpecEntry_specs_1 = {
	sizeof(struct SystemSpecEntry),
	offsetof(struct SystemSpecEntry, _asn_ctx),
	asn_MAP_SystemSpecEntry_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SystemSpecEntry = {
	"SystemSpecEntry",
	"SystemSpecEntry",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SystemSpecEntry_tags_1,
	sizeof(asn_DEF_SystemSpecEntry_tags_1)
		/sizeof(asn_DEF_SystemSpecEntry_tags_1[0]), /* 1 */
	asn_DEF_SystemSpecEntry_tags_1,	/* Same as above */
	sizeof(asn_DEF_SystemSpecEntry_tags_1)
		/sizeof(asn_DEF_SystemSpecEntry_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SystemSpecEntry_1,
	2,	/* Elements count */
	&asn_SPC_SystemSpecEntry_specs_1	/* Additional specs */
};
