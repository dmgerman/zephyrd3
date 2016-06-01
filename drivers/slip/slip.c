DECL|SLIP_END|macro|SLIP_END
DECL|SLIP_ESC_END|macro|SLIP_ESC_END
DECL|SLIP_ESC_ESC|macro|SLIP_ESC_ESC
DECL|SLIP_ESC|macro|SLIP_ESC
DECL|SLIP_STATS|macro|SLIP_STATS
DECL|SLIP_STATS|macro|SLIP_STATS
DECL|STATE_ESC|enumerator|STATE_ESC,
DECL|STATE_GARBAGE|enumerator|STATE_GARBAGE,
DECL|STATE_MULTI_PACKETS|enumerator|STATE_MULTI_PACKETS,
DECL|STATE_OK|enumerator|STATE_OK,
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|_SLIP_L2_LAYER|macro|_SLIP_L2_LAYER
DECL|_SLIP_L2_LAYER|macro|_SLIP_L2_LAYER
DECL|buf|member|uint8_t buf[1]; /* SLIP data is read into this buf */
DECL|garbage|member|uint16_t garbage;
DECL|hexdump|function|static void hexdump(const char *str, const uint8_t *packet, size_t length)
DECL|hexdump|macro|hexdump
DECL|ip_drop|member|uint16_t ip_drop;
DECL|last|member|struct net_buf *last; /* Pointer to last fragment in the list */
DECL|ll_addr|member|struct net_linkaddr ll_addr;
DECL|ll_reserve|member|uint16_t ll_reserve; /* Reserve any space for link layer headers */
DECL|mac_addr|member|uint8_t mac_addr[6];
DECL|multi_packets|member|uint16_t multi_packets;
DECL|overflows|member|uint16_t overflows;
DECL|process_msg|function|static void process_msg(struct slip_context *slip)
DECL|ptr|member|uint8_t *ptr; /* Where in net_buf to add data */
DECL|recv_cb|function|static uint8_t *recv_cb(uint8_t *buf, size_t *off)
DECL|rx|member|struct net_buf *rx; /* and then placed into this net_buf */
DECL|slip_context_data|variable|slip_context_data
DECL|slip_context|struct|struct slip_context {
DECL|slip_get_mac|function|static inline struct net_linkaddr *slip_get_mac(struct device *dev)
DECL|slip_if_api|variable|slip_if_api
DECL|slip_iface_init|function|static void slip_iface_init(struct net_if *iface)
DECL|slip_init|function|static int slip_init(struct device *dev)
DECL|slip_input_byte|function|static inline int slip_input_byte(struct slip_context *slip, unsigned char c)
DECL|slip_poll_handler|function|static struct net_buf *slip_poll_handler(struct slip_context *slip)
DECL|slip_send|function|static int slip_send(struct net_if *iface, struct net_buf *buf)
DECL|slip_state|enum|enum slip_state {
DECL|slip_writeb|function|static inline void slip_writeb(unsigned char c)
DECL|state|member|uint8_t state;
