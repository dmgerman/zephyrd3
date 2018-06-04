DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|FRIEND_ADV|macro|FRIEND_ADV
DECL|FRIEND_BUF_COUNT|macro|FRIEND_BUF_COUNT
DECL|FRIEND_BUF_SIZE|macro|FRIEND_BUF_SIZE
DECL|FRIEND_XMIT|macro|FRIEND_XMIT
DECL|MIN_QUEUE_SIZE_LOG|macro|MIN_QUEUE_SIZE_LOG
DECL|MIN_QUEUE_SIZE|macro|MIN_QUEUE_SIZE
DECL|RECV_WIN_FACT|macro|RECV_WIN_FACT
DECL|RECV_WIN|macro|RECV_WIN
DECL|RSSI_FACT|macro|RSSI_FACT
DECL|adv_alloc|function|static struct bt_mesh_adv *adv_alloc(int id)
DECL|adv_pool|variable|adv_pool
DECL|adv|member|struct bt_mesh_adv adv;
DECL|bt_mesh_friend_clear_cfm|function|int bt_mesh_friend_clear_cfm(struct bt_mesh_net_rx *rx, struct net_buf_simple *buf)
DECL|bt_mesh_friend_clear_incomplete|function|void bt_mesh_friend_clear_incomplete(struct bt_mesh_subnet *sub, u16_t src, u16_t dst, u64_t *seq_auth)
DECL|bt_mesh_friend_clear_net_idx|function|void bt_mesh_friend_clear_net_idx(u16_t net_idx)
DECL|bt_mesh_friend_clear|function|int bt_mesh_friend_clear(struct bt_mesh_net_rx *rx, struct net_buf_simple *buf)
DECL|bt_mesh_friend_enqueue_rx|function|void bt_mesh_friend_enqueue_rx(struct bt_mesh_net_rx *rx, enum bt_mesh_friend_pdu_type type, u64_t *seq_auth, struct net_buf_simple *sbuf)
DECL|bt_mesh_friend_enqueue_tx|function|bool bt_mesh_friend_enqueue_tx(struct bt_mesh_net_tx *tx, enum bt_mesh_friend_pdu_type type, u64_t *seq_auth, struct net_buf_simple *sbuf)
DECL|bt_mesh_friend_find|function|struct bt_mesh_friend *bt_mesh_friend_find(u16_t net_idx, u16_t lpn_addr, bool valid, bool established)
DECL|bt_mesh_friend_init|function|int bt_mesh_friend_init(void)
DECL|bt_mesh_friend_match|function|bool bt_mesh_friend_match(u16_t net_idx, u16_t addr)
DECL|bt_mesh_friend_poll|function|int bt_mesh_friend_poll(struct bt_mesh_net_rx *rx, struct net_buf_simple *buf)
DECL|bt_mesh_friend_req|function|int bt_mesh_friend_req(struct bt_mesh_net_rx *rx, struct net_buf_simple *buf)
DECL|bt_mesh_friend_sec_update|function|void bt_mesh_friend_sec_update(u16_t net_idx)
DECL|bt_mesh_friend_sub_add|function|int bt_mesh_friend_sub_add(struct bt_mesh_net_rx *rx, struct net_buf_simple *buf)
DECL|bt_mesh_friend_sub_rem|function|int bt_mesh_friend_sub_rem(struct bt_mesh_net_rx *rx, struct net_buf_simple *buf)
DECL|buf_send_end|function|static void buf_send_end(int err, void *user_data)
DECL|buf_send_start|function|static void buf_send_start(u16_t duration, int err, void *user_data)
DECL|clear_procedure_start|function|static void clear_procedure_start(struct bt_mesh_friend *frnd)
DECL|clear_sent_cb|variable|clear_sent_cb
DECL|clear_timeout|function|static void clear_timeout(struct k_work *work)
DECL|create_friend_pdu|function|static struct net_buf *create_friend_pdu(struct bt_mesh_friend *frnd, struct friend_pdu_info *info, struct net_buf_simple *sdu)
DECL|ctl|member|ctl:1;
DECL|discard_buffer|function|static void discard_buffer(void)
DECL|dst|member|u16_t dst;
DECL|encode_friend_ctl|function|static struct net_buf *encode_friend_ctl(struct bt_mesh_friend *frnd, u8_t ctl_op, struct net_buf_simple *sdu)
DECL|encode_update|function|static struct net_buf *encode_update(struct bt_mesh_friend *frnd, u8_t md)
DECL|enqueue_buf|function|static void enqueue_buf(struct bt_mesh_friend *frnd, struct net_buf *buf)
DECL|enqueue_friend_pdu|function|static void enqueue_friend_pdu(struct bt_mesh_friend *frnd, enum bt_mesh_friend_pdu_type type, struct net_buf *buf)
DECL|enqueue_offer|function|static void enqueue_offer(struct bt_mesh_friend *frnd, s8_t rssi)
DECL|enqueue_sub_cfm|function|static void enqueue_sub_cfm(struct bt_mesh_friend *frnd, u8_t xact)
DECL|enqueue_update|function|static void enqueue_update(struct bt_mesh_friend *frnd, u8_t md)
DECL|find_clear|function|static struct bt_mesh_friend *find_clear(u16_t prev_friend)
DECL|friend_adv|struct|static struct friend_adv {
DECL|friend_buf_alloc|function|static struct net_buf *friend_buf_alloc(u16_t src)
DECL|friend_clear_sent|function|static void friend_clear_sent(int err, void *user_data)
DECL|friend_clear|function|static void friend_clear(struct bt_mesh_friend *frnd)
DECL|friend_lpn_enqueue_rx|function|static void friend_lpn_enqueue_rx(struct bt_mesh_friend *frnd, struct bt_mesh_net_rx *rx, enum bt_mesh_friend_pdu_type type, u64_t *seq_auth, struct net_buf_simple *sbuf)
DECL|friend_lpn_enqueue_tx|function|static void friend_lpn_enqueue_tx(struct bt_mesh_friend *frnd, struct bt_mesh_net_tx *tx, enum bt_mesh_friend_pdu_type type, u64_t *seq_auth, struct net_buf_simple *sbuf)
DECL|friend_lpn_matches|function|static bool friend_lpn_matches(struct bt_mesh_friend *frnd, u16_t net_idx, u16_t addr)
DECL|friend_pdu_info|struct|struct friend_pdu_info {
DECL|friend_purge_old_ack|function|static void friend_purge_old_ack(struct bt_mesh_friend *frnd, u64_t *seq_auth, u16_t src)
DECL|friend_recv_delay|function|static void friend_recv_delay(struct bt_mesh_friend *frnd)
DECL|friend_sub_add|function|static void friend_sub_add(struct bt_mesh_friend *frnd, u16_t addr)
DECL|friend_sub_rem|function|static void friend_sub_rem(struct bt_mesh_friend *frnd, u16_t addr)
DECL|friend_timeout|function|static void friend_timeout(struct k_work *work)
DECL|get_seg|function|static struct bt_mesh_friend_seg *get_seg(struct bt_mesh_friend *frnd, u16_t src, u64_t *seq_auth)
DECL|iv_index|member|u32_t iv_index;
DECL|offer_delay|function|static s32_t offer_delay(struct bt_mesh_friend *frnd, s8_t rssi, u8_t crit)
DECL|recv_delay|function|static s32_t recv_delay(struct bt_mesh_friend *frnd)
DECL|send_friend_clear|function|static void send_friend_clear(struct bt_mesh_friend *frnd)
DECL|seq_auth|member|u64_t seq_auth;
DECL|seq|member|u8_t seq[3];
DECL|src|member|u16_t src;
DECL|ttl|member|u8_t ttl:7,
