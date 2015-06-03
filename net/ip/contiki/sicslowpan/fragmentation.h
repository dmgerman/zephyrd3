DECL|FRAGMENTATION_H_|macro|FRAGMENTATION_H_
DECL|fragmentation|struct|struct fragmentation {
DECL|fragment|member|int (* fragment)(struct net_buf *buf, void *ptr);
DECL|reassemble|member|int (* reassemble)(struct net_mbuf *buf);
