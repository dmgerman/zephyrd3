DECL|OPENTHREAD_L2_CTX_TYPE|macro|OPENTHREAD_L2_CTX_TYPE
DECL|ZEPHYR_INCLUDE_NET_OPENTHREAD_H_|macro|ZEPHYR_INCLUDE_NET_OPENTHREAD_H_
DECL|iface|member|struct net_if *iface;
DECL|instance|member|otInstance *instance;
DECL|openthread_context|struct|struct openthread_context {
DECL|pkt_list_elem|struct|struct pkt_list_elem {
DECL|pkt_list_full|member|u8_t pkt_list_full;
DECL|pkt_list_in_idx|member|u16_t pkt_list_in_idx;
DECL|pkt_list_out_idx|member|u16_t pkt_list_out_idx;
DECL|pkt_list|member|struct pkt_list_elem pkt_list[CONFIG_OPENTHREAD_PKT_LIST_SIZE];
DECL|pkt|member|struct net_pkt *pkt;
