DECL|DEFINE_BITS_SET|macro|DEFINE_BITS_SET
DECL|DEFINE_BURST_READ|macro|DEFINE_BURST_READ
DECL|DEFINE_BURST_WRITE|macro|DEFINE_BURST_WRITE
DECL|DEFINE_DREG_READ|macro|DEFINE_DREG_READ
DECL|DEFINE_DREG_WRITE|macro|DEFINE_DREG_WRITE
DECL|DEFINE_IREG_READ|macro|DEFINE_IREG_READ
DECL|DEFINE_IREG_WRITE|macro|DEFINE_IREG_WRITE
DECL|DEFINE_REG_READ|macro|DEFINE_REG_READ
DECL|DEFINE_REG_WRITE|macro|DEFINE_REG_WRITE
DECL|__IEEE802154_MCR20A_H__|macro|__IEEE802154_MCR20A_H__
DECL|cmd_buf|member|u8_t cmd_buf[12];
DECL|dev|member|struct device *dev;
DECL|iface|member|struct net_if *iface;
DECL|irq_gpio|member|struct device *irq_gpio;
DECL|irqb_cb|member|struct gpio_callback irqb_cb;
DECL|isr_sem|member|struct k_sem isr_sem;
DECL|lqi|member|u8_t lqi;
DECL|mac_addr|member|u8_t mac_addr[8];
DECL|mcr20a_context|struct|struct mcr20a_context {
DECL|mcr20a_rx_stack|member|char __stack mcr20a_rx_stack[CONFIG_IEEE802154_MCR20A_RX_STACK_SIZE];
DECL|mcr20a_rx_thread|member|struct k_thread mcr20a_rx_thread;
DECL|mcr20a_spi|struct|struct mcr20a_spi {
DECL|phy_mutex|member|struct k_mutex phy_mutex;
DECL|reset_gpio|member|struct device *reset_gpio;
DECL|seq_retval|member|atomic_t seq_retval;
DECL|seq_sync|member|struct k_sem seq_sync;
DECL|slave|member|u32_t slave;
DECL|spi_sem|member|struct k_sem spi_sem;
DECL|spi|member|struct mcr20a_spi spi;
