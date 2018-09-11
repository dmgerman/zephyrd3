DECL|NRF_QDEC_DBFEN_DISABLE|enumerator|NRF_QDEC_DBFEN_DISABLE = QDEC_DBFEN_DBFEN_Disabled, /**< Mask for disabling the debounce filter. */
DECL|NRF_QDEC_DBFEN_ENABLE|enumerator|NRF_QDEC_DBFEN_ENABLE = QDEC_DBFEN_DBFEN_Enabled /**< Mask for enabling the debounce filter. */
DECL|NRF_QDEC_DISABLE|enumerator|NRF_QDEC_DISABLE = QDEC_ENABLE_ENABLE_Disabled, /**< Mask for disabling the QDEC periperal. When disabled, the QDEC decoder pins are not active. */
DECL|NRF_QDEC_ENABLE|enumerator|NRF_QDEC_ENABLE = QDEC_ENABLE_ENABLE_Enabled /**< Mask for enabling the QDEC periperal. When enabled, the QDEC pins are active. */
DECL|NRF_QDEC_EVENT_ACCOF|enumerator|NRF_QDEC_EVENT_ACCOF = offsetof(NRF_QDEC_Type, EVENTS_ACCOF) /**< Event generated for every accumulator overflow. */
DECL|NRF_QDEC_EVENT_REPORTRDY|enumerator|NRF_QDEC_EVENT_REPORTRDY = offsetof(NRF_QDEC_Type, EVENTS_REPORTRDY), /**< Event generated for every new report. */
DECL|NRF_QDEC_EVENT_SAMPLERDY|enumerator|NRF_QDEC_EVENT_SAMPLERDY = offsetof(NRF_QDEC_Type, EVENTS_SAMPLERDY), /**< Event generated for every new sample. */
DECL|NRF_QDEC_H__|macro|NRF_QDEC_H__
DECL|NRF_QDEC_INT_ACCOF_MASK|enumerator|NRF_QDEC_INT_ACCOF_MASK = QDEC_INTENSET_ACCOF_Msk /**< Mask for enabling or disabling an interrupt on ACCOF event. */
DECL|NRF_QDEC_INT_REPORTRDY_MASK|enumerator|NRF_QDEC_INT_REPORTRDY_MASK = QDEC_INTENSET_REPORTRDY_Msk, /**< Mask for enabling or disabling an interrupt on REPORTRDY event. */
DECL|NRF_QDEC_INT_SAMPLERDY_MASK|enumerator|NRF_QDEC_INT_SAMPLERDY_MASK = QDEC_INTENSET_SAMPLERDY_Msk, /**< Mask for enabling or disabling an interrupt on SAMPLERDY event. */
DECL|NRF_QDEC_LED_NOT_CONNECTED|macro|NRF_QDEC_LED_NOT_CONNECTED
DECL|NRF_QDEC_LEPOL_ACTIVE_HIGH|enumerator|NRF_QDEC_LEPOL_ACTIVE_HIGH = QDEC_LEDPOL_LEDPOL_ActiveHigh /**< QDEC LED active on output pin high. */
DECL|NRF_QDEC_LEPOL_ACTIVE_LOW|enumerator|NRF_QDEC_LEPOL_ACTIVE_LOW = QDEC_LEDPOL_LEDPOL_ActiveLow, /**< QDEC LED active on output pin low. */
DECL|NRF_QDEC_REPORTPER_10|enumerator|NRF_QDEC_REPORTPER_10 = QDEC_REPORTPER_REPORTPER_10Smpl, /**< QDEC report period 10 samples. */
DECL|NRF_QDEC_REPORTPER_120|enumerator|NRF_QDEC_REPORTPER_120 = QDEC_REPORTPER_REPORTPER_120Smpl, /**< QDEC report period 120 samples. */
DECL|NRF_QDEC_REPORTPER_160|enumerator|NRF_QDEC_REPORTPER_160 = QDEC_REPORTPER_REPORTPER_160Smpl, /**< QDEC report period 160 samples. */
DECL|NRF_QDEC_REPORTPER_200|enumerator|NRF_QDEC_REPORTPER_200 = QDEC_REPORTPER_REPORTPER_200Smpl, /**< QDEC report period 200 samples. */
DECL|NRF_QDEC_REPORTPER_240|enumerator|NRF_QDEC_REPORTPER_240 = QDEC_REPORTPER_REPORTPER_240Smpl, /**< QDEC report period 240 samples. */
DECL|NRF_QDEC_REPORTPER_280|enumerator|NRF_QDEC_REPORTPER_280 = QDEC_REPORTPER_REPORTPER_280Smpl, /**< QDEC report period 280 samples. */
DECL|NRF_QDEC_REPORTPER_40|enumerator|NRF_QDEC_REPORTPER_40 = QDEC_REPORTPER_REPORTPER_40Smpl, /**< QDEC report period 40 samples. */
DECL|NRF_QDEC_REPORTPER_80|enumerator|NRF_QDEC_REPORTPER_80 = QDEC_REPORTPER_REPORTPER_80Smpl, /**< QDEC report period 80 samples. */
DECL|NRF_QDEC_REPORTPER_DISABLED|enumerator|NRF_QDEC_REPORTPER_DISABLED /**< QDEC reporting disabled. */
DECL|NRF_QDEC_SAMPLEPER_1024us|enumerator|NRF_QDEC_SAMPLEPER_1024us = QDEC_SAMPLEPER_SAMPLEPER_1024us, /**< QDEC sampling period 1024 microseconds. */
DECL|NRF_QDEC_SAMPLEPER_128us|enumerator|NRF_QDEC_SAMPLEPER_128us = QDEC_SAMPLEPER_SAMPLEPER_128us, /**< QDEC sampling period 128 microseconds. */
DECL|NRF_QDEC_SAMPLEPER_16384us|enumerator|NRF_QDEC_SAMPLEPER_16384us = QDEC_SAMPLEPER_SAMPLEPER_16384us /**< QDEC sampling period 16384 microseconds. */
DECL|NRF_QDEC_SAMPLEPER_2048us|enumerator|NRF_QDEC_SAMPLEPER_2048us = QDEC_SAMPLEPER_SAMPLEPER_2048us, /**< QDEC sampling period 2048 microseconds. */
DECL|NRF_QDEC_SAMPLEPER_256us|enumerator|NRF_QDEC_SAMPLEPER_256us = QDEC_SAMPLEPER_SAMPLEPER_256us, /**< QDEC sampling period 256 microseconds. */
DECL|NRF_QDEC_SAMPLEPER_4096us|enumerator|NRF_QDEC_SAMPLEPER_4096us = QDEC_SAMPLEPER_SAMPLEPER_4096us, /**< QDEC sampling period 4096 microseconds. */
DECL|NRF_QDEC_SAMPLEPER_512us|enumerator|NRF_QDEC_SAMPLEPER_512us = QDEC_SAMPLEPER_SAMPLEPER_512us, /**< QDEC sampling period 512 microseconds. */
DECL|NRF_QDEC_SAMPLEPER_8192us|enumerator|NRF_QDEC_SAMPLEPER_8192us = QDEC_SAMPLEPER_SAMPLEPER_8192us, /**< QDEC sampling period 8192 microseconds. */
DECL|NRF_QDEC_SHORT_REPORTRDY_READCLRACC_MASK|enumerator|NRF_QDEC_SHORT_REPORTRDY_READCLRACC_MASK = QDEC_SHORTS_REPORTRDY_READCLRACC_Msk, /**< Shortcut between REPORTRDY event and READCLRACC task. */
DECL|NRF_QDEC_SHORT_SAMPLERDY_STOP_MASK|enumerator|NRF_QDEC_SHORT_SAMPLERDY_STOP_MASK = QDEC_SHORTS_SAMPLERDY_STOP_Msk /**< Shortcut between SAMPLERDY event and STOP task. */
DECL|NRF_QDEC_TASK_READCLRACC|enumerator|NRF_QDEC_TASK_READCLRACC = offsetof(NRF_QDEC_Type, TASKS_READCLRACC) /**< Reading and clearing ACC and ACCDBL registers. */
DECL|NRF_QDEC_TASK_START|enumerator|NRF_QDEC_TASK_START = offsetof(NRF_QDEC_Type, TASKS_START), /**< Starting the quadrature decoder. */
DECL|NRF_QDEC_TASK_STOP|enumerator|NRF_QDEC_TASK_STOP = offsetof(NRF_QDEC_Type, TASKS_STOP), /**< Stopping the quadrature decoder. */
DECL|nrf_qdec_acc_get|function|__STATIC_INLINE int32_t nrf_qdec_acc_get(void)
DECL|nrf_qdec_accdbl_get|function|__STATIC_INLINE uint32_t nrf_qdec_accdbl_get(void)
DECL|nrf_qdec_accdblread_get|function|__STATIC_INLINE uint32_t nrf_qdec_accdblread_get(void)
DECL|nrf_qdec_accread_get|function|__STATIC_INLINE int32_t nrf_qdec_accread_get(void)
DECL|nrf_qdec_dbfen_disable|function|__STATIC_INLINE void nrf_qdec_dbfen_disable(void)
DECL|nrf_qdec_dbfen_enable|function|__STATIC_INLINE void nrf_qdec_dbfen_enable(void)
DECL|nrf_qdec_dbfen_get|function|__STATIC_INLINE uint32_t nrf_qdec_dbfen_get(void)
DECL|nrf_qdec_dbfen_t|typedef|} nrf_qdec_dbfen_t;
DECL|nrf_qdec_disable|function|__STATIC_INLINE void nrf_qdec_disable(void)
DECL|nrf_qdec_enable_get|function|__STATIC_INLINE uint32_t nrf_qdec_enable_get(void)
DECL|nrf_qdec_enable_t|typedef|} nrf_qdec_enable_t;
DECL|nrf_qdec_enable|function|__STATIC_INLINE void nrf_qdec_enable(void)
DECL|nrf_qdec_event_address_get|function|__STATIC_INLINE uint32_t * nrf_qdec_event_address_get(nrf_qdec_event_t qdec_event)
DECL|nrf_qdec_event_check|function|__STATIC_INLINE uint32_t nrf_qdec_event_check(nrf_qdec_event_t qdec_event)
DECL|nrf_qdec_event_clear|function|__STATIC_INLINE void nrf_qdec_event_clear(nrf_qdec_event_t qdec_event)
DECL|nrf_qdec_event_t|typedef|} nrf_qdec_event_t; /*lint -restore */
DECL|nrf_qdec_int_disable|function|__STATIC_INLINE void nrf_qdec_int_disable(uint32_t qdec_int_mask)
DECL|nrf_qdec_int_enable_check|function|__STATIC_INLINE uint32_t nrf_qdec_int_enable_check(nrf_qdec_int_mask_t qdec_int_mask)
DECL|nrf_qdec_int_enable|function|__STATIC_INLINE void nrf_qdec_int_enable(uint32_t qdec_int_mask)
DECL|nrf_qdec_int_mask_t|typedef|} nrf_qdec_int_mask_t;
DECL|nrf_qdec_ledpol_get|function|__STATIC_INLINE uint32_t nrf_qdec_ledpol_get(void)
DECL|nrf_qdec_ledpol_set|function|__STATIC_INLINE void nrf_qdec_ledpol_set(nrf_qdec_ledpol_t pol)
DECL|nrf_qdec_ledpol_t|typedef|} nrf_qdec_ledpol_t;
DECL|nrf_qdec_ledpre_get|function|__STATIC_INLINE uint32_t nrf_qdec_ledpre_get(void)
DECL|nrf_qdec_ledpre_set|function|__STATIC_INLINE void nrf_qdec_ledpre_set(uint32_t time_us)
DECL|nrf_qdec_pio_assign|function|__STATIC_INLINE void nrf_qdec_pio_assign( uint32_t psela, uint32_t pselb, uint32_t pselled)
DECL|nrf_qdec_reportper_reg_get|function|__STATIC_INLINE uint32_t nrf_qdec_reportper_reg_get(void)
DECL|nrf_qdec_reportper_set|function|__STATIC_INLINE void nrf_qdec_reportper_set(nrf_qdec_reportper_t reportper)
DECL|nrf_qdec_reportper_to_value|function|__STATIC_INLINE uint32_t nrf_qdec_reportper_to_value(uint32_t reportper)
DECL|nrf_qdec_reportper_t|typedef|} nrf_qdec_reportper_t;
DECL|nrf_qdec_sample_get|function|__STATIC_INLINE int32_t nrf_qdec_sample_get(void)
DECL|nrf_qdec_sampleper_reg_get|function|__STATIC_INLINE int32_t nrf_qdec_sampleper_reg_get(void)
DECL|nrf_qdec_sampleper_set|function|__STATIC_INLINE void nrf_qdec_sampleper_set(nrf_qdec_sampleper_t sample_per)
DECL|nrf_qdec_sampleper_to_value|function|__STATIC_INLINE uint32_t nrf_qdec_sampleper_to_value(uint32_t sampleper)
DECL|nrf_qdec_sampleper_t|typedef|} nrf_qdec_sampleper_t;
DECL|nrf_qdec_short_mask_t|typedef|} nrf_qdec_short_mask_t;
DECL|nrf_qdec_shorts_disable|function|__STATIC_INLINE void nrf_qdec_shorts_disable(uint32_t qdec_short_mask)
DECL|nrf_qdec_shorts_enable|function|__STATIC_INLINE void nrf_qdec_shorts_enable(uint32_t qdec_short_mask)
DECL|nrf_qdec_task_address_get|function|__STATIC_INLINE uint32_t * nrf_qdec_task_address_get(nrf_qdec_task_t qdec_task)
DECL|nrf_qdec_task_trigger|function|__STATIC_INLINE void nrf_qdec_task_trigger(nrf_qdec_task_t qdec_task)
DECL|nrf_qdec_task_t|typedef|} nrf_qdec_task_t;
