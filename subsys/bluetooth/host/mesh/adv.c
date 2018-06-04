DECL|ADV_INT_DEFAULT_MS|macro|ADV_INT_DEFAULT_MS
DECL|ADV_INT_FAST_MS|macro|ADV_INT_FAST_MS
DECL|ADV_SCAN_UNIT|macro|ADV_SCAN_UNIT
DECL|ADV_STACK_SIZE|macro|ADV_STACK_SIZE
DECL|ADV_STACK_SIZE|macro|ADV_STACK_SIZE
DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|MESH_SCAN_INTERVAL_MS|macro|MESH_SCAN_INTERVAL_MS
DECL|MESH_SCAN_INTERVAL|macro|MESH_SCAN_INTERVAL
DECL|MESH_SCAN_WINDOW_MS|macro|MESH_SCAN_WINDOW_MS
DECL|MESH_SCAN_WINDOW|macro|MESH_SCAN_WINDOW
DECL|adv_alloc|function|static struct bt_mesh_adv *adv_alloc(int id)
DECL|adv_pool|variable|adv_pool
DECL|adv_send_end|function|static inline void adv_send_end(int err, const struct bt_mesh_send_cb *cb,void *cb_data)
DECL|adv_send_start|function|static inline void adv_send_start(u16_t duration, int err, const struct bt_mesh_send_cb *cb, void *cb_data)
DECL|adv_send|function|static inline void adv_send(struct net_buf *buf)
DECL|adv_stack_dump|function|static void adv_stack_dump(const struct k_thread *thread, void *user_data)
DECL|adv_thread_data|variable|adv_thread_data
DECL|adv_thread|function|static void adv_thread(void *p1, void *p2, void *p3)
DECL|adv_type|variable|adv_type
DECL|bt_mesh_adv_create_from_pool|function|struct net_buf *bt_mesh_adv_create_from_pool(struct net_buf_pool *pool, bt_mesh_adv_alloc_t get_id, enum bt_mesh_adv_type type, u8_t xmit, s32_t timeout)
DECL|bt_mesh_adv_create|function|struct net_buf *bt_mesh_adv_create(enum bt_mesh_adv_type type, u8_t xmit, s32_t timeout)
DECL|bt_mesh_adv_init|function|void bt_mesh_adv_init(void)
DECL|bt_mesh_adv_send|function|void bt_mesh_adv_send(struct net_buf *buf, const struct bt_mesh_send_cb *cb, void *cb_data)
DECL|bt_mesh_adv_update|function|void bt_mesh_adv_update(void)
DECL|bt_mesh_scan_cb|function|static void bt_mesh_scan_cb(const bt_addr_le_t *addr, s8_t rssi, u8_t adv_type, struct net_buf_simple *buf)
DECL|bt_mesh_scan_disable|function|int bt_mesh_scan_disable(void)
DECL|bt_mesh_scan_enable|function|int bt_mesh_scan_enable(void)
