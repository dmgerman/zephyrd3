DECL|ANY_PORT|macro|ANY_PORT
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|MAX_CONNS|macro|MAX_CONNS
DECL|NET_LOG_LEVEL|macro|NET_LOG_LEVEL
DECL|SERVER_PORT|macro|SERVER_PORT
DECL|TCP_TEARDOWN_TIMEOUT|macro|TCP_TEARDOWN_TIMEOUT
DECL|TEST_STR_SMALL|macro|TEST_STR_SMALL
DECL|prepare_sock_v4|function|static void prepare_sock_v4(const char *addr, u16_t port, int *sock, struct sockaddr_in *sockaddr)
DECL|prepare_sock_v6|function|static void prepare_sock_v6(const char *addr, u16_t port, int *sock, struct sockaddr_in6 *sockaddr)
DECL|test_accept|function|static void test_accept(int sock, int *new_sock, struct sockaddr *addr,socklen_t *addrlen)
DECL|test_bind|function|static void test_bind(int sock, struct sockaddr *addr, socklen_t addrlen)
DECL|test_close|function|static void test_close(int sock)
DECL|test_connect|function|static void test_connect(int sock, struct sockaddr *addr, socklen_t addrlen)
DECL|test_listen|function|static void test_listen(int sock)
DECL|test_main|function|void test_main(void)
DECL|test_recvfrom|function|static void test_recvfrom(int sock, int flags, struct sockaddr *addr, socklen_t *addrlen)
DECL|test_recv|function|static void test_recv(int sock, int flags)
DECL|test_sendto|function|static void test_sendto(int sock, const void *buf, size_t len, int flags,const struct sockaddr *addr, socklen_t addrlen)
DECL|test_send|function|static void test_send(int sock, const void *buf, size_t len, int flags)
DECL|test_v4_send_recv|function|void test_v4_send_recv(void)
DECL|test_v4_sendto_recvfrom_null_dest|function|void test_v4_sendto_recvfrom_null_dest(void)
DECL|test_v4_sendto_recvfrom|function|void test_v4_sendto_recvfrom(void)
DECL|test_v6_send_recv|function|void test_v6_send_recv(void)
DECL|test_v6_sendto_recvfrom_null_dest|function|void test_v6_sendto_recvfrom_null_dest(void)
DECL|test_v6_sendto_recvfrom|function|void test_v6_sendto_recvfrom(void)
