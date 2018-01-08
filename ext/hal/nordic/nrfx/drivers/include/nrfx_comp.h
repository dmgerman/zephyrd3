DECL|NRFX_COMP_CONFIG_TH|macro|NRFX_COMP_CONFIG_TH
DECL|NRFX_COMP_DEFAULT_CONFIG|macro|NRFX_COMP_DEFAULT_CONFIG
DECL|NRFX_COMP_DEFAULT_CONFIG|macro|NRFX_COMP_DEFAULT_CONFIG
DECL|NRFX_COMP_EVT_EN_CROSS_MASK|enumerator|NRFX_COMP_EVT_EN_CROSS_MASK = COMP_INTENSET_CROSS_Msk, /*!< CROSS event (generated after VIN+ == VIN-). */
DECL|NRFX_COMP_EVT_EN_DOWN_MASK|enumerator|NRFX_COMP_EVT_EN_DOWN_MASK = COMP_INTENSET_DOWN_Msk, /*!< DOWN event (generated when VIN+ crosses VIN- while decreasing). */
DECL|NRFX_COMP_EVT_EN_READY_MASK|enumerator|NRFX_COMP_EVT_EN_READY_MASK = COMP_INTENSET_READY_Msk /*!< READY event (generated when the module is ready). */
DECL|NRFX_COMP_EVT_EN_UP_MASK|enumerator|NRFX_COMP_EVT_EN_UP_MASK = COMP_INTENSET_UP_Msk, /*!< UP event (generated when VIN+ crosses VIN- while increasing). */
DECL|NRFX_COMP_H__|macro|NRFX_COMP_H__
DECL|NRFX_COMP_SHORT_STOP_AFTER_CROSS_EVT|enumerator|NRFX_COMP_SHORT_STOP_AFTER_CROSS_EVT = COMP_SHORTS_CROSS_STOP_Msk, /*!< Shortcut between the CROSS event and the STOP task. */
DECL|NRFX_COMP_SHORT_STOP_AFTER_DOWN_EVT|enumerator|NRFX_COMP_SHORT_STOP_AFTER_DOWN_EVT = COMP_SHORTS_DOWN_STOP_Msk /*!< Shortcut between the DOWN event and the STOP task. */
DECL|NRFX_COMP_SHORT_STOP_AFTER_UP_EVT|enumerator|NRFX_COMP_SHORT_STOP_AFTER_UP_EVT = COMP_SHORTS_UP_STOP_Msk, /*!< Shortcut between the UP event and the STOP task. */
DECL|NRFX_VOLTAGE_THRESHOLD_TO_INT|macro|NRFX_VOLTAGE_THRESHOLD_TO_INT
DECL|ext_ref|member|nrf_comp_ext_ref_t ext_ref; /**< External analog reference selection. */
DECL|hyst|member|nrf_comp_hyst_t hyst; /**< Comparator hysteresis.*/
DECL|input|member|nrf_comp_input_t input; /**< Input to be monitored. */
DECL|interrupt_priority|member|uint8_t interrupt_priority; /**< Interrupt priority. */
DECL|isource|member|nrf_isource_t isource; /**< Current source selected on analog input. */
DECL|main_mode|member|nrf_comp_main_mode_t main_mode; /**< Main operation mode. */
DECL|nrfx_comp_config_t|typedef|} nrfx_comp_config_t;
DECL|nrfx_comp_event_address_get|function|__STATIC_INLINE uint32_t nrfx_comp_event_address_get(nrf_comp_event_t event)
DECL|nrfx_comp_event_handler_t|typedef|typedef void (* nrfx_comp_event_handler_t)(nrf_comp_event_t event);
DECL|nrfx_comp_evt_en_mask_t|typedef|} nrfx_comp_evt_en_mask_t;
DECL|nrfx_comp_short_mask_t|typedef|} nrfx_comp_short_mask_t;
DECL|nrfx_comp_task_address_get|function|__STATIC_INLINE uint32_t nrfx_comp_task_address_get(nrf_comp_task_t task)
DECL|reference|member|nrf_comp_ref_t reference; /**< Reference selection. */
DECL|speed_mode|member|nrf_comp_sp_mode_t speed_mode; /**< Speed and power mode. */
DECL|threshold|member|nrf_comp_th_t threshold; /**< Structure holding THDOWN and THUP values needed by the COMP_TH register. */
