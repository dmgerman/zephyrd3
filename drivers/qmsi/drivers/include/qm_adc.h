DECL|QM_ADC_CH_0|enumerator|QM_ADC_CH_0,
DECL|QM_ADC_CH_10|enumerator|QM_ADC_CH_10,
DECL|QM_ADC_CH_11|enumerator|QM_ADC_CH_11,
DECL|QM_ADC_CH_12|enumerator|QM_ADC_CH_12,
DECL|QM_ADC_CH_13|enumerator|QM_ADC_CH_13,
DECL|QM_ADC_CH_14|enumerator|QM_ADC_CH_14,
DECL|QM_ADC_CH_15|enumerator|QM_ADC_CH_15,
DECL|QM_ADC_CH_16|enumerator|QM_ADC_CH_16,
DECL|QM_ADC_CH_17|enumerator|QM_ADC_CH_17,
DECL|QM_ADC_CH_18|enumerator|QM_ADC_CH_18
DECL|QM_ADC_CH_1|enumerator|QM_ADC_CH_1,
DECL|QM_ADC_CH_2|enumerator|QM_ADC_CH_2,
DECL|QM_ADC_CH_3|enumerator|QM_ADC_CH_3,
DECL|QM_ADC_CH_4|enumerator|QM_ADC_CH_4,
DECL|QM_ADC_CH_5|enumerator|QM_ADC_CH_5,
DECL|QM_ADC_CH_6|enumerator|QM_ADC_CH_6,
DECL|QM_ADC_CH_7|enumerator|QM_ADC_CH_7,
DECL|QM_ADC_CH_8|enumerator|QM_ADC_CH_8,
DECL|QM_ADC_CH_9|enumerator|QM_ADC_CH_9,
DECL|QM_ADC_MODE_DEEP_PWR_DOWN|enumerator|QM_ADC_MODE_DEEP_PWR_DOWN,
DECL|QM_ADC_MODE_NORM_CAL|enumerator|QM_ADC_MODE_NORM_CAL,
DECL|QM_ADC_MODE_NORM_NO_CAL|enumerator|QM_ADC_MODE_NORM_NO_CAL
DECL|QM_ADC_MODE_PWR_DOWN|enumerator|QM_ADC_MODE_PWR_DOWN,
DECL|QM_ADC_MODE_STDBY|enumerator|QM_ADC_MODE_STDBY,
DECL|QM_ADC_RES_10_BITS|enumerator|QM_ADC_RES_10_BITS,
DECL|QM_ADC_RES_12_BITS|enumerator|QM_ADC_RES_12_BITS
DECL|QM_ADC_RES_6_BITS|enumerator|QM_ADC_RES_6_BITS,
DECL|QM_ADC_RES_8_BITS|enumerator|QM_ADC_RES_8_BITS,
DECL|__QM_ADC_H__|macro|__QM_ADC_H__
DECL|ch_len|member|uint32_t ch_len; /* Number of channels in the above array */
DECL|ch|member|qm_adc_channel_t *ch; /* Channel sequence array (1-32 channels) */
DECL|complete_callback|member|void (*complete_callback)(void); /* User callback for interrupt mode */
DECL|error_callback|member|void (*error_callback)(void); /* User callback for error condition */
DECL|qm_adc_channel_t|typedef|} qm_adc_channel_t;
DECL|qm_adc_config_t|typedef|} qm_adc_config_t;
DECL|qm_adc_mode_t|typedef|} qm_adc_mode_t;
DECL|qm_adc_resolution_t|typedef|} qm_adc_resolution_t;
DECL|qm_adc_xfer_t|typedef|} qm_adc_xfer_t;
DECL|resolution|member|qm_adc_resolution_t resolution; /* 12, 10, 8, 6-bit resolution */
DECL|samples_len|member|uint32_t samples_len; /* Length of sample array */
DECL|samples|member|uint32_t *samples; /* Array to store samples */
DECL|window|member|uint8_t window;
