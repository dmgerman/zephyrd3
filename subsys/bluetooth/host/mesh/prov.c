DECL|AUTH_METHOD_INPUT|macro|AUTH_METHOD_INPUT
DECL|AUTH_METHOD_NO_OOB|macro|AUTH_METHOD_NO_OOB
DECL|AUTH_METHOD_OUTPUT|macro|AUTH_METHOD_OUTPUT
DECL|AUTH_METHOD_STATIC|macro|AUTH_METHOD_STATIC
DECL|BEARER_CTL|macro|BEARER_CTL
DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|BUF_TIMEOUT|macro|BUF_TIMEOUT
DECL|CLOSE_REASON_FAILED|macro|CLOSE_REASON_FAILED
DECL|CLOSE_REASON_SUCCESS|macro|CLOSE_REASON_SUCCESS
DECL|CLOSE_REASON_TIMEOUT|macro|CLOSE_REASON_TIMEOUT
DECL|CONT_PAYLOAD_MAX|macro|CONT_PAYLOAD_MAX
DECL|CONT_SEG_INDEX|macro|CONT_SEG_INDEX
DECL|GPCF|macro|GPCF
DECL|GPC_ACK|macro|GPC_ACK
DECL|GPC_CONT|macro|GPC_CONT
DECL|GPC_CTL|macro|GPC_CTL
DECL|GPC_START|macro|GPC_START
DECL|HAVE_DHKEY|enumerator|HAVE_DHKEY, /* DHKey has been calcualted */
DECL|INPUT_OOB_NUMBER|macro|INPUT_OOB_NUMBER
DECL|INPUT_OOB_PUSH|macro|INPUT_OOB_PUSH
DECL|INPUT_OOB_STRING|macro|INPUT_OOB_STRING
DECL|INPUT_OOB_TWIST|macro|INPUT_OOB_TWIST
DECL|LINK_ACK|macro|LINK_ACK
DECL|LINK_ACTIVE|enumerator|LINK_ACTIVE, /* Link has been opened */
DECL|LINK_CLOSE|macro|LINK_CLOSE
DECL|LINK_OPEN|macro|LINK_OPEN
DECL|LOCAL_PUB_KEY|enumerator|LOCAL_PUB_KEY, /* Local public key is available */
DECL|NUM_FLAGS|enumerator|NUM_FLAGS,
DECL|OUTPUT_OOB_BEEP|macro|OUTPUT_OOB_BEEP
DECL|OUTPUT_OOB_BLINK|macro|OUTPUT_OOB_BLINK
DECL|OUTPUT_OOB_NUMBER|macro|OUTPUT_OOB_NUMBER
DECL|OUTPUT_OOB_STRING|macro|OUTPUT_OOB_STRING
DECL|OUTPUT_OOB_VIBRATE|macro|OUTPUT_OOB_VIBRATE
DECL|PROV_ALG_P256|macro|PROV_ALG_P256
DECL|PROV_BUF_HEADROOM|macro|PROV_BUF_HEADROOM
DECL|PROV_BUF_HEADROOM|macro|PROV_BUF_HEADROOM
DECL|PROV_BUF|macro|PROV_BUF
DECL|PROV_CAPABILITIES|macro|PROV_CAPABILITIES
DECL|PROV_COMPLETE|macro|PROV_COMPLETE
DECL|PROV_CONFIRM|macro|PROV_CONFIRM
DECL|PROV_DATA|macro|PROV_DATA
DECL|PROV_ERR_ADDR|macro|PROV_ERR_ADDR
DECL|PROV_ERR_CFM_FAILED|macro|PROV_ERR_CFM_FAILED
DECL|PROV_ERR_DECRYPT|macro|PROV_ERR_DECRYPT
DECL|PROV_ERR_NONE|macro|PROV_ERR_NONE
DECL|PROV_ERR_NVAL_FMT|macro|PROV_ERR_NVAL_FMT
DECL|PROV_ERR_NVAL_PDU|macro|PROV_ERR_NVAL_PDU
DECL|PROV_ERR_RESOURCES|macro|PROV_ERR_RESOURCES
DECL|PROV_ERR_UNEXP_ERR|macro|PROV_ERR_UNEXP_ERR
DECL|PROV_ERR_UNEXP_PDU|macro|PROV_ERR_UNEXP_PDU
DECL|PROV_FAILED|macro|PROV_FAILED
DECL|PROV_INPUT_COMPLETE|macro|PROV_INPUT_COMPLETE
DECL|PROV_INVITE|macro|PROV_INVITE
DECL|PROV_PUB_KEY|macro|PROV_PUB_KEY
DECL|PROV_RANDOM|macro|PROV_RANDOM
DECL|PROV_START|macro|PROV_START
DECL|PROV_XMIT|macro|PROV_XMIT
DECL|REMOTE_PUB_KEY|enumerator|REMOTE_PUB_KEY, /* Remote key has been received */
DECL|RETRANSMIT_TIMEOUT|macro|RETRANSMIT_TIMEOUT
DECL|SEND_CONFIRM|enumerator|SEND_CONFIRM, /* Waiting to send Confirm value */
DECL|START_LAST_SEG|macro|START_LAST_SEG
DECL|START_PAYLOAD_MAX|macro|START_PAYLOAD_MAX
DECL|TRANSACTION_TIMEOUT|macro|TRANSACTION_TIMEOUT
DECL|WAIT_NUMBER|enumerator|WAIT_NUMBER, /* Waiting for number input from user */
DECL|WAIT_STRING|enumerator|WAIT_STRING, /* Waiting for string input from user */
DECL|XACT_NVAL|macro|XACT_NVAL
DECL|XACT_SEG_DATA|macro|XACT_SEG_DATA
DECL|XACT_SEG_RECV|macro|XACT_SEG_RECV
DECL|ack_complete|function|static void ack_complete(u16_t duration, int err, void *user_data)
DECL|adv_buf_create|function|static struct net_buf *adv_buf_create(void)
DECL|auth|member|u8_t auth[16]; /* Authentication Value */
DECL|bearer_ctl_send|function|static int bearer_ctl_send(u8_t op, void *data, u8_t data_len)
DECL|bt_mesh_input_number|function|int bt_mesh_input_number(u32_t num)
DECL|bt_mesh_input_string|function|int bt_mesh_input_string(const char *str)
DECL|bt_mesh_pb_adv_recv|function|void bt_mesh_pb_adv_recv(struct net_buf_simple *buf)
DECL|bt_mesh_pb_gatt_close|function|int bt_mesh_pb_gatt_close(struct bt_conn *conn)
DECL|bt_mesh_pb_gatt_open|function|int bt_mesh_pb_gatt_open(struct bt_conn *conn)
DECL|bt_mesh_pb_gatt_recv|function|int bt_mesh_pb_gatt_recv(struct bt_conn *conn, struct net_buf_simple *buf)
DECL|bt_mesh_prov_complete|function|void bt_mesh_prov_complete(u16_t net_idx, u16_t addr)
DECL|bt_mesh_prov_get|function|const struct bt_mesh_prov *bt_mesh_prov_get(void)
DECL|bt_mesh_prov_init|function|int bt_mesh_prov_init(const struct bt_mesh_prov *prov_info)
DECL|bt_mesh_prov_reset|function|void bt_mesh_prov_reset(void)
DECL|bt_prov_active|function|bool bt_prov_active(void)
DECL|buf_sent_cb|variable|buf_sent_cb
DECL|buf_sent|function|static void buf_sent(int err, void *user_data)
DECL|buf|member|struct net_buf *buf[3];
DECL|buf|member|struct net_buf_simple *buf;
DECL|close_link|function|static void close_link(u8_t err, u8_t reason)
DECL|conf_inputs|member|u8_t conf_inputs[145]; /* ConfirmationInputs */
DECL|conf_key|member|u8_t conf_key[16]; /* ConfirmationKey */
DECL|conf_salt|member|u8_t conf_salt[16]; /* ConfirmationSalt */
DECL|conf|member|u8_t conf[16]; /* Remote Confirmation */
DECL|conn|member|struct bt_conn *conn; /* GATT connection */
DECL|dhkey|member|u8_t dhkey[32]; /* Calculated DHKey */
DECL|expect|member|u8_t expect; /* Next expected PDU */
DECL|fcs|member|u8_t fcs; /* Expected FCS value */
DECL|free_segments|function|static void free_segments(void)
DECL|func|member|void (*const func)(struct prov_rx *rx, struct net_buf_simple *buf);
DECL|func|member|void (*func)(const u8_t *data);
DECL|gen_prov_ack_send|function|static void gen_prov_ack_send(u8_t xact_id)
DECL|gen_prov_ack|function|static void gen_prov_ack(struct prov_rx *rx, struct net_buf_simple *buf)
DECL|gen_prov_cont|function|static void gen_prov_cont(struct prov_rx *rx, struct net_buf_simple *buf)
DECL|gen_prov_ctl|function|static void gen_prov_ctl(struct prov_rx *rx, struct net_buf_simple *buf)
DECL|gen_prov_recv|function|static void gen_prov_recv(struct prov_rx *rx, struct net_buf_simple *buf)
DECL|gen_prov_start|function|static void gen_prov_start(struct prov_rx *rx, struct net_buf_simple *buf)
DECL|gen_prov|variable|gen_prov
DECL|gpc|member|u8_t gpc;
DECL|id|member|u32_t id; /* Link ID */
DECL|id|member|u8_t id;
DECL|id|member|u8_t id; /* Transaction ID */
DECL|input_action|function|static bt_mesh_input_action_t input_action(u8_t action)
DECL|is_pb_gatt|function|static inline bool is_pb_gatt(void)
DECL|last_seg|function|static u8_t last_seg(u8_t len)
DECL|last_seg|member|u8_t last_seg; /* Last segment (to check length) */
DECL|len|member|u16_t len;
DECL|link_ack|function|static void link_ack(struct prov_rx *rx, struct net_buf_simple *buf)
DECL|link_close|function|static void link_close(struct prov_rx *rx, struct net_buf_simple *buf)
DECL|link_id|member|u32_t link_id;
DECL|link_open|function|static void link_open(struct prov_rx *rx, struct net_buf_simple *buf)
DECL|link|variable|link
DECL|min_len|member|const u8_t min_len;
DECL|next_transaction_id|function|static inline u8_t next_transaction_id(void)
DECL|oob_action|member|u8_t oob_action;
DECL|oob_method|member|u8_t oob_method;
DECL|oob_size|member|u8_t oob_size;
DECL|output_action|function|static bt_mesh_output_action_t output_action(u8_t action)
DECL|pending_ack|variable|pending_ack
DECL|prev_id|member|u8_t prev_id; /* Previous Transaction ID */
DECL|prov_auth|function|static int prov_auth(u8_t method, u8_t action, u8_t size)
DECL|prov_buf_init|function|static void prov_buf_init(struct net_buf_simple *buf, u8_t type)
DECL|prov_capabilities|function|static void prov_capabilities(const u8_t *data)
DECL|prov_clear_tx|function|static void prov_clear_tx(void)
DECL|prov_complete|function|static void prov_complete(const u8_t *data)
DECL|prov_confirm|function|static void prov_confirm(const u8_t *data)
DECL|prov_data|function|static void prov_data(const u8_t *data)
DECL|prov_dh_key_cb|function|static void prov_dh_key_cb(const u8_t key[32])
DECL|prov_failed|function|static void prov_failed(const u8_t *data)
DECL|prov_handlers|variable|prov_handlers
DECL|prov_input_complete|function|static void prov_input_complete(const u8_t *data)
DECL|prov_invite|function|static void prov_invite(const u8_t *data)
DECL|prov_link|struct|struct prov_link {
DECL|prov_msg_recv|function|static void prov_msg_recv(void)
DECL|prov_pub_key|function|static void prov_pub_key(const u8_t *data)
DECL|prov_random|function|static void prov_random(const u8_t *data)
DECL|prov_retransmit|function|static void prov_retransmit(struct k_work *work)
DECL|prov_rx|struct|struct prov_rx {
DECL|prov_salt|member|u8_t prov_salt[16]; /* Provisioning Salt */
DECL|prov_send_adv|function|static int prov_send_adv(struct net_buf_simple *msg)
DECL|prov_send_fail_msg|function|static void prov_send_fail_msg(u8_t err)
DECL|prov_send_gatt|function|static int prov_send_gatt(struct net_buf_simple *msg)
DECL|prov_send|function|static inline int prov_send(struct net_buf_simple *buf)
DECL|prov_start|function|static void prov_start(const u8_t *data)
DECL|prov|variable|prov
DECL|pub_key_ready|function|static void pub_key_ready(const u8_t *pkey)
DECL|rand|member|u8_t rand[16]; /* Local Random */
DECL|require_link|member|const u8_t require_link;
DECL|reset_link|function|static void reset_link(void)
DECL|retransmit|member|struct k_delayed_work retransmit;
DECL|rx|member|} rx;
DECL|seg|member|u8_t seg; /* Bit-field of unreceived segments */
DECL|send_confirm|function|static void send_confirm(void)
DECL|send_input_complete|function|static void send_input_complete(void)
DECL|send_pub_key|function|static void send_pub_key(void)
DECL|send_reliable|function|static void send_reliable(void)
DECL|start|member|s64_t start;
DECL|tx|member|} tx;
DECL|xact_id|member|u8_t xact_id;
