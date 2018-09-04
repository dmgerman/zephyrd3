DECL|CONFIG|variable|CONFIG
DECL|DEF_PORT|macro|DEF_PORT
DECL|DEVICE_NAME|macro|DEVICE_NAME
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|MY_SHELL_MODULE|macro|MY_SHELL_MODULE
DECL|MY_SRC_PORT|macro|MY_SRC_PORT
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|WAIT_CONNECT|macro|WAIT_CONNECT
DECL|commands|variable|commands
DECL|execute_upload|function|static int execute_upload(struct net_context *context6, struct net_context *context4, sa_family_t family, struct sockaddr_in6 *ipv6, struct sockaddr_in *ipv4,
DECL|in4_addr_dst|variable|in4_addr_dst
DECL|in4_addr_my|variable|in4_addr_my
DECL|in6_addr_dst|variable|in6_addr_dst
DECL|in6_addr_my|variable|in6_addr_my
DECL|ipv4|variable|ipv4
DECL|ipv6|variable|ipv6
DECL|main|function|void main(void)
DECL|parse_ipv4_addr|function|static int parse_ipv4_addr(char *host, char *port, struct sockaddr_in *addr, const char *str)
DECL|parse_ipv6_addr|function|static int parse_ipv6_addr(char *host, char *port, struct sockaddr_in6 *addr, const char *str)
DECL|setup_contexts|function|static int setup_contexts(struct net_context **context6, struct net_context **context4, sa_family_t family, struct sockaddr_in6 *ipv6, struct sockaddr_in *ipv4,
DECL|shell_cmd_connectap|function|static int shell_cmd_connectap(int argc, char *argv[])
DECL|shell_cmd_setip|function|static int shell_cmd_setip(int argc, char *argv[])
DECL|shell_cmd_tcp_download|function|static int shell_cmd_tcp_download(int argc, char *argv[])
DECL|shell_cmd_udp_download|function|static int shell_cmd_udp_download(int argc, char *argv[])
DECL|shell_cmd_upload2|function|static int shell_cmd_upload2(int argc, char *argv[])
DECL|shell_cmd_upload|function|static int shell_cmd_upload(int argc, char *argv[])
DECL|shell_cmd_version|function|static int shell_cmd_version(int argc, char *argv[])
DECL|shell_tcp_upload2_usage|function|static void shell_tcp_upload2_usage(void)
DECL|shell_tcp_upload_print_stats|function|static void shell_tcp_upload_print_stats(struct zperf_results *results)
DECL|shell_tcp_upload_usage|function|static void shell_tcp_upload_usage(void)
DECL|shell_udp_upload2_usage|function|static void shell_udp_upload2_usage(void)
DECL|shell_udp_upload_print_stats|function|static void shell_udp_upload_print_stats(struct zperf_results *results)
DECL|shell_udp_upload_usage|function|static void shell_udp_upload_usage(void)
DECL|zperf_get_ipv4_addr|function|int zperf_get_ipv4_addr(char *host, struct in_addr *addr, const char *str)
DECL|zperf_get_ipv6_addr|function|int zperf_get_ipv6_addr(char *host, char *prefix_str, struct in6_addr *addr,const char *str)
DECL|zperf_get_sin6|function|struct sockaddr_in6 *zperf_get_sin6(void)
DECL|zperf_get_sin|function|struct sockaddr_in *zperf_get_sin(void)
DECL|zperf_init|function|static void zperf_init(void)
