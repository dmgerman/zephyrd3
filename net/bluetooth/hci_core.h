DECL|BT_ACL_IN|enumerator|BT_ACL_IN, /** Incoming ACL data */
DECL|BT_ACL_OUT|enumerator|BT_ACL_OUT, /** Outgoing ACL data */
DECL|BT_BUF_ACL_IN_MAX|macro|BT_BUF_ACL_IN_MAX
DECL|BT_BUF_ACL_OUT_MAX|macro|BT_BUF_ACL_OUT_MAX
DECL|BT_BUF_MAX_DATA|macro|BT_BUF_MAX_DATA
DECL|BT_CMD|enumerator|BT_CMD, /** HCI command */
DECL|BT_DEV_ADVERTISING|enumerator|BT_DEV_ADVERTISING,
DECL|BT_DEV_SCANNING|enumerator|BT_DEV_SCANNING,
DECL|BT_DEV_SCAN_FILTER_DUP|enumerator|BT_DEV_SCAN_FILTER_DUP,
DECL|BT_DUMMY|enumerator|BT_DUMMY = BT_CMD, /** Only used for waking up fibers */
DECL|BT_EVT|enumerator|BT_EVT, /** HCI event */
DECL|BT_STACK_DEBUG_EXTRA|macro|BT_STACK_DEBUG_EXTRA
DECL|BT_STACK_DEBUG_EXTRA|macro|BT_STACK_DEBUG_EXTRA
DECL|BT_STACK_NOINIT|macro|BT_STACK_NOINIT
DECL|BT_STACK|macro|BT_STACK
DECL|LE_CONN_LATENCY|macro|LE_CONN_LATENCY
DECL|LE_CONN_MAX_INTERVAL|macro|LE_CONN_MAX_INTERVAL
DECL|LE_CONN_MIN_INTERVAL|macro|LE_CONN_MIN_INTERVAL
DECL|LE_CONN_TIMEOUT|macro|LE_CONN_TIMEOUT
DECL|bdaddr|member|bt_addr_t bdaddr;
DECL|bt_acl_data|struct|struct bt_acl_data {
DECL|bt_acl|macro|bt_acl
DECL|bt_addr_cmp|function|static inline int bt_addr_cmp(const bt_addr_t *a, const bt_addr_t *b)
DECL|bt_addr_copy|function|static inline void bt_addr_copy(bt_addr_t *dst, const bt_addr_t *src)
DECL|bt_addr_le_cmp|function|static inline int bt_addr_le_cmp(const bt_addr_le_t *a, const bt_addr_le_t *b)
DECL|bt_addr_le_copy|function|static inline void bt_addr_le_copy(bt_addr_le_t *dst, const bt_addr_le_t *src)
DECL|bt_addr_le_is_identity|function|static inline bool bt_addr_le_is_identity(const bt_addr_le_t *addr)
DECL|bt_addr_le_is_rpa|function|static inline bool bt_addr_le_is_rpa(const bt_addr_le_t *addr)
DECL|bt_buf_type|enum|enum bt_buf_type {
DECL|bt_dev|struct|struct bt_dev {
DECL|bt_hci_data|struct|struct bt_hci_data {
DECL|bt_hci|macro|bt_hci
DECL|bt_le_conn_params_valid|function|static inline bool bt_le_conn_params_valid(uint16_t min, uint16_t max,uint16_t latency, uint16_t timeout)
DECL|bt_type|macro|bt_type
DECL|cmd_tx_queue|member|struct nano_fifo cmd_tx_queue;
DECL|drv|member|struct bt_driver *drv;
DECL|features|member|uint8_t features[8];
DECL|flags|member|atomic_t flags[1];
DECL|handle|member|uint16_t handle;
DECL|hci_revision|member|uint16_t hci_revision;
DECL|hci_version|member|uint8_t hci_version;
DECL|le_features|member|uint8_t le_features[8];
DECL|le_mtu|member|uint16_t le_mtu;
DECL|le_pkts_sem|member|struct nano_sem le_pkts_sem;
DECL|le_pkts|member|uint8_t le_pkts;
DECL|lmp_bredr_capable|macro|lmp_bredr_capable
DECL|lmp_le_capable|macro|lmp_le_capable
DECL|manufacturer|member|uint16_t manufacturer;
DECL|ncmd_sem|member|struct nano_sem ncmd_sem;
DECL|ncmd|member|uint8_t ncmd;
DECL|opcode|member|uint16_t opcode;
DECL|rx_prio_queue|member|struct nano_fifo rx_prio_queue;
DECL|rx_queue|member|struct nano_fifo rx_queue;
DECL|sent_cmd|member|struct net_buf *sent_cmd;
DECL|sync|member|void *sync;
DECL|type|member|uint8_t type;
DECL|type|member|uint8_t type;
