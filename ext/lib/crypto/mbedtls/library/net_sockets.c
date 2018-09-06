DECL|IS_EINTR|macro|IS_EINTR
DECL|IS_EINTR|macro|IS_EINTR
DECL|MSVC_INT_CAST|macro|MSVC_INT_CAST
DECL|MSVC_INT_CAST|macro|MSVC_INT_CAST
DECL|_POSIX_C_SOURCE|macro|_POSIX_C_SOURCE
DECL|_POSIX_C_SOURCE|macro|_POSIX_C_SOURCE
DECL|_WIN32_WINNT|macro|_WIN32_WINNT
DECL|_WIN32_WINNT|macro|_WIN32_WINNT
DECL|close|macro|close
DECL|mbedtls_net_accept|function|int mbedtls_net_accept( mbedtls_net_context *bind_ctx, mbedtls_net_context *client_ctx, void *client_ip, size_t buf_size, size_t *ip_len )
DECL|mbedtls_net_bind|function|int mbedtls_net_bind( mbedtls_net_context *ctx, const char *bind_ip, const char *port, int proto )
DECL|mbedtls_net_connect|function|int mbedtls_net_connect( mbedtls_net_context *ctx, const char *host, const char *port, int proto )
DECL|mbedtls_net_free|function|void mbedtls_net_free( mbedtls_net_context *ctx )
DECL|mbedtls_net_init|function|void mbedtls_net_init( mbedtls_net_context *ctx )
DECL|mbedtls_net_poll|function|int mbedtls_net_poll( mbedtls_net_context *ctx, uint32_t rw, uint32_t timeout )
DECL|mbedtls_net_recv_timeout|function|int mbedtls_net_recv_timeout( void *ctx, unsigned char *buf, size_t len, uint32_t timeout )
DECL|mbedtls_net_recv|function|int mbedtls_net_recv( void *ctx, unsigned char *buf, size_t len )
DECL|mbedtls_net_send|function|int mbedtls_net_send( void *ctx, const unsigned char *buf, size_t len )
DECL|mbedtls_net_set_block|function|int mbedtls_net_set_block( mbedtls_net_context *ctx )
DECL|mbedtls_net_set_nonblock|function|int mbedtls_net_set_nonblock( mbedtls_net_context *ctx )
DECL|mbedtls_net_usleep|function|void mbedtls_net_usleep( unsigned long usec )
DECL|net_prepare|function|static int net_prepare( void )
DECL|net_would_block|function|static int net_would_block( const mbedtls_net_context *ctx )
DECL|net_would_block|function|static int net_would_block( const mbedtls_net_context *ctx )
DECL|read|macro|read
DECL|write|macro|write
DECL|wsa_init_done|variable|wsa_init_done
