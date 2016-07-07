DECL|CONFIG_CC2520_RX_STACK_SIZE|macro|CONFIG_CC2520_RX_STACK_SIZE
DECL|DEFINE_FREG_READ|macro|DEFINE_FREG_READ
DECL|DEFINE_FREG_WRITE|macro|DEFINE_FREG_WRITE
DECL|DEFINE_MEM_WRITE|macro|DEFINE_MEM_WRITE
DECL|DEFINE_REG_READ|macro|DEFINE_REG_READ
DECL|DEFINE_REG_WRITE|macro|DEFINE_REG_WRITE
DECL|DEFINE_SREG_READ|macro|DEFINE_SREG_READ
DECL|DEFINE_SREG_WRITE|macro|DEFINE_SREG_WRITE
DECL|DEFINE_STROBE_INSTRUCTION|macro|DEFINE_STROBE_INSTRUCTION
DECL|DEFINE_STROBE_SNOP_INSTRUCTION|macro|DEFINE_STROBE_SNOP_INSTRUCTION
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|SYS_LOG_NO_NEWLINE|macro|SYS_LOG_NO_NEWLINE
DECL|__IEEE802154_CC2520_H__|macro|__IEEE802154_CC2520_H__
DECL|_cc2520_command_strobe_snop|function|static inline bool _cc2520_command_strobe_snop(struct cc2520_spi *spi, uint8_t instruction)
DECL|_cc2520_command_strobe|function|static inline bool _cc2520_command_strobe(struct cc2520_spi *spi, uint8_t instruction)
DECL|cc2520_context|struct|struct cc2520_context {
DECL|cc2520_rx_stack|member|char __stack cc2520_rx_stack[CONFIG_CC2520_RX_STACK_SIZE];
DECL|cc2520_spi|struct|struct cc2520_spi {
DECL|cmd_buf|member|uint8_t cmd_buf[12];
DECL|dev|member|struct device *dev;
DECL|fifop_cb|member|struct gpio_callback fifop_cb;
DECL|gpios|member|struct device **gpios;
DECL|mac_addr|member|uint8_t mac_addr[8];
DECL|overflow|member|bool overflow;
DECL|rx_lock|member|struct nano_sem rx_lock;
DECL|sfd_cb|member|struct gpio_callback sfd_cb;
DECL|slave|member|uint32_t slave;
DECL|spi|member|struct cc2520_spi spi;
DECL|tx_sync|member|device_sync_call_t tx_sync;
DECL|tx|member|atomic_t tx;
