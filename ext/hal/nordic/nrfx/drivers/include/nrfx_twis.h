DECL|NRFX_TWIS0_INST_IDX|enumerator|NRFX_TWIS0_INST_IDX,
DECL|NRFX_TWIS1_INST_IDX|enumerator|NRFX_TWIS1_INST_IDX,
DECL|NRFX_TWIS_DEFAULT_CONFIG|macro|NRFX_TWIS_DEFAULT_CONFIG
DECL|NRFX_TWIS_ENABLED_COUNT|enumerator|NRFX_TWIS_ENABLED_COUNT
DECL|NRFX_TWIS_ERROR_DATA_NACK|enumerator|NRFX_TWIS_ERROR_DATA_NACK = NRF_TWIS_ERROR_DATA_NACK, /**< NACK sent after receiving a data byte. */
DECL|NRFX_TWIS_ERROR_OVERFLOW|enumerator|NRFX_TWIS_ERROR_OVERFLOW = NRF_TWIS_ERROR_OVERFLOW, /**< RX buffer overflow detected, and prevented. */
DECL|NRFX_TWIS_ERROR_OVERREAD|enumerator|NRFX_TWIS_ERROR_OVERREAD = NRF_TWIS_ERROR_OVERREAD, /**< TX buffer over-read detected, and prevented. */
DECL|NRFX_TWIS_ERROR_UNEXPECTED_EVENT|enumerator|NRFX_TWIS_ERROR_UNEXPECTED_EVENT = 1 << 8 /**< Unexpected event detected by state machine. */
DECL|NRFX_TWIS_EVT_GENERAL_ERROR|enumerator|NRFX_TWIS_EVT_GENERAL_ERROR ///< Error that happens not inside WRITE or READ transaction.
DECL|NRFX_TWIS_EVT_READ_DONE|enumerator|NRFX_TWIS_EVT_READ_DONE, ///< Read request has finished - free any data.
DECL|NRFX_TWIS_EVT_READ_ERROR|enumerator|NRFX_TWIS_EVT_READ_ERROR, ///< Read request finished with error.
DECL|NRFX_TWIS_EVT_READ_REQ|enumerator|NRFX_TWIS_EVT_READ_REQ, ///< Read request detected.
DECL|NRFX_TWIS_EVT_WRITE_DONE|enumerator|NRFX_TWIS_EVT_WRITE_DONE, ///< Write request has finished - process data.
DECL|NRFX_TWIS_EVT_WRITE_ERROR|enumerator|NRFX_TWIS_EVT_WRITE_ERROR, ///< Write request finished with error.
DECL|NRFX_TWIS_EVT_WRITE_REQ|enumerator|NRFX_TWIS_EVT_WRITE_REQ, ///< Write request detected.
DECL|NRFX_TWIS_H__|macro|NRFX_TWIS_H__
DECL|NRFX_TWIS_INSTANCE|macro|NRFX_TWIS_INSTANCE
DECL|addr|member|uint32_t addr[2]; //!< Set addresses that this slave should respond. Set 0 to disable.
DECL|buf_req|member|bool buf_req; ///< Flag for @ref NRFX_TWIS_EVT_READ_REQ and @ref NRFX_TWIS_EVT_WRITE_REQ.
DECL|data|member|} data;
DECL|drv_inst_idx|member|uint8_t drv_inst_idx; ///< Driver instance index.
DECL|error|member|uint32_t error; ///< Data for @ref NRFX_TWIS_EVT_GENERAL_ERROR.
DECL|interrupt_priority|member|uint8_t interrupt_priority; //!< The priority of interrupt for the module to set.
DECL|nrfx_twis_config_t|typedef|} nrfx_twis_config_t;
DECL|nrfx_twis_error_t|typedef|} nrfx_twis_error_t;
DECL|nrfx_twis_event_handler_t|typedef|typedef void (*nrfx_twis_event_handler_t)(nrfx_twis_evt_t const * p_event);
DECL|nrfx_twis_evt_type_t|typedef|} nrfx_twis_evt_type_t;
DECL|nrfx_twis_evt_t|typedef|} nrfx_twis_evt_t;
DECL|nrfx_twis_rx_amount|function|__STATIC_INLINE size_t nrfx_twis_rx_amount(nrfx_twis_t const * p_instance)
DECL|nrfx_twis_tx_amount|function|__STATIC_INLINE size_t nrfx_twis_tx_amount(nrfx_twis_t const * p_instance)
DECL|nrfx_twis_t|typedef|} nrfx_twis_t;
DECL|p_reg|member|NRF_TWIS_Type * p_reg; ///< Pointer to a structure with TWIS registers.
DECL|rx_amount|member|uint32_t rx_amount; ///< Data for @ref NRFX_TWIS_EVT_WRITE_DONE.
DECL|scl_pull|member|nrf_gpio_pin_pull_t scl_pull; //!< SCL pin pull.
DECL|scl|member|uint32_t scl; //!< SCL pin number.
DECL|sda_pull|member|nrf_gpio_pin_pull_t sda_pull; //!< SDA pin pull.
DECL|sda|member|uint32_t sda; //!< SDA pin number.
DECL|tx_amount|member|uint32_t tx_amount; ///< Data for @ref NRFX_TWIS_EVT_READ_DONE.
DECL|type|member|nrfx_twis_evt_type_t type; ///< Event type.
