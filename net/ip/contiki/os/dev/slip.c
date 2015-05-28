DECL|BUF|macro|BUF
DECL|IP_DF|macro|IP_DF
DECL|NET_DBG|macro|NET_DBG
DECL|NET_DBG|macro|NET_DBG
DECL|PROCESS_THREAD|function|PROCESS_THREAD(slip_process, ev, data, not_used)
DECL|RX_BUFSIZE|macro|RX_BUFSIZE
DECL|SLIP_END|macro|SLIP_END
DECL|SLIP_ESC_END|macro|SLIP_ESC_END
DECL|SLIP_ESC_ESC|macro|SLIP_ESC_ESC
DECL|SLIP_ESC|macro|SLIP_ESC
DECL|SLIP_STATISTICS|macro|SLIP_STATISTICS
DECL|SLIP_STATISTICS|macro|SLIP_STATISTICS
DECL|STATE_ESC|enumerator|STATE_ESC = 2,
DECL|STATE_OK|enumerator|STATE_OK = 1,
DECL|STATE_RUBBISH|enumerator|STATE_RUBBISH = 3,
DECL|STATE_TWOPACKETS|enumerator|STATE_TWOPACKETS = 0, /* We have 2 packets and drop incoming data. */
DECL|begin|variable|begin
DECL|end|variable|end
DECL|input_callback|variable|input_callback
DECL|pkt_end|variable|pkt_end
DECL|recv_cb|function|static uint8_t *recv_cb(uint8_t *buf, size_t *off)
DECL|rxbuf_init|function|rxbuf_init(void)
DECL|rxbuf|variable|rxbuf
DECL|slip_active|variable|slip_active
DECL|slip_input_byte|function|slip_input_byte(unsigned char c)
DECL|slip_ip_drop|variable|slip_ip_drop
DECL|slip_overflow|variable|slip_overflow
DECL|slip_poll_handler|function|slip_poll_handler(uint8_t *outbuf, uint16_t blen)
DECL|slip_recv|function|void slip_recv(void)
DECL|slip_rubbish|variable|slip_rubbish
DECL|slip_send|function|slip_send(struct net_buf *buf)
DECL|slip_set_input_callback|function|slip_set_input_callback(void (*c)(void))
DECL|slip_start|function|void slip_start(void)
DECL|slip_twopackets|variable|slip_twopackets
DECL|slip_write|function|slip_write(const void *_ptr, int len)
DECL|state|variable|state
