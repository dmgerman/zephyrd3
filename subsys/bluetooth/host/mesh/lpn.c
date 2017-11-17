DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|CLEAR_ATTEMPTS|macro|CLEAR_ATTEMPTS
DECL|FRIEND_REQ_RETRY_TIMEOUT|macro|FRIEND_REQ_RETRY_TIMEOUT
DECL|FRIEND_REQ_SCAN|macro|FRIEND_REQ_SCAN
DECL|FRIEND_REQ_TIMEOUT|macro|FRIEND_REQ_TIMEOUT
DECL|FRIEND_REQ_WAIT|macro|FRIEND_REQ_WAIT
DECL|LPN_AUTO_TIMEOUT|macro|LPN_AUTO_TIMEOUT
DECL|LPN_AUTO_TIMEOUT|macro|LPN_AUTO_TIMEOUT
DECL|LPN_CRITERIA|macro|LPN_CRITERIA
DECL|LPN_POLL_TO|macro|LPN_POLL_TO
DECL|LPN_RECV_DELAY|macro|LPN_RECV_DELAY
DECL|POLL_RETRY_TIMEOUT|macro|POLL_RETRY_TIMEOUT
DECL|POLL_TIMEOUT_MAX|macro|POLL_TIMEOUT_MAX
DECL|POLL_TO|macro|POLL_TO
DECL|POLL_XMIT|macro|POLL_XMIT
DECL|REQ_ATTEMPTS|macro|REQ_ATTEMPTS
DECL|REQ_RETRY_DURATION|macro|REQ_RETRY_DURATION
DECL|SCAN_LATENCY|macro|SCAN_LATENCY
DECL|bt_mesh_lpn_disable|function|void bt_mesh_lpn_disable(bool force)
DECL|bt_mesh_lpn_friend_clear_cfm|function|int bt_mesh_lpn_friend_clear_cfm(struct bt_mesh_net_rx *rx, struct net_buf_simple *buf)
DECL|bt_mesh_lpn_friend_offer|function|int bt_mesh_lpn_friend_offer(struct bt_mesh_net_rx *rx, struct net_buf_simple *buf)
DECL|bt_mesh_lpn_friend_poll|function|void bt_mesh_lpn_friend_poll(void)
DECL|bt_mesh_lpn_friend_sub_cfm|function|int bt_mesh_lpn_friend_sub_cfm(struct bt_mesh_net_rx *rx, struct net_buf_simple *buf)
DECL|bt_mesh_lpn_friend_update|function|int bt_mesh_lpn_friend_update(struct bt_mesh_net_rx *rx, struct net_buf_simple *buf)
DECL|bt_mesh_lpn_group_add|function|void bt_mesh_lpn_group_add(u16_t group)
DECL|bt_mesh_lpn_group_del|function|void bt_mesh_lpn_group_del(u16_t *groups, size_t group_count)
DECL|bt_mesh_lpn_init|function|int bt_mesh_lpn_init(void)
DECL|bt_mesh_lpn_msg_received|function|void bt_mesh_lpn_msg_received(struct bt_mesh_net_rx *rx)
DECL|bt_mesh_lpn_set|function|int bt_mesh_lpn_set(bool enable)
DECL|clear_friendship|function|static void clear_friendship(bool force, bool disable)
DECL|friend_clear_sent|function|static void friend_clear_sent(struct net_buf *buf, u16_t duration, int err)
DECL|friend_req_sent|function|static void friend_req_sent(struct net_buf *buf, u16_t duration, int err)
DECL|friend_response_received|function|static void friend_response_received(struct bt_mesh_lpn *lpn)
DECL|group_clear|function|static inline void group_clear(atomic_t *target, atomic_t *source)
DECL|group_popcount|function|static inline int group_popcount(atomic_t *target)
DECL|group_set|function|static inline void group_set(atomic_t *target, atomic_t *source)
DECL|group_zero|function|static inline void group_zero(atomic_t *target)
DECL|lpn_group_add|function|static void lpn_group_add(u16_t group)
DECL|lpn_group_del|function|static void lpn_group_del(u16_t group)
DECL|lpn_set_state|function|static inline void lpn_set_state(int state)
DECL|lpn_timeout|function|static void lpn_timeout(struct k_work *work)
DECL|poll_timeout|function|static s32_t poll_timeout(struct bt_mesh_lpn *lpn)
DECL|req_sent|function|static void req_sent(struct net_buf *buf, u16_t duration, int err)
DECL|send_friend_clear|function|static int send_friend_clear(void)
DECL|send_friend_poll|function|static int send_friend_poll(void)
DECL|send_friend_req|function|static int send_friend_req(struct bt_mesh_lpn *lpn)
DECL|state2str|function|static const char *state2str(int state)
DECL|sub_update|function|static bool sub_update(u8_t op)
DECL|update_timeout|function|static void update_timeout(struct bt_mesh_lpn *lpn)
