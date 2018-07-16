DECL|conn|member|struct bt_conn *conn;
DECL|smp_bt_attrs|variable|smp_bt_attrs
DECL|smp_bt_ccc_changed|function|static void smp_bt_ccc_changed(const struct bt_gatt_attr *attr, u16_t value)
DECL|smp_bt_ccc|variable|smp_bt_ccc
DECL|smp_bt_chr_uuid|variable|smp_bt_chr_uuid
DECL|smp_bt_chr_write|function|static ssize_t smp_bt_chr_write(struct bt_conn *conn,const struct bt_gatt_attr *attr, const void *buf, u16_t len, u16_t offset, u8_t flags)
DECL|smp_bt_conn_from_pkt|function|static struct bt_conn *smp_bt_conn_from_pkt(const struct net_buf *nb)
DECL|smp_bt_get_mtu|function|static u16_t smp_bt_get_mtu(const struct net_buf *nb)
DECL|smp_bt_init|function|static int smp_bt_init(struct device *dev)
DECL|smp_bt_register|function|int smp_bt_register(void)
DECL|smp_bt_svc_uuid|variable|smp_bt_svc_uuid
DECL|smp_bt_svc|variable|smp_bt_svc
DECL|smp_bt_transport|variable|smp_bt_transport
DECL|smp_bt_tx_pkt|function|static int smp_bt_tx_pkt(struct zephyr_smp_transport *zst, struct net_buf *nb)
DECL|smp_bt_tx_rsp|function|static int smp_bt_tx_rsp(struct bt_conn *conn, const void *data, u16_t len)
DECL|smp_bt_ud_copy|function|static int smp_bt_ud_copy(struct net_buf *dst, const struct net_buf *src)
DECL|smp_bt_ud_free|function|static void smp_bt_ud_free(void *ud)
DECL|smp_bt_user_data|struct|struct smp_bt_user_data {
