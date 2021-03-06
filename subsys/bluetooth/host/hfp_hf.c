DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|MAX_IND_STR_LEN|macro|MAX_IND_STR_LEN
DECL|ag_indicator_handle_values|function|void ag_indicator_handle_values(struct at_client *hf_at, u32_t index,u32_t value)
DECL|ag_ind|variable|ag_ind
DECL|brsf_finish|function|int brsf_finish(struct at_client *hf_at, enum at_result result,enum at_cme cme_err)
DECL|brsf_handle|function|int brsf_handle(struct at_client *hf_at)
DECL|brsf_resp|function|int brsf_resp(struct at_client *hf_at, struct net_buf *buf)
DECL|bt_hfp_hf_accept|function|static int bt_hfp_hf_accept(struct bt_conn *conn, struct bt_rfcomm_dlc **dlc)
DECL|bt_hfp_hf_lookup_bt_conn|function|static struct bt_hfp_hf *bt_hfp_hf_lookup_bt_conn(struct bt_conn *conn)
DECL|bt_hfp_hf_pool|variable|bt_hfp_hf_pool
DECL|bt_hfp_hf_register|function|int bt_hfp_hf_register(struct bt_hfp_hf_cb *cb)
DECL|bt_hfp_hf_send_cmd|function|int bt_hfp_hf_send_cmd(struct bt_conn *conn, enum bt_hfp_hf_at_cmd cmd)
DECL|bt_hf|variable|bt_hf
DECL|ciev_handle|function|int ciev_handle(struct at_client *hf_at)
DECL|cind_finish|function|int cind_finish(struct at_client *hf_at, enum at_result result,enum at_cme cme_err)
DECL|cind_handle_values|function|static void cind_handle_values(struct at_client *hf_at, u32_t index, char *name, u32_t min, u32_t max)
DECL|cind_handle|function|int cind_handle(struct at_client *hf_at)
DECL|cind_resp|function|int cind_resp(struct at_client *hf_at, struct net_buf *buf)
DECL|cind_status_finish|function|int cind_status_finish(struct at_client *hf_at, enum at_result result, enum at_cme cme_err)
DECL|cind_status_handle|function|int cind_status_handle(struct at_client *hf_at)
DECL|cind_status_resp|function|int cind_status_resp(struct at_client *hf_at, struct net_buf *buf)
DECL|cmd_complete|function|int cmd_complete(struct at_client *hf_at, enum at_result result, enum at_cme cme_err)
DECL|cmd|member|const char *cmd;
DECL|cmee_finish|function|int cmee_finish(struct at_client *hf_at, enum at_result result,enum at_cme cme_err)
DECL|cmer_finish|function|int cmer_finish(struct at_client *hf_at, enum at_result result,enum at_cme cme_err)
DECL|func|member|int (*func)(struct at_client *hf_at);
DECL|handlers|variable|handlers
DECL|hf_slc_error|function|void hf_slc_error(struct at_client *hf_at)
DECL|hf_slc_establish|function|int hf_slc_establish(struct bt_hfp_hf *hf)
DECL|hfp_hf_connected|function|static void hfp_hf_connected(struct bt_rfcomm_dlc *dlc)
DECL|hfp_hf_disconnected|function|static void hfp_hf_disconnected(struct bt_rfcomm_dlc *dlc)
DECL|hfp_hf_init|function|static void hfp_hf_init(void)
DECL|hfp_hf_recv|function|static void hfp_hf_recv(struct bt_rfcomm_dlc *dlc, struct net_buf *buf)
DECL|hfp_hf_send_cmd|function|int hfp_hf_send_cmd(struct bt_hfp_hf *hf, at_resp_cb_t resp, at_finish_cb_t finish, const char *format, ...)
DECL|hfp_hf_unsol_lookup|function|static const struct unsolicited *hfp_hf_unsol_lookup(struct at_client *hf_at)
DECL|max|member|u32_t max;
DECL|min|member|u32_t min;
DECL|name|member|char *name;
DECL|ring_handle|function|int ring_handle(struct at_client *hf_at)
DECL|slc_completed|function|static void slc_completed(struct at_client *hf_at)
DECL|type|member|enum at_cmd_type type;
DECL|unsolicited_cb|function|int unsolicited_cb(struct at_client *hf_at, struct net_buf *buf)
DECL|unsolicited|struct|static const struct unsolicited {
