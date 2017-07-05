DECL|DEFINE_REG_READ|macro|DEFINE_REG_READ
DECL|DEFINE_REG_WRITE|macro|DEFINE_REG_WRITE
DECL|DEFINE_STROBE_INSTRUCTION|macro|DEFINE_STROBE_INSTRUCTION
DECL|__IEEE802154_CC1200_H__|macro|__IEEE802154_CC1200_H__
DECL|_cc1200_instruct|function|static inline bool _cc1200_instruct(struct spi_config *spi, u8_t addr)
DECL|_cc1200_read_single_reg|function|static inline u8_t _cc1200_read_single_reg(struct spi_config *spi, u8_t addr, bool extended)
DECL|_cc1200_write_single_reg|function|static inline bool _cc1200_write_single_reg(struct spi_config *spi, u8_t addr, u8_t val, bool extended)
DECL|cc1200_context|struct|struct cc1200_context {
DECL|gpios|member|struct cc1200_gpio_configuration *gpios;
DECL|iface|member|struct net_if *iface;
DECL|mac_addr|member|u8_t mac_addr[8];
DECL|rf_settings|member|const struct cc1200_rf_registers_set *rf_settings;
DECL|rx_lock|member|struct k_sem rx_lock;
DECL|rx_thread|member|struct k_thread rx_thread;
DECL|rx_tx_cb|member|struct gpio_callback rx_tx_cb;
DECL|rx|member|atomic_t rx;
DECL|spi|member|struct spi_config spi;
DECL|tx_start|member|atomic_t tx_start;
DECL|tx_sync|member|struct k_sem tx_sync;
DECL|tx|member|atomic_t tx;
