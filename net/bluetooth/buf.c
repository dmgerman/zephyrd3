DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|NUM_BUFS|macro|NUM_BUFS
DECL|avail_acl_in|variable|avail_acl_in
DECL|avail_acl_out|variable|avail_acl_out
DECL|avail_hci|variable|avail_hci
DECL|bt_buf_add_le16|function|void bt_buf_add_le16(struct bt_buf *buf, uint16_t value)
DECL|bt_buf_add|function|void *bt_buf_add(struct bt_buf *buf, size_t len)
DECL|bt_buf_clone|function|struct bt_buf *bt_buf_clone(struct bt_buf *buf)
DECL|bt_buf_get|function|struct bt_buf *bt_buf_get(enum bt_buf_type type, size_t reserve_head)
DECL|bt_buf_headroom|function|size_t bt_buf_headroom(struct bt_buf *buf)
DECL|bt_buf_hold|function|struct bt_buf *bt_buf_hold(struct bt_buf *buf)
DECL|bt_buf_init|function|int bt_buf_init(int acl_in, int acl_out)
DECL|bt_buf_pull_le16|function|uint16_t bt_buf_pull_le16(struct bt_buf *buf)
DECL|bt_buf_pull|function|void *bt_buf_pull(struct bt_buf *buf, size_t len)
DECL|bt_buf_push|function|void *bt_buf_push(struct bt_buf *buf, size_t len)
DECL|bt_buf_put|function|void bt_buf_put(struct bt_buf *buf)
DECL|bt_buf_tailroom|function|size_t bt_buf_tailroom(struct bt_buf *buf)
DECL|buffers|variable|buffers
DECL|get_avail|function|static struct nano_fifo *get_avail(enum bt_buf_type type)
