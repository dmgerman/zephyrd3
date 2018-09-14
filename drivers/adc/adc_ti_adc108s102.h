DECL|ADC108S102_CHANNELS_SIZE|macro|ADC108S102_CHANNELS_SIZE
DECL|ADC108S102_CHANNELS|macro|ADC108S102_CHANNELS
DECL|ADC108S102_CHANNEL_CMD|macro|ADC108S102_CHANNEL_CMD
DECL|ADC108S102_CMD_BUFFER_SIZE|macro|ADC108S102_CMD_BUFFER_SIZE
DECL|ADC108S102_DONE|macro|ADC108S102_DONE
DECL|ADC108S102_RESULT_MASK|macro|ADC108S102_RESULT_MASK
DECL|ADC108S102_RESULT|macro|ADC108S102_RESULT
DECL|ADC108S102_SAMPLING_BUFFER_SIZE|macro|ADC108S102_SAMPLING_BUFFER_SIZE
DECL|ZEPHYR_DRIVERS_ADC_ADC_TI_ADC108S102_H_|macro|ZEPHYR_DRIVERS_ADC_ADC_TI_ADC108S102_H_
DECL|buf_idx|member|u32_t buf_idx;
DECL|chans|member|struct ti_adc108s102_chan chans[ADC108S102_CHANNELS];
DECL|cmd_buf_len|member|u8_t cmd_buf_len;
DECL|cmd_buffer|member|u16_t cmd_buffer[ADC108S102_CMD_BUFFER_SIZE];
DECL|sampling_buf_len|member|u8_t sampling_buf_len;
DECL|sampling_buffer|member|u16_t sampling_buffer[ADC108S102_SAMPLING_BUFFER_SIZE];
DECL|seq_table|member|struct adc_seq_table *seq_table;
DECL|spi_cfg|member|struct spi_config spi_cfg;
DECL|spi|member|struct device *spi;
DECL|stride|member|u8_t stride[2];
DECL|ti_adc108s102_chan|struct|struct ti_adc108s102_chan {
DECL|ti_adc108s102_data|struct|struct ti_adc108s102_data {
