DECL|ADDR_LEN|macro|ADDR_LEN
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_SHELL_MODULE|macro|NET_SHELL_MODULE
DECL|TCP_CONNECT_TIMEOUT|macro|TCP_CONNECT_TIMEOUT
DECL|TCP_TIMEOUT|macro|TCP_TIMEOUT
DECL|addrstate2str|function|static inline const char *addrstate2str(enum net_addr_state addr_state)
DECL|addrtype2str|function|static inline const char *addrtype2str(enum net_addr_type addr_type)
DECL|allocs_cb|function|static void allocs_cb(struct net_buf *buf, const char *func_alloc, int line_alloc, const char *func_free, int line_free,
DECL|are_external_pools|member|bool are_external_pools;
DECL|context_cb|function|static void context_cb(struct net_context *context, void *user_data)
DECL|context_info|function|static void context_info(struct net_context *context, void *user_data)
DECL|ctx_info|struct|struct ctx_info {
DECL|data_pools|member|struct net_buf_pool *data_pools[CONFIG_NET_MAX_CONTEXTS];
DECL|get_my_ipv4_addr|function|static void get_my_ipv4_addr(struct net_if *iface, struct sockaddr *myaddr)
DECL|get_my_ipv6_addr|function|static void get_my_ipv6_addr(struct net_if *iface, struct sockaddr *myaddr)
DECL|iface_cb|function|static void iface_cb(struct net_if *iface, void *user_data)
DECL|iface_per_mcast_route_cb|function|static void iface_per_mcast_route_cb(struct net_if *iface, void *user_data)
DECL|iface_per_route_cb|function|static void iface_per_route_cb(struct net_if *iface, void *user_data)
DECL|nbr_cb|function|static void nbr_cb(struct net_nbr *nbr, void *user_data)
DECL|net_commands|variable|net_commands
DECL|net_shell_init|function|void net_shell_init(void)
DECL|net_shell_print_statistics|function|static inline void net_shell_print_statistics(void)
DECL|pool_found_already|function|static bool pool_found_already(struct ctx_info *info, struct net_buf_pool *pool)
DECL|pos|member|int pos;
DECL|print_connect_info|function|static void print_connect_info(int family, struct sockaddr *myaddr, struct sockaddr *addr)
DECL|route_cb|function|static void route_cb(struct net_route_entry *entry, void *user_data)
DECL|route_mcast_cb|function|static void route_mcast_cb(struct net_route_entry_mcast *entry, void *user_data)
DECL|shell_cmd_allocs|function|static int shell_cmd_allocs(int argc, char *argv[])
DECL|shell_cmd_conn|function|static int shell_cmd_conn(int argc, char *argv[])
DECL|shell_cmd_help|function|static int shell_cmd_help(int argc, char *argv[])
DECL|shell_cmd_iface|function|static int shell_cmd_iface(int argc, char *argv[])
DECL|shell_cmd_mem|function|static int shell_cmd_mem(int argc, char *argv[])
DECL|shell_cmd_nbr|function|static int shell_cmd_nbr(int argc, char *argv[])
DECL|shell_cmd_ping|function|static int shell_cmd_ping(int argc, char *argv[])
DECL|shell_cmd_route|function|static int shell_cmd_route(int argc, char *argv[])
DECL|shell_cmd_stacks|function|static int shell_cmd_stacks(int argc, char *argv[])
DECL|shell_cmd_stats|function|static int shell_cmd_stats(int argc, char *argv[])
DECL|shell_cmd_tcp|function|static int shell_cmd_tcp(int argc, char *argv[])
DECL|tcp_cb|function|static void tcp_cb(struct net_tcp *tcp, void *user_data)
DECL|tcp_connected|function|static void tcp_connected(struct net_context *context, int status, void *user_data)
DECL|tcp_connect|function|static int tcp_connect(char *host, uint16_t port, struct net_context **ctx)
DECL|tcp_ctx|variable|tcp_ctx
DECL|tcp_sent_cb|function|static void tcp_sent_cb(struct net_context *context,int status, void *token, void *user_data)
DECL|tx_pools|member|struct net_buf_pool *tx_pools[CONFIG_NET_MAX_CONTEXTS];
