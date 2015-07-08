DECL|BUF_FOUND|macro|BUF_FOUND
DECL|BUF_FULL|macro|BUF_FULL
DECL|BUF_NOT_FOUND|macro|BUF_NOT_FOUND
DECL|BUF_NOT_FULL|macro|BUF_NOT_FULL
DECL|DEBUG|macro|DEBUG
DECL|STATE_ACKED|macro|STATE_ACKED
DECL|STATE_BLOCKED_CLOSE|macro|STATE_BLOCKED_CLOSE
DECL|STATE_BLOCKED_NEWDATA|macro|STATE_BLOCKED_NEWDATA
DECL|STATE_BLOCKED_SEND|macro|STATE_BLOCKED_SEND
DECL|STATE_DATA_SENT|macro|STATE_DATA_SENT
DECL|STATE_NONE|macro|STATE_NONE
DECL|STATE_READ|macro|STATE_READ
DECL|buf_bufdata|function|buf_bufdata(struct psock_buf *buf, uint16_t len, uint8_t **dataptr, uint16_t *datalen)
DECL|buf_bufto|function|buf_bufto(CC_REGISTER_ARG struct psock_buf *buf, uint8_t endmarker, CC_REGISTER_ARG uint8_t **dataptr, CC_REGISTER_ARG uint16_t *datalen)
DECL|buf_setup|function|buf_setup(struct psock_buf *buf, uint8_t *bufptr, uint16_t bufsize)
DECL|data_is_sent_and_acked|function|data_is_sent_and_acked(CC_REGISTER_ARG struct psock *s)
DECL|psock_datalen|function|psock_datalen(struct psock *psock)
DECL|psock_generator_send|function|PT_THREAD(psock_generator_send(CC_REGISTER_ARG struct psock *s, unsigned short (*generate)(void *), void *arg))
DECL|psock_init|function|psock_init(CC_REGISTER_ARG struct psock *psock, struct net_buf *net_buf)
DECL|psock_newdata|function|psock_newdata(struct psock *s)
DECL|psock_readbuf_len|function|PT_THREAD(psock_readbuf_len(CC_REGISTER_ARG struct psock *psock, uint16_t len))
DECL|psock_readto|function|PT_THREAD(psock_readto(CC_REGISTER_ARG struct psock *psock, unsigned char c))
DECL|psock_send|function|PT_THREAD(psock_send(CC_REGISTER_ARG struct psock *s, struct net_buf *net_buf))
