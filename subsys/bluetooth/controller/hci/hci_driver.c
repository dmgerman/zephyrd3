DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|HCI_ACL|macro|HCI_ACL
DECL|HCI_CMD|macro|HCI_CMD
DECL|HCI_EVT|macro|HCI_EVT
DECL|HCI_SCO|macro|HCI_SCO
DECL|ISR_DIRECT_DECLARE|function|ISR_DIRECT_DECLARE(radio_nrf5_isr)
DECL|_hci_driver_init|function|static int _hci_driver_init(struct device *unused)
DECL|bt_rand|function|int bt_rand(void *buf, size_t len)
DECL|cmd_handle|function|static int cmd_handle(struct net_buf *buf)
DECL|drv|variable|drv
DECL|hci_driver_open|function|static int hci_driver_open(void)
DECL|hci_driver_send|function|static int hci_driver_send(struct net_buf *buf)
DECL|mayfly_enable_cb|function|void mayfly_enable_cb(uint8_t caller_id, uint8_t callee_id, uint8_t enable)
DECL|mayfly_is_enabled|function|uint32_t mayfly_is_enabled(uint8_t caller_id, uint8_t callee_id)
DECL|mayfly_pend|function|void mayfly_pend(uint8_t caller_id, uint8_t callee_id)
DECL|mayfly_prio_is_equal|function|uint32_t mayfly_prio_is_equal(uint8_t caller_id, uint8_t callee_id)
DECL|mutex_rand|variable|mutex_rand
DECL|prio_recv_thread|function|static void prio_recv_thread(void *p1, void *p2, void *p3)
DECL|radio_active_callback|function|void radio_active_callback(uint8_t active)
DECL|radio_event_callback|function|void radio_event_callback(void)
DECL|recv_thread|function|static void recv_thread(void *p1, void *p2, void *p3)
DECL|rng_nrf5_isr|function|static void rng_nrf5_isr(void *arg)
DECL|rtc0_nrf5_isr|function|static void rtc0_nrf5_isr(void *arg)
DECL|swi4_nrf5_isr|function|static void swi4_nrf5_isr(void *arg)
