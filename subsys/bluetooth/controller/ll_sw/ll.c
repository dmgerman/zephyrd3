DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|ISR_DIRECT_DECLARE|function|ISR_DIRECT_DECLARE(radio_nrf5_isr)
DECL|_ll_context|variable|_ll_context
DECL|ll_addr_get|function|u8_t *ll_addr_get(u8_t addr_type, u8_t *bdaddr)
DECL|ll_addr_set|function|void ll_addr_set(u8_t addr_type, u8_t const *const bdaddr)
DECL|ll_create_connection|function|u32_t ll_create_connection(u16_t scan_interval, u16_t scan_window, u8_t filter_policy, u8_t peer_addr_type, u8_t *peer_addr, u8_t own_addr_type, u16_t interval, u16_t latency, u16_t timeout)
DECL|ll_init|function|int ll_init(struct k_sem *sem_rx)
DECL|mayfly_enable_cb|function|void mayfly_enable_cb(u8_t caller_id, u8_t callee_id, u8_t enable)
DECL|mayfly_is_enabled|function|u32_t mayfly_is_enabled(u8_t caller_id, u8_t callee_id)
DECL|mayfly_pend|function|void mayfly_pend(u8_t caller_id, u8_t callee_id)
DECL|mayfly_prio_is_equal|function|u32_t mayfly_prio_is_equal(u8_t caller_id, u8_t callee_id)
DECL|pub_addr|member|u8_t pub_addr[BDADDR_SIZE];
DECL|radio_active_callback|function|void radio_active_callback(u8_t active)
DECL|radio_event_callback|function|void radio_event_callback(void)
DECL|rnd_addr|member|u8_t rnd_addr[BDADDR_SIZE];
DECL|rng_nrf5_isr|function|static void rng_nrf5_isr(void *arg)
DECL|rtc0_nrf5_isr|function|static void rtc0_nrf5_isr(void *arg)
DECL|sem_recv|variable|sem_recv
DECL|swi4_nrf5_isr|function|static void swi4_nrf5_isr(void *arg)
