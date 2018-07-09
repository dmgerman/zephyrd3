DECL|LOG_LEVEL|macro|LOG_LEVEL
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|LOG_MODULE_NAME|variable|LOG_MODULE_NAME
DECL|eth_clock_gettime|function|int eth_clock_gettime(struct net_ptp_time *time)
DECL|eth_if_down|function|int eth_if_down(const char *if_name)
DECL|eth_if_up|function|int eth_if_up(const char *if_name)
DECL|eth_iface_create|function|int eth_iface_create(const char *if_name, bool tun_only)
DECL|eth_iface_remove|function|int eth_iface_remove(int fd)
DECL|eth_promisc_mode|function|int eth_promisc_mode(const char *if_name, bool enable)
DECL|eth_read_data|function|ssize_t eth_read_data(int fd, void *buf, size_t buf_len)
DECL|eth_setup_host|function|int eth_setup_host(const char *if_name)
DECL|eth_start_script|function|int eth_start_script(const char *if_name)
DECL|eth_wait_data|function|int eth_wait_data(int fd)
DECL|eth_write_data|function|ssize_t eth_write_data(int fd, void *buf, size_t buf_len)
DECL|ssystem|function|static int ssystem(const char *fmt, ...)
