DECL|ADC_ACQ_TIME_DEFAULT|macro|ADC_ACQ_TIME_DEFAULT
DECL|ADC_ACQ_TIME_MICROSECONDS|macro|ADC_ACQ_TIME_MICROSECONDS
DECL|ADC_ACQ_TIME_NANOSECONDS|macro|ADC_ACQ_TIME_NANOSECONDS
DECL|ADC_ACQ_TIME_TICKS|macro|ADC_ACQ_TIME_TICKS
DECL|ADC_ACQ_TIME_UNIT|macro|ADC_ACQ_TIME_UNIT
DECL|ADC_ACQ_TIME_VALUE|macro|ADC_ACQ_TIME_VALUE
DECL|ADC_ACQ_TIME|macro|ADC_ACQ_TIME
DECL|ADC_ACTION_CONTINUE|enumerator|ADC_ACTION_CONTINUE = 0,
DECL|ADC_ACTION_FINISH|enumerator|ADC_ACTION_FINISH,
DECL|ADC_ACTION_REPEAT|enumerator|ADC_ACTION_REPEAT,
DECL|ADC_GAIN_16|enumerator|ADC_GAIN_16, /**< x 16. */
DECL|ADC_GAIN_1_2|enumerator|ADC_GAIN_1_2, /**< x 1/2. */
DECL|ADC_GAIN_1_3|enumerator|ADC_GAIN_1_3, /**< x 1/3. */
DECL|ADC_GAIN_1_4|enumerator|ADC_GAIN_1_4, /**< x 1/4. */
DECL|ADC_GAIN_1_5|enumerator|ADC_GAIN_1_5, /**< x 1/5. */
DECL|ADC_GAIN_1_6|enumerator|ADC_GAIN_1_6, /**< x 1/6. */
DECL|ADC_GAIN_1|enumerator|ADC_GAIN_1, /**< x 1. */
DECL|ADC_GAIN_2_3|enumerator|ADC_GAIN_2_3, /**< x 2/3. */
DECL|ADC_GAIN_2|enumerator|ADC_GAIN_2, /**< x 2. */
DECL|ADC_GAIN_32|enumerator|ADC_GAIN_32, /**< x 32. */
DECL|ADC_GAIN_3|enumerator|ADC_GAIN_3, /**< x 3. */
DECL|ADC_GAIN_4|enumerator|ADC_GAIN_4, /**< x 4. */
DECL|ADC_GAIN_64|enumerator|ADC_GAIN_64, /**< x 64. */
DECL|ADC_GAIN_8|enumerator|ADC_GAIN_8, /**< x 8. */
DECL|ADC_REF_EXTERNAL0|enumerator|ADC_REF_EXTERNAL0, /**< External, input 0. */
DECL|ADC_REF_EXTERNAL1|enumerator|ADC_REF_EXTERNAL1, /**< External, input 1. */
DECL|ADC_REF_INTERNAL|enumerator|ADC_REF_INTERNAL, /**< Internal. */
DECL|ADC_REF_VDD_1_2|enumerator|ADC_REF_VDD_1_2, /**< VDD/2. */
DECL|ADC_REF_VDD_1_3|enumerator|ADC_REF_VDD_1_3, /**< VDD/3. */
DECL|ADC_REF_VDD_1_4|enumerator|ADC_REF_VDD_1_4, /**< VDD/4. */
DECL|ADC_REF_VDD_1|enumerator|ADC_REF_VDD_1, /**< VDD. */
DECL|__INCLUDE_ADC_H__|macro|__INCLUDE_ADC_H__
DECL|acquisition_time|member|u16_t acquisition_time;
DECL|adc_action|enum|enum adc_action {
DECL|adc_api_channel_setup|typedef|typedef int (*adc_api_channel_setup)(struct device *dev,
DECL|adc_api_read_async|typedef|typedef int (*adc_api_read_async)(struct device *dev,
DECL|adc_api_read|typedef|typedef int (*adc_api_read)(struct device *dev,
DECL|adc_channel_cfg|struct|struct adc_channel_cfg {
DECL|adc_channel_setup|function|static inline int adc_channel_setup(struct device *dev, const struct adc_channel_cfg *channel_cfg)
DECL|adc_driver_api|struct|struct adc_driver_api {
DECL|adc_gain|enum|enum adc_gain {
DECL|adc_read_async|function|static inline int adc_read_async(struct device *dev, const struct adc_sequence *sequence, struct k_poll_signal *async)
DECL|adc_read|function|static inline int adc_read(struct device *dev, const struct adc_sequence *sequence)
DECL|adc_reference|enum|enum adc_reference {
DECL|adc_sequence_callback|typedef|typedef enum adc_action (*adc_sequence_callback)(
DECL|adc_sequence_options|struct|struct adc_sequence_options {
DECL|adc_sequence|struct|struct adc_sequence {
DECL|buffer_size|member|size_t buffer_size;
DECL|buffer|member|void *buffer;
DECL|callback|member|adc_sequence_callback callback;
DECL|channel_id|member|u8_t channel_id : 5;
DECL|channel_setup|member|adc_api_channel_setup channel_setup;
DECL|channels|member|u32_t channels;
DECL|differential|member|u8_t differential : 1;
DECL|extra_samplings|member|u16_t extra_samplings;
DECL|gain|member|enum adc_gain gain;
DECL|input_negative|member|u8_t input_negative;
DECL|input_positive|member|u8_t input_positive;
DECL|interval_us|member|u32_t interval_us;
DECL|options|member|const struct adc_sequence_options *options;
DECL|oversampling|member|u8_t oversampling;
DECL|read_async|member|adc_api_read_async read_async;
DECL|read|member|adc_api_read read;
DECL|reference|member|enum adc_reference reference;
DECL|resolution|member|u8_t resolution;
