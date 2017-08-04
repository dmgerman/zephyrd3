DECL|ADC_CHANNELS|macro|ADC_CHANNELS
DECL|CONF_ADC_PRESCALER|macro|CONF_ADC_PRESCALER
DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|DEV_NAME|macro|DEV_NAME
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|active_chan_last|member|u16_t active_chan_last;
DECL|active_channels|member|u16_t active_channels;
DECL|adc0_irq_config|function|static void adc0_irq_config(void)
DECL|adc0_sam_config|variable|adc0_sam_config
DECL|adc0_sam_data|variable|adc0_sam_data
DECL|adc1_irq_config|function|static void adc1_irq_config(void)
DECL|adc1_sam_config|variable|adc1_sam_config
DECL|adc1_sam_data|variable|adc1_sam_data
DECL|adc_sam_configure|function|static void adc_sam_configure(struct device *dev)
DECL|adc_sam_dev_cfg|struct|struct adc_sam_dev_cfg {
DECL|adc_sam_dev_data|struct|struct adc_sam_dev_data {
DECL|adc_sam_driver_api|variable|adc_sam_driver_api
DECL|adc_sam_initialize|function|static int adc_sam_initialize(struct device *dev)
DECL|adc_sam_isr|function|static void adc_sam_isr(void *arg)
DECL|adc_sam_read|function|static int adc_sam_read(struct device *dev, struct adc_seq_table *seq_tbl)
DECL|buffer|member|u16_t *buffer;
DECL|channel_samples|struct|struct channel_samples {
DECL|irq_config|member|void (*irq_config)(void);
DECL|irq_id|member|u8_t irq_id;
DECL|length|member|u32_t length;
DECL|measured_channels|member|u16_t measured_channels;
DECL|mutex_thread|member|struct k_sem mutex_thread;
DECL|periph_id|member|u8_t periph_id;
DECL|pin_adc0|variable|pin_adc0
DECL|pin_adc1|variable|pin_adc1
DECL|pin_trigger|member|const struct soc_gpio_pin *pin_trigger;
DECL|regs|member|Afec *regs;
DECL|samples|member|struct channel_samples samples[ADC_CHANNELS];
DECL|sem_meas|member|struct k_sem sem_meas;
