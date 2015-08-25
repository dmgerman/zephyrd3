DECL|DEBUG|macro|DEBUG
DECL|classify_notification|function|classify_notification(void *response, int first)
DECL|coap_generate_token|function|coap_generate_token(uint8_t **token_ptr)
DECL|coap_get_obs_subject_by_token|function|coap_get_obs_subject_by_token(const uint8_t *token, size_t token_len)
DECL|coap_handle_notification|function|coap_handle_notification(coap_context_t *coap_ctx, uip_ipaddr_t *addr, uint16_t port, coap_packet_t *notification)
DECL|coap_obs_add_observee|function|coap_obs_add_observee(coap_context_t *coap_ctx, uip_ipaddr_t *addr, uint16_t port, const uint8_t *token, size_t token_len, const char *url, notification_callback_t notification_callback, void *data)
DECL|coap_obs_remove_observee_by_token|function|coap_obs_remove_observee_by_token(coap_context_t *coap_ctx, uip_ipaddr_t *addr, uint16_t port, uint8_t *token, size_t token_len)
DECL|coap_obs_remove_observee_by_url|function|coap_obs_remove_observee_by_url(coap_context_t *coap_ctx, uip_ipaddr_t *addr, uint16_t port, const char *url)
DECL|coap_obs_remove_observee|function|coap_obs_remove_observee(coap_observee_t *o)
DECL|coap_obs_request_registration|function|coap_obs_request_registration(coap_context_t *coap_ctx, uip_ipaddr_t *addr, uint16_t port, char *uri, notification_callback_t notification_callback, void *data)
DECL|get_token|function|get_token(void *packet, const uint8_t **token)
DECL|handle_obs_registration_response|function|handle_obs_registration_response(void *data, void *response)
DECL|obs_subjects_list|variable|obs_subjects_list
DECL|set_token|function|set_token(void *packet, const uint8_t *token, size_t token_len)
DECL|simple_reply|function|simple_reply(coap_message_type_t type, const coap_context_t *coap_ctx, uip_ip6addr_t *addr, uint16_t port, coap_packet_t *notification)
