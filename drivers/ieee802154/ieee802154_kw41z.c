DECL|KW41Z_ACK_WAIT_TIME|macro|KW41Z_ACK_WAIT_TIME
DECL|KW41Z_AUTOACK_ENABLED|macro|KW41Z_AUTOACK_ENABLED
DECL|KW41Z_CCA_ED|enumerator|KW41Z_CCA_ED,
DECL|KW41Z_CCA_MODE1|enumerator|KW41Z_CCA_MODE1,
DECL|KW41Z_CCA_MODE2|enumerator|KW41Z_CCA_MODE2,
DECL|KW41Z_CCA_MODE3|enumerator|KW41Z_CCA_MODE3
DECL|KW41Z_CCA_TIME|macro|KW41Z_CCA_TIME
DECL|KW41Z_DEFAULT_CHANNEL|macro|KW41Z_DEFAULT_CHANNEL
DECL|KW41Z_FCS_LENGTH|macro|KW41Z_FCS_LENGTH
DECL|KW41Z_IDLE_WAIT_RETRIES|macro|KW41Z_IDLE_WAIT_RETRIES
DECL|KW41Z_OUTPUT_POWER_MAX|macro|KW41Z_OUTPUT_POWER_MAX
DECL|KW41Z_OUTPUT_POWER_MIN|macro|KW41Z_OUTPUT_POWER_MIN
DECL|KW41Z_PER_BYTE_TIME|macro|KW41Z_PER_BYTE_TIME
DECL|KW41Z_PSDU_LENGTH|macro|KW41Z_PSDU_LENGTH
DECL|KW41Z_SHR_PHY_TIME|macro|KW41Z_SHR_PHY_TIME
DECL|KW41Z_STATE_CCA|enumerator|KW41Z_STATE_CCA,
DECL|KW41Z_STATE_CCCA|enumerator|KW41Z_STATE_CCCA
DECL|KW41Z_STATE_IDLE|enumerator|KW41Z_STATE_IDLE,
DECL|KW41Z_STATE_RX|enumerator|KW41Z_STATE_RX,
DECL|KW41Z_STATE_TXRX|enumerator|KW41Z_STATE_TXRX,
DECL|KW41Z_STATE_TX|enumerator|KW41Z_STATE_TX,
DECL|RADIO_0_IRQ_PRIO|macro|RADIO_0_IRQ_PRIO
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|get_mac|function|static inline u8_t *get_mac(struct device *dev)
DECL|iface|member|struct net_if *iface;
DECL|kw41z_cca|function|static int kw41z_cca(struct device *dev)
DECL|kw41z_context_data|variable|kw41z_context_data
DECL|kw41z_context|struct|struct kw41z_context {
DECL|kw41z_convert_lqi|function|static u8_t kw41z_convert_lqi(u8_t hw_lqi)
DECL|kw41z_disable_seq_irq|function|static inline void kw41z_disable_seq_irq(void)
DECL|kw41z_enable_seq_irq|function|static inline void kw41z_enable_seq_irq(void)
DECL|kw41z_get_instant_state|function|static inline u8_t kw41z_get_instant_state(void)
DECL|kw41z_get_lqi|function|static u8_t kw41z_get_lqi(struct device *dev)
DECL|kw41z_get_seq_state|function|static inline u8_t kw41z_get_seq_state(void)
DECL|kw41z_iface_init|function|static void kw41z_iface_init(struct net_if *iface)
DECL|kw41z_init|function|static int kw41z_init(struct device *dev)
DECL|kw41z_isr|function|static void kw41z_isr(int unused)
DECL|kw41z_prepare_for_new_state|function|static int kw41z_prepare_for_new_state(void)
DECL|kw41z_radio_api|variable|kw41z_radio_api
DECL|kw41z_rx|function|static inline void kw41z_rx(struct kw41z_context *kw41z, u8_t len)
DECL|kw41z_set_channel|function|static int kw41z_set_channel(struct device *dev, u16_t channel)
DECL|kw41z_set_ieee_addr|function|static int kw41z_set_ieee_addr(struct device *dev, const u8_t *ieee_addr)
DECL|kw41z_set_pan_id|function|static int kw41z_set_pan_id(struct device *dev, u16_t pan_id)
DECL|kw41z_set_seq_state|function|static inline void kw41z_set_seq_state(u8_t state)
DECL|kw41z_set_short_addr|function|static int kw41z_set_short_addr(struct device *dev, u16_t short_addr)
DECL|kw41z_set_txpower|function|static int kw41z_set_txpower(struct device *dev, s16_t dbm)
DECL|kw41z_start|function|static int kw41z_start(struct device *dev)
DECL|kw41z_stop|function|static int kw41z_stop(struct device *dev)
DECL|kw41z_tmr1_disable|function|static inline void kw41z_tmr1_disable(void)
DECL|kw41z_tmr1_set_timeout|function|static void kw41z_tmr1_set_timeout(u32_t timeout)
DECL|kw41z_tmr2_disable|function|static inline void kw41z_tmr2_disable(void)
DECL|kw41z_tmr2_set_timeout|function|static void kw41z_tmr2_set_timeout(u32_t timeout)
DECL|kw41z_tx|function|static int kw41z_tx(struct device *dev, struct net_pkt *pkt, struct net_buf *frag)
DECL|kw41z_wait_for_idle|function|static inline void kw41z_wait_for_idle(void)
DECL|lqi|member|u8_t lqi;
DECL|mac_addr|member|u8_t mac_addr[8];
DECL|pa_pwr_lt|variable|pa_pwr_lt
DECL|rx_warmup_time|member|u32_t rx_warmup_time;
DECL|seq_retval|member|atomic_t seq_retval;
DECL|seq_sync|member|struct k_sem seq_sync;
DECL|tx_warmup_time|member|u32_t tx_warmup_time;
