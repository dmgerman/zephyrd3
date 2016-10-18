DECL|FIFO_INTERRUPT_THRESHOLD|macro|FIFO_INTERRUPT_THRESHOLD
DECL|QM_ADC_CHAN_SEQ_MAX|macro|QM_ADC_CHAN_SEQ_MAX
DECL|QM_ADC_CMD_LOAD_CAL|macro|QM_ADC_CMD_LOAD_CAL
DECL|QM_ADC_CMD_RESET_CAL|macro|QM_ADC_CMD_RESET_CAL
DECL|QM_ADC_CMD_START_CAL|macro|QM_ADC_CMD_START_CAL
DECL|QM_ADC_CMD_START_CONT|macro|QM_ADC_CMD_START_CONT
DECL|QM_ADC_CMD_START_SINGLE|macro|QM_ADC_CMD_START_SINGLE
DECL|QM_ADC_CMD_STOP_CONT|macro|QM_ADC_CMD_STOP_CONT
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_adc_0_cal_isr)
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_adc_0_pwr_isr)
DECL|cal_callback_data|variable|cal_callback_data
DECL|cal_callback|variable|cal_callback
DECL|count|variable|count
DECL|dummy_conversion|variable|dummy_conversion
DECL|irq_xfer|variable|irq_xfer
DECL|mode_callback_data|variable|mode_callback_data
DECL|mode_callback|variable|mode_callback
DECL|qm_adc_calibrate|function|int qm_adc_calibrate(const qm_adc_t adc)
DECL|qm_adc_convert|function|int qm_adc_convert(const qm_adc_t adc, qm_adc_xfer_t *xfer, qm_adc_status_t *const status)
DECL|qm_adc_get_calibration|function|int qm_adc_get_calibration(const qm_adc_t adc, qm_adc_calibration_t *const cal)
DECL|qm_adc_irq_calibrate|function|int qm_adc_irq_calibrate(const qm_adc_t adc, void (*callback)(void *data, int error, qm_adc_status_t status, qm_adc_cb_source_t source), void *callback_data)
DECL|qm_adc_irq_convert|function|int qm_adc_irq_convert(const qm_adc_t adc, qm_adc_xfer_t *xfer)
DECL|qm_adc_irq_set_mode|function|int qm_adc_irq_set_mode(const qm_adc_t adc, const qm_adc_mode_t mode,void (*callback)(void *data, int error, qm_adc_status_t status, qm_adc_cb_source_t source), void *callback_data)
DECL|qm_adc_isr_handler|function|static void qm_adc_isr_handler(const qm_adc_t adc)
DECL|qm_adc_pwr_0_isr_handler|function|static void qm_adc_pwr_0_isr_handler(const qm_adc_t adc)
DECL|qm_adc_set_calibration|function|int qm_adc_set_calibration(const qm_adc_t adc, const qm_adc_calibration_t cal)
DECL|qm_adc_set_config|function|int qm_adc_set_config(const qm_adc_t adc, const qm_adc_config_t *const cfg)
DECL|qm_adc_set_mode|function|int qm_adc_set_mode(const qm_adc_t adc, const qm_adc_mode_t mode)
DECL|resolution|variable|resolution
DECL|sample_window|variable|sample_window
DECL|setup_seq_table|function|static void setup_seq_table(const qm_adc_t adc, qm_adc_xfer_t *xfer)
