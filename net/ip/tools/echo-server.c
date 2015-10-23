DECL|CLIENT_PORT|macro|CLIENT_PORT
DECL|MAX_BUF_SIZE|macro|MAX_BUF_SIZE
DECL|MAX_TIMEOUT|macro|MAX_TIMEOUT
DECL|MAX|macro|MAX
DECL|MY_MCAST_ADDR4|macro|MY_MCAST_ADDR4
DECL|MY_MCAST_ADDR6|macro|MY_MCAST_ADDR6
DECL|SERVER_PORT|macro|SERVER_PORT
DECL|bind_device|function|static int bind_device(int fd, const char *interface, void *addr, int len)
DECL|family_to_level|function|int family_to_level(int family)
DECL|find_address|function|static int find_address(int family, struct ifaddrs *if_address,const char *if_name, void *address)
DECL|get_address|function|static int get_address(const char *if_name, int family, void *address)
DECL|get_ifindex|function|static int get_ifindex(const char *name)
DECL|get_socket|function|static int get_socket(int family)
DECL|join_mc_group|function|static int join_mc_group(int sock, int ifindex, int family, void *addr, int addr_len)
DECL|main|function|int main(int argc, char**argv)
DECL|receive_and_reply|function|static int receive_and_reply(fd_set *rfds, int fd_recv, int fd_send, unsigned char *buf, int buflen)
DECL|receive|function|static int receive(int fd, unsigned char *buf, int buflen, struct sockaddr *addr, socklen_t *addrlen)
DECL|reply|function|static int reply(int fd, unsigned char *buf, int buflen, struct sockaddr *addr, socklen_t addrlen)
DECL|reverse|function|static inline void reverse(unsigned char *buf, int len)
