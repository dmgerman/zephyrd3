DECL|BT_DEV_ACTIVE_SCAN|enumerator|BT_DEV_ACTIVE_SCAN,
DECL|BT_DEV_ADVERTISING_NAME|enumerator|BT_DEV_ADVERTISING_NAME,
DECL|BT_DEV_ADVERTISING|enumerator|BT_DEV_ADVERTISING,
DECL|BT_DEV_ENABLE|enumerator|BT_DEV_ENABLE,
DECL|BT_DEV_EXPLICIT_SCAN|enumerator|BT_DEV_EXPLICIT_SCAN,
DECL|BT_DEV_HAS_PUB_KEY|enumerator|BT_DEV_HAS_PUB_KEY,
DECL|BT_DEV_ID_PENDING|enumerator|BT_DEV_ID_PENDING,
DECL|BT_DEV_INQUIRY|enumerator|BT_DEV_INQUIRY,
DECL|BT_DEV_ISCAN|enumerator|BT_DEV_ISCAN,
DECL|BT_DEV_KEEP_ADVERTISING|enumerator|BT_DEV_KEEP_ADVERTISING,
DECL|BT_DEV_NUM_FLAGS|enumerator|BT_DEV_NUM_FLAGS,
DECL|BT_DEV_PERSISTENT_FLAGS|macro|BT_DEV_PERSISTENT_FLAGS
DECL|BT_DEV_PSCAN|enumerator|BT_DEV_PSCAN,
DECL|BT_DEV_PUB_KEY_BUSY|enumerator|BT_DEV_PUB_KEY_BUSY,
DECL|BT_DEV_READY|enumerator|BT_DEV_READY,
DECL|BT_DEV_RPA_VALID|enumerator|BT_DEV_RPA_VALID,
DECL|BT_DEV_SCANNING|enumerator|BT_DEV_SCANNING,
DECL|BT_DEV_SCAN_FILTER_DUP|enumerator|BT_DEV_SCAN_FILTER_DUP,
DECL|BT_DEV_USER_ID_ADDR|enumerator|BT_DEV_USER_ID_ADDR,
DECL|BT_DEV_VS_CMDS_MAX|macro|BT_DEV_VS_CMDS_MAX
DECL|BT_DEV_VS_FEAT_MAX|macro|BT_DEV_VS_FEAT_MAX
DECL|BT_EVENT_CMD_TX|enumerator|BT_EVENT_CMD_TX,
DECL|BT_EVENT_CONN_TX_NOTIFY|enumerator|BT_EVENT_CONN_TX_NOTIFY,
DECL|BT_EVENT_CONN_TX_QUEUE|enumerator|BT_EVENT_CONN_TX_QUEUE,
DECL|BT_VOICE_CVSD_16BIT|macro|BT_VOICE_CVSD_16BIT
DECL|LE_CONN_LATENCY|macro|LE_CONN_LATENCY
DECL|LE_CONN_TIMEOUT|macro|LE_CONN_TIMEOUT
DECL|LMP_FEAT_PAGES_COUNT|macro|LMP_FEAT_PAGES_COUNT
DECL|LMP_FEAT_PAGES_COUNT|macro|LMP_FEAT_PAGES_COUNT
DECL|adv_id|member|u8_t adv_id;
DECL|br|member|struct bt_dev_br br;
DECL|bt_dev_br|struct|struct bt_dev_br {
DECL|bt_dev_le|struct|struct bt_dev_le {
DECL|bt_dev|struct|struct bt_dev {
DECL|cmd_tx_queue|member|struct k_fifo cmd_tx_queue;
DECL|drv|member|const struct bt_hci_driver *drv;
DECL|esco_pkt_type|member|u16_t esco_pkt_type;
DECL|features|member|u8_t features[8];
DECL|features|member|u8_t features[LMP_FEAT_PAGES_COUNT][8];
DECL|hci_revision|member|u16_t hci_revision;
DECL|hci_version|member|u8_t hci_version;
DECL|id_addr|member|bt_addr_le_t id_addr[CONFIG_BT_ID_MAX];
DECL|id_count|member|u8_t id_count;
DECL|init|member|struct k_work init;
DECL|irk|member|u8_t irk[CONFIG_BT_ID_MAX][16];
DECL|le|member|struct bt_dev_le le;
DECL|lmp_subversion|member|u16_t lmp_subversion;
DECL|lmp_version|member|u8_t lmp_version;
DECL|manufacturer|member|u16_t manufacturer;
DECL|mtu|member|u16_t mtu;
DECL|mtu|member|u16_t mtu;
DECL|name|member|char name[CONFIG_BT_DEVICE_NAME_MAX];
DECL|ncmd_sem|member|struct k_sem ncmd_sem;
DECL|pkts|member|struct k_sem pkts;
DECL|pkts|member|struct k_sem pkts;
DECL|random_addr|member|bt_addr_le_t random_addr;
DECL|rl_entries|member|u8_t rl_entries;
DECL|rl_size|member|u8_t rl_size;
DECL|rpa_update|member|struct k_delayed_work rpa_update;
DECL|rx_queue|member|struct k_fifo rx_queue;
DECL|sent_cmd|member|struct net_buf *sent_cmd;
DECL|states|member|u64_t states;
DECL|supported_commands|member|u8_t supported_commands[64];
DECL|vs_commands|member|u8_t vs_commands[BT_DEV_VS_CMDS_MAX];
DECL|vs_features|member|u8_t vs_features[BT_DEV_VS_FEAT_MAX];
