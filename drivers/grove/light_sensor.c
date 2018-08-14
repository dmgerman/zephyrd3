DECL|ADC_RESOLUTION|macro|ADC_RESOLUTION
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|adc_buffer|member|u8_t adc_buffer[4];
DECL|adc_table|variable|adc_table
DECL|adc|member|struct device *adc;
DECL|ch10_cfg|member|struct adc_channel_cfg ch10_cfg;
DECL|gls_api|variable|gls_api
DECL|gls_channel_get|function|static int gls_channel_get(struct device *dev, enum sensor_channel chan, struct sensor_value *val)
DECL|gls_data|struct|struct gls_data {
DECL|gls_data|variable|gls_data
DECL|gls_init|function|static int gls_init(struct device *dev)
DECL|gls_sample_fetch|function|static int gls_sample_fetch(struct device *dev, enum sensor_channel chan)
DECL|options|variable|options
