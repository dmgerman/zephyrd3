DECL|DEFINE_BITS_SET|macro|DEFINE_BITS_SET
DECL|DEFINE_BURST_READ|macro|DEFINE_BURST_READ
DECL|DEFINE_BURST_WRITE|macro|DEFINE_BURST_WRITE
DECL|DEFINE_DREG_READ|macro|DEFINE_DREG_READ
DECL|DEFINE_DREG_WRITE|macro|DEFINE_DREG_WRITE
DECL|DEFINE_IREG_READ|macro|DEFINE_IREG_READ
DECL|DEFINE_IREG_WRITE|macro|DEFINE_IREG_WRITE
DECL|DEFINE_REG_READ|macro|DEFINE_REG_READ
DECL|DEFINE_REG_WRITE|macro|DEFINE_REG_WRITE
DECL|ZEPHYR_DRIVERS_IEEE802154_IEEE802154_MCR20A_H_|macro|ZEPHYR_DRIVERS_IEEE802154_IEEE802154_MCR20A_H_
DECL|cs_ctrl|member|struct spi_cs_control cs_ctrl;
DECL|iface|member|struct net_if *iface;
DECL|irq_gpio|member|struct device *irq_gpio;
DECL|irqb_cb|member|struct gpio_callback irqb_cb;
DECL|isr_sem|member|struct k_sem isr_sem;
DECL|mac_addr|member|u8_t mac_addr[8];
DECL|mcr20a_context|struct|struct mcr20a_context {
DECL|mcr20a_rx_thread|member|struct k_thread mcr20a_rx_thread;
DECL|phy_mutex|member|struct k_mutex phy_mutex;
DECL|reset_gpio|member|struct device *reset_gpio;
DECL|seq_retval|member|atomic_t seq_retval;
DECL|seq_sync|member|struct k_sem seq_sync;
DECL|spi_cfg|member|struct spi_config spi_cfg;
DECL|spi|member|struct device *spi;
