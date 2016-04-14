DECL|RX_FIBER_STACK_SIZE|macro|RX_FIBER_STACK_SIZE
DECL|SESSION_MAX|macro|SESSION_MAX
DECL|STATE_COMPLETED|enumerator|STATE_COMPLETED /* Session completed, stats pkt can be sent if needed */
DECL|STATE_LAST_PACKET_RECEIVED|enumerator|STATE_LAST_PACKET_RECEIVED, /* Last packet has been received */
DECL|STATE_NULL|enumerator|STATE_NULL, /* Session has not yet started */
DECL|STATE_ONGOING|enumerator|STATE_ONGOING, /* 1st packet has been received, last packet not yet */
DECL|TAG|macro|TAG
DECL|counter|member|uint32_t counter;
DECL|error|member|uint32_t error;
DECL|get_session|function|static struct session *get_session(struct net_buf *buf)
DECL|in_addr_any|variable|in_addr_any
DECL|in_addr_my|variable|in_addr_my
DECL|ip|member|uip_ipaddr_t ip;
DECL|jitter|member|int32_t jitter;
DECL|last_time|member|uint32_t last_time;
DECL|last_transit_time|member|int32_t last_transit_time;
DECL|length|member|uint64_t length;
DECL|next_id|member|uint32_t next_id;
DECL|outorder|member|uint32_t outorder;
DECL|port|member|uint16_t port;
DECL|sessions|variable|sessions
DECL|session|struct|struct session {
DECL|start_time|member|uint32_t start_time;
DECL|state|enum|enum state {
DECL|state|member|enum state state;
DECL|stat|member|struct zperf_server_hdr stat;
DECL|zperf_receiver_init|function|void zperf_receiver_init(int port)
DECL|zperf_receiver_send_stat|function|static int zperf_receiver_send_stat(struct net_context *net_context,struct net_buf *buf, zperf_server_hdr *stat)
DECL|zperf_rx_fiber_stack|variable|zperf_rx_fiber_stack
DECL|zperf_rx_fiber|function|static void zperf_rx_fiber(int port)
