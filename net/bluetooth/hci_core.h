DECL|addr|member|bt_addr_le_t addr;
DECL|adv_enable|member|uint8_t adv_enable;
DECL|bdaddr|member|bt_addr_t bdaddr;
DECL|bt_addr_cmp|function|static inline int bt_addr_cmp(const bt_addr_t *a, const bt_addr_t *b)
DECL|bt_addr_copy|function|static inline void bt_addr_copy(bt_addr_t *dst, const bt_addr_t *src)
DECL|bt_addr_is_rpa|function|static inline bool bt_addr_is_rpa(const bt_addr_le_t *addr)
DECL|bt_addr_le_cmp|function|static inline int bt_addr_le_cmp(const bt_addr_le_t *a, const bt_addr_le_t *b)
DECL|bt_addr_le_copy|function|static inline void bt_addr_le_copy(bt_addr_le_t *dst, const bt_addr_le_t *src)
DECL|bt_addr_le_is_identity|function|static inline bool bt_addr_le_is_identity(const bt_addr_le_t *addr)
DECL|bt_dev|struct|struct bt_dev {
DECL|bt_keys|struct|struct bt_keys {
DECL|bt_ltk|struct|struct bt_ltk {
DECL|cmd_rx_queue|member|struct nano_fifo cmd_rx_queue;
DECL|cmd_tx_queue|member|struct nano_fifo cmd_tx_queue;
DECL|drv|member|struct bt_driver *drv;
DECL|ediv|member|uint16_t ediv;
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
DECL|rand|member|uint64_t rand;
DECL|rx_queue|member|struct nano_fifo rx_queue;
DECL|scan_enable|member|uint8_t scan_enable;
DECL|sent_cmd|member|struct bt_buf *sent_cmd;
DECL|slave_ltk|member|struct bt_ltk slave_ltk;
DECL|val|member|uint8_t val[16];
