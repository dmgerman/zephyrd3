DECL|ADC_CAL_MAX|macro|ADC_CAL_MAX
DECL|ADC_CAL_SEQ_TABLE_DEFAULT|macro|ADC_CAL_SEQ_TABLE_DEFAULT
DECL|ADC_CMD_CAL_DATA_OFFSET|macro|ADC_CMD_CAL_DATA_OFFSET
DECL|ADC_CMD_IE_OFFSET|macro|ADC_CMD_IE_OFFSET
DECL|ADC_CMD_IE|macro|ADC_CMD_IE
DECL|ADC_CMD_LOAD_CAL|macro|ADC_CMD_LOAD_CAL
DECL|ADC_CMD_NS_MASK|macro|ADC_CMD_NS_MASK
DECL|ADC_CMD_NS_OFFSET|macro|ADC_CMD_NS_OFFSET
DECL|ADC_CMD_RESET_CAL|macro|ADC_CMD_RESET_CAL
DECL|ADC_CMD_RESOLUTION_MASK|macro|ADC_CMD_RESOLUTION_MASK
DECL|ADC_CMD_RESOLUTION_OFFSET|macro|ADC_CMD_RESOLUTION_OFFSET
DECL|ADC_CMD_START_CAL|macro|ADC_CMD_START_CAL
DECL|ADC_CMD_START_CONT|macro|ADC_CMD_START_CONT
DECL|ADC_CMD_START_SINGLE|macro|ADC_CMD_START_SINGLE
DECL|ADC_CMD_STOP_CONT|macro|ADC_CMD_STOP_CONT
DECL|ADC_CMD_SW_MASK|macro|ADC_CMD_SW_MASK
DECL|ADC_CMD_SW_OFFSET|macro|ADC_CMD_SW_OFFSET
DECL|ADC_CONTEXT_USES_KERNEL_TIMER|macro|ADC_CONTEXT_USES_KERNEL_TIMER
DECL|ADC_DELAY_MAX|macro|ADC_DELAY_MAX
DECL|ADC_DIV_MAX|macro|ADC_DIV_MAX
DECL|ADC_FIFO_CLEAR|macro|ADC_FIFO_CLEAR
DECL|ADC_FIFO_LEN|macro|ADC_FIFO_LEN
DECL|ADC_INTR_ENABLE_CC|macro|ADC_INTR_ENABLE_CC
DECL|ADC_INTR_ENABLE_CONT_CC|macro|ADC_INTR_ENABLE_CONT_CC
DECL|ADC_INTR_ENABLE_FO|macro|ADC_INTR_ENABLE_FO
DECL|ADC_INTR_STATUS_CC|macro|ADC_INTR_STATUS_CC
DECL|ADC_INTR_STATUS_CONT_CC|macro|ADC_INTR_STATUS_CONT_CC
DECL|ADC_INTR_STATUS_FO|macro|ADC_INTR_STATUS_FO
DECL|ADC_MODE_DEEP_PWR_DOWN|enumerator|ADC_MODE_DEEP_PWR_DOWN, /**< Deep power down mode. */
DECL|ADC_MODE_NORM_CAL|enumerator|ADC_MODE_NORM_CAL, /**< Normal mode, with calibration. */
DECL|ADC_MODE_NORM_NO_CAL|enumerator|ADC_MODE_NORM_NO_CAL /**< Normal mode, no calibration. */
DECL|ADC_MODE_PWR_DOWN|enumerator|ADC_MODE_PWR_DOWN, /**< Power down mode. */
DECL|ADC_MODE_STDBY|enumerator|ADC_MODE_STDBY, /**< Standby mode. */
DECL|ADC_OP_MODE_DELAY_MASK|macro|ADC_OP_MODE_DELAY_MASK
DECL|ADC_OP_MODE_DELAY_OFFSET|macro|ADC_OP_MODE_DELAY_OFFSET
DECL|ADC_OP_MODE_IE|macro|ADC_OP_MODE_IE
DECL|ADC_OP_MODE_OM_MASK|macro|ADC_OP_MODE_OM_MASK
DECL|CLK_DIV_ADC_MASK|macro|CLK_DIV_ADC_MASK
DECL|CLK_DIV_ADC_POS|macro|CLK_DIV_ADC_POS
DECL|CLK_PERIPH_ADC_REGISTER|macro|CLK_PERIPH_ADC_REGISTER
DECL|CLK_PERIPH_ADC|macro|CLK_PERIPH_ADC
DECL|CLK_PERIPH_CLK|macro|CLK_PERIPH_CLK
DECL|FIFO_INTR_THRESHOLD|macro|FIFO_INTR_THRESHOLD
DECL|MAX_CHANNELS|macro|MAX_CHANNELS
DECL|REG_CCU_PERIPH_CLK_DIV_CTL0|macro|REG_CCU_PERIPH_CLK_DIV_CTL0
DECL|REG_CCU_PERIPH_CLK_GATE_CTL|macro|REG_CCU_PERIPH_CLK_GATE_CTL
DECL|REG_INT_ADC_CALIB_MASK|macro|REG_INT_ADC_CALIB_MASK
DECL|REG_INT_ADC_PWR_MASK|macro|REG_INT_ADC_PWR_MASK
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|active_channels|member|u32_t active_channels;
DECL|adc_context_start_sampling|function|static void adc_context_start_sampling(struct adc_context *ctx)
DECL|adc_context_update_buffer_pointer|function|static void adc_context_update_buffer_pointer(struct adc_context *ctx, bool repeat)
DECL|adc_quark_d2000_channel_setup|function|static int adc_quark_d2000_channel_setup(struct device *dev,const struct adc_channel_cfg *channel_cfg)
DECL|adc_quark_d2000_config_0|variable|adc_quark_d2000_config_0
DECL|adc_quark_d2000_config_func_0|function|static void adc_quark_d2000_config_func_0(struct device *dev)
DECL|adc_quark_d2000_config|struct|struct adc_quark_d2000_config {
DECL|adc_quark_d2000_data_0|variable|adc_quark_d2000_data_0
DECL|adc_quark_d2000_driver_api|variable|adc_quark_d2000_driver_api
DECL|adc_quark_d2000_enable|function|static void adc_quark_d2000_enable(struct device *dev)
DECL|adc_quark_d2000_goto_normal_mode|function|static void adc_quark_d2000_goto_normal_mode(struct device *dev)
DECL|adc_quark_d2000_goto_normal_mode|function|static void adc_quark_d2000_goto_normal_mode(struct device *dev)
DECL|adc_quark_d2000_info|struct|struct adc_quark_d2000_info {
DECL|adc_quark_d2000_init|function|static int adc_quark_d2000_init(struct device *dev)
DECL|adc_quark_d2000_isr|function|static void adc_quark_d2000_isr(void *arg)
DECL|adc_quark_d2000_read_async|function|static int adc_quark_d2000_read_async(struct device *dev, const struct adc_sequence *sequence, struct k_poll_signal *async)
DECL|adc_quark_d2000_read_request|function|static int adc_quark_d2000_read_request(struct device *dev,const struct adc_sequence *seq_tbl)
DECL|adc_quark_d2000_read|function|static int adc_quark_d2000_read(struct device *dev, const struct adc_sequence *sequence)
DECL|adc_quark_d2000_set_mode|function|static void adc_quark_d2000_set_mode(struct device *dev, int mode)
DECL|adc_quark_d2000_start_conversion|function|static void adc_quark_d2000_start_conversion(struct device *dev)
DECL|adc_reg_t|typedef|} adc_reg_t;
DECL|buffer|member|u16_t *buffer;
DECL|calibration|member|u32_t calibration; /**< ADC Calibration Data Register */
DECL|channel_id|member|u8_t channel_id;
DECL|channels|member|u32_t channels;
DECL|cmd|member|u32_t cmd; /**< ADC Command Register */
DECL|config_func|member|void (*config_func)(struct device *dev);
DECL|ctx|member|struct adc_context ctx;
DECL|dev|member|struct device *dev;
DECL|entries|member|const struct adc_sequence *entries;
DECL|fifo_count|member|u32_t fifo_count; /**< ADC FIFO Count Register */
DECL|intr_enable|member|u32_t intr_enable; /**< ADC Interrupt Enable Register */
DECL|intr_status|member|u32_t intr_status; /**< ADC Interrupt Status Register */
DECL|op_mode|member|u32_t op_mode; /**< ADC Operating Mode Register */
DECL|reg_base|member|adc_reg_t *reg_base;
DECL|resolution|member|u8_t resolution;
DECL|sample|member|u32_t sample; /**< ADC Sample Register */
DECL|seq_size|member|u8_t seq_size;
DECL|seq|member|u32_t seq[8]; /**< ADC Channel Sequence Table Entry 0 */
