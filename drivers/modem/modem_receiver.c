DECL|MAX_MDM_CTX|macro|MAX_MDM_CTX
DECL|MAX_READ_SIZE|macro|MAX_READ_SIZE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|context_from_dev|function|static struct mdm_receiver_context *context_from_dev(struct device *dev)
DECL|contexts|variable|contexts
DECL|mdm_receiver_context_from_id|function|struct mdm_receiver_context *mdm_receiver_context_from_id(int id)
DECL|mdm_receiver_flush|function|static void mdm_receiver_flush(struct mdm_receiver_context *ctx)
DECL|mdm_receiver_get|function|static int mdm_receiver_get(struct mdm_receiver_context *ctx)
DECL|mdm_receiver_isr|function|static void mdm_receiver_isr(struct device *uart_dev)
DECL|mdm_receiver_recv|function|int mdm_receiver_recv(struct mdm_receiver_context *ctx, u8_t *buf, size_t size, size_t *bytes_read)
DECL|mdm_receiver_register|function|int mdm_receiver_register(struct mdm_receiver_context *ctx, const char *uart_dev_name, u8_t *buf, size_t size)
DECL|mdm_receiver_send|function|int mdm_receiver_send(struct mdm_receiver_context *ctx, const u8_t *buf, size_t size)
DECL|mdm_receiver_setup|function|static void mdm_receiver_setup(struct mdm_receiver_context *ctx)
