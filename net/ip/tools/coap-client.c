DECL|BUFSIZE|macro|BUFSIZE
DECL|CDL_DELETE|macro|CDL_DELETE
DECL|CDL_FOREACH_SAFE|macro|CDL_FOREACH_SAFE
DECL|CDL_FOREACH|macro|CDL_FOREACH
DECL|CDL_PREPEND|macro|CDL_PREPEND
DECL|CDL_SEARCH_SCALAR|macro|CDL_SEARCH_SCALAR
DECL|CDL_SEARCH|macro|CDL_SEARCH
DECL|CDL_SORT|macro|CDL_SORT
DECL|CLIENT_PORT|macro|CLIENT_PORT
DECL|DATA_ARRAY|macro|DATA_ARRAY
DECL|DATA_STRING|macro|DATA_STRING
DECL|DELETE_CON_TOKEN|macro|DELETE_CON_TOKEN
DECL|DELETE_CON|macro|DELETE_CON
DECL|DELETE_NON|macro|DELETE_NON
DECL|DL_APPEND|macro|DL_APPEND
DECL|DL_DELETE|macro|DL_DELETE
DECL|DL_FOREACH_SAFE|macro|DL_FOREACH_SAFE
DECL|DL_FOREACH|macro|DL_FOREACH
DECL|DL_PREPEND|macro|DL_PREPEND
DECL|DL_SORT|macro|DL_SORT
DECL|ENTRY2|macro|ENTRY2
DECL|ENTRY3|macro|ENTRY3
DECL|ENTRY4|macro|ENTRY4
DECL|ENTRY|macro|ENTRY
DECL|FLAGS_BLOCK|macro|FLAGS_BLOCK
DECL|GET_CON_PAYLOAD|macro|GET_CON_PAYLOAD
DECL|GET_CON_TOKEN|macro|GET_CON_TOKEN
DECL|GET_CON|macro|GET_CON
DECL|GET_NON|macro|GET_NON
DECL|HASH_ADD_KEYPTR|macro|HASH_ADD_KEYPTR
DECL|HASH_ADD_STR|macro|HASH_ADD_STR
DECL|HASH_ADD|macro|HASH_ADD
DECL|HASH_BER|macro|HASH_BER
DECL|HASH_CLEAR|macro|HASH_CLEAR
DECL|HASH_DELETE|macro|HASH_DELETE
DECL|HASH_FIND_IN_BKT|macro|HASH_FIND_IN_BKT
DECL|HASH_FIND_STR|macro|HASH_FIND_STR
DECL|HASH_FIND|macro|HASH_FIND
DECL|HASH_FNV|macro|HASH_FNV
DECL|HASH_JEN|macro|HASH_JEN
DECL|HASH_SFH|macro|HASH_SFH
DECL|HASH_SRT|macro|HASH_SRT
DECL|LL_APPEND_VS2008|macro|LL_APPEND_VS2008
DECL|LL_APPEND|macro|LL_APPEND
DECL|LL_DELETE_VS2008|macro|LL_DELETE_VS2008
DECL|LL_DELETE|macro|LL_DELETE
DECL|LL_FOREACH_SAFE|macro|LL_FOREACH_SAFE
DECL|LL_FOREACH|macro|LL_FOREACH
DECL|LL_PREPEND|macro|LL_PREPEND
DECL|LL_SEARCH_SCALAR|macro|LL_SEARCH_SCALAR
DECL|LL_SEARCH|macro|LL_SEARCH
DECL|LL_SORT|macro|LL_SORT
DECL|MAX_BUF_SIZE|macro|MAX_BUF_SIZE
DECL|MAX_READ_BUF|macro|MAX_READ_BUF
DECL|MAX_TIMEOUT|macro|MAX_TIMEOUT
DECL|MAX_URI|macro|MAX_URI
DECL|PACKAGE_BUGREPORT|macro|PACKAGE_BUGREPORT
DECL|PACKAGE_NAME|macro|PACKAGE_NAME
DECL|PACKAGE_STRING|macro|PACKAGE_STRING
DECL|PACKAGE_TARNAME|macro|PACKAGE_TARNAME
DECL|PACKAGE_URL|macro|PACKAGE_URL
DECL|PACKAGE_VERSION|macro|PACKAGE_VERSION
DECL|POST_CON_TOKEN|macro|POST_CON_TOKEN
DECL|POST_CON|macro|POST_CON
DECL|POST_NON|macro|POST_NON
DECL|PSK_DEFAULT_IDENTITY|macro|PSK_DEFAULT_IDENTITY
DECL|PSK_DEFAULT_KEY|macro|PSK_DEFAULT_KEY
DECL|PSK_ID_MAXLEN|macro|PSK_ID_MAXLEN
DECL|PSK_MAXLEN|macro|PSK_MAXLEN
DECL|PSK_OPTIONS|macro|PSK_OPTIONS
DECL|PUT_CON_TOKEN|macro|PUT_CON_TOKEN
DECL|PUT_CON|macro|PUT_CON
DECL|PUT_NON|macro|PUT_NON
DECL|RES|macro|RES
DECL|SERVER_PORT|macro|SERVER_PORT
DECL|SERVER_SECURE_PORT|macro|SERVER_SECURE_PORT
DECL|UNUSED_PARAM|macro|UNUSED_PARAM
DECL|UNUSED_PARAM|macro|UNUSED_PARAM
DECL|UTHASH_H|macro|UTHASH_H
DECL|UTHASH_VERSION|macro|UTHASH_VERSION
DECL|UTLIST_VERSION|macro|UTLIST_VERSION
DECL|_NEXTASGN|macro|_NEXTASGN
DECL|_NEXT|macro|_NEXT
DECL|_PREVASGN|macro|_PREVASGN
DECL|_token_data|variable|_token_data
DECL|add_options|function|static void add_options(coap_pdu_t *pdu)
DECL|add_token|member|bool add_token;
DECL|block|variable|block
DECL|buf|member|const unsigned char *buf;
DECL|buf|member|uint8 buf[MAX_READ_BUF];
DECL|cb|variable|cb
DECL|check_mid|function|static bool check_mid(const unsigned char *databuf, int len, int test_case)
DECL|check_mid|member|bool check_mid;
DECL|check_token|function|static inline int check_token(coap_pdu_t *received)
DECL|client_data|struct|struct client_data {
DECL|clone_option|function|static coap_list_t *clone_option(coap_list_t *item)
DECL|coap_ctx|member|coap_context_t *coap_ctx;
DECL|coap_delete_list|function|static void coap_delete_list(coap_list_t *queue)
DECL|coap_delete|function|static int coap_delete(coap_list_t *node)
DECL|coap_dst|member|coap_address_t coap_dst;
DECL|coap_insert|function|static int coap_insert(coap_list_t **head, coap_list_t *node)
DECL|coap_list_t|struct|typedef struct coap_list_t {
DECL|coap_list_t|typedef|} coap_list_t;
DECL|coap_message_handler|function|static void coap_message_handler(struct coap_context_t *coap_ctx, const coap_endpoint_t *endpoint, const coap_address_t *remote, coap_pdu_t *sent, coap_pdu_t *received,
DECL|coap_method|member|method_t coap_method;
DECL|coap_new_request|function|static coap_pdu_t *coap_new_request(coap_context_t *ctx, method_t m, coap_list_t **options, const unsigned char *req, size_t length,
DECL|create_pdu|function|static coap_pdu_t *create_pdu(struct client_data *user_data)
DECL|create_uri|function|static char *create_uri(char *uri, int len, const char *target,struct client_data *user_data)
DECL|data_len|member|int data_len;
DECL|data|member|char data[];
DECL|data|member|const unsigned char *data; /* data to be sent */
DECL|data|struct|static struct data {
DECL|data|variable|data
DECL|debug|variable|debug
DECL|description|member|const char *description;
DECL|dispatch_data|function|static int dispatch_data(char *buf, ssize_t bytes_read, coap_context_t *ctx, coap_address_t *src)
DECL|dtls_context|variable|dtls_context
DECL|dtls_handle_read|function|static int dtls_handle_read(struct dtls_context_t *ctx)
DECL|ecdsa_priv_key|variable|ecdsa_priv_key
DECL|ecdsa_pub_key_x|variable|ecdsa_pub_key_x
DECL|ecdsa_pub_key_y|variable|ecdsa_pub_key_y
DECL|expected_mid|member|int expected_mid; /* message id we sent */
DECL|expecting_reply|member|bool expecting_reply;
DECL|fail|member|bool fail;
DECL|family|variable|family
DECL|fd|member|int fd;
DECL|find_address|function|static int find_address(int family, struct ifaddrs *if_address,const char *if_name, void *address)
DECL|flags|variable|flags
DECL|get_address|function|static int get_address(const char *if_name, int family, void *address)
DECL|get_block|function|static coap_opt_t *get_block(coap_pdu_t *pdu, coap_opt_iterator_t *opt_iter)
DECL|get_coap_context|function|static coap_context_t *get_coap_context(struct sockaddr *ipaddr, int ipaddrlen)
DECL|get_ecdsa_key|function|static int get_ecdsa_key(struct dtls_context_t *ctx, const session_t *session, const dtls_ecdsa_key_t **result)
DECL|get_ifindex|function|static int get_ifindex(const char *name)
DECL|get_psk_info|function|static int get_psk_info(struct dtls_context_t *ctx UNUSED_PARAM,const session_t *session UNUSED_PARAM, dtls_credentials_type_t type, const unsigned char *id, size_t id_len, unsigned char *result, size_t result_length)
DECL|handle_event|function|static int handle_event(struct dtls_context_t *ctx, session_t *session,dtls_alert_level_t level, unsigned short code)
DECL|ifindex|member|int ifindex; /* network interface index */
DECL|index|member|int index; /* position in data[] */
DECL|is_our_own|function|static bool is_our_own(coap_context_t *coap_ctx, const coap_address_t *remote, coap_pdu_t *sent, coap_pdu_t *received)
DECL|len|member|int len;
DECL|len|member|int len;
DECL|lorem_ipsum_short|variable|lorem_ipsum_short
DECL|lorem_ipsum|variable|lorem_ipsum
DECL|main|function|int main(int argc, char**argv)
DECL|max_wait|variable|max_wait
DECL|message_type|member|int message_type;
DECL|method_t|typedef|typedef unsigned char method_t;
DECL|method|variable|method
DECL|my_coap_network_read|function|static ssize_t my_coap_network_read(coap_endpoint_t *endpoint, coap_packet_t **packet)
DECL|my_coap_network_send|function|static ssize_t my_coap_network_send(struct coap_context_t *ctx, const coap_endpoint_t *endpoint, const coap_address_t *dst, unsigned char *data, size_t datalen)
DECL|new_option_node|function|static coap_list_t *new_option_node(unsigned short key, unsigned int length, unsigned char *data)
DECL|next|member|struct coap_list_t *next;
DECL|no_dtls|variable|no_dtls
DECL|obs_seconds|variable|obs_seconds
DECL|obs_wait|variable|obs_wait
DECL|optlist|variable|optlist
DECL|order_opts|function|static int order_opts(void *a, void *b)
DECL|parse_uri|function|static coap_list_t *parse_uri(const char *arg)
DECL|payload_len|member|int payload_len;
DECL|payload|member|const unsigned char *payload; /* possible payload to be sent */
DECL|payload|variable|payload
DECL|print_data|function|static void print_data(const unsigned char *packet, int length)
DECL|psk_id_length|variable|psk_id_length
DECL|psk_id|variable|psk_id
DECL|psk_key_length|variable|psk_key_length
DECL|psk_key|variable|psk_key
DECL|quit|variable|quit
DECL|read_blocks|function|static coap_pdu_t *read_blocks(coap_context_t *coap_ctx, const coap_endpoint_t *endpoint, const coap_address_t *remote, coap_opt_iterator_t *opt_iter, coap_pdu_t *received,
DECL|read_data_from_net|function|static int read_data_from_net(struct client_data *user_data)
DECL|read_from_peer|function|static int read_from_peer(struct dtls_context_t *ctx, session_t *session, uint8 *read_data, size_t read_len)
DECL|ready|variable|ready
DECL|receive_data|function|static void receive_data(coap_pdu_t *received)
DECL|renegotiate|variable|renegotiate
DECL|send_packets|function|static void send_packets(struct client_data *user_data)
DECL|send_to_peer|function|static int send_to_peer(struct dtls_context_t *ctx,session_t *session, uint8 *data, size_t len)
DECL|session|variable|session
DECL|set_blocksize|function|static void set_blocksize(void)
DECL|set_coap_timeout|function|static void set_coap_timeout(coap_tick_t *timer, const unsigned int seconds)
DECL|set_token|function|static inline void set_token(char *arg)
DECL|signal_handler|function|void signal_handler(int signum)
DECL|sleep_ms|function|static inline void sleep_ms(int ms)
DECL|target|variable|target
DECL|test_context|variable|test_context
DECL|the_token|variable|the_token
DECL|try_send|function|static void try_send(struct dtls_context_t *ctx)
DECL|verify_ecdsa_key|function|static int verify_ecdsa_key(struct dtls_context_t *ctx, const session_t *session, const unsigned char *other_pub_x, const unsigned char *other_pub_y, size_t key_size)
DECL|wait_seconds|variable|wait_seconds
