DECL|ADC_CLK_ENABLE|macro|ADC_CLK_ENABLE
DECL|ADC_CLK_RATIO_MASK|macro|ADC_CLK_RATIO_MASK
DECL|ADC_CLR_DATA_A|macro|ADC_CLR_DATA_A
DECL|ADC_CLR_OVERFLOW|macro|ADC_CLR_OVERFLOW
DECL|ADC_CLR_UNDRFLOW|macro|ADC_CLR_UNDRFLOW
DECL|ADC_CMD_LOAD_CALIBRATION|macro|ADC_CMD_LOAD_CALIBRATION
DECL|ADC_CMD_RESET_CALIBRATION|macro|ADC_CMD_RESET_CALIBRATION
DECL|ADC_CMD_START_CALIBRATION|macro|ADC_CMD_START_CALIBRATION
DECL|ADC_CONFIG_SET_MASK|macro|ADC_CONFIG_SET_MASK
DECL|ADC_CTRL|macro|ADC_CTRL
DECL|ADC_DISABLE|macro|ADC_DISABLE
DECL|ADC_DIVSEQSTAT|macro|ADC_DIVSEQSTAT
DECL|ADC_DONE_DUMMY|macro|ADC_DONE_DUMMY
DECL|ADC_DRV_NAME|macro|ADC_DRV_NAME
DECL|ADC_ENABLE|macro|ADC_ENABLE
DECL|ADC_FLUSH_RX|macro|ADC_FLUSH_RX
DECL|ADC_FTL_SET_MASK|macro|ADC_FTL_SET_MASK
DECL|ADC_INTSTAT|macro|ADC_INTSTAT
DECL|ADC_INT_DATA_A|macro|ADC_INT_DATA_A
DECL|ADC_INT_DSB|macro|ADC_INT_DSB
DECL|ADC_INT_ENABLE|macro|ADC_INT_ENABLE
DECL|ADC_INT_ENA_MASK|macro|ADC_INT_ENA_MASK
DECL|ADC_INT_ERR|macro|ADC_INT_ERR
DECL|ADC_NONE_CALIBRATION|macro|ADC_NONE_CALIBRATION
DECL|ADC_NONE_DUMMY|macro|ADC_NONE_DUMMY
DECL|ADC_POP_SAMPLE|macro|ADC_POP_SAMPLE
DECL|ADC_RESET|macro|ADC_RESET
DECL|ADC_SAMPLE|macro|ADC_SAMPLE
DECL|ADC_SEQ_MODE_SET_MASK|macro|ADC_SEQ_MODE_SET_MASK
DECL|ADC_SEQ_PTR_RST|macro|ADC_SEQ_PTR_RST
DECL|ADC_SEQ_SIZE_SET_MASK|macro|ADC_SEQ_SIZE_SET_MASK
DECL|ADC_SEQ_START|macro|ADC_SEQ_START
DECL|ADC_SEQ_STOP_MASK|macro|ADC_SEQ_STOP_MASK
DECL|ADC_SEQ_TABLE_RST|macro|ADC_SEQ_TABLE_RST
DECL|ADC_SEQ|macro|ADC_SEQ
DECL|ADC_SET|macro|ADC_SET
DECL|ADC_STATE_CLOSED|macro|ADC_STATE_CLOSED
DECL|ADC_STATE_DISABLED|macro|ADC_STATE_DISABLED
DECL|ADC_STATE_ERROR|macro|ADC_STATE_ERROR
DECL|ADC_STATE_IDLE|macro|ADC_STATE_IDLE
DECL|ADC_STATE_SAMPLING|macro|ADC_STATE_SAMPLING
DECL|ADC_VREF|macro|ADC_VREF
DECL|BUFS_NUM|macro|BUFS_NUM
DECL|DW_CHANNEL_COUNT|macro|DW_CHANNEL_COUNT
DECL|ENABLE_ADC|macro|ENABLE_ADC
DECL|ENABLE_SSS_INTERRUPTS|macro|ENABLE_SSS_INTERRUPTS
DECL|FLUSH_ADC_ERRORS|macro|FLUSH_ADC_ERRORS
DECL|INT_SS_ADC_ERR_MASK|macro|INT_SS_ADC_ERR_MASK
DECL|INT_SS_ADC_IRQ_MASK|macro|INT_SS_ADC_IRQ_MASK
DECL|IO_ADC0_FS|macro|IO_ADC0_FS
DECL|IO_ADC0_SE|macro|IO_ADC0_SE
DECL|IO_ADC_CAPTURE_FALLING_EDGE|macro|IO_ADC_CAPTURE_FALLING_EDGE
DECL|IO_ADC_CAPTURE_RISING_EDGE|macro|IO_ADC_CAPTURE_RISING_EDGE
DECL|IO_ADC_INPUT_DIFF|macro|IO_ADC_INPUT_DIFF
DECL|IO_ADC_INPUT_SINGLE_END|macro|IO_ADC_INPUT_SINGLE_END
DECL|IO_ADC_OUTPUT_PARAL|macro|IO_ADC_OUTPUT_PARAL
DECL|IO_ADC_OUTPUT_SERIAL|macro|IO_ADC_OUTPUT_SERIAL
DECL|IO_ADC_SEQ_MODE_REPETITIVE|macro|IO_ADC_SEQ_MODE_REPETITIVE
DECL|IO_ADC_SEQ_MODE_SINGLESHOT|macro|IO_ADC_SEQ_MODE_SINGLESHOT
DECL|IO_ADC_SET_CLK_DIVIDER|macro|IO_ADC_SET_CLK_DIVIDER
DECL|IO_ADC_SET_CONFIG|macro|IO_ADC_SET_CONFIG
DECL|IO_ADC_SET_RX_THRESHOLD|macro|IO_ADC_SET_RX_THRESHOLD
DECL|IO_ADC_SET_SEQ_MODE|macro|IO_ADC_SET_SEQ_MODE
DECL|IO_ADC_SET_SEQ_STOP|macro|IO_ADC_SET_SEQ_STOP
DECL|IO_ADC_SET_SEQ_TABLE|macro|IO_ADC_SET_SEQ_TABLE
DECL|RESUME_ADC_CAPTURE|macro|RESUME_ADC_CAPTURE
DECL|START_ADC_SEQ|macro|START_ADC_SEQ
DECL|ZEPHYR_DRIVERS_ADC_ADC_DW_H_|macro|ZEPHYR_DRIVERS_ADC_ADC_DW_H_
DECL|active_channels|member|u32_t active_channels;
DECL|adc_config|struct|struct adc_config {
DECL|adc_dw_config_t|typedef|typedef void (*adc_dw_config_t)(void);
DECL|adc_info|struct|struct adc_info {
DECL|buffer|member|u16_t *buffer;
DECL|calibration_value|member|u8_t calibration_value;
DECL|capture_mode|member|u8_t capture_mode;
DECL|channel_id|member|u32_t channel_id;
DECL|channels|member|u32_t channels;
DECL|clock_ratio|member|u32_t clock_ratio;
DECL|config_func|member|adc_dw_config_t config_func;
DECL|ctx|member|struct adc_context ctx;
DECL|dev|member|struct device *dev;
DECL|dummy_conversion|member|u8_t dummy_conversion;
DECL|entries|member|const struct adc_sequence *entries;
DECL|index|member|u8_t index[BUFS_NUM];
DECL|out_mode|member|u8_t out_mode;
DECL|padding|member|u8_t padding[3];
DECL|reg_base|member|u32_t reg_base;
DECL|reg_err_mask|member|u32_t reg_err_mask;
DECL|reg_irq_mask|member|u32_t reg_irq_mask;
DECL|sample_width|member|u8_t sample_width;
DECL|seq_mode|member|u8_t seq_mode;
DECL|seq_size|member|u8_t seq_size;
DECL|serial_dly|member|u8_t serial_dly;
DECL|ss_adc_data_to_mv|macro|ss_adc_data_to_mv
DECL|state|member|u8_t state;
