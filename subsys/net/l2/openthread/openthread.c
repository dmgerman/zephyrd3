DECL|NET_DOMAIN|macro|NET_DOMAIN
DECL|NET_LOG_ENABLED|macro|NET_LOG_ENABLED
DECL|NET_SYS_LOG_LEVEL|macro|NET_SYS_LOG_LEVEL
DECL|OT_PRIORITY|macro|OT_PRIORITY
DECL|OT_STACK_SIZE|macro|OT_STACK_SIZE
DECL|PlatformEventSignalPending|function|void PlatformEventSignalPending(void)
DECL|ieee802154_init|function|void ieee802154_init(struct net_if *iface)
DECL|ieee802154_radio_handle_ack|function|enum net_verdict ieee802154_radio_handle_ack(struct net_if *iface, struct net_buf *buf)
DECL|ieee802154_radio_send|function|int ieee802154_radio_send(struct net_if *iface, struct net_pkt *pkt)
DECL|ip6_addr_cb|variable|ip6_addr_cb
DECL|ipv6_addr_event_handler|function|static void ipv6_addr_event_handler(struct net_mgmt_event_callback *cb, u32_t mgmt_event, struct net_if *iface)
DECL|ll_addr|variable|ll_addr
DECL|openthread_init|function|static int openthread_init(struct net_if *iface)
DECL|openthread_process|function|static void openthread_process(void *context, void *arg2, void *arg3)
DECL|openthread_recv|function|static enum net_verdict openthread_recv(struct net_if *iface,struct net_pkt *pkt)
DECL|openthread_reserve|function|static u16_t openthread_reserve(struct net_if *iface, void *arg)
DECL|openthread_send|function|enum net_verdict openthread_send(struct net_if *iface, struct net_pkt *pkt)
DECL|otPlatRadioGetIeeeEui64|function|void otPlatRadioGetIeeeEui64(otInstance *instance, uint8_t *ieee_eui64)
DECL|otTaskletsSignalPending|function|void otTaskletsSignalPending(otInstance *instance)
DECL|ot_receive_handler|function|void ot_receive_handler(otMessage *aMessage, void *context)
DECL|ot_state_changed_handler|function|void ot_state_changed_handler(uint32_t flags, void *context)
DECL|ot_thread_data|variable|ot_thread_data
DECL|ot_tid|variable|ot_tid
