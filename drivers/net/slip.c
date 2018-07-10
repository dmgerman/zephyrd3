DECL|LOG_LEVEL|macro|LOG_LEVEL
DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|LOG_MODULE_NAME|variable|LOG_MODULE_NAME
DECL|SLIP_END|macro|SLIP_END
DECL|SLIP_ESC_END|macro|SLIP_ESC_END
DECL|SLIP_ESC_ESC|macro|SLIP_ESC_ESC
DECL|SLIP_ESC|macro|SLIP_ESC
DECL|SLIP_STATS|macro|SLIP_STATS
DECL|SLIP_STATS|macro|SLIP_STATS
DECL|STATE_ESC|enumerator|STATE_ESC,
DECL|STATE_GARBAGE|enumerator|STATE_GARBAGE,
DECL|STATE_OK|enumerator|STATE_OK,
DECL|_SLIP_L2_CTX_TYPE|macro|_SLIP_L2_CTX_TYPE
DECL|_SLIP_L2_CTX_TYPE|macro|_SLIP_L2_CTX_TYPE
DECL|_SLIP_L2_LAYER|macro|_SLIP_L2_LAYER
DECL|_SLIP_L2_LAYER|macro|_SLIP_L2_LAYER
DECL|_SLIP_MTU|macro|_SLIP_MTU
DECL|_SLIP_MTU|macro|_SLIP_MTU
DECL|buf|member|u8_t buf[1]; /* SLIP data is read into this buf */
DECL|eth_capabilities|function|static enum ethernet_hw_caps eth_capabilities(struct device *dev)
DECL|first|member|bool first; /* SLIP received it's byte or not after
DECL|garbage|member|u16_t garbage;
DECL|get_iface|function|static inline struct net_if *get_iface(struct slip_context *context, u16_t vlan_tag)
DECL|iface|member|struct net_if *iface;
DECL|init_done|member|bool init_done;
DECL|last|member|struct net_buf *last; /* Pointer to last fragment in the list */
DECL|ll_addr|member|struct net_linkaddr ll_addr;
DECL|lldpdu_ptr|macro|lldpdu_ptr
DECL|lldpdu_ptr|macro|lldpdu_ptr
DECL|lldpdu|variable|lldpdu
DECL|mac_addr|member|u8_t mac_addr[6];
DECL|process_msg|function|static void process_msg(struct slip_context *slip)
DECL|ptr|member|u8_t *ptr; /* Where in net_pkt to add data */
DECL|recv_cb|function|static u8_t *recv_cb(u8_t *buf, size_t *off)
DECL|rx|member|struct net_pkt *rx; /* and then placed into this net_pkt */
DECL|slip_context_data|variable|slip_context_data
DECL|slip_context|struct|struct slip_context {
DECL|slip_get_mac|function|static inline struct net_linkaddr *slip_get_mac(struct slip_context *slip)
DECL|slip_if_api|variable|slip_if_api
DECL|slip_if_api|variable|slip_if_api
DECL|slip_iface_init|function|static void slip_iface_init(struct net_if *iface)
DECL|slip_init|function|static int slip_init(struct device *dev)
DECL|slip_input_byte|function|static inline int slip_input_byte(struct slip_context *slip, unsigned char c)
DECL|slip_poll_handler|function|static struct net_pkt *slip_poll_handler(struct slip_context *slip)
DECL|slip_send|function|static int slip_send(struct net_if *iface, struct net_pkt *pkt)
DECL|slip_state|enum|enum slip_state {
DECL|slip_writeb_esc|function|static void slip_writeb_esc(unsigned char c)
DECL|slip_writeb|function|static inline void slip_writeb(unsigned char c)
DECL|state|member|u8_t state;
