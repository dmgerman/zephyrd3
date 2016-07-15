DECL|NET_BUF_ASSERT|macro|NET_BUF_ASSERT
DECL|NET_BUF_ASSERT|macro|NET_BUF_ASSERT
DECL|NET_BUF_DBG|macro|NET_BUF_DBG
DECL|NET_BUF_DBG|macro|NET_BUF_DBG
DECL|NET_BUF_ERR|macro|NET_BUF_ERR
DECL|NET_BUF_ERR|macro|NET_BUF_ERR
DECL|NET_BUF_INFO|macro|NET_BUF_INFO
DECL|NET_BUF_INFO|macro|NET_BUF_INFO
DECL|NET_BUF_WARN|macro|NET_BUF_WARN
DECL|NET_BUF_WARN|macro|NET_BUF_WARN
DECL|net_buf_clone|function|struct net_buf *net_buf_clone(struct net_buf *buf)
DECL|net_buf_frag_del|function|void net_buf_frag_del(struct net_buf *parent, struct net_buf *frag)
DECL|net_buf_frag_insert|function|void net_buf_frag_insert(struct net_buf *parent, struct net_buf *frag)
DECL|net_buf_frag_last|function|struct net_buf *net_buf_frag_last(struct net_buf *buf)
DECL|net_buf_get_timeout|function|struct net_buf *net_buf_get_timeout(struct nano_fifo *fifo, size_t reserve_head, int32_t timeout)
DECL|net_buf_get|function|struct net_buf *net_buf_get(struct nano_fifo *fifo, size_t reserve_head)
DECL|net_buf_put|function|void net_buf_put(struct nano_fifo *fifo, struct net_buf *buf)
DECL|net_buf_ref|function|struct net_buf *net_buf_ref(struct net_buf *buf)
DECL|net_buf_reserve|function|void net_buf_reserve(struct net_buf *buf, size_t reserve)
DECL|net_buf_simple_add_be16|function|void net_buf_simple_add_be16(struct net_buf_simple *buf, uint16_t val)
DECL|net_buf_simple_add_be32|function|void net_buf_simple_add_be32(struct net_buf_simple *buf, uint32_t val)
DECL|net_buf_simple_add_le16|function|void net_buf_simple_add_le16(struct net_buf_simple *buf, uint16_t val)
DECL|net_buf_simple_add_le32|function|void net_buf_simple_add_le32(struct net_buf_simple *buf, uint32_t val)
DECL|net_buf_simple_add_u8|function|uint8_t *net_buf_simple_add_u8(struct net_buf_simple *buf, uint8_t val)
DECL|net_buf_simple_add|function|void *net_buf_simple_add(struct net_buf_simple *buf, size_t len)
DECL|net_buf_simple_headroom|function|size_t net_buf_simple_headroom(struct net_buf_simple *buf)
DECL|net_buf_simple_pull_be16|function|uint16_t net_buf_simple_pull_be16(struct net_buf_simple *buf)
DECL|net_buf_simple_pull_be32|function|uint32_t net_buf_simple_pull_be32(struct net_buf_simple *buf)
DECL|net_buf_simple_pull_le16|function|uint16_t net_buf_simple_pull_le16(struct net_buf_simple *buf)
DECL|net_buf_simple_pull_le32|function|uint32_t net_buf_simple_pull_le32(struct net_buf_simple *buf)
DECL|net_buf_simple_pull_u8|function|uint8_t net_buf_simple_pull_u8(struct net_buf_simple *buf)
DECL|net_buf_simple_pull|function|void *net_buf_simple_pull(struct net_buf_simple *buf, size_t len)
DECL|net_buf_simple_push_be16|function|void net_buf_simple_push_be16(struct net_buf_simple *buf, uint16_t val)
DECL|net_buf_simple_push_le16|function|void net_buf_simple_push_le16(struct net_buf_simple *buf, uint16_t val)
DECL|net_buf_simple_push_u8|function|void net_buf_simple_push_u8(struct net_buf_simple *buf, uint8_t val)
DECL|net_buf_simple_push|function|void *net_buf_simple_push(struct net_buf_simple *buf, size_t len)
DECL|net_buf_simple_tailroom|function|size_t net_buf_simple_tailroom(struct net_buf_simple *buf)
DECL|net_buf_unref|function|void net_buf_unref(struct net_buf *buf)
