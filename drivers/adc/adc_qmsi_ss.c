DECL|ADC_STATE_BUSY|enumerator|ADC_STATE_BUSY,
DECL|ADC_STATE_ERROR|enumerator|ADC_STATE_ERROR
DECL|ADC_STATE_IDLE|enumerator|ADC_STATE_IDLE,
DECL|adc_config_irq|function|static void adc_config_irq(void)
DECL|adc_ctx|member|qm_ss_adc_context_t adc_ctx;
DECL|adc_info_dev|variable|adc_info_dev
DECL|adc_info|struct|struct adc_info {
DECL|adc_lock|function|static void adc_lock(struct adc_info *data)
DECL|adc_qmsi_ss_device_ctrl|function|static int adc_qmsi_ss_device_ctrl(struct device *dev, uint32_t ctrl_command, void *context)
DECL|adc_qmsi_ss_disable|function|static void adc_qmsi_ss_disable(struct device *dev)
DECL|adc_qmsi_ss_enable|function|static void adc_qmsi_ss_enable(struct device *dev)
DECL|adc_qmsi_ss_enable|function|static void adc_qmsi_ss_enable(struct device *dev)
DECL|adc_qmsi_ss_err_isr|function|void adc_qmsi_ss_err_isr(void *arg)
DECL|adc_qmsi_ss_get_power_state|function|static uint32_t adc_qmsi_ss_get_power_state(struct device *dev)
DECL|adc_qmsi_ss_init|function|int adc_qmsi_ss_init(struct device *dev)
DECL|adc_qmsi_ss_read|function|static int adc_qmsi_ss_read(struct device *dev, struct adc_seq_table *seq_tbl)
DECL|adc_qmsi_ss_read|function|static int adc_qmsi_ss_read(struct device *dev, struct adc_seq_table *seq_tbl)
DECL|adc_qmsi_ss_resume_device_from_suspend|function|static int adc_qmsi_ss_resume_device_from_suspend(struct device *dev)
DECL|adc_qmsi_ss_rx_isr|function|void adc_qmsi_ss_rx_isr(void *arg)
DECL|adc_qmsi_ss_set_power_state|function|static void adc_qmsi_ss_set_power_state(struct device *dev,uint32_t power_state)
DECL|adc_qmsi_ss_set_power_state|macro|adc_qmsi_ss_set_power_state
DECL|adc_qmsi_ss_suspend_device|function|static int adc_qmsi_ss_suspend_device(struct device *dev)
DECL|adc_unlock|function|static void adc_unlock(struct adc_info *data)
DECL|api_funcs|variable|api_funcs
DECL|cfg|variable|cfg
DECL|complete_callback|function|static void complete_callback(void *data, int error, qm_ss_adc_status_t status, qm_ss_adc_cb_source_t source)
DECL|device_power_state|member|uint32_t device_power_state;
DECL|sem|member|struct k_sem sem;
DECL|state|member|atomic_t state;
DECL|sync|member|device_sync_call_t sync;
