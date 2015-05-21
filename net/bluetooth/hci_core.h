DECL|adv_enable|member|uint8_t adv_enable;
DECL|bdaddr_type|member|uint8_t bdaddr_type;
DECL|bdaddr|member|uint8_t bdaddr[6];
DECL|bdaddr|member|uint8_t bdaddr[6];
DECL|bt_dev|struct|struct bt_dev {
DECL|bt_keys|struct|struct bt_keys {
DECL|cmd_queue|member|struct nano_fifo cmd_queue;
DECL|drv|member|struct bt_driver *drv;
DECL|features|member|uint8_t features[8];
DECL|hci_revision|member|uint16_t hci_revision;
DECL|hci_version|member|uint8_t hci_version;
DECL|le_features|member|uint8_t le_features[8];
DECL|le_mtu|member|uint16_t le_mtu;
DECL|le_pkts_sem|member|struct nano_sem le_pkts_sem;
DECL|le_pkts|member|uint8_t le_pkts;
DECL|lmp_bredr_capable|macro|lmp_bredr_capable
DECL|lmp_le_capable|macro|lmp_le_capable
DECL|manufacturer|member|uint16_t manufacturer;
DECL|ncmd_sem|member|struct nano_sem ncmd_sem;
DECL|ncmd|member|uint8_t ncmd;
DECL|rx_queue|member|struct nano_fifo rx_queue;
DECL|scan_enable|member|uint8_t scan_enable;
DECL|sent_cmd|member|struct bt_buf *sent_cmd;
DECL|slave_ltk|member|uint8_t slave_ltk[16];
