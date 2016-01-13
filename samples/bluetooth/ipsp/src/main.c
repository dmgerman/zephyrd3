DECL|DEVICE_NAME_LEN|macro|DEVICE_NAME_LEN
DECL|DEVICE_NAME|macro|DEVICE_NAME
DECL|MCAST_IPADDR|macro|MCAST_IPADDR
DECL|MY_IPADDR|macro|MY_IPADDR
DECL|UDP_PORT|macro|UDP_PORT
DECL|UNKNOWN_APPEARANCE|macro|UNKNOWN_APPEARANCE
DECL|ad|variable|ad
DECL|attrs|variable|attrs
DECL|conn_callbacks|variable|conn_callbacks
DECL|connected|function|static void connected(struct bt_conn *conn)
DECL|disconnected|function|static void disconnected(struct bt_conn *conn)
DECL|get_context|function|static inline bool get_context(struct net_context **recv, struct net_context **mcast_recv)
DECL|listen|function|static void listen(void)
DECL|mainloop|function|void mainloop(void)
DECL|prepare_reply|function|static inline struct net_buf *prepare_reply(const char *type, struct net_buf *buf)
DECL|read_appearance|function|static int read_appearance(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_manuf|function|static int read_manuf(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_model|function|static int read_model(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|read_name|function|static int read_name(struct bt_conn *conn, const struct bt_gatt_attr *attr, void *buf, uint16_t len, uint16_t offset)
DECL|receive_and_reply|function|static inline void receive_and_reply(struct net_context *recv, struct net_context *mcast_recv)
DECL|reverse|function|static inline void reverse(unsigned char *buf, int len)
DECL|sd|variable|sd
