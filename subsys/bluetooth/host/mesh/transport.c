DECL|AID_MASK|macro|AID_MASK
DECL|AID|macro|AID
DECL|AKF|macro|AKF
DECL|APP_MIC_LEN|macro|APP_MIC_LEN
DECL|ASZMIC|macro|ASZMIC
DECL|BLOCK_COMPLETE|macro|BLOCK_COMPLETE
DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|BUF_TIMEOUT|macro|BUF_TIMEOUT
DECL|SEG_HDR|macro|SEG_HDR
DECL|SEG_RETRANSMIT_ATTEMPTS|macro|SEG_RETRANSMIT_ATTEMPTS
DECL|SEG_RETRANSMIT_TIMEOUT|macro|SEG_RETRANSMIT_TIMEOUT
DECL|SEG|macro|SEG
DECL|SEQ_AUTH|macro|SEQ_AUTH
DECL|UNSEG_HDR|macro|UNSEG_HDR
DECL|ack_timeout|function|static inline s32_t ack_timeout(struct seg_rx *rx)
DECL|ack|member|struct k_delayed_work ack;
DECL|block|member|u32_t block;
DECL|bt_mesh_app_key_find|function|struct bt_mesh_app_key *bt_mesh_app_key_find(u16_t app_idx)
DECL|bt_mesh_ctl_send|function|int bt_mesh_ctl_send(struct bt_mesh_net_tx *tx, u8_t ctl_op, void *data, size_t data_len, u64_t *seq_auth, const struct bt_mesh_send_cb *cb, void *cb_data)
DECL|bt_mesh_rpl_clear|function|void bt_mesh_rpl_clear(void)
DECL|bt_mesh_rx_reset|function|void bt_mesh_rx_reset(void)
DECL|bt_mesh_set_hb_sub_dst|function|void bt_mesh_set_hb_sub_dst(u16_t addr)
DECL|bt_mesh_trans_init|function|void bt_mesh_trans_init(void)
DECL|bt_mesh_trans_recv|function|int bt_mesh_trans_recv(struct net_buf_simple *buf, struct bt_mesh_net_rx *rx)
DECL|bt_mesh_trans_resend|function|int bt_mesh_trans_resend(struct bt_mesh_net_tx *tx, struct net_buf_simple *msg, const struct bt_mesh_send_cb *cb, void *cb_data)
DECL|bt_mesh_trans_send|function|int bt_mesh_trans_send(struct bt_mesh_net_tx *tx, struct net_buf_simple *msg, const struct bt_mesh_send_cb *cb, void *cb_data)
DECL|bt_mesh_tx_in_progress|function|bool bt_mesh_tx_in_progress(void)
DECL|bt_mesh_tx_reset|function|void bt_mesh_tx_reset(void)
DECL|buf|member|struct net_buf_simple buf;
DECL|cb_data|member|void *cb_data;
DECL|cb|member|const struct bt_mesh_send_cb *cb;
DECL|ctl_recv|function|static int ctl_recv(struct bt_mesh_net_rx *rx, u8_t hdr, struct net_buf_simple *buf, u64_t *seq_auth)
DECL|ctl|member|ctl:1,
DECL|dst|member|u16_t dst;
DECL|dst|member|u16_t dst;
DECL|first_sent_cb|variable|first_sent_cb
DECL|hb_sub_dst|variable|hb_sub_dst
DECL|hdr|member|u8_t hdr;
DECL|in_use|member|in_use:1,
DECL|is_replay|function|static bool is_replay(struct bt_mesh_net_rx *rx)
DECL|last|member|u32_t last;
DECL|nack_count|member|u8_t nack_count; /* Number of unacked segs */
DECL|new_key|member|new_key:1; /* New/old key */
DECL|obo|member|obo:1;
DECL|retransmit|member|struct k_delayed_work retransmit; /* Retransmit timer */
DECL|sdu_len_is_ok|function|static inline bool sdu_len_is_ok(bool ctl, u8_t seg_n)
DECL|sdu_recv|function|static int sdu_recv(struct bt_mesh_net_rx *rx, u32_t seq, u8_t hdr, u8_t aszmic, struct net_buf_simple *buf)
DECL|seg_ack|function|static void seg_ack(struct k_work *work)
DECL|seg_first_send_start|function|static void seg_first_send_start(u16_t duration, int err, void *user_data)
DECL|seg_len|function|static inline u8_t seg_len(bool ctl)
DECL|seg_n|member|u8_t seg_n:5,
DECL|seg_n|member|u8_t seg_n:5, /* Last segment index */
DECL|seg_retransmit|function|static void seg_retransmit(struct k_work *work)
DECL|seg_rx_alloc|function|static struct seg_rx *seg_rx_alloc(struct bt_mesh_net_rx *net_rx, const u8_t *hdr, const u64_t *seq_auth, u8_t seg_n)
DECL|seg_rx_buf_data|variable|seg_rx_buf_data
DECL|seg_rx_find|function|static struct seg_rx *seg_rx_find(struct bt_mesh_net_rx *net_rx, const u64_t *seq_auth)
DECL|seg_rx_is_valid|function|static bool seg_rx_is_valid(struct seg_rx *rx, struct bt_mesh_net_rx *net_rx, const u8_t *hdr, u8_t seg_n)
DECL|seg_rx_reset|function|static void seg_rx_reset(struct seg_rx *rx, bool full_reset)
DECL|seg_rx|struct|static struct seg_rx {
DECL|seg_rx|variable|seg_rx
DECL|seg_send_start|function|static void seg_send_start(u16_t duration, int err, void *user_data)
DECL|seg_sent_cb|variable|seg_sent_cb
DECL|seg_sent|function|static void seg_sent(int err, void *user_data)
DECL|seg_tx_complete|function|static inline void seg_tx_complete(struct seg_tx *tx, int err)
DECL|seg_tx_lookup|function|static struct seg_tx *seg_tx_lookup(u16_t seq_zero, u8_t obo, u16_t addr)
DECL|seg_tx_reset|function|static void seg_tx_reset(struct seg_tx *tx)
DECL|seg_tx_send_unacked|function|static void seg_tx_send_unacked(struct seg_tx *tx)
DECL|seg_tx|struct|static struct seg_tx {
DECL|seg_tx|variable|seg_tx
DECL|seg|member|struct net_buf *seg[BT_MESH_TX_SEG_COUNT];
DECL|send_ack|function|static int send_ack(struct bt_mesh_subnet *sub, u16_t src, u16_t dst, u8_t ttl, u64_t *seq_auth, u32_t block, u8_t obo)
DECL|send_seg|function|static int send_seg(struct bt_mesh_net_tx *net_tx, struct net_buf_simple *sdu, const struct bt_mesh_send_cb *cb, void *cb_data)
DECL|send_unseg|function|static int send_unseg(struct bt_mesh_net_tx *tx, struct net_buf_simple *sdu, const struct bt_mesh_send_cb *cb, void *cb_data)
DECL|seq_auth|member|u64_t seq_auth;
DECL|seq_auth|member|u64_t seq_auth;
DECL|src|member|u16_t src;
DECL|sub|member|struct bt_mesh_subnet *sub;
DECL|sub|member|struct bt_mesh_subnet *sub;
DECL|trans_ack|function|static int trans_ack(struct bt_mesh_net_rx *rx, u8_t hdr, struct net_buf_simple *buf, u64_t *seq_auth)
DECL|trans_heartbeat|function|static int trans_heartbeat(struct bt_mesh_net_rx *rx, struct net_buf_simple *buf)
DECL|trans_seg|function|static int trans_seg(struct net_buf_simple *buf, struct bt_mesh_net_rx *net_rx, enum bt_mesh_friend_pdu_type *pdu_type, u64_t *seq_auth)
DECL|trans_unseg|function|static int trans_unseg(struct net_buf_simple *buf, struct bt_mesh_net_rx *rx, u64_t *seq_auth)
DECL|ttl|member|u8_t ttl;
DECL|ttl|member|u8_t ttl;
