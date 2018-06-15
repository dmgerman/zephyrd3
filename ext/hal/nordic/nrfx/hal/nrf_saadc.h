DECL|NRF_SAADC_ACQTIME_10US|enumerator|NRF_SAADC_ACQTIME_10US = SAADC_CH_CONFIG_TACQ_10us, ///< 10 us.
DECL|NRF_SAADC_ACQTIME_15US|enumerator|NRF_SAADC_ACQTIME_15US = SAADC_CH_CONFIG_TACQ_15us, ///< 15 us.
DECL|NRF_SAADC_ACQTIME_20US|enumerator|NRF_SAADC_ACQTIME_20US = SAADC_CH_CONFIG_TACQ_20us, ///< 20 us.
DECL|NRF_SAADC_ACQTIME_3US|enumerator|NRF_SAADC_ACQTIME_3US = SAADC_CH_CONFIG_TACQ_3us, ///< 3 us.
DECL|NRF_SAADC_ACQTIME_40US|enumerator|NRF_SAADC_ACQTIME_40US = SAADC_CH_CONFIG_TACQ_40us ///< 40 us.
DECL|NRF_SAADC_ACQTIME_5US|enumerator|NRF_SAADC_ACQTIME_5US = SAADC_CH_CONFIG_TACQ_5us, ///< 5 us.
DECL|NRF_SAADC_BURST_DISABLED|enumerator|NRF_SAADC_BURST_DISABLED = SAADC_CH_CONFIG_BURST_Disabled, ///< Burst mode is disabled (normal operation).
DECL|NRF_SAADC_BURST_ENABLED|enumerator|NRF_SAADC_BURST_ENABLED = SAADC_CH_CONFIG_BURST_Enabled ///< Burst mode is enabled. SAADC takes 2^OVERSAMPLE number of samples as fast as it can, and sends the average to Data RAM.
DECL|NRF_SAADC_CHANNEL_COUNT|macro|NRF_SAADC_CHANNEL_COUNT
DECL|NRF_SAADC_EVENT_CALIBRATEDONE|enumerator|NRF_SAADC_EVENT_CALIBRATEDONE = offsetof(NRF_SAADC_Type, EVENTS_CALIBRATEDONE), ///< Calibration is complete.
DECL|NRF_SAADC_EVENT_CH0_LIMITH|enumerator|NRF_SAADC_EVENT_CH0_LIMITH = offsetof(NRF_SAADC_Type, EVENTS_CH[0].LIMITH), ///< Last result is equal or above CH[0].LIMIT.HIGH.
DECL|NRF_SAADC_EVENT_CH0_LIMITL|enumerator|NRF_SAADC_EVENT_CH0_LIMITL = offsetof(NRF_SAADC_Type, EVENTS_CH[0].LIMITL), ///< Last result is equal or below CH[0].LIMIT.LOW.
DECL|NRF_SAADC_EVENT_CH1_LIMITH|enumerator|NRF_SAADC_EVENT_CH1_LIMITH = offsetof(NRF_SAADC_Type, EVENTS_CH[1].LIMITH), ///< Last result is equal or above CH[1].LIMIT.HIGH.
DECL|NRF_SAADC_EVENT_CH1_LIMITL|enumerator|NRF_SAADC_EVENT_CH1_LIMITL = offsetof(NRF_SAADC_Type, EVENTS_CH[1].LIMITL), ///< Last result is equal or below CH[1].LIMIT.LOW.
DECL|NRF_SAADC_EVENT_CH2_LIMITH|enumerator|NRF_SAADC_EVENT_CH2_LIMITH = offsetof(NRF_SAADC_Type, EVENTS_CH[2].LIMITH), ///< Last result is equal or above CH[2].LIMIT.HIGH.
DECL|NRF_SAADC_EVENT_CH2_LIMITL|enumerator|NRF_SAADC_EVENT_CH2_LIMITL = offsetof(NRF_SAADC_Type, EVENTS_CH[2].LIMITL), ///< Last result is equal or below CH[2].LIMIT.LOW.
DECL|NRF_SAADC_EVENT_CH3_LIMITH|enumerator|NRF_SAADC_EVENT_CH3_LIMITH = offsetof(NRF_SAADC_Type, EVENTS_CH[3].LIMITH), ///< Last result is equal or above CH[3].LIMIT.HIGH.
DECL|NRF_SAADC_EVENT_CH3_LIMITL|enumerator|NRF_SAADC_EVENT_CH3_LIMITL = offsetof(NRF_SAADC_Type, EVENTS_CH[3].LIMITL), ///< Last result is equal or below CH[3].LIMIT.LOW.
DECL|NRF_SAADC_EVENT_CH4_LIMITH|enumerator|NRF_SAADC_EVENT_CH4_LIMITH = offsetof(NRF_SAADC_Type, EVENTS_CH[4].LIMITH), ///< Last result is equal or above CH[4].LIMIT.HIGH.
DECL|NRF_SAADC_EVENT_CH4_LIMITL|enumerator|NRF_SAADC_EVENT_CH4_LIMITL = offsetof(NRF_SAADC_Type, EVENTS_CH[4].LIMITL), ///< Last result is equal or below CH[4].LIMIT.LOW.
DECL|NRF_SAADC_EVENT_CH5_LIMITH|enumerator|NRF_SAADC_EVENT_CH5_LIMITH = offsetof(NRF_SAADC_Type, EVENTS_CH[5].LIMITH), ///< Last result is equal or above CH[5].LIMIT.HIGH.
DECL|NRF_SAADC_EVENT_CH5_LIMITL|enumerator|NRF_SAADC_EVENT_CH5_LIMITL = offsetof(NRF_SAADC_Type, EVENTS_CH[5].LIMITL), ///< Last result is equal or below CH[5].LIMIT.LOW.
DECL|NRF_SAADC_EVENT_CH6_LIMITH|enumerator|NRF_SAADC_EVENT_CH6_LIMITH = offsetof(NRF_SAADC_Type, EVENTS_CH[6].LIMITH), ///< Last result is equal or above CH[6].LIMIT.HIGH.
DECL|NRF_SAADC_EVENT_CH6_LIMITL|enumerator|NRF_SAADC_EVENT_CH6_LIMITL = offsetof(NRF_SAADC_Type, EVENTS_CH[6].LIMITL), ///< Last result is equal or below CH[6].LIMIT.LOW.
DECL|NRF_SAADC_EVENT_CH7_LIMITH|enumerator|NRF_SAADC_EVENT_CH7_LIMITH = offsetof(NRF_SAADC_Type, EVENTS_CH[7].LIMITH), ///< Last result is equal or above CH[7].LIMIT.HIGH.
DECL|NRF_SAADC_EVENT_CH7_LIMITL|enumerator|NRF_SAADC_EVENT_CH7_LIMITL = offsetof(NRF_SAADC_Type, EVENTS_CH[7].LIMITL) ///< Last result is equal or below CH[7].LIMIT.LOW.
DECL|NRF_SAADC_EVENT_DONE|enumerator|NRF_SAADC_EVENT_DONE = offsetof(NRF_SAADC_Type, EVENTS_DONE), ///< A conversion task has been completed.
DECL|NRF_SAADC_EVENT_END|enumerator|NRF_SAADC_EVENT_END = offsetof(NRF_SAADC_Type, EVENTS_END), ///< The ADC has filled up the result buffer.
DECL|NRF_SAADC_EVENT_RESULTDONE|enumerator|NRF_SAADC_EVENT_RESULTDONE = offsetof(NRF_SAADC_Type, EVENTS_RESULTDONE), ///< A result is ready to get transferred to RAM.
DECL|NRF_SAADC_EVENT_STARTED|enumerator|NRF_SAADC_EVENT_STARTED = offsetof(NRF_SAADC_Type, EVENTS_STARTED), ///< The ADC has started.
DECL|NRF_SAADC_EVENT_STOPPED|enumerator|NRF_SAADC_EVENT_STOPPED = offsetof(NRF_SAADC_Type, EVENTS_STOPPED), ///< The ADC has stopped.
DECL|NRF_SAADC_GAIN1_2|enumerator|NRF_SAADC_GAIN1_2 = SAADC_CH_CONFIG_GAIN_Gain1_2, ///< Gain factor 1/2.
DECL|NRF_SAADC_GAIN1_3|enumerator|NRF_SAADC_GAIN1_3 = SAADC_CH_CONFIG_GAIN_Gain1_3, ///< Gain factor 1/3.
DECL|NRF_SAADC_GAIN1_4|enumerator|NRF_SAADC_GAIN1_4 = SAADC_CH_CONFIG_GAIN_Gain1_4, ///< Gain factor 1/4.
DECL|NRF_SAADC_GAIN1_5|enumerator|NRF_SAADC_GAIN1_5 = SAADC_CH_CONFIG_GAIN_Gain1_5, ///< Gain factor 1/5.
DECL|NRF_SAADC_GAIN1_6|enumerator|NRF_SAADC_GAIN1_6 = SAADC_CH_CONFIG_GAIN_Gain1_6, ///< Gain factor 1/6.
DECL|NRF_SAADC_GAIN1|enumerator|NRF_SAADC_GAIN1 = SAADC_CH_CONFIG_GAIN_Gain1, ///< Gain factor 1.
DECL|NRF_SAADC_GAIN2|enumerator|NRF_SAADC_GAIN2 = SAADC_CH_CONFIG_GAIN_Gain2, ///< Gain factor 2.
DECL|NRF_SAADC_GAIN4|enumerator|NRF_SAADC_GAIN4 = SAADC_CH_CONFIG_GAIN_Gain4, ///< Gain factor 4.
DECL|NRF_SAADC_H_|macro|NRF_SAADC_H_
DECL|NRF_SAADC_INPUT_AIN0|enumerator|NRF_SAADC_INPUT_AIN0 = SAADC_CH_PSELP_PSELP_AnalogInput0, ///< Analog input 0 (AIN0).
DECL|NRF_SAADC_INPUT_AIN1|enumerator|NRF_SAADC_INPUT_AIN1 = SAADC_CH_PSELP_PSELP_AnalogInput1, ///< Analog input 1 (AIN1).
DECL|NRF_SAADC_INPUT_AIN2|enumerator|NRF_SAADC_INPUT_AIN2 = SAADC_CH_PSELP_PSELP_AnalogInput2, ///< Analog input 2 (AIN2).
DECL|NRF_SAADC_INPUT_AIN3|enumerator|NRF_SAADC_INPUT_AIN3 = SAADC_CH_PSELP_PSELP_AnalogInput3, ///< Analog input 3 (AIN3).
DECL|NRF_SAADC_INPUT_AIN4|enumerator|NRF_SAADC_INPUT_AIN4 = SAADC_CH_PSELP_PSELP_AnalogInput4, ///< Analog input 4 (AIN4).
DECL|NRF_SAADC_INPUT_AIN5|enumerator|NRF_SAADC_INPUT_AIN5 = SAADC_CH_PSELP_PSELP_AnalogInput5, ///< Analog input 5 (AIN5).
DECL|NRF_SAADC_INPUT_AIN6|enumerator|NRF_SAADC_INPUT_AIN6 = SAADC_CH_PSELP_PSELP_AnalogInput6, ///< Analog input 6 (AIN6).
DECL|NRF_SAADC_INPUT_AIN7|enumerator|NRF_SAADC_INPUT_AIN7 = SAADC_CH_PSELP_PSELP_AnalogInput7, ///< Analog input 7 (AIN7).
DECL|NRF_SAADC_INPUT_DISABLED|enumerator|NRF_SAADC_INPUT_DISABLED = SAADC_CH_PSELP_PSELP_NC, ///< Not connected.
DECL|NRF_SAADC_INPUT_VDD|enumerator|NRF_SAADC_INPUT_VDD = SAADC_CH_PSELP_PSELP_VDD ///< VDD as input.
DECL|NRF_SAADC_INT_ALL|enumerator|NRF_SAADC_INT_ALL = 0x7FFFFFFFUL ///< Mask of all interrupts.
DECL|NRF_SAADC_INT_CALIBRATEDONE|enumerator|NRF_SAADC_INT_CALIBRATEDONE = SAADC_INTENSET_CALIBRATEDONE_Msk, ///< Interrupt on EVENTS_CALIBRATEDONE event.
DECL|NRF_SAADC_INT_CH0LIMITH|enumerator|NRF_SAADC_INT_CH0LIMITH = SAADC_INTENSET_CH0LIMITH_Msk, ///< Interrupt on EVENTS_CH[0].LIMITH event.
DECL|NRF_SAADC_INT_CH0LIMITL|enumerator|NRF_SAADC_INT_CH0LIMITL = SAADC_INTENSET_CH0LIMITL_Msk, ///< Interrupt on EVENTS_CH[0].LIMITL event.
DECL|NRF_SAADC_INT_CH1LIMITH|enumerator|NRF_SAADC_INT_CH1LIMITH = SAADC_INTENSET_CH1LIMITH_Msk, ///< Interrupt on EVENTS_CH[1].LIMITH event.
DECL|NRF_SAADC_INT_CH1LIMITL|enumerator|NRF_SAADC_INT_CH1LIMITL = SAADC_INTENSET_CH1LIMITL_Msk, ///< Interrupt on EVENTS_CH[1].LIMITL event.
DECL|NRF_SAADC_INT_CH2LIMITH|enumerator|NRF_SAADC_INT_CH2LIMITH = SAADC_INTENSET_CH2LIMITH_Msk, ///< Interrupt on EVENTS_CH[2].LIMITH event.
DECL|NRF_SAADC_INT_CH2LIMITL|enumerator|NRF_SAADC_INT_CH2LIMITL = SAADC_INTENSET_CH2LIMITL_Msk, ///< Interrupt on EVENTS_CH[2].LIMITL event.
DECL|NRF_SAADC_INT_CH3LIMITH|enumerator|NRF_SAADC_INT_CH3LIMITH = SAADC_INTENSET_CH3LIMITH_Msk, ///< Interrupt on EVENTS_CH[3].LIMITH event.
DECL|NRF_SAADC_INT_CH3LIMITL|enumerator|NRF_SAADC_INT_CH3LIMITL = SAADC_INTENSET_CH3LIMITL_Msk, ///< Interrupt on EVENTS_CH[3].LIMITL event.
DECL|NRF_SAADC_INT_CH4LIMITH|enumerator|NRF_SAADC_INT_CH4LIMITH = SAADC_INTENSET_CH4LIMITH_Msk, ///< Interrupt on EVENTS_CH[4].LIMITH event.
DECL|NRF_SAADC_INT_CH4LIMITL|enumerator|NRF_SAADC_INT_CH4LIMITL = SAADC_INTENSET_CH4LIMITL_Msk, ///< Interrupt on EVENTS_CH[4].LIMITL event.
DECL|NRF_SAADC_INT_CH5LIMITH|enumerator|NRF_SAADC_INT_CH5LIMITH = SAADC_INTENSET_CH5LIMITH_Msk, ///< Interrupt on EVENTS_CH[5].LIMITH event.
DECL|NRF_SAADC_INT_CH5LIMITL|enumerator|NRF_SAADC_INT_CH5LIMITL = SAADC_INTENSET_CH5LIMITL_Msk, ///< Interrupt on EVENTS_CH[5].LIMITL event.
DECL|NRF_SAADC_INT_CH6LIMITH|enumerator|NRF_SAADC_INT_CH6LIMITH = SAADC_INTENSET_CH6LIMITH_Msk, ///< Interrupt on EVENTS_CH[6].LIMITH event.
DECL|NRF_SAADC_INT_CH6LIMITL|enumerator|NRF_SAADC_INT_CH6LIMITL = SAADC_INTENSET_CH6LIMITL_Msk, ///< Interrupt on EVENTS_CH[6].LIMITL event.
DECL|NRF_SAADC_INT_CH7LIMITH|enumerator|NRF_SAADC_INT_CH7LIMITH = SAADC_INTENSET_CH7LIMITH_Msk, ///< Interrupt on EVENTS_CH[7].LIMITH event.
DECL|NRF_SAADC_INT_CH7LIMITL|enumerator|NRF_SAADC_INT_CH7LIMITL = SAADC_INTENSET_CH7LIMITL_Msk, ///< Interrupt on EVENTS_CH[7].LIMITL event.
DECL|NRF_SAADC_INT_DONE|enumerator|NRF_SAADC_INT_DONE = SAADC_INTENSET_DONE_Msk, ///< Interrupt on EVENTS_DONE event.
DECL|NRF_SAADC_INT_END|enumerator|NRF_SAADC_INT_END = SAADC_INTENSET_END_Msk, ///< Interrupt on EVENTS_END event.
DECL|NRF_SAADC_INT_RESULTDONE|enumerator|NRF_SAADC_INT_RESULTDONE = SAADC_INTENSET_RESULTDONE_Msk, ///< Interrupt on EVENTS_RESULTDONE event.
DECL|NRF_SAADC_INT_STARTED|enumerator|NRF_SAADC_INT_STARTED = SAADC_INTENSET_STARTED_Msk, ///< Interrupt on EVENTS_STARTED event.
DECL|NRF_SAADC_INT_STOPPED|enumerator|NRF_SAADC_INT_STOPPED = SAADC_INTENSET_STOPPED_Msk, ///< Interrupt on EVENTS_STOPPED event.
DECL|NRF_SAADC_LIMIT_HIGH|enumerator|NRF_SAADC_LIMIT_HIGH = 1
DECL|NRF_SAADC_LIMIT_LOW|enumerator|NRF_SAADC_LIMIT_LOW = 0,
DECL|NRF_SAADC_MODE_DIFFERENTIAL|enumerator|NRF_SAADC_MODE_DIFFERENTIAL = SAADC_CH_CONFIG_MODE_Diff ///< Differential mode.
DECL|NRF_SAADC_MODE_SINGLE_ENDED|enumerator|NRF_SAADC_MODE_SINGLE_ENDED = SAADC_CH_CONFIG_MODE_SE, ///< Single ended, PSELN will be ignored, negative input to ADC shorted to GND.
DECL|NRF_SAADC_OVERSAMPLE_128X|enumerator|NRF_SAADC_OVERSAMPLE_128X = SAADC_OVERSAMPLE_OVERSAMPLE_Over128x, ///< Oversample 128x.
DECL|NRF_SAADC_OVERSAMPLE_16X|enumerator|NRF_SAADC_OVERSAMPLE_16X = SAADC_OVERSAMPLE_OVERSAMPLE_Over16x, ///< Oversample 16x.
DECL|NRF_SAADC_OVERSAMPLE_256X|enumerator|NRF_SAADC_OVERSAMPLE_256X = SAADC_OVERSAMPLE_OVERSAMPLE_Over256x ///< Oversample 256x.
DECL|NRF_SAADC_OVERSAMPLE_2X|enumerator|NRF_SAADC_OVERSAMPLE_2X = SAADC_OVERSAMPLE_OVERSAMPLE_Over2x, ///< Oversample 2x.
DECL|NRF_SAADC_OVERSAMPLE_32X|enumerator|NRF_SAADC_OVERSAMPLE_32X = SAADC_OVERSAMPLE_OVERSAMPLE_Over32x, ///< Oversample 32x.
DECL|NRF_SAADC_OVERSAMPLE_4X|enumerator|NRF_SAADC_OVERSAMPLE_4X = SAADC_OVERSAMPLE_OVERSAMPLE_Over4x, ///< Oversample 4x.
DECL|NRF_SAADC_OVERSAMPLE_64X|enumerator|NRF_SAADC_OVERSAMPLE_64X = SAADC_OVERSAMPLE_OVERSAMPLE_Over64x, ///< Oversample 64x.
DECL|NRF_SAADC_OVERSAMPLE_8X|enumerator|NRF_SAADC_OVERSAMPLE_8X = SAADC_OVERSAMPLE_OVERSAMPLE_Over8x, ///< Oversample 8x.
DECL|NRF_SAADC_OVERSAMPLE_DISABLED|enumerator|NRF_SAADC_OVERSAMPLE_DISABLED = SAADC_OVERSAMPLE_OVERSAMPLE_Bypass, ///< No oversampling.
DECL|NRF_SAADC_REFERENCE_INTERNAL|enumerator|NRF_SAADC_REFERENCE_INTERNAL = SAADC_CH_CONFIG_REFSEL_Internal, ///< Internal reference (0.6 V).
DECL|NRF_SAADC_REFERENCE_VDD4|enumerator|NRF_SAADC_REFERENCE_VDD4 = SAADC_CH_CONFIG_REFSEL_VDD1_4 ///< VDD/4 as reference.
DECL|NRF_SAADC_RESISTOR_DISABLED|enumerator|NRF_SAADC_RESISTOR_DISABLED = SAADC_CH_CONFIG_RESP_Bypass, ///< Bypass resistor ladder.
DECL|NRF_SAADC_RESISTOR_PULLDOWN|enumerator|NRF_SAADC_RESISTOR_PULLDOWN = SAADC_CH_CONFIG_RESP_Pulldown, ///< Pull-down to GND.
DECL|NRF_SAADC_RESISTOR_PULLUP|enumerator|NRF_SAADC_RESISTOR_PULLUP = SAADC_CH_CONFIG_RESP_Pullup, ///< Pull-up to VDD.
DECL|NRF_SAADC_RESISTOR_VDD1_2|enumerator|NRF_SAADC_RESISTOR_VDD1_2 = SAADC_CH_CONFIG_RESP_VDD1_2 ///< Set input at VDD/2.
DECL|NRF_SAADC_RESOLUTION_10BIT|enumerator|NRF_SAADC_RESOLUTION_10BIT = SAADC_RESOLUTION_VAL_10bit, ///< 10 bit resolution.
DECL|NRF_SAADC_RESOLUTION_12BIT|enumerator|NRF_SAADC_RESOLUTION_12BIT = SAADC_RESOLUTION_VAL_12bit, ///< 12 bit resolution.
DECL|NRF_SAADC_RESOLUTION_14BIT|enumerator|NRF_SAADC_RESOLUTION_14BIT = SAADC_RESOLUTION_VAL_14bit ///< 14 bit resolution.
DECL|NRF_SAADC_RESOLUTION_8BIT|enumerator|NRF_SAADC_RESOLUTION_8BIT = SAADC_RESOLUTION_VAL_8bit, ///< 8 bit resolution.
DECL|NRF_SAADC_TASK_CALIBRATEOFFSET|enumerator|NRF_SAADC_TASK_CALIBRATEOFFSET = offsetof(NRF_SAADC_Type, TASKS_CALIBRATEOFFSET), ///< Starts offset auto-calibration.
DECL|NRF_SAADC_TASK_SAMPLE|enumerator|NRF_SAADC_TASK_SAMPLE = offsetof(NRF_SAADC_Type, TASKS_SAMPLE), ///< Take one ADC sample. If scan is enabled, all channels are sampled.
DECL|NRF_SAADC_TASK_START|enumerator|NRF_SAADC_TASK_START = offsetof(NRF_SAADC_Type, TASKS_START), ///< Start the ADC and prepare the result buffer in RAM.
DECL|NRF_SAADC_TASK_STOP|enumerator|NRF_SAADC_TASK_STOP = offsetof(NRF_SAADC_Type, TASKS_STOP), ///< Stop the ADC and terminate any on-going conversion.
DECL|acq_time|member|nrf_saadc_acqtime_t acq_time;
DECL|buffer_size|member|uint32_t buffer_size;
DECL|buffer|member|nrf_saadc_value_t * buffer;
DECL|burst|member|nrf_saadc_burst_t burst;
DECL|gain|member|nrf_saadc_gain_t gain;
DECL|mode|member|nrf_saadc_mode_t mode;
DECL|nrf_saadc_acqtime_t|typedef|} nrf_saadc_acqtime_t;
DECL|nrf_saadc_amount_get|function|__STATIC_INLINE uint16_t nrf_saadc_amount_get(void)
DECL|nrf_saadc_buffer_init|function|__STATIC_INLINE void nrf_saadc_buffer_init(nrf_saadc_value_t * p_buffer, uint32_t size)
DECL|nrf_saadc_buffer_pointer_get|function|__STATIC_INLINE nrf_saadc_value_t * nrf_saadc_buffer_pointer_get(void)
DECL|nrf_saadc_buffer_pointer_set|function|__STATIC_INLINE void nrf_saadc_buffer_pointer_set(nrf_saadc_value_t * p_buffer)
DECL|nrf_saadc_burst_t|typedef|} nrf_saadc_burst_t;
DECL|nrf_saadc_busy_check|function|__STATIC_INLINE bool nrf_saadc_busy_check(void)
DECL|nrf_saadc_channel_config_t|typedef|} nrf_saadc_channel_config_t;
DECL|nrf_saadc_channel_init|function|__STATIC_INLINE void nrf_saadc_channel_init(uint8_t channel, nrf_saadc_channel_config_t const * const config)
DECL|nrf_saadc_channel_input_set|function|__STATIC_INLINE void nrf_saadc_channel_input_set(uint8_t channel, nrf_saadc_input_t pselp, nrf_saadc_input_t pseln)
DECL|nrf_saadc_channel_limits_set|function|__STATIC_INLINE void nrf_saadc_channel_limits_set(uint8_t channel, int16_t low, int16_t high)
DECL|nrf_saadc_channel_pos_input_set|function|__STATIC_INLINE void nrf_saadc_channel_pos_input_set(uint8_t channel, nrf_saadc_input_t pselp)
DECL|nrf_saadc_config_t|typedef|} nrf_saadc_config_t;
DECL|nrf_saadc_disable|function|__STATIC_INLINE void nrf_saadc_disable(void)
DECL|nrf_saadc_enable_check|function|__STATIC_INLINE bool nrf_saadc_enable_check(void)
DECL|nrf_saadc_enable|function|__STATIC_INLINE void nrf_saadc_enable(void)
DECL|nrf_saadc_event_address_get|function|__STATIC_INLINE uint32_t nrf_saadc_event_address_get(nrf_saadc_event_t saadc_event)
DECL|nrf_saadc_event_check|function|__STATIC_INLINE bool nrf_saadc_event_check(nrf_saadc_event_t saadc_event)
DECL|nrf_saadc_event_clear|function|__STATIC_INLINE void nrf_saadc_event_clear(nrf_saadc_event_t saadc_event)
DECL|nrf_saadc_event_limit_address_get|function|__STATIC_INLINE volatile uint32_t * nrf_saadc_event_limit_address_get(uint8_t channel, nrf_saadc_limit_t limit_type)
DECL|nrf_saadc_event_limit_get|function|__STATIC_INLINE nrf_saadc_event_t nrf_saadc_event_limit_get(uint8_t channel, nrf_saadc_limit_t limit_type)
DECL|nrf_saadc_event_t|typedef|} nrf_saadc_event_t;
DECL|nrf_saadc_gain_t|typedef|} nrf_saadc_gain_t;
DECL|nrf_saadc_input_t|typedef|} nrf_saadc_input_t;
DECL|nrf_saadc_int_disable|function|__STATIC_INLINE void nrf_saadc_int_disable(uint32_t saadc_int_mask)
DECL|nrf_saadc_int_enable_check|function|__STATIC_INLINE bool nrf_saadc_int_enable_check(uint32_t saadc_int_mask)
DECL|nrf_saadc_int_enable|function|__STATIC_INLINE void nrf_saadc_int_enable(uint32_t saadc_int_mask)
DECL|nrf_saadc_int_mask_t|typedef|} nrf_saadc_int_mask_t;
DECL|nrf_saadc_limit_int_get|function|__STATIC_INLINE uint32_t nrf_saadc_limit_int_get(uint8_t channel, nrf_saadc_limit_t limit_type)
DECL|nrf_saadc_limit_t|typedef|} nrf_saadc_limit_t;
DECL|nrf_saadc_mode_t|typedef|} nrf_saadc_mode_t;
DECL|nrf_saadc_oversample_get|function|__STATIC_INLINE nrf_saadc_oversample_t nrf_saadc_oversample_get(void)
DECL|nrf_saadc_oversample_set|function|__STATIC_INLINE void nrf_saadc_oversample_set(nrf_saadc_oversample_t oversample)
DECL|nrf_saadc_oversample_t|typedef|} nrf_saadc_oversample_t;
DECL|nrf_saadc_reference_t|typedef|} nrf_saadc_reference_t;
DECL|nrf_saadc_resistor_t|typedef|} nrf_saadc_resistor_t;
DECL|nrf_saadc_resolution_set|function|__STATIC_INLINE void nrf_saadc_resolution_set(nrf_saadc_resolution_t resolution)
DECL|nrf_saadc_resolution_t|typedef|} nrf_saadc_resolution_t;
DECL|nrf_saadc_task_address_get|function|__STATIC_INLINE uint32_t nrf_saadc_task_address_get(nrf_saadc_task_t saadc_task)
DECL|nrf_saadc_task_trigger|function|__STATIC_INLINE void nrf_saadc_task_trigger(nrf_saadc_task_t saadc_task)
DECL|nrf_saadc_task_t|typedef|} nrf_saadc_task_t;
DECL|nrf_saadc_value_t|typedef|typedef int16_t nrf_saadc_value_t; ///< Type of a single ADC conversion result.
DECL|oversample|member|nrf_saadc_oversample_t oversample;
DECL|pin_n|member|nrf_saadc_input_t pin_n;
DECL|pin_p|member|nrf_saadc_input_t pin_p;
DECL|reference|member|nrf_saadc_reference_t reference;
DECL|resistor_n|member|nrf_saadc_resistor_t resistor_n;
DECL|resistor_p|member|nrf_saadc_resistor_t resistor_p;
DECL|resolution|member|nrf_saadc_resolution_t resolution;
