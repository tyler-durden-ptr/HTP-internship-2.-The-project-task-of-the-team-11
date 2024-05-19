/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NBIOT-RRC-Definitions"
 * 	found in "lte-rrc-14.7.0.asn1"
 * 	`asn1c -gen-PER -fcompound-names -no-gen-example`
 */

#ifndef	_PDCP_Config_NB_r13_H_
#define	_PDCP_Config_NB_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NULL.h>
#include <NativeInteger.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PDCP_Config_NB_r13__discardTimer_r13 {
	PDCP_Config_NB_r13__discardTimer_r13_ms5120	= 0,
	PDCP_Config_NB_r13__discardTimer_r13_ms10240	= 1,
	PDCP_Config_NB_r13__discardTimer_r13_ms20480	= 2,
	PDCP_Config_NB_r13__discardTimer_r13_ms40960	= 3,
	PDCP_Config_NB_r13__discardTimer_r13_ms81920	= 4,
	PDCP_Config_NB_r13__discardTimer_r13_infinity	= 5,
	PDCP_Config_NB_r13__discardTimer_r13_spare2	= 6,
	PDCP_Config_NB_r13__discardTimer_r13_spare1	= 7
} e_PDCP_Config_NB_r13__discardTimer_r13;
typedef enum PDCP_Config_NB_r13__headerCompression_r13_PR {
	PDCP_Config_NB_r13__headerCompression_r13_PR_NOTHING,	/* No components present */
	PDCP_Config_NB_r13__headerCompression_r13_PR_notUsed,
	PDCP_Config_NB_r13__headerCompression_r13_PR_rohc
} PDCP_Config_NB_r13__headerCompression_r13_PR;

/* PDCP-Config-NB-r13 */
typedef struct PDCP_Config_NB_r13 {
	long	*discardTimer_r13	/* OPTIONAL */;
	struct PDCP_Config_NB_r13__headerCompression_r13 {
		PDCP_Config_NB_r13__headerCompression_r13_PR present;
		union PDCP_Config_NB_r13__headerCompression_r13_u {
			NULL_t	 notUsed;
			struct PDCP_Config_NB_r13__headerCompression_r13__rohc {
				long	*maxCID_r13	/* DEFAULT 15 */;
				struct PDCP_Config_NB_r13__headerCompression_r13__rohc__profiles_r13 {
					BOOLEAN_t	 profile0x0002;
					BOOLEAN_t	 profile0x0003;
					BOOLEAN_t	 profile0x0004;
					BOOLEAN_t	 profile0x0006;
					BOOLEAN_t	 profile0x0102;
					BOOLEAN_t	 profile0x0103;
					BOOLEAN_t	 profile0x0104;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} profiles_r13;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} rohc;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} headerCompression_r13;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDCP_Config_NB_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_discardTimer_r13_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PDCP_Config_NB_r13;
extern asn_SEQUENCE_specifics_t asn_SPC_PDCP_Config_NB_r13_specs_1;
extern asn_TYPE_member_t asn_MBR_PDCP_Config_NB_r13_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _PDCP_Config_NB_r13_H_ */
#include <asn_internal.h>
