/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "rrlp-components.asn"
 * 	`asn1c -gen-PER -fnative-types`
 */

#ifndef	_OTD_MeasurementWithID_H_
#define	_OTD_MeasurementWithID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NeighborIdentity.h"
#include "ModuloTimeSlot.h"
#include "EOTDQuality.h"
#include "OTDValue.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* OTD-MeasurementWithID */
typedef struct OTD_MeasurementWithID {
	NeighborIdentity_t	 neighborIdentity;
	ModuloTimeSlot_t	 nborTimeSlot;
	EOTDQuality_t	 eotdQuality;
	OTDValue_t	 otdValue;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OTD_MeasurementWithID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OTD_MeasurementWithID;

#ifdef __cplusplus
}
#endif

#endif	/* _OTD_MeasurementWithID_H_ */
#include <asn_internal.h>
