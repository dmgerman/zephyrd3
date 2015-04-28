DECL|BT_CONN_CONNECTED|enumerator|BT_CONN_CONNECTED,
DECL|BT_CONN_DISCONNECTED|enumerator|BT_CONN_DISCONNECTED,
DECL|BT_CONN_RX_STACK_SIZE|macro|BT_CONN_RX_STACK_SIZE
DECL|BT_CONN_TX_STACK_SIZE|macro|BT_CONN_TX_STACK_SIZE
DECL|bt_conn|struct|struct bt_conn {
DECL|dev|member|struct bt_dev *dev;
DECL|handle|member|uint16_t handle;
DECL|l2_ident|member|uint8_t l2_ident;
DECL|le_conn_interval|member|uint8_t le_conn_interval;
DECL|ref|member|uint8_t ref;
DECL|rx_len|member|uint16_t rx_len;
DECL|rx_queue|member|struct nano_fifo rx_queue;
DECL|rx_stack|member|char rx_stack[BT_CONN_RX_STACK_SIZE];
DECL|rx|member|struct bt_buf *rx;
DECL|state|member|uint8_t state;
DECL|tx_queue|member|struct nano_fifo tx_queue;
DECL|tx_stack|member|char tx_stack[BT_CONN_TX_STACK_SIZE];
