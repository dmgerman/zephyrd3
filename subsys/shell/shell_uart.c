DECL|enable|function|static int enable(const struct shell_transport *transport, bool blocking)
DECL|init|function|static int init(const struct shell_transport *transport,const void *config, shell_transport_handler_t evt_handler, void *context)
DECL|read|function|static int read(const struct shell_transport *transport,void *data, size_t length, size_t *cnt)
DECL|shell_uart_transport_api|variable|shell_uart_transport_api
DECL|timer_handler|function|static void timer_handler(struct k_timer *timer)
DECL|uninit|function|static int uninit(const struct shell_transport *transport)
DECL|write|function|static int write(const struct shell_transport *transport, const void *data, size_t length, size_t *cnt)
