DECL|__INCLUDE_ADC_H__|macro|__INCLUDE_ADC_H__
DECL|adc_disable|function|static inline void adc_disable(struct device *dev)
DECL|adc_driver_api|struct|struct adc_driver_api {
DECL|adc_enable|function|static inline void adc_enable(struct device *dev)
DECL|adc_read|function|static inline int adc_read(struct device *dev, struct adc_seq_table *seq_table)
DECL|adc_seq_entry|struct|struct adc_seq_entry {
DECL|adc_seq_table|struct|struct adc_seq_table {
DECL|buffer_length|member|uint32_t buffer_length;
DECL|buffer|member|uint8_t *buffer;
DECL|channel_id|member|uint8_t channel_id;
DECL|disable|member|void (*disable)(struct device *dev);
DECL|enable|member|void (*enable)(struct device *dev);
DECL|entries|member|struct adc_seq_entry *entries;
DECL|num_entries|member|uint8_t num_entries;
DECL|read|member|int (*read)(struct device *dev, struct adc_seq_table *seq_table);
DECL|sampling_delay|member|int32_t sampling_delay;
