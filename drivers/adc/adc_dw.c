DECL|ADC_CLOCK_GATE|macro|ADC_CLOCK_GATE
DECL|ADC_CONTEXT_USES_KERNEL_TIMER|macro|ADC_CONTEXT_USES_KERNEL_TIMER
DECL|ADC_DEEP_POWER_DOWN|macro|ADC_DEEP_POWER_DOWN
DECL|ADC_MODE_MASK|macro|ADC_MODE_MASK
DECL|ADC_NORMAL_WITH_CALIB|macro|ADC_NORMAL_WITH_CALIB
DECL|ADC_NORMAL_WO_CALIB|macro|ADC_NORMAL_WO_CALIB
DECL|ADC_POWER_DOWN|macro|ADC_POWER_DOWN
DECL|ADC_STANDBY|macro|ADC_STANDBY
DECL|CAPTURE_MODE_POS|macro|CAPTURE_MODE_POS
DECL|ELEVEN_BITS_SET|macro|ELEVEN_BITS_SET
DECL|FIVE_BITS_SET|macro|FIVE_BITS_SET
DECL|INPUT_MODE_POS|macro|INPUT_MODE_POS
DECL|ONE_BIT_SET|macro|ONE_BIT_SET
DECL|OUTPUT_MODE_POS|macro|OUTPUT_MODE_POS
DECL|SEQUENCE_MODE_POS|macro|SEQUENCE_MODE_POS
DECL|SEQ_DELAY_EVEN_POS|macro|SEQ_DELAY_EVEN_POS
DECL|SEQ_DELAY_ODD_POS|macro|SEQ_DELAY_ODD_POS
DECL|SEQ_ENTRIES_POS|macro|SEQ_ENTRIES_POS
DECL|SEQ_MUX_ODD_POS|macro|SEQ_MUX_ODD_POS
DECL|SERIAL_DELAY_POS|macro|SERIAL_DELAY_POS
DECL|SEVEN_BITS_SET|macro|SEVEN_BITS_SET
DECL|SIX_BITS_SET|macro|SIX_BITS_SET
DECL|THREE_BITS_SET|macro|THREE_BITS_SET
DECL|THRESHOLD_POS|macro|THRESHOLD_POS
DECL|adc_config_dev|variable|adc_config_dev
DECL|adc_config_irq|function|static void adc_config_irq(void)
DECL|adc_context_start_sampling|function|static void adc_context_start_sampling(struct adc_context *ctx)
DECL|adc_context_update_buffer_pointer|function|static void adc_context_update_buffer_pointer(struct adc_context *ctx, bool repeat)
DECL|adc_dw_channel_setup|function|static int adc_dw_channel_setup(struct device *dev, const struct adc_channel_cfg *channel_cfg)
DECL|adc_dw_enable|function|static void adc_dw_enable(struct device *dev)
DECL|adc_dw_err_isr|function|static void adc_dw_err_isr(void *arg)
DECL|adc_dw_init|function|int adc_dw_init(struct device *dev)
DECL|adc_dw_read_async|function|static int adc_dw_read_async(struct device *dev, const struct adc_sequence *sequence, struct k_poll_signal *async)
DECL|adc_dw_read_request|function|static int adc_dw_read_request(struct device *dev, const struct adc_sequence *seq_tbl)
DECL|adc_dw_read|function|static int adc_dw_read(struct device *dev, const struct adc_sequence *seq_tbl)
DECL|adc_dw_rx_isr|function|static void adc_dw_rx_isr(void *arg)
DECL|adc_dw_start_conversion|function|static void adc_dw_start_conversion(struct device *dev)
DECL|adc_goto_normal_mode|function|static void adc_goto_normal_mode(struct device *dev)
DECL|adc_goto_normal_mode|function|static void adc_goto_normal_mode(struct device *dev)
DECL|adc_info_dev|variable|adc_info_dev
DECL|api_funcs|variable|api_funcs
DECL|calibration_command|function|static void calibration_command(u8_t command)
DECL|int_unmask|macro|int_unmask
DECL|int_unmask|macro|int_unmask
DECL|set_resolution|function|static int set_resolution(struct device *dev, const struct adc_sequence *sequence)
