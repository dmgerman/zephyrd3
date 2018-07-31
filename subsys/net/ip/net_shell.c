DECL|ADDR_LEN|macro|ADDR_LEN
DECL|ADDR_LEN|macro|ADDR_LEN
DECL|ADDR_LEN|macro|ADDR_LEN
DECL|DNS_TIMEOUT|macro|DNS_TIMEOUT
DECL|EC|macro|EC
DECL|MAX_HTTP_OUTPUT_LEN|macro|MAX_HTTP_OUTPUT_LEN
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_SHELL_MODULE|macro|NET_SHELL_MODULE
DECL|TCP_CONNECT_TIMEOUT|macro|TCP_CONNECT_TIMEOUT
DECL|TCP_TIMEOUT|macro|TCP_TIMEOUT
DECL|USCALED_NS_TO_NS|macro|USCALED_NS_TO_NS
DECL|_handle_ipv4_echo_reply|function|static enum net_verdict _handle_ipv4_echo_reply(struct net_pkt *pkt)
DECL|_handle_ipv6_echo_reply|function|static enum net_verdict _handle_ipv6_echo_reply(struct net_pkt *pkt)
DECL|_ping_ipv4|function|static int _ping_ipv4(char *host)
DECL|_ping_ipv4|macro|_ping_ipv4
DECL|_ping_ipv6|function|static int _ping_ipv6(char *host)
DECL|_ping_ipv6|macro|_ping_ipv6
DECL|_remove_ipv4_ping_handler|function|static inline void _remove_ipv4_ping_handler(void)
DECL|_remove_ipv4_ping_handler|macro|_remove_ipv4_ping_handler
DECL|_remove_ipv6_ping_handler|function|static inline void _remove_ipv6_ping_handler(void)
DECL|_remove_ipv6_ping_handler|macro|_remove_ipv6_ping_handler
DECL|addrstate2str|function|static inline const char *addrstate2str(enum net_addr_state addr_state)
DECL|addrtype2str|function|static inline const char *addrtype2str(enum net_addr_type addr_type)
DECL|allocs_cb|function|static void allocs_cb(struct net_pkt *pkt, struct net_buf *buf, const char *func_alloc, int line_alloc, const char *func_free,
DECL|are_external_pools|member|bool are_external_pools;
DECL|arp_cb|function|static void arp_cb(struct arp_entry *entry, void *user_data)
DECL|capability|member|enum ethernet_hw_caps capability;
DECL|clk_slave2str|function|static const char *clk_slave2str(enum gptp_clk_slave_sync_states state)
DECL|cms_rcv2str|function|static const char *cms_rcv2str(enum gptp_cms_rcv_states state)
DECL|conn_handler_cb|function|static void conn_handler_cb(struct net_conn *conn, void *user_data)
DECL|context_cb|function|static void context_cb(struct net_context *context, void *user_data)
DECL|context_info|function|static void context_info(struct net_context *context, void *user_data)
DECL|ctx_info|struct|struct ctx_info {
DECL|data_pools|member|struct net_buf_pool *data_pools[CONFIG_NET_MAX_CONTEXTS];
DECL|description|member|const char * const description;
DECL|dns_result_cb|function|static void dns_result_cb(enum dns_resolve_status status, struct dns_addrinfo *info, void *user_data)
DECL|eth_hw_caps|variable|eth_hw_caps
DECL|ethernet_capabilities|struct|struct ethernet_capabilities {
DECL|get_addresses|function|static void get_addresses(struct net_context *context, char addr_local[], int local_len, char addr_remote[], int remote_len)
DECL|get_my_ipv4_addr|function|static void get_my_ipv4_addr(struct net_if *iface, struct sockaddr *myaddr)
DECL|get_my_ipv6_addr|function|static void get_my_ipv6_addr(struct net_if *iface, struct sockaddr *myaddr)
DECL|gptp_port_cb|function|static void gptp_port_cb(int port, struct net_if *iface, void *user_data)
DECL|gptp_print_port_info|function|static void gptp_print_port_info(int port)
DECL|http_server_cb|function|static void http_server_cb(struct http_ctx *entry, void *user_data)
DECL|http_str_output|function|static char *http_str_output(char *output, int outlen, const char *str, int len)
DECL|iface2str|function|static const char *iface2str(struct net_if *iface, const char **extra)
DECL|iface_cb|function|static void iface_cb(struct net_if *iface, void *user_data)
DECL|iface_per_mcast_route_cb|function|static void iface_per_mcast_route_cb(struct net_if *iface, void *user_data)
DECL|iface_per_route_cb|function|static void iface_per_route_cb(struct net_if *iface, void *user_data)
DECL|iface_vlan_cb|function|static void iface_vlan_cb(struct net_if *iface, void *user_data)
DECL|iface_vlan_del_cb|function|static void iface_vlan_del_cb(struct net_if *iface, void *user_data)
DECL|ipv6_frag_cb|function|static void ipv6_frag_cb(struct net_ipv6_reassembly *reass, void *user_data)
DECL|nbr_cb|function|static void nbr_cb(struct net_nbr *nbr, void *user_data)
DECL|net_app_cb|function|static void net_app_cb(struct net_app_ctx *ctx, void *user_data)
DECL|net_app_cb|function|static void net_app_cb(struct net_app_ctx *ctx, void *user_data) {}
DECL|net_commands|variable|net_commands
DECL|net_shell_cmd_allocs|function|int net_shell_cmd_allocs(int argc, char *argv[])
DECL|net_shell_cmd_app|function|int net_shell_cmd_app(int argc, char *argv[])
DECL|net_shell_cmd_arp|function|int net_shell_cmd_arp(int argc, char *argv[])
DECL|net_shell_cmd_conn|function|int net_shell_cmd_conn(int argc, char *argv[])
DECL|net_shell_cmd_dns|function|int net_shell_cmd_dns(int argc, char *argv[])
DECL|net_shell_cmd_gptp|function|int net_shell_cmd_gptp(int argc, char *argv[])
DECL|net_shell_cmd_http|function|int net_shell_cmd_http(int argc, char *argv[])
DECL|net_shell_cmd_iface|function|int net_shell_cmd_iface(int argc, char *argv[])
DECL|net_shell_cmd_mem|function|int net_shell_cmd_mem(int argc, char *argv[])
DECL|net_shell_cmd_nbr|function|int net_shell_cmd_nbr(int argc, char *argv[])
DECL|net_shell_cmd_ping|function|int net_shell_cmd_ping(int argc, char *argv[])
DECL|net_shell_cmd_route|function|int net_shell_cmd_route(int argc, char *argv[])
DECL|net_shell_cmd_rpl|function|int net_shell_cmd_rpl(int argc, char *argv[])
DECL|net_shell_cmd_stacks|function|int net_shell_cmd_stacks(int argc, char *argv[])
DECL|net_shell_cmd_stats|function|int net_shell_cmd_stats(int argc, char *argv[])
DECL|net_shell_cmd_tcp|function|int net_shell_cmd_tcp(int argc, char *argv[])
DECL|net_shell_cmd_vlan|function|int net_shell_cmd_vlan(int argc, char *argv[])
DECL|net_shell_print_statistics_all|function|static void net_shell_print_statistics_all(void)
DECL|net_shell_print_statistics|function|static void net_shell_print_statistics(struct net_if *iface, void *user_data)
DECL|pa_info2str|function|static const char *pa_info2str(enum gptp_pa_info_states state)
DECL|pa_rcv2str|function|static const char *pa_rcv2str(enum gptp_pa_rcv_states state)
DECL|pa_transmit2str|function|static const char *pa_transmit2str(enum gptp_pa_transmit_states state)
DECL|pdelay_req2str|function|static const char *pdelay_req2str(enum gptp_pdelay_req_states state)
DECL|pdelay_resp2str|function|static const char *pdelay_resp2str(enum gptp_pdelay_resp_states state)
DECL|ping4_handler|variable|ping4_handler
DECL|ping6_handler|variable|ping6_handler
DECL|pos|member|int pos;
DECL|power|function|static int power(int base, unsigned int exp)
DECL|pr_selection2str|function|static const char *pr_selection2str(enum gptp_pr_selection_states state)
DECL|print_app_sec_info|function|static void print_app_sec_info(struct net_app_ctx *ctx, const char *sec_type)
DECL|print_connect_info|function|static void print_connect_info(int family, struct sockaddr *myaddr, struct sockaddr *addr)
DECL|print_dns_info|function|static void print_dns_info(struct dns_resolve_context *ctx)
DECL|print_eth_stats|function|static void print_eth_stats(struct net_if *iface, struct net_stats_eth *data)
DECL|print_supported_ethernet_capabilities|function|static void print_supported_ethernet_capabilities(struct net_if *iface)
DECL|priority2str|function|static const char *priority2str(enum net_priority priority)
DECL|pss_rcv2str|function|static const char *pss_rcv2str(enum gptp_pss_rcv_states state)
DECL|pss_send2str|function|static const char *pss_send2str(enum gptp_pss_send_states state)
DECL|route_cb|function|static void route_cb(struct net_route_entry *entry, void *user_data)
DECL|route_mcast_cb|function|static void route_mcast_cb(struct net_route_entry_mcast *entry, void *user_data)
DECL|rpl_parent|function|static void rpl_parent(struct net_rpl_parent *parent, void *user_data)
DECL|selected_role_str|function|static const char *selected_role_str(int port)
DECL|site_sync2str|function|static const char *site_sync2str(enum gptp_site_sync_sync_states state)
DECL|slab_pool_found_already|function|static bool slab_pool_found_already(struct ctx_info *info, struct k_mem_slab *slab, struct net_buf_pool *pool)
DECL|sync_rcv2str|function|static const char *sync_rcv2str(enum gptp_sync_rcv_states state)
DECL|sync_send2str|function|static const char *sync_send2str(enum gptp_sync_send_states state)
DECL|tcp_cb|function|static void tcp_cb(struct net_tcp *tcp, void *user_data)
DECL|tcp_connected|function|static void tcp_connected(struct net_context *context, int status, void *user_data)
DECL|tcp_connect|function|static int tcp_connect(char *host, u16_t port, struct net_context **ctx)
DECL|tcp_ctx|variable|tcp_ctx
DECL|tcp_sent_cb|function|static void tcp_sent_cb(struct net_context *context,int status, void *token, void *user_data)
DECL|tcp_sent_list_cb|function|static void tcp_sent_list_cb(struct net_tcp *tcp, void *user_data)
DECL|tx_slabs|member|struct k_mem_slab *tx_slabs[CONFIG_NET_MAX_CONTEXTS];
