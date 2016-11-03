DECL|BT_DBG|macro|BT_DBG
DECL|BT_DBG|macro|BT_DBG
DECL|brsf_finish|function|int brsf_finish(struct at_client *hf_at, struct net_buf *buf,enum at_result result)
DECL|brsf_handle|function|int brsf_handle(struct at_client *hf_at)
DECL|brsf_resp|function|int brsf_resp(struct at_client *hf_at, struct net_buf *buf)
DECL|bt_hfp_hf_accept|function|static int bt_hfp_hf_accept(struct bt_conn *conn, struct bt_rfcomm_dlc **dlc)
DECL|bt_hfp_hf_pool|variable|bt_hfp_hf_pool
DECL|bt_hfp_hf_register|function|int bt_hfp_hf_register(struct bt_hfp_hf_cb *cb)
DECL|bt_hf|variable|bt_hf
DECL|hf_fifo|variable|hf_fifo
DECL|hf_slc_error|function|void hf_slc_error(struct at_client *hf_at)
DECL|hf_slc_establish|function|int hf_slc_establish(struct bt_hfp_hf *hf)
DECL|hfp_hf_connected|function|static void hfp_hf_connected(struct bt_rfcomm_dlc *dlc)
DECL|hfp_hf_disconnected|function|static void hfp_hf_disconnected(struct bt_rfcomm_dlc *dlc)
DECL|hfp_hf_init|function|static void hfp_hf_init(void)
DECL|hfp_hf_recv|function|static void hfp_hf_recv(struct bt_rfcomm_dlc *dlc, struct net_buf *buf)
DECL|hfp_hf_send_cmd|function|int hfp_hf_send_cmd(struct bt_hfp_hf *hf, at_resp_cb_t resp, at_finish_cb_t finish, const char *format, ...)
