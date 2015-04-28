DECL|NUM_BUFS|macro|NUM_BUFS
DECL|bt_buf_add|function|uint8_t *bt_buf_add(struct bt_buf *buf, size_t len)
DECL|bt_buf_get|function|struct bt_buf *bt_buf_get(enum bt_buf_type type, size_t reserve_head)
DECL|bt_buf_headroom|function|size_t bt_buf_headroom(struct bt_buf *buf)
DECL|bt_buf_init|function|void bt_buf_init(void)
DECL|bt_buf_pull|function|uint8_t *bt_buf_pull(struct bt_buf *buf, size_t len)
DECL|bt_buf_push|function|uint8_t *bt_buf_push(struct bt_buf *buf, size_t len)
DECL|bt_buf_put|function|void bt_buf_put(struct bt_buf *buf)
DECL|bt_buf_tailroom|function|size_t bt_buf_tailroom(struct bt_buf *buf)
DECL|buffers|variable|buffers
DECL|free_bufs|variable|free_bufs
