DECL|ADC_SAMPLE_SHIFT|macro|ADC_SAMPLE_SHIFT
DECL|CALCULATE_DELAY|macro|CALCULATE_DELAY
DECL|FIFO_INTERRUPT_THRESHOLD|macro|FIFO_INTERRUPT_THRESHOLD
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_ss_adc_0_cal_isr)
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_ss_adc_0_error_isr)
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_ss_adc_0_isr)
DECL|QM_ISR_DECLARE|function|QM_ISR_DECLARE(qm_ss_adc_0_pwr_isr)
DECL|QM_SS_ADC_CHAN_SEQ_MAX|macro|QM_SS_ADC_CHAN_SEQ_MAX
DECL|QM_SS_ADC_CMD_LOAD_CAL|macro|QM_SS_ADC_CMD_LOAD_CAL
DECL|QM_SS_ADC_CMD_START_CAL|macro|QM_SS_ADC_CMD_START_CAL
DECL|adc_base|variable|adc_base
DECL|cal_callback_data|variable|cal_callback_data
DECL|cal_callback|variable|cal_callback
DECL|count|variable|count
DECL|disable_adc|function|static void disable_adc(void)
DECL|dummy_conversion|function|static void dummy_conversion(uint32_t controller)
DECL|enable_adc|function|static void enable_adc(void)
DECL|ignore_spurious_interrupt|variable|ignore_spurious_interrupt
DECL|irq_xfer|variable|irq_xfer
DECL|mode_callback_data|variable|mode_callback_data
DECL|mode_callback|variable|mode_callback
DECL|qm_ss_adc_calibrate|function|int qm_ss_adc_calibrate(const qm_ss_adc_t adc __attribute__((unused)))
DECL|qm_ss_adc_convert|function|int qm_ss_adc_convert(const qm_ss_adc_t adc, qm_ss_adc_xfer_t *xfer, qm_ss_adc_status_t *const status)
DECL|qm_ss_adc_get_calibration|function|int qm_ss_adc_get_calibration(const qm_ss_adc_t adc __attribute__((unused)), qm_ss_adc_calibration_t *const cal)
DECL|qm_ss_adc_irq_calibrate|function|int qm_ss_adc_irq_calibrate(const qm_ss_adc_t adc, void (*callback)(void *data, int error, qm_ss_adc_status_t status, qm_ss_adc_cb_source_t source), void *callback_data)
DECL|qm_ss_adc_irq_convert|function|int qm_ss_adc_irq_convert(const qm_ss_adc_t adc, qm_ss_adc_xfer_t *xfer)
DECL|qm_ss_adc_irq_set_mode|function|int qm_ss_adc_irq_set_mode(const qm_ss_adc_t adc, const qm_ss_adc_mode_t mode, void (*callback)(void *data, int error, qm_ss_adc_status_t status, qm_ss_adc_cb_source_t source), void *callback_data)
DECL|qm_ss_adc_isr_cal_handler|function|static void qm_ss_adc_isr_cal_handler(const qm_ss_adc_t adc)
DECL|qm_ss_adc_isr_err_handler|function|static void qm_ss_adc_isr_err_handler(const qm_ss_adc_t adc)
DECL|qm_ss_adc_isr_handler|function|static void qm_ss_adc_isr_handler(const qm_ss_adc_t adc)
DECL|qm_ss_adc_isr_pwr_handler|function|static void qm_ss_adc_isr_pwr_handler(const qm_ss_adc_t adc)
DECL|qm_ss_adc_restore_context|function|int qm_ss_adc_restore_context(const qm_ss_adc_t adc, const qm_ss_adc_context_t *const ctx)
DECL|qm_ss_adc_save_context|function|int qm_ss_adc_save_context(const qm_ss_adc_t adc, qm_ss_adc_context_t *const ctx)
DECL|qm_ss_adc_set_calibration|function|int qm_ss_adc_set_calibration(const qm_ss_adc_t adc __attribute__((unused)), const qm_ss_adc_calibration_t cal_data)
DECL|qm_ss_adc_set_config|function|int qm_ss_adc_set_config(const qm_ss_adc_t adc, const qm_ss_adc_config_t *const cfg)
DECL|qm_ss_adc_set_mode|function|int qm_ss_adc_set_mode(const qm_ss_adc_t adc, const qm_ss_adc_mode_t mode)
DECL|requested_mode|variable|requested_mode
DECL|resolution|variable|resolution
DECL|sample_window|variable|sample_window
DECL|setup_seq_table|function|static void setup_seq_table(const qm_ss_adc_t adc, qm_ss_adc_xfer_t *xfer, bool single_run)
