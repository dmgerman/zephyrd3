DECL|ADC108S102_CHANNELS_SIZE|macro|ADC108S102_CHANNELS_SIZE
DECL|ADC108S102_CHANNELS|macro|ADC108S102_CHANNELS
DECL|ADC108S102_CHANNEL_CMD|macro|ADC108S102_CHANNEL_CMD
DECL|ADC108S102_CMD_BUFFER_SIZE|macro|ADC108S102_CMD_BUFFER_SIZE
DECL|ADC108S102_DONE|macro|ADC108S102_DONE
DECL|ADC108S102_RESULT_MASK|macro|ADC108S102_RESULT_MASK
DECL|ADC108S102_RESULT|macro|ADC108S102_RESULT
DECL|ADC108S102_SAMPLING_BUFFER_SIZE|macro|ADC108S102_SAMPLING_BUFFER_SIZE
DECL|__ADC108S102_PRIV_H__|macro|__ADC108S102_PRIV_H__
DECL|buf_idx|member|uint32_t buf_idx;
DECL|chans|member|struct ti_adc108s102_chan chans[ADC108S102_CHANNELS];
DECL|cmd_buf_len|member|uint8_t cmd_buf_len;
DECL|cmd_buffer|member|uint16_t cmd_buffer[ADC108S102_CMD_BUFFER_SIZE];
DECL|sampling_buf_len|member|uint8_t sampling_buf_len;
DECL|sampling_buffer|member|uint16_t sampling_buffer[ADC108S102_SAMPLING_BUFFER_SIZE];
DECL|seq_table|member|struct adc_seq_table *seq_table;
DECL|spi_config_flags|member|uint32_t spi_config_flags;
DECL|spi_freq|member|uint32_t spi_freq;
DECL|spi_port|member|const char *spi_port;
DECL|spi_slave|member|uint32_t spi_slave;
DECL|spi|member|struct device *spi;
DECL|ti_adc108s102_chan|struct|struct ti_adc108s102_chan {
DECL|ti_adc108s102_config|struct|struct ti_adc108s102_config {
DECL|ti_adc108s102_data|struct|struct ti_adc108s102_data {
