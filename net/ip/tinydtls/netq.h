DECL|NETQ_MAXCNT|macro|NETQ_MAXCNT
DECL|NETQ_MAXCNT|macro|NETQ_MAXCNT
DECL|_DTLS_NETQ_H_|macro|_DTLS_NETQ_H_
DECL|data|member|netq_packet_t data; /**< the datagram to send */
DECL|data|member|unsigned char data[]; /**< the datagram to send */
DECL|epoch|member|uint16_t epoch;
DECL|length|member|size_t length; /**< actual length of data */
DECL|netq_init|function|static inline void netq_init()
DECL|netq_packet_t|typedef|typedef unsigned char netq_packet_t[DTLS_MAX_BUF];
DECL|netq_t|struct|typedef struct netq_t {
DECL|netq_t|typedef|} netq_t;
DECL|next|member|struct netq_t *next;
DECL|peer|member|dtls_peer_t *peer; /**< remote address */
DECL|retransmit_cnt|member|unsigned char retransmit_cnt; /**< retransmission counter, will be removed when zero */
DECL|timeout|member|unsigned int timeout; /**< randomized timeout value */
DECL|type|member|uint8_t type;
DECL|t|member|clock_time_t t; /**< when to send PDU for the next time */
