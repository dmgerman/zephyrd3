DECL|ADV_INT_DEFAULT|macro|ADV_INT_DEFAULT
DECL|ADV_INT_FAST|macro|ADV_INT_FAST
DECL|ADV_INT|macro|ADV_INT
DECL|ADV_STACK_SIZE|macro|ADV_STACK_SIZE
DECL|ADV_STACK_SIZE|macro|ADV_STACK_SIZE
DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|MESH_SCAN_INTERVAL|macro|MESH_SCAN_INTERVAL
DECL|MESH_SCAN_WINDOW|macro|MESH_SCAN_WINDOW
DECL|adv_send|function|static inline void adv_send(struct net_buf *buf)
DECL|adv_sent|function|static inline void adv_sent(struct net_buf *buf, u16_t duration, int err)
DECL|adv_thread_data|variable|adv_thread_data
DECL|adv_thread|function|static void adv_thread(void *p1, void *p2, void *p3)
DECL|adv_type|variable|adv_type
DECL|bt_mesh_adv_create_from_pool|function|struct net_buf *bt_mesh_adv_create_from_pool(struct net_buf_pool *pool, enum bt_mesh_adv_type type, u8_t xmit_count, u8_t xmit_int, s32_t timeout)
DECL|bt_mesh_adv_create|function|struct net_buf *bt_mesh_adv_create(enum bt_mesh_adv_type type, u8_t xmit_count, u8_t xmit_int, s32_t timeout)
DECL|bt_mesh_adv_init|function|void bt_mesh_adv_init(void)
DECL|bt_mesh_adv_send|function|void bt_mesh_adv_send(struct net_buf *buf, bt_mesh_adv_func_t sent)
DECL|bt_mesh_adv_update|function|void bt_mesh_adv_update(void)
DECL|bt_mesh_scan_cb|function|static void bt_mesh_scan_cb(const bt_addr_le_t *addr, s8_t rssi, u8_t adv_type, struct net_buf_simple *buf)
DECL|bt_mesh_scan_disable|function|int bt_mesh_scan_disable(void)
DECL|bt_mesh_scan_enable|function|int bt_mesh_scan_enable(void)
