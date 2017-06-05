DECL|base|member|ADC_Type *base;
DECL|channel_group|member|u32_t channel_group;
DECL|irq_config_func|member|void (*irq_config_func)(struct device *dev);
DECL|mcux_adc16_config_0|variable|mcux_adc16_config_0
DECL|mcux_adc16_config_1|variable|mcux_adc16_config_1
DECL|mcux_adc16_config_func_0|function|static void mcux_adc16_config_func_0(struct device *dev)
DECL|mcux_adc16_config_func_1|function|static void mcux_adc16_config_func_1(struct device *dev)
DECL|mcux_adc16_config|struct|struct mcux_adc16_config {
DECL|mcux_adc16_data_0|variable|mcux_adc16_data_0
DECL|mcux_adc16_data_1|variable|mcux_adc16_data_1
DECL|mcux_adc16_data|struct|struct mcux_adc16_data {
DECL|mcux_adc16_disable|function|static void mcux_adc16_disable(struct device *dev)
DECL|mcux_adc16_driver_api|variable|mcux_adc16_driver_api
DECL|mcux_adc16_enable|function|static void mcux_adc16_enable(struct device *dev)
DECL|mcux_adc16_init|function|static int mcux_adc16_init(struct device *dev)
DECL|mcux_adc16_isr|function|static void mcux_adc16_isr(void *arg)
DECL|mcux_adc16_read|function|static int mcux_adc16_read(struct device *dev, struct adc_seq_table *seq_table)
DECL|result|member|u32_t result;
DECL|sync|member|struct k_sem sync;
