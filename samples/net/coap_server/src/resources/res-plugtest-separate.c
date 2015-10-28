DECL|DEBUG|macro|DEBUG
DECL|application_separate_store_t|typedef|} application_separate_store_t;
DECL|application_separate_store|struct|typedef struct application_separate_store {
DECL|buffer|member|char buffer[MAX_PLUGFEST_PAYLOAD];
DECL|request_metadata|member|coap_separate_t request_metadata;
DECL|res_get_handler|function|res_get_handler(void *request, void *response, uint8_t *buffer, uint16_t preferred_size, int32_t *offset)
DECL|res_resume_handler|function|res_resume_handler()
DECL|separate_active|variable|separate_active
DECL|separate_store|variable|separate_store
