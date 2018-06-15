DECL|NRF_CCM_DATARATE_125K|enumerator|NRF_CCM_DATARATE_125K = CCM_MODE_DATARATE_125Kbps, ///< 125 Kbps.
DECL|NRF_CCM_DATARATE_1M|enumerator|NRF_CCM_DATARATE_1M = CCM_MODE_DATARATE_1Mbit, ///< 1 Mbps.
DECL|NRF_CCM_DATARATE_2M|enumerator|NRF_CCM_DATARATE_2M = CCM_MODE_DATARATE_2Mbit, ///< 2 Mbps.
DECL|NRF_CCM_DATARATE_500K|enumerator|NRF_CCM_DATARATE_500K = CCM_MODE_DATARATE_500Kbps, ///< 500 Kbps.
DECL|NRF_CCM_EVENT_ENDCRYPT|enumerator|NRF_CCM_EVENT_ENDCRYPT = offsetof(NRF_CCM_Type, EVENTS_ENDCRYPT), ///< Encrypt/decrypt complete.
DECL|NRF_CCM_EVENT_ENDKSGEN|enumerator|NRF_CCM_EVENT_ENDKSGEN = offsetof(NRF_CCM_Type, EVENTS_ENDKSGEN), ///< Keystream generation complete.
DECL|NRF_CCM_EVENT_ERROR|enumerator|NRF_CCM_EVENT_ERROR = offsetof(NRF_CCM_Type, EVENTS_ERROR), ///< CCM error event.
DECL|NRF_CCM_H__|macro|NRF_CCM_H__
DECL|NRF_CCM_INT_ENDCRYPT_MASK|enumerator|NRF_CCM_INT_ENDCRYPT_MASK = CCM_INTENSET_ENDCRYPT_Msk, ///< Interrupt on ENDCRYPT event.
DECL|NRF_CCM_INT_ENDKSGEN_MASK|enumerator|NRF_CCM_INT_ENDKSGEN_MASK = CCM_INTENSET_ENDKSGEN_Msk, ///< Interrupt on ENDKSGEN event.
DECL|NRF_CCM_INT_ERROR_MASK|enumerator|NRF_CCM_INT_ERROR_MASK = CCM_INTENSET_ERROR_Msk, ///< Interrupt on ERROR event.
DECL|NRF_CCM_LENGTH_DEFAULT|enumerator|NRF_CCM_LENGTH_DEFAULT = CCM_MODE_LENGTH_Default, ///< Default length.
DECL|NRF_CCM_LENGTH_EXTENDED|enumerator|NRF_CCM_LENGTH_EXTENDED = CCM_MODE_LENGTH_Extended, ///< Extended length.
DECL|NRF_CCM_MODE_DECRYPTION|enumerator|NRF_CCM_MODE_DECRYPTION = CCM_MODE_MODE_Decryption, ///< Decryption mode.
DECL|NRF_CCM_MODE_ENCRYPTION|enumerator|NRF_CCM_MODE_ENCRYPTION = CCM_MODE_MODE_Encryption, ///< Encryption mode.
DECL|NRF_CCM_TASK_CRYPT|enumerator|NRF_CCM_TASK_CRYPT = offsetof(NRF_CCM_Type, TASKS_CRYPT), ///< Start encryption/decryption.
DECL|NRF_CCM_TASK_KSGEN|enumerator|NRF_CCM_TASK_KSGEN = offsetof(NRF_CCM_Type, TASKS_KSGEN), ///< Start generation of key-stream.
DECL|NRF_CCM_TASK_RATEOVERRIDE|enumerator|NRF_CCM_TASK_RATEOVERRIDE = offsetof(NRF_CCM_Type, TASKS_RATEOVERRIDE), ///< Override DATARATE setting in MODE register.
DECL|NRF_CCM_TASK_STOP|enumerator|NRF_CCM_TASK_STOP = offsetof(NRF_CCM_Type, TASKS_STOP), ///< Stop encryption/decryption.
DECL|datarate|member|nrf_ccm_datarate_t datarate;
DECL|length|member|nrf_ccm_length_t length;
DECL|mode|member|nrf_ccm_mode_t mode;
DECL|nrf_ccm_cnfptr_get|function|__STATIC_INLINE uint32_t * nrf_ccm_cnfptr_get(NRF_CCM_Type const * p_reg)
DECL|nrf_ccm_cnfptr_set|function|__STATIC_INLINE void nrf_ccm_cnfptr_set(NRF_CCM_Type * p_reg, uint32_t const * p_data)
DECL|nrf_ccm_config_t|typedef|} nrf_ccm_config_t;
DECL|nrf_ccm_configure|function|__STATIC_INLINE void nrf_ccm_configure(NRF_CCM_Type * p_reg, nrf_ccm_config_t const * p_config)
DECL|nrf_ccm_datarate_override_set|function|__STATIC_INLINE void nrf_ccm_datarate_override_set(NRF_CCM_Type * p_reg, nrf_ccm_datarate_t datarate)
DECL|nrf_ccm_datarate_t|typedef|} nrf_ccm_datarate_t;
DECL|nrf_ccm_disable|function|__STATIC_INLINE void nrf_ccm_disable(NRF_CCM_Type * p_reg)
DECL|nrf_ccm_enable|function|__STATIC_INLINE void nrf_ccm_enable(NRF_CCM_Type * p_reg)
DECL|nrf_ccm_event_address_get|function|__STATIC_INLINE uint32_t nrf_ccm_event_address_get(NRF_CCM_Type const * p_reg, nrf_ccm_event_t event)
DECL|nrf_ccm_event_check|function|__STATIC_INLINE bool nrf_ccm_event_check(NRF_CCM_Type const * p_reg, nrf_ccm_event_t event)
DECL|nrf_ccm_event_clear|function|__STATIC_INLINE void nrf_ccm_event_clear(NRF_CCM_Type * p_reg, nrf_ccm_event_t event)
DECL|nrf_ccm_event_t|typedef|} nrf_ccm_event_t;
DECL|nrf_ccm_inptr_get|function|__STATIC_INLINE uint32_t * nrf_ccm_inptr_get(NRF_CCM_Type const * p_reg)
DECL|nrf_ccm_inptr_set|function|__STATIC_INLINE void nrf_ccm_inptr_set(NRF_CCM_Type * p_reg, uint32_t const * p_data)
DECL|nrf_ccm_int_disable|function|__STATIC_INLINE void nrf_ccm_int_disable(NRF_CCM_Type * p_reg, uint32_t mask)
DECL|nrf_ccm_int_enable_check|function|__STATIC_INLINE bool nrf_ccm_int_enable_check(NRF_CCM_Type const * p_reg, nrf_ccm_int_mask_t ccm_int)
DECL|nrf_ccm_int_enable|function|__STATIC_INLINE void nrf_ccm_int_enable(NRF_CCM_Type * p_reg, uint32_t mask)
DECL|nrf_ccm_int_mask_t|typedef|} nrf_ccm_int_mask_t;
DECL|nrf_ccm_length_t|typedef|} nrf_ccm_length_t;
DECL|nrf_ccm_maxpacketsize_set|function|__STATIC_INLINE void nrf_ccm_maxpacketsize_set(NRF_CCM_Type * p_reg, uint8_t size)
DECL|nrf_ccm_micstatus_get|function|__STATIC_INLINE bool nrf_ccm_micstatus_get(NRF_CCM_Type const * p_reg)
DECL|nrf_ccm_mode_t|typedef|} nrf_ccm_mode_t;
DECL|nrf_ccm_outptr_get|function|__STATIC_INLINE uint32_t * nrf_ccm_outptr_get(NRF_CCM_Type const * p_reg)
DECL|nrf_ccm_outptr_set|function|__STATIC_INLINE void nrf_ccm_outptr_set(NRF_CCM_Type * p_reg, uint32_t const * p_data)
DECL|nrf_ccm_scratchptr_set|function|__STATIC_INLINE void nrf_ccm_scratchptr_set(NRF_CCM_Type * p_reg, uint32_t const * p_area)
DECL|nrf_ccm_stratchptr_get|function|__STATIC_INLINE uint32_t * nrf_ccm_stratchptr_get(NRF_CCM_Type const * p_reg)
DECL|nrf_ccm_task_address_get|function|__STATIC_INLINE uint32_t nrf_ccm_task_address_get(NRF_CCM_Type const * p_reg, nrf_ccm_task_t task)
DECL|nrf_ccm_task_trigger|function|__STATIC_INLINE void nrf_ccm_task_trigger(NRF_CCM_Type * p_reg, nrf_ccm_task_t task)
DECL|nrf_ccm_task_t|typedef|} nrf_ccm_task_t;
