DECL|QM_ADC_CHAN_SEQ_MAX|macro|QM_ADC_CHAN_SEQ_MAX
DECL|QM_ADC_CMD_START_CAL|macro|QM_ADC_CMD_START_CAL
DECL|QM_ADC_CMD_START_CONT|macro|QM_ADC_CMD_START_CONT
DECL|QM_ADC_CMD_START_SINGLE|macro|QM_ADC_CMD_START_SINGLE
DECL|QM_ADC_CMD_STOP_CONT|macro|QM_ADC_CMD_STOP_CONT
DECL|SAMPLE_BLOCK_LEN|macro|SAMPLE_BLOCK_LEN
DECL|adc_cmd|variable|adc_cmd
DECL|count|variable|count
DECL|irq_xfer|variable|irq_xfer
DECL|qm_adc_0_isr|function|void qm_adc_0_isr(void)
DECL|qm_adc_calibrate|function|qm_rc_t qm_adc_calibrate(const qm_adc_t adc)
DECL|qm_adc_convert|function|qm_rc_t qm_adc_convert(const qm_adc_t adc, qm_adc_xfer_t *xfer)
DECL|qm_adc_get_config|function|qm_rc_t qm_adc_get_config(const qm_adc_t adc, qm_adc_config_t *const cfg)
DECL|qm_adc_irq_convert|function|qm_rc_t qm_adc_irq_convert(const qm_adc_t adc, qm_adc_xfer_t *xfer)
DECL|qm_adc_isr_handler|function|static void qm_adc_isr_handler(const qm_adc_t adc)
DECL|qm_adc_set_config|function|qm_rc_t qm_adc_set_config(const qm_adc_t adc, const qm_adc_config_t *const cfg)
DECL|qm_adc_set_mode|function|qm_rc_t qm_adc_set_mode(const qm_adc_t adc, const qm_adc_mode_t mode)
DECL|setup_seq_table|function|static void setup_seq_table(const qm_adc_t adc, qm_adc_xfer_t *xfer)
