DECL|ADC_CONTEXT_USES_KERNEL_TIMER|macro|ADC_CONTEXT_USES_KERNEL_TIMER
DECL|CONF_ADC_PRESCALER|macro|CONF_ADC_PRESCALER
DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|NUM_CHANNELS|macro|NUM_CHANNELS
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|adc0_sam_cfg_func|function|static void adc0_sam_cfg_func(struct device *dev)
DECL|adc0_sam_cfg|variable|adc0_sam_cfg
DECL|adc0_sam_data|variable|adc0_sam_data
DECL|adc1_sam_cfg_func|function|static void adc1_sam_cfg_func(struct device *dev)
DECL|adc1_sam_cfg|variable|adc1_sam_cfg
DECL|adc1_sam_data|variable|adc1_sam_data
DECL|adc_context_start_sampling|function|static void adc_context_start_sampling(struct adc_context *ctx)
DECL|adc_context_update_buffer_pointer|function|static void adc_context_update_buffer_pointer(struct adc_context *ctx, bool repeat_sampling)
DECL|adc_sam_api|variable|adc_sam_api
DECL|adc_sam_cfg|struct|struct adc_sam_cfg {
DECL|adc_sam_channel_setup|function|static int adc_sam_channel_setup(struct device *dev, const struct adc_channel_cfg *channel_cfg)
DECL|adc_sam_data|struct|struct adc_sam_data {
DECL|adc_sam_init|function|static int adc_sam_init(struct device *dev)
DECL|adc_sam_isr|function|static void adc_sam_isr(void *arg)
DECL|adc_sam_read_async|function|static int adc_sam_read_async(struct device *dev, const struct adc_sequence *sequence, struct k_poll_signal *async)
DECL|adc_sam_read|function|static int adc_sam_read(struct device *dev,const struct adc_sequence *sequence)
DECL|adc_sam_start_conversion|function|static void adc_sam_start_conversion(struct device *dev)
DECL|afec_trg_pin|member|struct soc_gpio_pin afec_trg_pin;
DECL|buffer|member|u16_t *buffer;
DECL|cfg_func_t|typedef|typedef void (*cfg_func_t)(struct device *dev);
DECL|cfg_func|member|cfg_func_t cfg_func;
DECL|channel_id|member|u8_t channel_id;
DECL|channels|member|u32_t channels;
DECL|check_buffer_size|function|static int check_buffer_size(const struct adc_sequence *sequence, u8_t active_channels)
DECL|ctx|member|struct adc_context ctx;
DECL|dev|member|struct device *dev;
DECL|periph_id|member|u32_t periph_id;
DECL|regs|member|Afec *regs;
DECL|repeat_buffer|member|u16_t *repeat_buffer;
DECL|start_read|function|static int start_read(struct device *dev, const struct adc_sequence *sequence)
