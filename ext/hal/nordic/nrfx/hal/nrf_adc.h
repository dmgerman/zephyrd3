DECL|NRF_ADC_CONFIG_EXTREFSEL_AREF0|enumerator|NRF_ADC_CONFIG_EXTREFSEL_AREF0 = ADC_CONFIG_EXTREFSEL_AnalogReference0, /**< AREF0 as analog reference. */
DECL|NRF_ADC_CONFIG_EXTREFSEL_AREF1|enumerator|NRF_ADC_CONFIG_EXTREFSEL_AREF1 = ADC_CONFIG_EXTREFSEL_AnalogReference1 /**< AREF1 as analog reference. */
DECL|NRF_ADC_CONFIG_EXTREFSEL_NONE|enumerator|NRF_ADC_CONFIG_EXTREFSEL_NONE = ADC_CONFIG_EXTREFSEL_None, /**< Analog reference inputs disabled. */
DECL|NRF_ADC_CONFIG_INPUT_0|enumerator|NRF_ADC_CONFIG_INPUT_0 = ADC_CONFIG_PSEL_AnalogInput0, /**< Input 0. */
DECL|NRF_ADC_CONFIG_INPUT_1|enumerator|NRF_ADC_CONFIG_INPUT_1 = ADC_CONFIG_PSEL_AnalogInput1, /**< Input 1. */
DECL|NRF_ADC_CONFIG_INPUT_2|enumerator|NRF_ADC_CONFIG_INPUT_2 = ADC_CONFIG_PSEL_AnalogInput2, /**< Input 2. */
DECL|NRF_ADC_CONFIG_INPUT_3|enumerator|NRF_ADC_CONFIG_INPUT_3 = ADC_CONFIG_PSEL_AnalogInput3, /**< Input 3. */
DECL|NRF_ADC_CONFIG_INPUT_4|enumerator|NRF_ADC_CONFIG_INPUT_4 = ADC_CONFIG_PSEL_AnalogInput4, /**< Input 4. */
DECL|NRF_ADC_CONFIG_INPUT_5|enumerator|NRF_ADC_CONFIG_INPUT_5 = ADC_CONFIG_PSEL_AnalogInput5, /**< Input 5. */
DECL|NRF_ADC_CONFIG_INPUT_6|enumerator|NRF_ADC_CONFIG_INPUT_6 = ADC_CONFIG_PSEL_AnalogInput6, /**< Input 6. */
DECL|NRF_ADC_CONFIG_INPUT_7|enumerator|NRF_ADC_CONFIG_INPUT_7 = ADC_CONFIG_PSEL_AnalogInput7, /**< Input 7. */
DECL|NRF_ADC_CONFIG_INPUT_DISABLED|enumerator|NRF_ADC_CONFIG_INPUT_DISABLED = ADC_CONFIG_PSEL_Disabled, /**< No input selected. */
DECL|NRF_ADC_CONFIG_REF_EXT|enumerator|NRF_ADC_CONFIG_REF_EXT = ADC_CONFIG_REFSEL_External /**< External reference. See @ref nrf_adc_config_extref_t for further configuration.*/
DECL|NRF_ADC_CONFIG_REF_SUPPLY_ONE_HALF|enumerator|NRF_ADC_CONFIG_REF_SUPPLY_ONE_HALF = ADC_CONFIG_REFSEL_SupplyOneHalfPrescaling, /**< 1/2 of power supply. */
DECL|NRF_ADC_CONFIG_REF_SUPPLY_ONE_THIRD|enumerator|NRF_ADC_CONFIG_REF_SUPPLY_ONE_THIRD = ADC_CONFIG_REFSEL_SupplyOneThirdPrescaling, /**< 1/3 of power supply. */
DECL|NRF_ADC_CONFIG_REF_VBG|enumerator|NRF_ADC_CONFIG_REF_VBG = ADC_CONFIG_REFSEL_VBG, /**< 1.2 V reference. */
DECL|NRF_ADC_CONFIG_RES_10BIT|enumerator|NRF_ADC_CONFIG_RES_10BIT = ADC_CONFIG_RES_10bit, /**< 10-bit resolution. */
DECL|NRF_ADC_CONFIG_RES_8BIT|enumerator|NRF_ADC_CONFIG_RES_8BIT = ADC_CONFIG_RES_8bit, /**< 8-bit resolution. */
DECL|NRF_ADC_CONFIG_RES_9BIT|enumerator|NRF_ADC_CONFIG_RES_9BIT = ADC_CONFIG_RES_9bit, /**< 9-bit resolution. */
DECL|NRF_ADC_CONFIG_SCALING_INPUT_FULL_SCALE|enumerator|NRF_ADC_CONFIG_SCALING_INPUT_FULL_SCALE = ADC_CONFIG_INPSEL_AnalogInputNoPrescaling, /**< Full scale input. */
DECL|NRF_ADC_CONFIG_SCALING_INPUT_ONE_THIRD|enumerator|NRF_ADC_CONFIG_SCALING_INPUT_ONE_THIRD = ADC_CONFIG_INPSEL_AnalogInputOneThirdPrescaling, /**< 1/3 scale input. */
DECL|NRF_ADC_CONFIG_SCALING_INPUT_TWO_THIRDS|enumerator|NRF_ADC_CONFIG_SCALING_INPUT_TWO_THIRDS = ADC_CONFIG_INPSEL_AnalogInputTwoThirdsPrescaling, /**< 2/3 scale input. */
DECL|NRF_ADC_CONFIG_SCALING_SUPPLY_ONE_THIRD|enumerator|NRF_ADC_CONFIG_SCALING_SUPPLY_ONE_THIRD = ADC_CONFIG_INPSEL_SupplyOneThirdPrescaling /**< 1/3 of supply. */
DECL|NRF_ADC_CONFIG_SCALING_SUPPLY_TWO_THIRDS|enumerator|NRF_ADC_CONFIG_SCALING_SUPPLY_TWO_THIRDS = ADC_CONFIG_INPSEL_SupplyTwoThirdsPrescaling, /**< 2/3 of supply. */
DECL|NRF_ADC_EVENT_END|enumerator|NRF_ADC_EVENT_END = offsetof(NRF_ADC_Type, EVENTS_END) /**< End of a conversion event. */
DECL|NRF_ADC_H_|macro|NRF_ADC_H_
DECL|NRF_ADC_INT_END_MASK|enumerator|NRF_ADC_INT_END_MASK = ADC_INTENSET_END_Msk, /**< ADC interrupt on END event. */
DECL|NRF_ADC_TASK_START|enumerator|NRF_ADC_TASK_START = offsetof(NRF_ADC_Type, TASKS_START), /**< ADC start sampling task. */
DECL|NRF_ADC_TASK_STOP|enumerator|NRF_ADC_TASK_STOP = offsetof(NRF_ADC_Type, TASKS_STOP) /**< ADC stop sampling task. */
DECL|extref|member|nrf_adc_config_extref_t extref; /**< ADC external reference selection. */
DECL|input|member|nrf_adc_config_input_t input; /**< ADC input selection. */
DECL|nrf_adc_busy_check|function|__STATIC_INLINE bool nrf_adc_busy_check(void)
DECL|nrf_adc_config_extref_t|typedef|} nrf_adc_config_extref_t;
DECL|nrf_adc_config_input_t|typedef|} nrf_adc_config_input_t;
DECL|nrf_adc_config_reference_t|typedef|} nrf_adc_config_reference_t;
DECL|nrf_adc_config_resolution_t|typedef|} nrf_adc_config_resolution_t;
DECL|nrf_adc_config_scaling_t|typedef|} nrf_adc_config_scaling_t;
DECL|nrf_adc_config_t|typedef|} nrf_adc_config_t;
DECL|nrf_adc_disable|function|__STATIC_INLINE void nrf_adc_disable(void)
DECL|nrf_adc_enable_check|function|__STATIC_INLINE bool nrf_adc_enable_check(void)
DECL|nrf_adc_enable|function|__STATIC_INLINE void nrf_adc_enable(void)
DECL|nrf_adc_event_address_get|function|__STATIC_INLINE uint32_t nrf_adc_event_address_get(nrf_adc_event_t adc_event)
DECL|nrf_adc_event_check|function|__STATIC_INLINE bool nrf_adc_event_check(nrf_adc_event_t event)
DECL|nrf_adc_event_clear|function|__STATIC_INLINE void nrf_adc_event_clear(nrf_adc_event_t event)
DECL|nrf_adc_event_t|typedef|} nrf_adc_event_t;
DECL|nrf_adc_init|function|__STATIC_INLINE void nrf_adc_init(nrf_adc_config_t const * p_config)
DECL|nrf_adc_int_disable|function|__STATIC_INLINE void nrf_adc_int_disable(uint32_t int_mask)
DECL|nrf_adc_int_enable_check|function|__STATIC_INLINE bool nrf_adc_int_enable_check(uint32_t int_mask)
DECL|nrf_adc_int_enable|function|__STATIC_INLINE void nrf_adc_int_enable(uint32_t int_mask)
DECL|nrf_adc_int_mask_t|typedef|} nrf_adc_int_mask_t;
DECL|nrf_adc_result_get|function|__STATIC_INLINE nrf_adc_value_t nrf_adc_result_get(void)
DECL|nrf_adc_task_address_get|function|__STATIC_INLINE uint32_t nrf_adc_task_address_get(nrf_adc_task_t adc_task)
DECL|nrf_adc_task_trigger|function|__STATIC_INLINE void nrf_adc_task_trigger(nrf_adc_task_t task)
DECL|nrf_adc_task_t|typedef|} nrf_adc_task_t;
DECL|nrf_adc_value_t|typedef|typedef uint16_t nrf_adc_value_t;
DECL|reference|member|nrf_adc_config_reference_t reference; /**< ADC reference. */
DECL|resolution|member|nrf_adc_config_resolution_t resolution; /**< ADC resolution. */
DECL|scaling|member|nrf_adc_config_scaling_t scaling; /**< ADC scaling factor. */
