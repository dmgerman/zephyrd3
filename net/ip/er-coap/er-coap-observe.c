DECL|DEBUG|macro|DEBUG
DECL|coap_add_observer|function|coap_add_observer(coap_context_t *coap_ctx, uip_ipaddr_t *addr, uint16_t port, const uint8_t *token, size_t token_len, const char *uri, int uri_len)
DECL|coap_notify_observers_sub|function|coap_notify_observers_sub(resource_t *resource, char *subpath)
DECL|coap_notify_observers|function|coap_notify_observers(resource_t *resource)
DECL|coap_observe_handler|function|coap_observe_handler(resource_t *resource, void *request, void *response)
DECL|coap_remove_observer_by_client|function|coap_remove_observer_by_client(uip_ipaddr_t *addr, uint16_t port)
DECL|coap_remove_observer_by_mid|function|coap_remove_observer_by_mid(coap_context_t *coap_ctx, uip_ipaddr_t *addr, uint16_t port, uint16_t mid)
DECL|coap_remove_observer_by_token|function|coap_remove_observer_by_token(uip_ipaddr_t *addr, uint16_t port, uint8_t *token, size_t token_len)
DECL|coap_remove_observer_by_uri|function|coap_remove_observer_by_uri(const uip_ipaddr_t *addr, uint16_t port, const char *uri)
DECL|coap_remove_observer|function|coap_remove_observer(coap_observer_t *o)
DECL|observers_list|variable|observers_list
