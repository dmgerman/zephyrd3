DECL|NRF_LPCOMP_CONFIG_DEFAULT|macro|NRF_LPCOMP_CONFIG_DEFAULT
DECL|NRF_LPCOMP_CONFIG_REF_EXT_REF1|enumerator|NRF_LPCOMP_CONFIG_REF_EXT_REF1 = LPCOMP_REFSEL_REFSEL_ARef |
DECL|NRF_LPCOMP_DETECT_CROSS|enumerator|NRF_LPCOMP_DETECT_CROSS = LPCOMP_ANADETECT_ANADETECT_Cross, /**< Generate ANADETEC on crossing, both upwards and downwards crossing. */
DECL|NRF_LPCOMP_DETECT_DOWN|enumerator|NRF_LPCOMP_DETECT_DOWN = LPCOMP_ANADETECT_ANADETECT_Down /**< Generate ANADETEC on downwards crossing only. */
DECL|NRF_LPCOMP_DETECT_UP|enumerator|NRF_LPCOMP_DETECT_UP = LPCOMP_ANADETECT_ANADETECT_Up, /**< Generate ANADETEC on upwards crossing only. */
DECL|NRF_LPCOMP_EVENT_CROSS|enumerator|NRF_LPCOMP_EVENT_CROSS = offsetof(NRF_LPCOMP_Type, EVENTS_CROSS) /**< Input voltage crossed the threshold in any direction. */
DECL|NRF_LPCOMP_EVENT_DOWN|enumerator|NRF_LPCOMP_EVENT_DOWN = offsetof(NRF_LPCOMP_Type, EVENTS_DOWN), /**< Input voltage crossed the threshold going down. */
DECL|NRF_LPCOMP_EVENT_READY|enumerator|NRF_LPCOMP_EVENT_READY = offsetof(NRF_LPCOMP_Type, EVENTS_READY), /**< LPCOMP is ready and output is valid. */
DECL|NRF_LPCOMP_EVENT_UP|enumerator|NRF_LPCOMP_EVENT_UP = offsetof(NRF_LPCOMP_Type, EVENTS_UP), /**< Input voltage crossed the threshold going up. */
DECL|NRF_LPCOMP_HYST_50mV|enumerator|NRF_LPCOMP_HYST_50mV = LPCOMP_HYST_HYST_Hyst50mV /**< Comparator hysteresis enabled (typ. 50 mV). */
DECL|NRF_LPCOMP_HYST_NOHYST|enumerator|NRF_LPCOMP_HYST_NOHYST = LPCOMP_HYST_HYST_NoHyst, /**< Comparator hysteresis disabled. */
DECL|NRF_LPCOMP_H_|macro|NRF_LPCOMP_H_
DECL|NRF_LPCOMP_INPUT_0|enumerator|NRF_LPCOMP_INPUT_0 = LPCOMP_PSEL_PSEL_AnalogInput0, /**< Input 0. */
DECL|NRF_LPCOMP_INPUT_1|enumerator|NRF_LPCOMP_INPUT_1 = LPCOMP_PSEL_PSEL_AnalogInput1, /**< Input 1. */
DECL|NRF_LPCOMP_INPUT_2|enumerator|NRF_LPCOMP_INPUT_2 = LPCOMP_PSEL_PSEL_AnalogInput2, /**< Input 2. */
DECL|NRF_LPCOMP_INPUT_3|enumerator|NRF_LPCOMP_INPUT_3 = LPCOMP_PSEL_PSEL_AnalogInput3, /**< Input 3. */
DECL|NRF_LPCOMP_INPUT_4|enumerator|NRF_LPCOMP_INPUT_4 = LPCOMP_PSEL_PSEL_AnalogInput4, /**< Input 4. */
DECL|NRF_LPCOMP_INPUT_5|enumerator|NRF_LPCOMP_INPUT_5 = LPCOMP_PSEL_PSEL_AnalogInput5, /**< Input 5. */
DECL|NRF_LPCOMP_INPUT_6|enumerator|NRF_LPCOMP_INPUT_6 = LPCOMP_PSEL_PSEL_AnalogInput6, /**< Input 6. */
DECL|NRF_LPCOMP_INPUT_7|enumerator|NRF_LPCOMP_INPUT_7 = LPCOMP_PSEL_PSEL_AnalogInput7 /**< Input 7. */
DECL|NRF_LPCOMP_REF_EXT_REF0|enumerator|NRF_LPCOMP_REF_EXT_REF0 = LPCOMP_REFSEL_REFSEL_ARef |
DECL|NRF_LPCOMP_REF_SUPPLY_1_8|enumerator|NRF_LPCOMP_REF_SUPPLY_1_8 = LPCOMP_REFSEL_REFSEL_SupplyOneEighthPrescaling, /**< Use supply with a 1/8 prescaler as reference. */
DECL|NRF_LPCOMP_REF_SUPPLY_2_8|enumerator|NRF_LPCOMP_REF_SUPPLY_2_8 = LPCOMP_REFSEL_REFSEL_SupplyTwoEighthsPrescaling, /**< Use supply with a 2/8 prescaler as reference. */
DECL|NRF_LPCOMP_REF_SUPPLY_3_8|enumerator|NRF_LPCOMP_REF_SUPPLY_3_8 = LPCOMP_REFSEL_REFSEL_SupplyThreeEighthsPrescaling, /**< Use supply with a 3/8 prescaler as reference. */
DECL|NRF_LPCOMP_REF_SUPPLY_4_8|enumerator|NRF_LPCOMP_REF_SUPPLY_4_8 = LPCOMP_REFSEL_REFSEL_SupplyFourEighthsPrescaling, /**< Use supply with a 4/8 prescaler as reference. */
DECL|NRF_LPCOMP_REF_SUPPLY_5_8|enumerator|NRF_LPCOMP_REF_SUPPLY_5_8 = LPCOMP_REFSEL_REFSEL_SupplyFiveEighthsPrescaling, /**< Use supply with a 5/8 prescaler as reference. */
DECL|NRF_LPCOMP_REF_SUPPLY_6_8|enumerator|NRF_LPCOMP_REF_SUPPLY_6_8 = LPCOMP_REFSEL_REFSEL_SupplySixEighthsPrescaling, /**< Use supply with a 6/8 prescaler as reference. */
DECL|NRF_LPCOMP_REF_SUPPLY_7_8|enumerator|NRF_LPCOMP_REF_SUPPLY_7_8 = LPCOMP_REFSEL_REFSEL_SupplySevenEighthsPrescaling, /**< Use supply with a 7/8 prescaler as reference. */
DECL|NRF_LPCOMP_SHORT_CROSS_STOP_MASK|enumerator|NRF_LPCOMP_SHORT_CROSS_STOP_MASK = LPCOMP_SHORTS_CROSS_STOP_Msk, /*!< Short between CROSS event and STOP task. */
DECL|NRF_LPCOMP_SHORT_DOWN_STOP_MASK|enumerator|NRF_LPCOMP_SHORT_DOWN_STOP_MASK = LPCOMP_SHORTS_DOWN_STOP_Msk, /*!< Short between DOWN event and STOP task. */
DECL|NRF_LPCOMP_SHORT_READY_SAMPLE_MASK|enumerator|NRF_LPCOMP_SHORT_READY_SAMPLE_MASK = LPCOMP_SHORTS_READY_SAMPLE_Msk /*!< Short between READY event and SAMPLE task. */
DECL|NRF_LPCOMP_SHORT_READY_STOP_MASK|enumerator|NRF_LPCOMP_SHORT_READY_STOP_MASK = LPCOMP_SHORTS_READY_STOP_Msk, /*!< Short between READY event and STOP task. */
DECL|NRF_LPCOMP_SHORT_UP_STOP_MASK|enumerator|NRF_LPCOMP_SHORT_UP_STOP_MASK = LPCOMP_SHORTS_UP_STOP_Msk, /*!< Short between UP event and STOP task. */
DECL|NRF_LPCOMP_TASK_SAMPLE|enumerator|NRF_LPCOMP_TASK_SAMPLE = offsetof(NRF_LPCOMP_Type, TASKS_SAMPLE) /**< Sample comparator value. */
DECL|NRF_LPCOMP_TASK_START|enumerator|NRF_LPCOMP_TASK_START = offsetof(NRF_LPCOMP_Type, TASKS_START), /**< LPCOMP start sampling task. */
DECL|NRF_LPCOMP_TASK_STOP|enumerator|NRF_LPCOMP_TASK_STOP = offsetof(NRF_LPCOMP_Type, TASKS_STOP), /**< LPCOMP stop sampling task. */
DECL|detection|member|nrf_lpcomp_detect_t detection; /**< LPCOMP detection type. */
DECL|hyst|member|nrf_lpcomp_hysteresis_t hyst; /**< LPCOMP hysteresis. */
DECL|nrf_lpcomp_config_t|typedef|} nrf_lpcomp_config_t;
DECL|nrf_lpcomp_configure|function|__STATIC_INLINE void nrf_lpcomp_configure(const nrf_lpcomp_config_t * p_config)
DECL|nrf_lpcomp_detect_t|typedef|} nrf_lpcomp_detect_t;
DECL|nrf_lpcomp_disable|function|__STATIC_INLINE void nrf_lpcomp_disable(void)
DECL|nrf_lpcomp_enable|function|__STATIC_INLINE void nrf_lpcomp_enable(void)
DECL|nrf_lpcomp_event_address_get|function|__STATIC_INLINE uint32_t * nrf_lpcomp_event_address_get(nrf_lpcomp_event_t lpcomp_event)
DECL|nrf_lpcomp_event_check|function|__STATIC_INLINE bool nrf_lpcomp_event_check(nrf_lpcomp_event_t lpcomp_event)
DECL|nrf_lpcomp_event_clear|function|__STATIC_INLINE void nrf_lpcomp_event_clear(nrf_lpcomp_event_t lpcomp_event)
DECL|nrf_lpcomp_event_t|typedef|} nrf_lpcomp_event_t; /*lint -restore*/
DECL|nrf_lpcomp_hysteresis_t|typedef|}nrf_lpcomp_hysteresis_t;
DECL|nrf_lpcomp_input_select|function|__STATIC_INLINE void nrf_lpcomp_input_select(nrf_lpcomp_input_t input)
DECL|nrf_lpcomp_input_t|typedef|} nrf_lpcomp_input_t;
DECL|nrf_lpcomp_int_disable|function|__STATIC_INLINE void nrf_lpcomp_int_disable(uint32_t lpcomp_int_mask)
DECL|nrf_lpcomp_int_enable_check|function|__STATIC_INLINE bool nrf_lpcomp_int_enable_check(uint32_t lpcomp_int_mask)
DECL|nrf_lpcomp_int_enable|function|__STATIC_INLINE void nrf_lpcomp_int_enable(uint32_t lpcomp_int_mask)
DECL|nrf_lpcomp_ref_t|typedef|} nrf_lpcomp_ref_t;
DECL|nrf_lpcomp_result_get|function|__STATIC_INLINE uint32_t nrf_lpcomp_result_get(void)
DECL|nrf_lpcomp_short_mask_t|typedef|} nrf_lpcomp_short_mask_t;
DECL|nrf_lpcomp_shorts_disable|function|__STATIC_INLINE void nrf_lpcomp_shorts_disable(uint32_t lpcomp_short_mask)
DECL|nrf_lpcomp_shorts_enable|function|__STATIC_INLINE void nrf_lpcomp_shorts_enable(uint32_t lpcomp_short_mask)
DECL|nrf_lpcomp_task_address_get|function|__STATIC_INLINE uint32_t * nrf_lpcomp_task_address_get(nrf_lpcomp_task_t lpcomp_task)
DECL|nrf_lpcomp_task_trigger|function|__STATIC_INLINE void nrf_lpcomp_task_trigger(nrf_lpcomp_task_t lpcomp_task)
DECL|nrf_lpcomp_task_t|typedef|} nrf_lpcomp_task_t; /*lint -restore*/
DECL|reference|member|nrf_lpcomp_ref_t reference; /**< LPCOMP reference. */
