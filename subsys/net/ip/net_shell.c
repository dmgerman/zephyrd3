DECL|ADDR_LEN|macro|ADDR_LEN
DECL|GET_STAT|macro|GET_STAT
DECL|NET_DEBUG|macro|NET_DEBUG
DECL|NET_SHELL_MODULE|macro|NET_SHELL_MODULE
DECL|addrstate2str|function|static inline const char *addrstate2str(enum net_addr_state addr_state)
DECL|addrtype2str|function|static inline const char *addrtype2str(enum net_addr_type addr_type)
DECL|context_cb|function|static void context_cb(struct net_context *context, void *user_data)
DECL|dhcpv4state2str|function|static inline const char *dhcpv4state2str(enum net_dhcpv4_state state)
DECL|iface_cb|function|static void iface_cb(struct net_if *iface, void *user_data)
DECL|iface_per_mcast_route_cb|function|static void iface_per_mcast_route_cb(struct net_if *iface, void *user_data)
DECL|iface_per_route_cb|function|static void iface_per_route_cb(struct net_if *iface, void *user_data)
DECL|net_commands|variable|net_commands
DECL|net_print_statistics|function|static inline void net_print_statistics(void)
DECL|net_shell_init|function|void net_shell_init(void)
DECL|route_cb|function|static void route_cb(struct net_route_entry *entry, void *user_data)
DECL|route_mcast_cb|function|static void route_mcast_cb(struct net_route_entry_mcast *entry, void *user_data)
DECL|shell_cmd_conn|function|static int shell_cmd_conn(int argc, char *argv[])
DECL|shell_cmd_help|function|static int shell_cmd_help(int argc, char *argv[])
DECL|shell_cmd_iface|function|static int shell_cmd_iface(int argc, char *argv[])
DECL|shell_cmd_mem|function|static int shell_cmd_mem(int argc, char *argv[])
DECL|shell_cmd_ping|function|static int shell_cmd_ping(int argc, char *argv[])
DECL|shell_cmd_route|function|static int shell_cmd_route(int argc, char *argv[])
DECL|shell_cmd_stacks|function|static int shell_cmd_stacks(int argc, char *argv[])
DECL|shell_cmd_stats|function|static int shell_cmd_stats(int argc, char *argv[])
DECL|tcp_cb|function|static void tcp_cb(struct net_tcp *tcp, void *user_data)
DECL|tx_stack|function|static void tx_stack(struct net_if *iface, unsigned char *stack, size_t stack_size)
