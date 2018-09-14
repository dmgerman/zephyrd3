DECL|CAN_DATAFRAME|enumerator|CAN_DATAFRAME,
DECL|CAN_DEFINE_MSGQ|macro|CAN_DEFINE_MSGQ
DECL|CAN_EXTENDED_IDENTIFIER|enumerator|CAN_EXTENDED_IDENTIFIER
DECL|CAN_EXT_ID_MASK|macro|CAN_EXT_ID_MASK
DECL|CAN_EX_ID|macro|CAN_EX_ID
DECL|CAN_LOOPBACK_MODE|enumerator|CAN_LOOPBACK_MODE,
DECL|CAN_MAX_DLC|macro|CAN_MAX_DLC
DECL|CAN_MAX_STD_ID|macro|CAN_MAX_STD_ID
DECL|CAN_NORMAL_MODE|enumerator|CAN_NORMAL_MODE,
DECL|CAN_NO_FREE_FILTER|macro|CAN_NO_FREE_FILTER
DECL|CAN_REMOTEREQUEST|enumerator|CAN_REMOTEREQUEST
DECL|CAN_SILENT_LOOPBACK_MODE|enumerator|CAN_SILENT_LOOPBACK_MODE
DECL|CAN_SILENT_MODE|enumerator|CAN_SILENT_MODE,
DECL|CAN_STANDARD_IDENTIFIER|enumerator|CAN_STANDARD_IDENTIFIER,
DECL|CAN_STD_ID_MASK|macro|CAN_STD_ID_MASK
DECL|CAN_TIMEOUT|macro|CAN_TIMEOUT
DECL|CAN_TX_ARB_LOST|macro|CAN_TX_ARB_LOST
DECL|CAN_TX_BUS_OFF|macro|CAN_TX_BUS_OFF
DECL|CAN_TX_ERR|macro|CAN_TX_ERR
DECL|CAN_TX_OK|macro|CAN_TX_OK
DECL|CAN_TX_UNKNOWN|macro|CAN_TX_UNKNOWN
DECL|ZEPHYR_INCLUDE_CAN_H_|macro|ZEPHYR_INCLUDE_CAN_H_
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|_impl_can_attach_isr|function|static inline int _impl_can_attach_isr(struct device *dev, can_rx_callback_t isr, const struct can_filter *filter)
DECL|_impl_can_attach_msgq|function|static inline int _impl_can_attach_msgq(struct device *dev,struct k_msgq *msg_q, const struct can_filter *filter)
DECL|_impl_can_configure|function|static inline int _impl_can_configure(struct device *dev, enum can_mode mode, u32_t bitrate)
DECL|_impl_can_detach|function|static inline void _impl_can_detach(struct device *dev, int filter_id)
DECL|_impl_can_send|function|static inline int _impl_can_send(struct device *dev, struct can_msg *msg, s32_t timeout, can_tx_callback_t callback_isr)
DECL|attach_isr|member|can_attach_isr_t attach_isr;
DECL|attach_msgq|member|can_attach_msgq_t attach_msgq;
DECL|can_attach_isr_t|typedef|typedef int (*can_attach_isr_t)(struct device *dev, can_rx_callback_t isr,
DECL|can_attach_msgq_t|typedef|typedef int (*can_attach_msgq_t)(struct device *dev, struct k_msgq *msg_q,
DECL|can_configure_t|typedef|typedef int (*can_configure_t)(struct device *dev, enum can_mode mode,
DECL|can_detach_t|typedef|typedef void (*can_detach_t)(struct device *dev, int filter_id);
DECL|can_driver_api|struct|struct can_driver_api {
DECL|can_filter|struct|struct can_filter {
DECL|can_ide|enum|enum can_ide {
DECL|can_mode|enum|enum can_mode {
DECL|can_msg|struct|struct can_msg {
DECL|can_rtr|enum|enum can_rtr {
DECL|can_rx_callback_t|typedef|typedef void (*can_rx_callback_t)(struct can_msg *msg);
DECL|can_send_t|typedef|typedef int (*can_send_t)(struct device *dev, struct can_msg *msg,
DECL|can_tx_callback_t|typedef|typedef void (*can_tx_callback_t)(u32_t error_flags);
DECL|can_write|function|static inline int can_write(struct device *dev, u8_t *data, u8_t length, u32_t id, enum can_rtr rtr, s32_t timeout)
DECL|configure|member|can_configure_t configure;
DECL|data_32|member|u32_t data_32[2];
DECL|data|member|u8_t data[8];
DECL|detach|member|can_detach_t detach;
DECL|dlc|member|u8_t dlc;
DECL|id_type|member|u32_t id_type : 1;
DECL|id_type|member|u32_t id_type : 1;
DECL|rtr_mask|member|u32_t rtr_mask : 1;
DECL|rtr|member|u32_t rtr : 1;
DECL|rtr|member|u32_t rtr : 1;
DECL|send|member|can_send_t send;
