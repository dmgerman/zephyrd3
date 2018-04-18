DECL|MBEDTLS_ASN1_BIT_STRING|macro|MBEDTLS_ASN1_BIT_STRING
DECL|MBEDTLS_ASN1_BMP_STRING|macro|MBEDTLS_ASN1_BMP_STRING
DECL|MBEDTLS_ASN1_BOOLEAN|macro|MBEDTLS_ASN1_BOOLEAN
DECL|MBEDTLS_ASN1_CONSTRUCTED|macro|MBEDTLS_ASN1_CONSTRUCTED
DECL|MBEDTLS_ASN1_CONTEXT_SPECIFIC|macro|MBEDTLS_ASN1_CONTEXT_SPECIFIC
DECL|MBEDTLS_ASN1_GENERALIZED_TIME|macro|MBEDTLS_ASN1_GENERALIZED_TIME
DECL|MBEDTLS_ASN1_H|macro|MBEDTLS_ASN1_H
DECL|MBEDTLS_ASN1_IA5_STRING|macro|MBEDTLS_ASN1_IA5_STRING
DECL|MBEDTLS_ASN1_INTEGER|macro|MBEDTLS_ASN1_INTEGER
DECL|MBEDTLS_ASN1_NULL|macro|MBEDTLS_ASN1_NULL
DECL|MBEDTLS_ASN1_OCTET_STRING|macro|MBEDTLS_ASN1_OCTET_STRING
DECL|MBEDTLS_ASN1_OID|macro|MBEDTLS_ASN1_OID
DECL|MBEDTLS_ASN1_PRIMITIVE|macro|MBEDTLS_ASN1_PRIMITIVE
DECL|MBEDTLS_ASN1_PRINTABLE_STRING|macro|MBEDTLS_ASN1_PRINTABLE_STRING
DECL|MBEDTLS_ASN1_SEQUENCE|macro|MBEDTLS_ASN1_SEQUENCE
DECL|MBEDTLS_ASN1_SET|macro|MBEDTLS_ASN1_SET
DECL|MBEDTLS_ASN1_T61_STRING|macro|MBEDTLS_ASN1_T61_STRING
DECL|MBEDTLS_ASN1_TAG_CLASS_MASK|macro|MBEDTLS_ASN1_TAG_CLASS_MASK
DECL|MBEDTLS_ASN1_TAG_PC_MASK|macro|MBEDTLS_ASN1_TAG_PC_MASK
DECL|MBEDTLS_ASN1_TAG_VALUE_MASK|macro|MBEDTLS_ASN1_TAG_VALUE_MASK
DECL|MBEDTLS_ASN1_UNIVERSAL_STRING|macro|MBEDTLS_ASN1_UNIVERSAL_STRING
DECL|MBEDTLS_ASN1_UTC_TIME|macro|MBEDTLS_ASN1_UTC_TIME
DECL|MBEDTLS_ASN1_UTF8_STRING|macro|MBEDTLS_ASN1_UTF8_STRING
DECL|MBEDTLS_ERR_ASN1_ALLOC_FAILED|macro|MBEDTLS_ERR_ASN1_ALLOC_FAILED
DECL|MBEDTLS_ERR_ASN1_BUF_TOO_SMALL|macro|MBEDTLS_ERR_ASN1_BUF_TOO_SMALL
DECL|MBEDTLS_ERR_ASN1_INVALID_DATA|macro|MBEDTLS_ERR_ASN1_INVALID_DATA
DECL|MBEDTLS_ERR_ASN1_INVALID_LENGTH|macro|MBEDTLS_ERR_ASN1_INVALID_LENGTH
DECL|MBEDTLS_ERR_ASN1_LENGTH_MISMATCH|macro|MBEDTLS_ERR_ASN1_LENGTH_MISMATCH
DECL|MBEDTLS_ERR_ASN1_OUT_OF_DATA|macro|MBEDTLS_ERR_ASN1_OUT_OF_DATA
DECL|MBEDTLS_ERR_ASN1_UNEXPECTED_TAG|macro|MBEDTLS_ERR_ASN1_UNEXPECTED_TAG
DECL|MBEDTLS_OID_CMP|macro|MBEDTLS_OID_CMP
DECL|MBEDTLS_OID_SIZE|macro|MBEDTLS_OID_SIZE
DECL|buf|member|mbedtls_asn1_buf buf; /**< Buffer containing the given ASN.1 item. */
DECL|len|member|size_t len; /**< ASN1 length, in octets. */
DECL|len|member|size_t len; /**< ASN1 length, in octets. */
DECL|mbedtls_asn1_bitstring|struct|typedef struct mbedtls_asn1_bitstring
DECL|mbedtls_asn1_bitstring|typedef|mbedtls_asn1_bitstring;
DECL|mbedtls_asn1_buf|struct|typedef struct mbedtls_asn1_buf
DECL|mbedtls_asn1_buf|typedef|mbedtls_asn1_buf;
DECL|mbedtls_asn1_named_data|struct|typedef struct mbedtls_asn1_named_data
DECL|mbedtls_asn1_named_data|typedef|mbedtls_asn1_named_data;
DECL|mbedtls_asn1_sequence|struct|typedef struct mbedtls_asn1_sequence
DECL|mbedtls_asn1_sequence|typedef|mbedtls_asn1_sequence;
DECL|next_merged|member|unsigned char next_merged; /**< Merge next item into the current one? */
DECL|next|member|struct mbedtls_asn1_named_data *next; /**< The next entry in the sequence. */
DECL|next|member|struct mbedtls_asn1_sequence *next; /**< The next entry in the sequence. */
DECL|oid|member|mbedtls_asn1_buf oid; /**< The object identifier. */
DECL|p|member|unsigned char *p; /**< ASN1 data, e.g. in ASCII. */
DECL|p|member|unsigned char *p; /**< Raw ASN1 data for the bit string */
DECL|tag|member|int tag; /**< ASN1 type, e.g. MBEDTLS_ASN1_UTF8_STRING. */
DECL|unused_bits|member|unsigned char unused_bits; /**< Number of unused bits at the end of the string */
DECL|val|member|mbedtls_asn1_buf val; /**< The named value. */
