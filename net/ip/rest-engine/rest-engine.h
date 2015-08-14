DECL|EVENT_RESOURCE|macro|EVENT_RESOURCE
DECL|MIN|macro|MIN
DECL|PARENT_RESOURCE|macro|PARENT_RESOURCE
DECL|PERIODIC_RESOURCE|macro|PERIODIC_RESOURCE
DECL|REGISTERED_ENGINE_ERBIUM|macro|REGISTERED_ENGINE_ERBIUM
DECL|REGISTERED_ENGINE_HELIUM|macro|REGISTERED_ENGINE_HELIUM
DECL|RESOURCE|macro|RESOURCE
DECL|REST_ENGINE_H_|macro|REST_ENGINE_H_
DECL|REST_MAX_CHUNK_SIZE|macro|REST_MAX_CHUNK_SIZE
DECL|SEPARATE_RESOURCE|macro|SEPARATE_RESOURCE
DECL|attributes|member|const char *attributes; /* link-format attributes */
DECL|delete_handler|member|restful_handler delete_handler; /* handler function */
DECL|flags|member|rest_resource_flags_t flags; /* handled RESTful methods */
DECL|get_handler|member|restful_handler get_handler; /* handler function */
DECL|get_header_accept|member|int (*get_header_accept)(void *request, unsigned int *accept);
DECL|get_header_content_type|member|int (*get_header_content_type)(void *request,
DECL|get_header_host|member|int (*get_header_host)(void *request, const char **host);
DECL|get_header_if_match|member|int (*get_header_if_match)(void *request, const uint8_t **etag);
DECL|get_header_if_none_match|member|int (*get_header_if_none_match)(void *request);
DECL|get_header_length|member|int (*get_header_length)(void *request, uint32_t *size);
DECL|get_header_max_age|member|int (*get_header_max_age)(void *request, uint32_t *age);
DECL|get_method_type|member|rest_resource_flags_t (*get_method_type)(void *request);
DECL|get_post_variable|member|int (*get_post_variable)(void *request, const char *name,
DECL|get_query_variable|member|int (*get_query_variable)(void *request, const char *name,
DECL|get_query|member|int (*get_query)(void *request, const char **value);
DECL|get_request_payload|member|int (*get_request_payload)(void *request, const uint8_t **payload);
DECL|get_url|member|int (*get_url)(void *request, const char **url);
DECL|init|member|void (*init)(void);
DECL|name|member|char *name;
DECL|next|member|struct periodic_resource_s *next; /* for LIST, points to next resource defined */
DECL|next|member|struct resource_s *next; /* for LIST, points to next resource defined */
DECL|notify_subscribers|member|void (*notify_subscribers)(resource_t *resource);
DECL|periodic_handler|member|const restful_periodic_handler periodic_handler;
DECL|periodic_resource_s|struct|struct periodic_resource_s {
DECL|periodic_resource_t|typedef|typedef struct periodic_resource_s periodic_resource_t;
DECL|periodic_timer|member|struct etimer periodic_timer;
DECL|periodic|member|struct periodic_resource_s *periodic; /* special data depending on flags */
DECL|period|member|uint32_t period;
DECL|post_handler|member|restful_handler post_handler; /* handler function */
DECL|put_handler|member|restful_handler put_handler; /* handler function */
DECL|resource_s|struct|struct resource_s {
DECL|resource_t|typedef|typedef struct resource_s resource_t;
DECL|resource|member|const resource_t *resource;
DECL|rest_implementation|struct|struct rest_implementation {
DECL|restful_final_handler|typedef|typedef void (*restful_final_handler)(struct resource_s *resource,
DECL|restful_handler|typedef|typedef void (*restful_handler)(void *request, void *response,
DECL|restful_periodic_handler|typedef|typedef void (*restful_periodic_handler)(void);
DECL|restful_response_handler|typedef|typedef void (*restful_response_handler)(void *data, void *response);
DECL|restful_trigger_handler|typedef|typedef void (*restful_trigger_handler)(void);
DECL|resume|member|restful_trigger_handler resume;
DECL|service_callback_t|typedef|typedef int (*service_callback_t)(void *request, void *response,
DECL|set_header_content_type|member|int (*set_header_content_type)(void *response,
DECL|set_header_etag|member|int (*set_header_etag)(void *response, const uint8_t *etag,
DECL|set_header_length|member|int (*set_header_length)(void *response, uint32_t size);
DECL|set_header_location|member|int (*set_header_location)(void *response, const char *location);
DECL|set_header_max_age|member|int (*set_header_max_age)(void *response, uint32_t age);
DECL|set_response_payload|member|int (*set_response_payload)(void *response, const void *payload,
DECL|set_response_status|member|int (*set_response_status)(void *response, unsigned int code);
DECL|set_service_callback|member|void (*set_service_callback)(service_callback_t callback);
DECL|status|member|const struct rest_implementation_status status;
DECL|subscription_handler|member|restful_final_handler subscription_handler;
DECL|trigger|member|restful_trigger_handler trigger;
DECL|type|member|const struct rest_implementation_type type;
DECL|url|member|const char *url; /*handled URL */
