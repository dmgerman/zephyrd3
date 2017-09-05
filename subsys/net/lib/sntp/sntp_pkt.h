DECL|LI_MASK|macro|LI_MASK
DECL|LI_SHIFT|macro|LI_SHIFT
DECL|LVM_GET_LI|macro|LVM_GET_LI
DECL|LVM_GET_MODE|macro|LVM_GET_MODE
DECL|LVM_GET_VN|macro|LVM_GET_VN
DECL|LVM_SET_LI|macro|LVM_SET_LI
DECL|LVM_SET_MODE|macro|LVM_SET_MODE
DECL|LVM_SET_VN|macro|LVM_SET_VN
DECL|MODE_MASK|macro|MODE_MASK
DECL|MODE_SHIFT|macro|MODE_SHIFT
DECL|VN_MASK|macro|VN_MASK
DECL|VN_SHIFT|macro|VN_SHIFT
DECL|__SNTP_PKT_H|macro|__SNTP_PKT_H
DECL|__packed|variable|__packed
DECL|lvm|member|u8_t lvm; /* li, vn, and mode in big endian fashion */
DECL|orig_tm_f|member|u32_t orig_tm_f; /* Originate timsstamp seconds fraction */
DECL|orig_tm_s|member|u32_t orig_tm_s; /* Originate timestamp seconds */
DECL|poll|member|u8_t poll;
DECL|precision|member|u8_t precision;
DECL|ref_id|member|u32_t ref_id;
DECL|ref_tm_f|member|u32_t ref_tm_f;
DECL|ref_tm_s|member|u32_t ref_tm_s;
DECL|root_delay|member|u32_t root_delay;
DECL|root_dispersion|member|u32_t root_dispersion;
DECL|rx_tm_f|member|u32_t rx_tm_f; /* Receive timestamp seconds fraction */
DECL|rx_tm_s|member|u32_t rx_tm_s; /* Receive timestamp seconds */
DECL|sntp_pkt|struct|struct sntp_pkt {
DECL|stratum|member|u8_t stratum;
DECL|tx_tm_f|member|u32_t tx_tm_f; /* Transimit timestamp seconds fraction */
DECL|tx_tm_s|member|u32_t tx_tm_s; /* Transimit timestamp seconds */
