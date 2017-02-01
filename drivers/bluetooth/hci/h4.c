DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|H4_ACL|macro|H4_ACL
DECL|H4_CMD|macro|H4_CMD
DECL|H4_EVT|macro|H4_EVT
DECL|H4_NONE|macro|H4_NONE
DECL|H4_SCO|macro|H4_SCO
DECL|_bt_uart_init|function|static int _bt_uart_init(struct device *unused)
DECL|acl|member|struct bt_hci_acl_hdr acl;
DECL|bt_uart_isr|function|static void bt_uart_isr(struct device *unused)
DECL|buf|member|struct net_buf *buf;
DECL|buf|member|struct net_buf *buf;
DECL|copy_hdr|function|static inline void copy_hdr(struct net_buf *buf)
DECL|discardable|member|bool discardable;
DECL|discard|member|uint16_t discard;
DECL|drv|variable|drv
DECL|evt|member|struct bt_hci_evt_hdr evt;
DECL|fifo|member|struct k_fifo fifo;
DECL|fifo|member|struct k_fifo fifo;
DECL|get_acl_hdr|function|static inline void get_acl_hdr(void)
DECL|get_evt_hdr|function|static inline void get_evt_hdr(void)
DECL|get_rx|function|static struct net_buf *get_rx(int timeout)
DECL|h4_dev|variable|h4_dev
DECL|h4_discard|function|static size_t h4_discard(struct device *uart, size_t len)
DECL|h4_get_type|function|static inline void h4_get_type(void)
DECL|h4_open|function|static int h4_open(void)
DECL|h4_send|function|static int h4_send(struct net_buf *buf)
DECL|have_hdr|member|bool have_hdr;
DECL|hdr_len|member|uint8_t hdr_len;
DECL|hdr|member|uint8_t hdr[4];
DECL|process_rx|function|static inline void process_rx(void)
DECL|process_tx|function|static inline void process_tx(void)
DECL|read_header|function|static inline void read_header(void)
DECL|read_payload|function|static inline void read_payload(void)
DECL|remaining|member|uint16_t remaining;
DECL|reset_rx|function|static void reset_rx(void)
DECL|rx_thread|function|static void rx_thread(void *p1, void *p2, void *p3)
DECL|rx|variable|rx
DECL|tx|variable|tx
DECL|type|member|uint8_t type;
DECL|type|member|uint8_t type;
