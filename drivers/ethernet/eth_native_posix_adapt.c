DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|_DEFAULT_SOURCE|macro|_DEFAULT_SOURCE
DECL|eth_clock_gettime|function|int eth_clock_gettime(struct net_ptp_time *time)
DECL|eth_iface_create|function|int eth_iface_create(const char *if_name, bool tun_only)
DECL|eth_iface_remove|function|int eth_iface_remove(int fd)
DECL|eth_promisc_mode|function|int eth_promisc_mode(const char *if_name, bool enable)
DECL|eth_read_data|function|ssize_t eth_read_data(int fd, void *buf, size_t buf_len)
DECL|eth_setup_host|function|int eth_setup_host(const char *if_name)
DECL|eth_wait_data|function|int eth_wait_data(int fd)
DECL|eth_write_data|function|ssize_t eth_write_data(int fd, void *buf, size_t buf_len)
DECL|ssystem|function|static int ssystem(const char *fmt, ...)
