DECL|COAP_BLOCKING_REQUEST|macro|COAP_BLOCKING_REQUEST
DECL|ER_COAP_ENGINE_H_|macro|ER_COAP_ENGINE_H_
DECL|SERVER_LISTEN_PORT|macro|SERVER_LISTEN_PORT
DECL|block_num|member|uint32_t block_num;
DECL|blocking_response_handler|typedef|typedef void (*blocking_response_handler)(void *response);
DECL|process|member|struct process *process;
DECL|pt|member|struct pt pt;
DECL|request_state_t|struct|struct request_state_t {
DECL|response|member|coap_packet_t *response;
DECL|rest_request_t|typedef|typedef coap_packet_t rest_request_t;
DECL|rest_response_t|typedef|typedef coap_packet_t rest_response_t;
DECL|transaction|member|coap_transaction_t *transaction;
