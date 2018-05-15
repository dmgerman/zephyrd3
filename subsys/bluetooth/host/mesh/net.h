DECL|BT_MESH_CFG_PENDING|enumerator|BT_MESH_CFG_PENDING,
DECL|BT_MESH_FLAG_COUNT|enumerator|BT_MESH_FLAG_COUNT,
DECL|BT_MESH_HB_PUB_PENDING|enumerator|BT_MESH_HB_PUB_PENDING,
DECL|BT_MESH_IVU_HOURS|macro|BT_MESH_IVU_HOURS
DECL|BT_MESH_IVU_MIN_HOURS|macro|BT_MESH_IVU_MIN_HOURS
DECL|BT_MESH_IVU_TIMEOUT|macro|BT_MESH_IVU_TIMEOUT
DECL|BT_MESH_IV_PENDING|enumerator|BT_MESH_IV_PENDING,
DECL|BT_MESH_IV_UPDATE|macro|BT_MESH_IV_UPDATE
DECL|BT_MESH_KEYS_PENDING|enumerator|BT_MESH_KEYS_PENDING,
DECL|BT_MESH_KEY_REFRESH|macro|BT_MESH_KEY_REFRESH
DECL|BT_MESH_KR_NORMAL|macro|BT_MESH_KR_NORMAL
DECL|BT_MESH_KR_PHASE_1|macro|BT_MESH_KR_PHASE_1
DECL|BT_MESH_KR_PHASE_2|macro|BT_MESH_KR_PHASE_2
DECL|BT_MESH_KR_PHASE_3|macro|BT_MESH_KR_PHASE_3
DECL|BT_MESH_LPN_CLEAR|enumerator|BT_MESH_LPN_CLEAR, /* Clear in progress */
DECL|BT_MESH_LPN_DISABLED|enumerator|BT_MESH_LPN_DISABLED, /* LPN feature is disabled */
DECL|BT_MESH_LPN_ENABLED|enumerator|BT_MESH_LPN_ENABLED, /* LPN enabled, but no Friend */
DECL|BT_MESH_LPN_ESTABLISHED|enumerator|BT_MESH_LPN_ESTABLISHED, /* Friendship established */
DECL|BT_MESH_LPN_RECV_DELAY|enumerator|BT_MESH_LPN_RECV_DELAY, /* Poll sent, waiting ReceiveDelay */
DECL|BT_MESH_LPN_REQ_WAIT|enumerator|BT_MESH_LPN_REQ_WAIT, /* Wait before scanning for offers */
DECL|BT_MESH_LPN_TIMER|enumerator|BT_MESH_LPN_TIMER, /* Waiting for auto timer expiry */
DECL|BT_MESH_LPN_WAIT_OFFER|enumerator|BT_MESH_LPN_WAIT_OFFER, /* Friend Req sent */
DECL|BT_MESH_LPN_WAIT_UPDATE|enumerator|BT_MESH_LPN_WAIT_UPDATE, /* Waiting for Update or message */
DECL|BT_MESH_MOD_PENDING|enumerator|BT_MESH_MOD_PENDING,
DECL|BT_MESH_NET_FLAG_IVU|macro|BT_MESH_NET_FLAG_IVU
DECL|BT_MESH_NET_FLAG_KR|macro|BT_MESH_NET_FLAG_KR
DECL|BT_MESH_NET_HDR_LEN|macro|BT_MESH_NET_HDR_LEN
DECL|BT_MESH_NET_IF_ADV|enumerator|BT_MESH_NET_IF_ADV,
DECL|BT_MESH_NET_IF_LOCAL|enumerator|BT_MESH_NET_IF_LOCAL,
DECL|BT_MESH_NET_IF_PROXY_CFG|enumerator|BT_MESH_NET_IF_PROXY_CFG,
DECL|BT_MESH_NET_IF_PROXY|enumerator|BT_MESH_NET_IF_PROXY,
DECL|BT_MESH_NET_IVI_RX|macro|BT_MESH_NET_IVI_RX
DECL|BT_MESH_NET_IVI_TX|macro|BT_MESH_NET_IVI_TX
DECL|BT_MESH_NET_PENDING|enumerator|BT_MESH_NET_PENDING,
DECL|BT_MESH_RPL_PENDING|enumerator|BT_MESH_RPL_PENDING,
DECL|BT_MESH_SEQ_PENDING|enumerator|BT_MESH_SEQ_PENDING,
DECL|FRIEND_SEG_RX|macro|FRIEND_SEG_RX
DECL|FRIEND_SEG_RX|macro|FRIEND_SEG_RX
DECL|FRIEND_SUB_LIST_SIZE|macro|FRIEND_SUB_LIST_SIZE
DECL|FRIEND_SUB_LIST_SIZE|macro|FRIEND_SUB_LIST_SIZE
DECL|LPN_GROUPS|macro|LPN_GROUPS
DECL|LPN_GROUPS|macro|LPN_GROUPS
DECL|__packed|enum|enum __packed {
DECL|addr|member|u16_t addr;
DECL|adv_duration|member|u16_t adv_duration;
DECL|aid|member|aid:6;
DECL|app_idx|member|u16_t app_idx;
DECL|app_keys|member|struct bt_mesh_app_key app_keys[CONFIG_BT_MESH_APP_KEY_COUNT];
DECL|aszmic|member|aszmic:1,
DECL|auth|member|u8_t auth[8]; /* Beacon Authentication Value */
DECL|beacon_cache|member|u8_t beacon_cache[21]; /* Cached last authenticated beacon */
DECL|beacon_sent|member|u32_t beacon_sent; /* Timestamp of last sent beacon */
DECL|beacons_cur|member|u8_t beacons_cur; /* Number of beaconds observed during
DECL|beacons_last|member|u8_t beacons_last; /* Number of beacons during last
DECL|beacon|member|u8_t beacon[16]; /* BeaconKey */
DECL|bt_mesh_app_keys|struct|struct bt_mesh_app_keys {
DECL|bt_mesh_app_key|struct|struct bt_mesh_app_key {
DECL|bt_mesh_friend_seg|struct|struct bt_mesh_friend_seg {
DECL|bt_mesh_friend|struct|struct bt_mesh_friend {
DECL|bt_mesh_lpn|struct|struct bt_mesh_lpn {
DECL|bt_mesh_net_if|enum|enum bt_mesh_net_if {
DECL|bt_mesh_net_rx|struct|struct bt_mesh_net_rx {
DECL|bt_mesh_net_tx|struct|struct bt_mesh_net_tx {
DECL|bt_mesh_net|struct|struct bt_mesh_net {
DECL|bt_mesh_rpl|struct|struct bt_mesh_rpl {
DECL|bt_mesh_subnet_keys|struct|struct bt_mesh_subnet_keys {
DECL|bt_mesh_subnet|struct|struct bt_mesh_subnet {
DECL|clear_success|member|clear_success:1; /* Friend Clear Confirm received */
DECL|clear|member|} clear;
DECL|counter|member|u16_t counter;
DECL|counter|member|u16_t counter;
DECL|cred|member|} cred[2];
DECL|ctl|member|ctl:1, /* Network Control */
DECL|ctx|member|struct bt_mesh_msg_ctx *ctx;
DECL|ctx|member|struct bt_mesh_msg_ctx ctx;
DECL|dev_key|member|u8_t dev_key[16];
DECL|disable|member|disable:1, /* Disable LPN after clearing */
DECL|enc|member|u8_t enc[16]; /* EncKey */
DECL|enc|member|u8_t enc[16]; /* EncKey */
DECL|established|member|established:1, /* Friendship established */
DECL|established|member|established:1;
DECL|friend_cred|member|friend_cred:1, /* Data was encrypted with friend cred */
DECL|friend_cred|member|u8_t friend_cred:1,
DECL|friend_cred|struct|struct friend_cred {
DECL|friend_match|member|friend_match:1; /* Matched an LPN we're friends for */
DECL|frnd_counter|member|u16_t frnd_counter;
DECL|frnd|member|struct bt_mesh_friend frnd[CONFIG_BT_MESH_FRIEND_LPN_COUNT];
DECL|frnd|member|u16_t frnd;
DECL|frnd|member|u16_t frnd; /* Previous Friend's address */
DECL|fsn|member|fsn:1, /* Friend Sequence Number */
DECL|fsn|member|u8_t fsn:1,
DECL|groups_changed|member|u8_t groups_changed:1, /* Friend Subscription List needs updating */
DECL|groups|member|u16_t groups[LPN_GROUPS];
DECL|identity|member|u8_t identity[16]; /* IdentityKey */
DECL|id|member|u8_t id;
DECL|iv_index|member|u32_t iv_index; /* Current IV Index */
DECL|iv_update|member|iv_update:1, /* 1 if IV Update in Progress */
DECL|ivu_duration|member|u8_t ivu_duration;
DECL|ivu_initiator|member|ivu_initiator:1, /* IV Update initiated by us */
DECL|ivu_test|member|ivu_test:1, /* IV Update test mode */
DECL|ivu_timer|member|struct k_delayed_work ivu_timer;
DECL|ivu_unknown|member|ivu_unknown:1, /* Set to 1 right after provisioning */
DECL|keys|member|} keys[2];
DECL|keys|member|} keys[2];
DECL|kr_flag|member|bool kr_flag; /* Key Refresh Flag */
DECL|kr_phase|member|u8_t kr_phase; /* Key Refresh Phase */
DECL|last|member|struct net_buf *last;
DECL|local_match|member|local_match:1, /* Matched a local element */
DECL|local_queue|member|sys_slist_t local_queue;
DECL|local_work|member|struct k_work local_work;
DECL|lpn_counter|member|u16_t lpn_counter;
DECL|lpn_counter|member|u16_t lpn_counter;
DECL|lpn|member|struct bt_mesh_lpn lpn; /* Low Power Node state */
DECL|lpn|member|u16_t lpn;
DECL|net_idx|member|u16_t net_idx;
DECL|net_idx|member|u16_t net_idx;
DECL|net_idx|member|u16_t net_idx;
DECL|net_idx|member|u16_t net_idx; /* NetKeyIndex */
DECL|net_id|member|u8_t net_id[8]; /* Network ID */
DECL|net_if|member|net_if:2, /* Network interface */
DECL|net|member|u8_t net[16]; /* NetKey */
DECL|new_key|member|new_key:1, /* Data was encrypted with updated key */
DECL|nid|member|u8_t nid; /* NID */
DECL|nid|member|u8_t nid; /* NID */
DECL|node_id_start|member|u32_t node_id_start; /* Node Identity started timestamp */
DECL|node_id|member|u8_t node_id; /* Node Identity State */
DECL|old_friend|member|u16_t old_friend;
DECL|old_iv|member|bool old_iv;
DECL|old_iv|member|u8_t old_iv:1, /* iv_index - 1 was used */
DECL|pending_buf|member|pending_buf:1,
DECL|pending_poll|member|pending_poll:1, /* Poll to be sent after subscription */
DECL|pending_req|member|pending_req:1,
DECL|pending_update|member|pending_update:1, /* Update blocked by SDU in progress */
DECL|poll_timeout|member|s32_t poll_timeout;
DECL|poll_to|member|s32_t poll_to;
DECL|privacy|member|u8_t privacy[16]; /* PrivacyKey */
DECL|privacy|member|u8_t privacy[16]; /* PrivacyKey */
DECL|queue_size|member|u32_t queue_size;
DECL|queue_size|member|u8_t queue_size;
DECL|queue|member|sys_slist_t queue;
DECL|queue|member|sys_slist_t queue;
DECL|recv_delay|member|u8_t recv_delay;
DECL|recv_win|member|u8_t recv_win;
DECL|repeat_sec|member|u16_t repeat_sec; /* Repeat timeout in seconds */
DECL|req_attempts|member|u8_t req_attempts; /* Number of Request attempts */
DECL|rpl|member|struct bt_mesh_rpl rpl[CONFIG_BT_MESH_CRPL];
DECL|rssi|member|s8_t rssi;
DECL|sec_update|member|sec_update:1,
DECL|seg|member|} seg[FRIEND_SEG_RX];
DECL|send_last|member|send_last:1,
DECL|sent_req|member|u8_t sent_req;
DECL|seq|member|u32_t seq:24, /* Next outgoing sequence number */
DECL|seq|member|u32_t seq;
DECL|seq|member|u32_t seq; /* Sequence Number */
DECL|src|member|u16_t src;
DECL|src|member|u16_t src;
DECL|start|member|u32_t start; /* Clear Procedure start */
DECL|state|member|} state;
DECL|store|member|bool store;
DECL|sub_list|member|u16_t sub_list[FRIEND_SUB_LIST_SIZE];
DECL|sub|member|struct bt_mesh_subnet *sub;
DECL|sub|member|struct bt_mesh_subnet *sub;
DECL|sub|member|struct bt_mesh_subnet sub[CONFIG_BT_MESH_SUBNET_COUNT];
DECL|timer|member|struct k_delayed_work timer;
DECL|timer|member|struct k_delayed_work timer;
DECL|timer|member|struct k_delayed_work timer; /* Repeat timer */
DECL|updated|member|bool updated;
DECL|valid|member|valid:1,
DECL|valid|member|valid:1; /* 0 if unused */
DECL|val|member|u8_t val[16];
DECL|xact_next|member|u8_t xact_next;
DECL|xact_pending|member|u8_t xact_pending;
DECL|xmit|member|u8_t xmit;
