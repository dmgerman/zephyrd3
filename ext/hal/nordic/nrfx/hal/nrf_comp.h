DECL|NRF_COMP_EVENT_CROSS|enumerator|NRF_COMP_EVENT_CROSS = offsetof(NRF_COMP_Type, EVENTS_CROSS) /*!< Input voltage crossed the threshold in any direction. */
DECL|NRF_COMP_EVENT_DOWN|enumerator|NRF_COMP_EVENT_DOWN = offsetof(NRF_COMP_Type, EVENTS_DOWN), /*!< Input voltage crossed the threshold going down. */
DECL|NRF_COMP_EVENT_READY|enumerator|NRF_COMP_EVENT_READY = offsetof(NRF_COMP_Type, EVENTS_READY), /*!< COMP is ready and output is valid. */
DECL|NRF_COMP_EVENT_UP|enumerator|NRF_COMP_EVENT_UP = offsetof(NRF_COMP_Type, EVENTS_UP), /*!< Input voltage crossed the threshold going up. */
DECL|NRF_COMP_EXT_REF_0|enumerator|NRF_COMP_EXT_REF_0 = COMP_EXTREFSEL_EXTREFSEL_AnalogReference0, /*!< Use AIN0 as external analog reference. */
DECL|NRF_COMP_EXT_REF_1|enumerator|NRF_COMP_EXT_REF_1 = COMP_EXTREFSEL_EXTREFSEL_AnalogReference1 /*!< Use AIN1 as external analog reference. */
DECL|NRF_COMP_HYST_50mV|enumerator|NRF_COMP_HYST_50mV = COMP_HYST_HYST_Hyst50mV /*!< Comparator hysteresis enabled. */
DECL|NRF_COMP_HYST_NoHyst|enumerator|NRF_COMP_HYST_NoHyst = COMP_HYST_HYST_NoHyst, /*!< Comparator hysteresis disabled. */
DECL|NRF_COMP_H_|macro|NRF_COMP_H_
DECL|NRF_COMP_INPUT_0|enumerator|NRF_COMP_INPUT_0 = COMP_PSEL_PSEL_AnalogInput0, /*!< AIN0 selected as analog input. */
DECL|NRF_COMP_INPUT_1|enumerator|NRF_COMP_INPUT_1 = COMP_PSEL_PSEL_AnalogInput1, /*!< AIN1 selected as analog input. */
DECL|NRF_COMP_INPUT_2|enumerator|NRF_COMP_INPUT_2 = COMP_PSEL_PSEL_AnalogInput2, /*!< AIN2 selected as analog input. */
DECL|NRF_COMP_INPUT_3|enumerator|NRF_COMP_INPUT_3 = COMP_PSEL_PSEL_AnalogInput3, /*!< AIN3 selected as analog input. */
DECL|NRF_COMP_INPUT_4|enumerator|NRF_COMP_INPUT_4 = COMP_PSEL_PSEL_AnalogInput4, /*!< AIN4 selected as analog input. */
DECL|NRF_COMP_INPUT_5|enumerator|NRF_COMP_INPUT_5 = COMP_PSEL_PSEL_AnalogInput5, /*!< AIN5 selected as analog input. */
DECL|NRF_COMP_INPUT_6|enumerator|NRF_COMP_INPUT_6 = COMP_PSEL_PSEL_AnalogInput6, /*!< AIN6 selected as analog input. */
DECL|NRF_COMP_INPUT_7|enumerator|NRF_COMP_INPUT_7 = COMP_PSEL_PSEL_AnalogInput7, /*!< AIN7 selected as analog input. */
DECL|NRF_COMP_ISOURCE_Ien10uA|enumerator|NRF_COMP_ISOURCE_Ien10uA = COMP_ISOURCE_ISOURCE_Ien10mA /*!< Current source enabled (+/- 10 uA). */
DECL|NRF_COMP_ISOURCE_Ien2uA5|enumerator|NRF_COMP_ISOURCE_Ien2uA5 = COMP_ISOURCE_ISOURCE_Ien2mA5, /*!< Current source enabled (+/- 2.5 uA). */
DECL|NRF_COMP_ISOURCE_Ien5uA|enumerator|NRF_COMP_ISOURCE_Ien5uA = COMP_ISOURCE_ISOURCE_Ien5mA, /*!< Current source enabled (+/- 5 uA). */
DECL|NRF_COMP_ISOURCE_Off|enumerator|NRF_COMP_ISOURCE_Off = COMP_ISOURCE_ISOURCE_Off, /*!< Current source disabled. */
DECL|NRF_COMP_MAIN_MODE_Diff|enumerator|NRF_COMP_MAIN_MODE_Diff = COMP_MODE_MAIN_Diff /*!< Differential mode. */
DECL|NRF_COMP_MAIN_MODE_SE|enumerator|NRF_COMP_MAIN_MODE_SE = COMP_MODE_MAIN_SE, /*!< Single ended mode. */
DECL|NRF_COMP_REF_ARef|enumerator|NRF_COMP_REF_ARef = COMP_REFSEL_REFSEL_ARef /*!< VREF = AREF (VDD >= VREF >= AREFMIN). */
DECL|NRF_COMP_REF_Int1V2|enumerator|NRF_COMP_REF_Int1V2 = COMP_REFSEL_REFSEL_Int1V2, /*!< VREF = internal 1.2 V reference (VDD >= 1.7 V). */
DECL|NRF_COMP_REF_Int1V8|enumerator|NRF_COMP_REF_Int1V8 = COMP_REFSEL_REFSEL_Int1V8, /*!< VREF = internal 1.8 V reference (VDD >= VREF + 0.2 V). */
DECL|NRF_COMP_REF_Int2V4|enumerator|NRF_COMP_REF_Int2V4 = COMP_REFSEL_REFSEL_Int2V4, /*!< VREF = internal 2.4 V reference (VDD >= VREF + 0.2 V). */
DECL|NRF_COMP_REF_VDD|enumerator|NRF_COMP_REF_VDD = COMP_REFSEL_REFSEL_VDD, /*!< VREF = VDD. */
DECL|NRF_COMP_SP_MODE_High|enumerator|NRF_COMP_SP_MODE_High = COMP_MODE_SP_High /*!< High speed mode. */
DECL|NRF_COMP_SP_MODE_Low|enumerator|NRF_COMP_SP_MODE_Low = COMP_MODE_SP_Low, /*!< Low power mode. */
DECL|NRF_COMP_SP_MODE_Normal|enumerator|NRF_COMP_SP_MODE_Normal = COMP_MODE_SP_Normal, /*!< Normal mode. */
DECL|NRF_COMP_TASK_SAMPLE|enumerator|NRF_COMP_TASK_SAMPLE = offsetof(NRF_COMP_Type, TASKS_SAMPLE) /*!< Sample comparator value. */
DECL|NRF_COMP_TASK_START|enumerator|NRF_COMP_TASK_START = offsetof(NRF_COMP_Type, TASKS_START), /*!< COMP start sampling task. */
DECL|NRF_COMP_TASK_STOP|enumerator|NRF_COMP_TASK_STOP = offsetof(NRF_COMP_Type, TASKS_STOP), /*!< COMP stop sampling task. */
DECL|NRF_COMP_VDD_DIV2|enumerator|NRF_COMP_VDD_DIV2 = COMP_PSEL_PSEL_VddDiv2, /*!< VDD/2 selected as analog input. */
DECL|external|member|nrf_comp_ext_ref_t external; /*!< COMP external analog reference selection. */
DECL|nrf_comp_disable|function|__STATIC_INLINE void nrf_comp_disable(void)
DECL|nrf_comp_enable_check|function|__STATIC_INLINE bool nrf_comp_enable_check(void)
DECL|nrf_comp_enable|function|__STATIC_INLINE void nrf_comp_enable(void)
DECL|nrf_comp_event_address_get|function|__STATIC_INLINE uint32_t * nrf_comp_event_address_get(nrf_comp_event_t comp_event)
DECL|nrf_comp_event_check|function|__STATIC_INLINE bool nrf_comp_event_check(nrf_comp_event_t comp_event)
DECL|nrf_comp_event_clear|function|__STATIC_INLINE void nrf_comp_event_clear(nrf_comp_event_t comp_event)
DECL|nrf_comp_event_t|typedef|}nrf_comp_event_t;
DECL|nrf_comp_ext_ref_set|function|__STATIC_INLINE void nrf_comp_ext_ref_set(nrf_comp_ext_ref_t ext_ref)
DECL|nrf_comp_ext_ref_t|typedef|}nrf_comp_ext_ref_t;
DECL|nrf_comp_hyst_t|typedef|}nrf_comp_hyst_t;
DECL|nrf_comp_hysteresis_set|function|__STATIC_INLINE void nrf_comp_hysteresis_set(nrf_comp_hyst_t hyst)
DECL|nrf_comp_input_select|function|__STATIC_INLINE void nrf_comp_input_select(nrf_comp_input_t input)
DECL|nrf_comp_input_t|typedef|}nrf_comp_input_t;
DECL|nrf_comp_int_disable|function|__STATIC_INLINE void nrf_comp_int_disable(uint32_t comp_int_mask)
DECL|nrf_comp_int_enable_check|function|__STATIC_INLINE bool nrf_comp_int_enable_check(uint32_t comp_int_mask)
DECL|nrf_comp_int_enable|function|__STATIC_INLINE void nrf_comp_int_enable(uint32_t comp_int_mask)
DECL|nrf_comp_isource_set|function|__STATIC_INLINE void nrf_comp_isource_set(nrf_isource_t isource)
DECL|nrf_comp_main_mode_set|function|__STATIC_INLINE void nrf_comp_main_mode_set(nrf_comp_main_mode_t main_mode)
DECL|nrf_comp_main_mode_t|typedef|}nrf_comp_main_mode_t;
DECL|nrf_comp_ref_conf_t|typedef|}nrf_comp_ref_conf_t;
DECL|nrf_comp_ref_set|function|__STATIC_INLINE void nrf_comp_ref_set(nrf_comp_ref_t reference)
DECL|nrf_comp_ref_t|typedef|}nrf_comp_ref_t;
DECL|nrf_comp_result_get|function|__STATIC_INLINE uint32_t nrf_comp_result_get(void)
DECL|nrf_comp_shorts_disable|function|__STATIC_INLINE void nrf_comp_shorts_disable(uint32_t comp_short_mask)
DECL|nrf_comp_shorts_enable|function|__STATIC_INLINE void nrf_comp_shorts_enable(uint32_t comp_short_mask)
DECL|nrf_comp_sp_mode_t|typedef|}nrf_comp_sp_mode_t;
DECL|nrf_comp_speed_mode_set|function|__STATIC_INLINE void nrf_comp_speed_mode_set(nrf_comp_sp_mode_t speed_mode)
DECL|nrf_comp_task_address_get|function|__STATIC_INLINE uint32_t * nrf_comp_task_address_get(nrf_comp_task_t comp_task)
DECL|nrf_comp_task_trigger|function|__STATIC_INLINE void nrf_comp_task_trigger(nrf_comp_task_t comp_task)
DECL|nrf_comp_task_t|typedef|}nrf_comp_task_t;
DECL|nrf_comp_th_set|function|__STATIC_INLINE void nrf_comp_th_set(nrf_comp_th_t threshold)
DECL|nrf_comp_th_t|typedef|}nrf_comp_th_t;
DECL|nrf_isource_t|typedef|}nrf_isource_t;
DECL|reference|member|nrf_comp_ref_t reference; /*!< COMP reference selection. */
DECL|th_down|member|uint8_t th_down; /*!< THDOWN value. */
DECL|th_up|member|uint8_t th_up; /*!< THUP value. */
