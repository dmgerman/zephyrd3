DECL|ADC_CONTEXT_USES_KERNEL_TIMER|macro|ADC_CONTEXT_USES_KERNEL_TIMER
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|adc_context_start_sampling|function|static void adc_context_start_sampling(struct adc_context *ctx)
DECL|adc_context_update_buffer_pointer|function|static void adc_context_update_buffer_pointer(struct adc_context *ctx, bool repeat_sampling)
DECL|base|member|ADC_Type *base;
DECL|buffer|member|u16_t *buffer;
DECL|channel_id|member|u8_t channel_id;
DECL|channels|member|u32_t channels;
DECL|ctx|member|struct adc_context ctx;
DECL|dev|member|struct device *dev;
DECL|irq_config_func|member|void (*irq_config_func)(struct device *dev);
DECL|mcux_adc16_channel_setup|function|static int mcux_adc16_channel_setup(struct device *dev, const struct adc_channel_cfg *channel_cfg)
DECL|mcux_adc16_config_0|variable|mcux_adc16_config_0
DECL|mcux_adc16_config_1|variable|mcux_adc16_config_1
DECL|mcux_adc16_config_func_0|function|static void mcux_adc16_config_func_0(struct device *dev)
DECL|mcux_adc16_config_func_1|function|static void mcux_adc16_config_func_1(struct device *dev)
DECL|mcux_adc16_config|struct|struct mcux_adc16_config {
DECL|mcux_adc16_data_0|variable|mcux_adc16_data_0
DECL|mcux_adc16_data_1|variable|mcux_adc16_data_1
DECL|mcux_adc16_data|struct|struct mcux_adc16_data {
DECL|mcux_adc16_driver_api|variable|mcux_adc16_driver_api
DECL|mcux_adc16_init|function|static int mcux_adc16_init(struct device *dev)
DECL|mcux_adc16_isr|function|static void mcux_adc16_isr(void *arg)
DECL|mcux_adc16_read_async|function|static int mcux_adc16_read_async(struct device *dev, const struct adc_sequence *sequence, struct k_poll_signal *async)
DECL|mcux_adc16_read|function|static int mcux_adc16_read(struct device *dev, const struct adc_sequence *sequence)
DECL|mcux_adc16_start_channel|function|static void mcux_adc16_start_channel(struct device *dev)
DECL|repeat_buffer|member|u16_t *repeat_buffer;
DECL|start_read|function|static int start_read(struct device *dev, const struct adc_sequence *sequence)
