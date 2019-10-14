/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-Containers"
 * 	found in "../support/r14.4.0/38413-e40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps`
 */

#ifndef	_NGAP_PrivateIE_Field_H_
#define	_NGAP_PrivateIE_Field_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_PrivateIE-ID.h"
#include "NGAP_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NGAP_PrivateMessageIEs__value_PR {
	NGAP_PrivateMessageIEs__value_PR_NOTHING	/* No components present */
	
} NGAP_PrivateMessageIEs__value_PR;

/* NGAP_PrivateIE-Field */
typedef struct NGAP_PrivateMessageIEs {
	NGAP_PrivateIE_ID_t	 id;
	NGAP_Criticality_t	 criticality;
	struct NGAP_PrivateMessageIEs__value {
		NGAP_PrivateMessageIEs__value_PR present;
		union NGAP_PrivateMessageIEs__NGAP_value_u {
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_PrivateMessageIEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_PrivateMessageIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_PrivateMessageIEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_PrivateMessageIEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_PrivateIE_Field_H_ */
#include <asn_internal.h>
