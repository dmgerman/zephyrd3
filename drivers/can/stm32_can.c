DECL|HAL_CAN_MspInit|function|void HAL_CAN_MspInit(CAN_HandleTypeDef *hcan)
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|can_api_funcs|variable|can_api_funcs
DECL|can_calc_filter_index|function|static int can_calc_filter_index(int filter_nr, u32_t mode_reg, u32_t scale_reg)
DECL|can_stm32_attach_isr|function|int can_stm32_attach_isr(struct device *dev, can_rx_callback_t isr, const struct can_filter *filter)
DECL|can_stm32_attach_msgq|function|int can_stm32_attach_msgq(struct device *dev, struct k_msgq *msgq, const struct can_filter *filter)
DECL|can_stm32_attach|function|static inline int can_stm32_attach(struct device *dev, void *response_ptr, const struct can_filter *filter, int *filter_index)
DECL|can_stm32_calc_shift_width|function|int can_stm32_calc_shift_width(enum can_filter_type new_filter_type, enum can_filter_type old_filter_type)
DECL|can_stm32_cfg_1|variable|can_stm32_cfg_1
DECL|can_stm32_detach|function|void can_stm32_detach(struct device *dev, int filter_nr)
DECL|can_stm32_dev_data_1|variable|can_stm32_dev_data_1
DECL|can_stm32_get_filter_type|function|enum can_filter_type can_stm32_get_filter_type(u32_t bank_bit, u32_t mode_reg, u32_t scale_reg)
DECL|can_stm32_get_msg_fifo|function|static inline void can_stm32_get_msg_fifo(CAN_FIFOMailBox_TypeDef *mbox, struct can_msg *msg)
DECL|can_stm32_init|function|static int can_stm32_init(struct device *dev)
DECL|can_stm32_isr|function|static void can_stm32_isr(void *arg)
DECL|can_stm32_runtime_configure|function|int can_stm32_runtime_configure(struct device *dev, enum can_mode mode,u32_t bitrate)
DECL|can_stm32_send|function|int can_stm32_send(struct device *dev, struct can_msg *msg, s32_t timeout, can_tx_callback_t callback)
DECL|can_stm32_set_filter_bank|function|static void can_stm32_set_filter_bank(int filter_nr, CAN_FilterRegister_TypeDef *filter_reg, enum can_filter_type filter_type, u32_t id, u32_t mask)
DECL|can_stm32_set_filter|function|static inline int can_stm32_set_filter(const struct can_filter *filter, struct can_stm32_data *device_data, CAN_TypeDef *can, int *filter_index)
DECL|can_stm32_set_mode_scale|function|static inline void can_stm32_set_mode_scale(enum can_filter_type filter_type, u32_t *mode_reg, u32_t *scale_reg, u32_t bank_bit)
DECL|can_stm32_shift_arr|function|static int can_stm32_shift_arr(void **arr, int start, int count)
DECL|can_stm32_shift_bits|function|static inline void can_stm32_shift_bits(u64_t *bits, int start, int count)
DECL|can_stm32_signal_tx_complete|function|static void can_stm32_signal_tx_complete(struct can_mailbox *mb)
DECL|config_can_1_irq|function|static void config_can_1_irq(CAN_TypeDef *can)
