DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|H4_ACL|macro|H4_ACL
DECL|H4_CMD|macro|H4_CMD
DECL|H4_EVT|macro|H4_EVT
DECL|H4_NONE|macro|H4_NONE
DECL|H4_SCO|macro|H4_SCO
DECL|_bt_uart_init|function|static int _bt_uart_init(struct device *unused)
DECL|acl|member|struct bt_hci_acl_hdr acl;
DECL|bt_uart_isr|function|static void bt_uart_isr(struct device *unused)
DECL|buf_set_type|function|static inline void buf_set_type(struct net_buf *buf)
DECL|buf|member|struct net_buf *buf;
DECL|copy_hdr|function|static inline void copy_hdr(struct net_buf *buf)
DECL|discard|member|uint16_t discard;
DECL|drv|variable|drv
DECL|evt|member|struct bt_hci_evt_hdr evt;
DECL|get_acl_hdr|function|static inline void get_acl_hdr(void)
DECL|get_evt_hdr|function|static inline void get_evt_hdr(void)
DECL|h4_dev|variable|h4_dev
DECL|h4_discard|function|static size_t h4_discard(struct device *uart, size_t len)
DECL|h4_get_type|function|static inline void h4_get_type(void)
DECL|h4_open|function|static int h4_open(void)
DECL|h4_send|function|static int h4_send(struct net_buf *buf)
DECL|have_hdr|member|bool have_hdr;
DECL|read_header|function|static inline void read_header(void)
DECL|read_payload|function|static inline bool read_payload(void)
DECL|remaining|member|uint16_t remaining;
DECL|rx_thread|function|static void rx_thread(void *p1, void *p2, void *p3)
DECL|rx|variable|rx
DECL|sem|member|struct k_sem sem;
DECL|type|member|uint8_t type;
