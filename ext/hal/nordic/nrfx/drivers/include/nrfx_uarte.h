DECL|NRFX_UARTE0_INST_IDX|enumerator|NRFX_UARTE0_INST_IDX,
DECL|NRFX_UARTE1_INST_IDX|enumerator|NRFX_UARTE1_INST_IDX,
DECL|NRFX_UARTE_DEFAULT_CONFIG|macro|NRFX_UARTE_DEFAULT_CONFIG
DECL|NRFX_UARTE_ENABLED_COUNT|enumerator|NRFX_UARTE_ENABLED_COUNT
DECL|NRFX_UARTE_EVT_ERROR|enumerator|NRFX_UARTE_EVT_ERROR, ///< Error reported by UART peripheral.
DECL|NRFX_UARTE_EVT_RX_DONE|enumerator|NRFX_UARTE_EVT_RX_DONE, ///< Requested RX transfer completed.
DECL|NRFX_UARTE_EVT_TX_DONE|enumerator|NRFX_UARTE_EVT_TX_DONE, ///< Requested TX transfer completed.
DECL|NRFX_UARTE_H__|macro|NRFX_UARTE_H__
DECL|NRFX_UARTE_INSTANCE|macro|NRFX_UARTE_INSTANCE
DECL|baudrate|member|nrf_uarte_baudrate_t baudrate; ///< Baudrate.
DECL|bytes|member|uint8_t bytes; ///< Number of bytes transfered.
DECL|data|member|} data;
DECL|drv_inst_idx|member|uint8_t drv_inst_idx; ///< Driver instance index.
DECL|error_mask|member|uint32_t error_mask; ///< Mask of error flags that generated the event.
DECL|error|member|nrfx_uarte_error_evt_t error; ///< Data provided for error event.
DECL|hwfc|member|nrf_uarte_hwfc_t hwfc; ///< Flow control configuration.
DECL|interrupt_priority|member|uint8_t interrupt_priority; ///< Interrupt priority.
DECL|nrfx_uarte_config_t|typedef|} nrfx_uarte_config_t;
DECL|nrfx_uarte_error_evt_t|typedef|} nrfx_uarte_error_evt_t;
DECL|nrfx_uarte_event_address_get|function|__STATIC_INLINE uint32_t nrfx_uarte_event_address_get(nrfx_uarte_t const * p_instance, nrf_uarte_event_t event)
DECL|nrfx_uarte_event_handler_t|typedef|typedef void (*nrfx_uarte_event_handler_t)(nrfx_uarte_event_t const * p_event,
DECL|nrfx_uarte_event_t|typedef|} nrfx_uarte_event_t;
DECL|nrfx_uarte_evt_type_t|typedef|} nrfx_uarte_evt_type_t;
DECL|nrfx_uarte_task_address_get|function|__STATIC_INLINE uint32_t nrfx_uarte_task_address_get(nrfx_uarte_t const * p_instance, nrf_uarte_task_t task)
DECL|nrfx_uarte_t|typedef|} nrfx_uarte_t;
DECL|nrfx_uarte_xfer_evt_t|typedef|} nrfx_uarte_xfer_evt_t;
DECL|p_context|member|void * p_context; ///< Context passed to interrupt handler.
DECL|p_data|member|uint8_t * p_data; ///< Pointer to memory used for transfer.
DECL|p_reg|member|NRF_UARTE_Type * p_reg; ///< Pointer to a structure with UARTE registers.
DECL|parity|member|nrf_uarte_parity_t parity; ///< Parity configuration.
DECL|pselcts|member|uint32_t pselcts; ///< CTS pin number.
DECL|pselrts|member|uint32_t pselrts; ///< RTS pin number.
DECL|pselrxd|member|uint32_t pselrxd; ///< RXD pin number.
DECL|pseltxd|member|uint32_t pseltxd; ///< TXD pin number.
DECL|rxtx|member|nrfx_uarte_xfer_evt_t rxtx; ///< Data provided for transfer completion events.
DECL|rxtx|member|nrfx_uarte_xfer_evt_t rxtx; ///< Transfer details includes number of bytes transferred.
DECL|type|member|nrfx_uarte_evt_type_t type; ///< Event type.
