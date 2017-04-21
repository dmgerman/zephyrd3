DECL|SESSION_PROTO_END|enumerator|SESSION_PROTO_END
DECL|SESSION_TCP|enumerator|SESSION_TCP = 1,
DECL|SESSION_UDP|enumerator|SESSION_UDP = 0,
DECL|STATE_COMPLETED|enumerator|STATE_COMPLETED /* Session completed, stats pkt can be sent if needed */
DECL|STATE_LAST_PACKET_RECEIVED|enumerator|STATE_LAST_PACKET_RECEIVED, /* Last packet has been received */
DECL|STATE_NULL|enumerator|STATE_NULL, /* Session has not yet started */
DECL|STATE_ONGOING|enumerator|STATE_ONGOING, /* 1st packet has been received, last packet not yet */
DECL|__ZPERF_SESSION_H|macro|__ZPERF_SESSION_H
DECL|counter|member|u32_t counter;
DECL|error|member|u32_t error;
DECL|ip|member|struct net_addr ip;
DECL|jitter|member|s32_t jitter;
DECL|last_time|member|u32_t last_time;
DECL|last_transit_time|member|s32_t last_transit_time;
DECL|length|member|u64_t length;
DECL|next_id|member|u32_t next_id;
DECL|outorder|member|u32_t outorder;
DECL|port|member|u16_t port;
DECL|session_proto|enum|enum session_proto {
DECL|session|struct|struct session {
DECL|start_time|member|u32_t start_time;
DECL|state|enum|enum state {
DECL|state|member|enum state state;
DECL|stat|member|struct zperf_server_hdr stat;
