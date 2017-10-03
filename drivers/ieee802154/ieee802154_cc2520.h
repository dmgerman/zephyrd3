DECL|DEFINE_FREG_READ|macro|DEFINE_FREG_READ
DECL|DEFINE_FREG_WRITE|macro|DEFINE_FREG_WRITE
DECL|DEFINE_MEM_WRITE|macro|DEFINE_MEM_WRITE
DECL|DEFINE_REG_READ|macro|DEFINE_REG_READ
DECL|DEFINE_REG_WRITE|macro|DEFINE_REG_WRITE
DECL|DEFINE_SREG_READ|macro|DEFINE_SREG_READ
DECL|DEFINE_SREG_WRITE|macro|DEFINE_SREG_WRITE
DECL|DEFINE_STROBE_INSTRUCTION|macro|DEFINE_STROBE_INSTRUCTION
DECL|DEFINE_STROBE_SNOP_INSTRUCTION|macro|DEFINE_STROBE_SNOP_INSTRUCTION
DECL|__IEEE802154_CC2520_H__|macro|__IEEE802154_CC2520_H__
DECL|_cc2520_command_strobe_snop|function|static inline bool _cc2520_command_strobe_snop(struct cc2520_spi *spi, u8_t instruction)
DECL|_cc2520_command_strobe|function|static inline bool _cc2520_command_strobe(struct cc2520_spi *spi, u8_t instruction)
DECL|access_lock|member|struct k_sem access_lock;
DECL|cc2520_context|struct|struct cc2520_context {
DECL|cc2520_rx_thread|member|struct k_thread cc2520_rx_thread;
DECL|cc2520_spi|struct|struct cc2520_spi {
DECL|cmd_buf|member|u8_t cmd_buf[12];
DECL|dev|member|struct device *dev;
DECL|fifop_cb|member|struct gpio_callback fifop_cb;
DECL|gpios|member|struct cc2520_gpio_configuration *gpios;
DECL|iface|member|struct net_if *iface;
DECL|mac_addr|member|u8_t mac_addr[8];
DECL|overflow|member|bool overflow;
DECL|rx_lock|member|struct k_sem rx_lock;
DECL|sfd_cb|member|struct gpio_callback sfd_cb;
DECL|slave|member|u32_t slave;
DECL|spi|member|struct cc2520_spi spi;
DECL|tx_sync|member|struct k_sem tx_sync;
DECL|tx|member|atomic_t tx;
