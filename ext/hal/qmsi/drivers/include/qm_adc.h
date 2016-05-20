DECL|QM_ADC_CAL_COMPLETE|enumerator|QM_ADC_CAL_COMPLETE, /**< Calibration complete callback. */
DECL|QM_ADC_CH_0|enumerator|QM_ADC_CH_0, /**< ADC Channel 0. */
DECL|QM_ADC_CH_10|enumerator|QM_ADC_CH_10, /**< ADC Channel 10. */
DECL|QM_ADC_CH_11|enumerator|QM_ADC_CH_11, /**< ADC Channel 11. */
DECL|QM_ADC_CH_12|enumerator|QM_ADC_CH_12, /**< ADC Channel 12. */
DECL|QM_ADC_CH_13|enumerator|QM_ADC_CH_13, /**< ADC Channel 13. */
DECL|QM_ADC_CH_14|enumerator|QM_ADC_CH_14, /**< ADC Channel 14. */
DECL|QM_ADC_CH_15|enumerator|QM_ADC_CH_15, /**< ADC Channel 15. */
DECL|QM_ADC_CH_16|enumerator|QM_ADC_CH_16, /**< ADC Channel 16. */
DECL|QM_ADC_CH_17|enumerator|QM_ADC_CH_17, /**< ADC Channel 17. */
DECL|QM_ADC_CH_18|enumerator|QM_ADC_CH_18 /**< ADC Channel 18. */
DECL|QM_ADC_CH_1|enumerator|QM_ADC_CH_1, /**< ADC Channel 1. */
DECL|QM_ADC_CH_2|enumerator|QM_ADC_CH_2, /**< ADC Channel 2. */
DECL|QM_ADC_CH_3|enumerator|QM_ADC_CH_3, /**< ADC Channel 3. */
DECL|QM_ADC_CH_4|enumerator|QM_ADC_CH_4, /**< ADC Channel 4. */
DECL|QM_ADC_CH_5|enumerator|QM_ADC_CH_5, /**< ADC Channel 5. */
DECL|QM_ADC_CH_6|enumerator|QM_ADC_CH_6, /**< ADC Channel 6. */
DECL|QM_ADC_CH_7|enumerator|QM_ADC_CH_7, /**< ADC Channel 7. */
DECL|QM_ADC_CH_8|enumerator|QM_ADC_CH_8, /**< ADC Channel 8. */
DECL|QM_ADC_CH_9|enumerator|QM_ADC_CH_9, /**< ADC Channel 9. */
DECL|QM_ADC_COMPLETE|enumerator|QM_ADC_COMPLETE, /**< ADC transfer complete. */
DECL|QM_ADC_IDLE|enumerator|QM_ADC_IDLE, /**< ADC idle. */
DECL|QM_ADC_MODE_CHANGED|enumerator|QM_ADC_MODE_CHANGED, /**< Mode change complete callback. */
DECL|QM_ADC_MODE_DEEP_PWR_DOWN|enumerator|QM_ADC_MODE_DEEP_PWR_DOWN, /**< Deep power down mode. */
DECL|QM_ADC_MODE_NORM_CAL|enumerator|QM_ADC_MODE_NORM_CAL, /**< Normal mode, with calibration. */
DECL|QM_ADC_MODE_NORM_NO_CAL|enumerator|QM_ADC_MODE_NORM_NO_CAL /**< Normal mode, no calibration. */
DECL|QM_ADC_MODE_PWR_DOWN|enumerator|QM_ADC_MODE_PWR_DOWN, /**< Power down mode. */
DECL|QM_ADC_MODE_STDBY|enumerator|QM_ADC_MODE_STDBY, /**< Standby mode. */
DECL|QM_ADC_OVERFLOW|enumerator|QM_ADC_OVERFLOW, /**< ADC FIFO overflow error. */
DECL|QM_ADC_RES_10_BITS|enumerator|QM_ADC_RES_10_BITS, /**< 10-bit mode. */
DECL|QM_ADC_RES_12_BITS|enumerator|QM_ADC_RES_12_BITS /**< 12-bit mode. */
DECL|QM_ADC_RES_6_BITS|enumerator|QM_ADC_RES_6_BITS, /**< 6-bit mode. */
DECL|QM_ADC_RES_8_BITS|enumerator|QM_ADC_RES_8_BITS, /**< 8-bit mode. */
DECL|QM_ADC_TRANSFER|enumerator|QM_ADC_TRANSFER, /**< Transfer complete or error callback. */
DECL|__QM_ADC_H__|macro|__QM_ADC_H__
DECL|callback_data|member|void *callback_data; /**< Callback user data. */
DECL|callback|member|void (*callback)(void *data, int error, qm_adc_status_t status,
DECL|ch_len|member|uint8_t ch_len; /**< Number of channels in the above array. */
DECL|ch|member|qm_adc_channel_t *ch; /**< Channel sequence array (1-32 channels). */
DECL|qm_adc_calibration_t|typedef|typedef uint8_t qm_adc_calibration_t;
DECL|qm_adc_cb_source_t|typedef|} qm_adc_cb_source_t;
DECL|qm_adc_channel_t|typedef|} qm_adc_channel_t;
DECL|qm_adc_config_t|typedef|} qm_adc_config_t;
DECL|qm_adc_mode_t|typedef|} qm_adc_mode_t;
DECL|qm_adc_resolution_t|typedef|} qm_adc_resolution_t;
DECL|qm_adc_sample_t|typedef|typedef uint16_t qm_adc_sample_t;
DECL|qm_adc_status_t|typedef|} qm_adc_status_t;
DECL|qm_adc_xfer_t|typedef|} qm_adc_xfer_t;
DECL|resolution|member|qm_adc_resolution_t resolution; /**< 12, 10, 8, 6-bit resolution. */
DECL|samples_len|member|uint32_t samples_len; /**< Length of sample array. */
DECL|samples|member|qm_adc_sample_t *samples; /**< Array to store samples. */
DECL|window|member|uint8_t window;
