DECL|DEBUG_LEVEL|macro|DEBUG_LEVEL
DECL|DEBUG|macro|DEBUG
DECL|UIP_LOG|macro|UIP_LOG
DECL|UIP_LOG|macro|UIP_LOG
DECL|packetbuf_addr|function|packetbuf_addr(struct net_buf *buf, uint8_t type)
DECL|packetbuf_attr_clear|function|packetbuf_attr_clear(struct net_buf *buf)
DECL|packetbuf_attr_copyfrom|function|packetbuf_attr_copyfrom(struct net_buf *buf, struct packetbuf_attr *attrs, struct packetbuf_addr *addrs)
DECL|packetbuf_attr_copyto|function|packetbuf_attr_copyto(struct net_buf *buf, struct packetbuf_attr *attrs, struct packetbuf_addr *addrs)
DECL|packetbuf_attr|function|packetbuf_attr(struct net_buf *buf, uint8_t type)
DECL|packetbuf_clear_hdr|function|packetbuf_clear_hdr(struct net_buf *buf)
DECL|packetbuf_clear|function|packetbuf_clear(struct net_buf *buf)
DECL|packetbuf_compact|function|packetbuf_compact(struct net_buf *buf)
DECL|packetbuf_copyfrom|function|packetbuf_copyfrom(struct net_buf *buf, const void *from, uint16_t len)
DECL|packetbuf_copyto_hdr|function|packetbuf_copyto_hdr(struct net_buf *buf, uint8_t *to)
DECL|packetbuf_copyto|function|packetbuf_copyto(struct net_buf *buf, void *to)
DECL|packetbuf_datalen|function|packetbuf_datalen(struct net_buf *buf)
DECL|packetbuf_dataptr|function|packetbuf_dataptr(struct net_buf *buf)
DECL|packetbuf_hdr_remove|function|packetbuf_hdr_remove(struct net_buf *buf, int size)
DECL|packetbuf_hdralloc|function|packetbuf_hdralloc(struct net_buf *buf, int size)
DECL|packetbuf_hdrlen|function|packetbuf_hdrlen(struct net_buf *buf)
DECL|packetbuf_hdrptr|function|packetbuf_hdrptr(struct net_buf *buf)
DECL|packetbuf_hdrreduce|function|packetbuf_hdrreduce(struct net_buf *buf, int size)
DECL|packetbuf_holds_broadcast|function|packetbuf_holds_broadcast(struct net_buf *buf)
DECL|packetbuf_is_reference|function|packetbuf_is_reference(struct net_buf *buf)
DECL|packetbuf_reference_ptr|function|packetbuf_reference_ptr(struct net_buf *buf)
DECL|packetbuf_reference|function|packetbuf_reference(struct net_buf *buf, void *ptr, uint16_t len)
DECL|packetbuf_set_addr|function|packetbuf_set_addr(struct net_buf *buf, uint8_t type, const linkaddr_t *addr)
DECL|packetbuf_set_attr|function|packetbuf_set_attr(struct net_buf *buf, uint8_t type, const packetbuf_attr_t val)
DECL|packetbuf_set_datalen|function|packetbuf_set_datalen(struct net_buf *buf, uint16_t len)
DECL|packetbuf_totlen|function|packetbuf_totlen(struct net_buf *buf)
