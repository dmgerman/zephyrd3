DECL|ADD_STRLEN|macro|ADD_STRLEN
DECL|mbedtls_x509_set_extension|function|int mbedtls_x509_set_extension( mbedtls_asn1_named_data **head, const char *oid, size_t oid_len, int critical, const unsigned char *val, size_t val_len )
DECL|mbedtls_x509_string_to_names|function|int mbedtls_x509_string_to_names( mbedtls_asn1_named_data **head, const char *name )
DECL|mbedtls_x509_write_extensions|function|int mbedtls_x509_write_extensions( unsigned char **p, unsigned char *start, mbedtls_asn1_named_data *first )
DECL|mbedtls_x509_write_names|function|int mbedtls_x509_write_names( unsigned char **p, unsigned char *start, mbedtls_asn1_named_data *first )
DECL|mbedtls_x509_write_sig|function|int mbedtls_x509_write_sig( unsigned char **p, unsigned char *start, const char *oid, size_t oid_len, unsigned char *sig, size_t size )
DECL|name_len|member|size_t name_len;
DECL|name|member|const char *name;
DECL|oid|member|const char*oid;
DECL|x509_at_oid_from_name|function|static const char *x509_at_oid_from_name( const char *name, size_t name_len )
DECL|x509_attr_descriptor_t|typedef|} x509_attr_descriptor_t;
DECL|x509_attrs|variable|x509_attrs
DECL|x509_write_extension|function|static int x509_write_extension( unsigned char **p, unsigned char *start, mbedtls_asn1_named_data *ext )
DECL|x509_write_name|function|static int x509_write_name( unsigned char **p, unsigned char *start, const char *oid, size_t oid_len, const unsigned char *name, size_t name_len )
