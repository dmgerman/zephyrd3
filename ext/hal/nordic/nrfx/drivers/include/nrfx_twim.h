DECL|NRFX_TWIM0_INST_IDX|enumerator|NRFX_TWIM0_INST_IDX,
DECL|NRFX_TWIM1_INST_IDX|enumerator|NRFX_TWIM1_INST_IDX,
DECL|NRFX_TWIM_DEFAULT_CONFIG|macro|NRFX_TWIM_DEFAULT_CONFIG
DECL|NRFX_TWIM_ENABLED_COUNT|enumerator|NRFX_TWIM_ENABLED_COUNT
DECL|NRFX_TWIM_EVT_ADDRESS_NACK|enumerator|NRFX_TWIM_EVT_ADDRESS_NACK, ///< Error event: NACK received after sending the address.
DECL|NRFX_TWIM_EVT_DATA_NACK|enumerator|NRFX_TWIM_EVT_DATA_NACK ///< Error event: NACK received after sending a data byte.
DECL|NRFX_TWIM_EVT_DONE|enumerator|NRFX_TWIM_EVT_DONE, ///< Transfer completed event.
DECL|NRFX_TWIM_FLAG_HOLD_XFER|macro|NRFX_TWIM_FLAG_HOLD_XFER
DECL|NRFX_TWIM_FLAG_NO_XFER_EVT_HANDLER|macro|NRFX_TWIM_FLAG_NO_XFER_EVT_HANDLER
DECL|NRFX_TWIM_FLAG_REPEATED_XFER|macro|NRFX_TWIM_FLAG_REPEATED_XFER
DECL|NRFX_TWIM_FLAG_RX_POSTINC|macro|NRFX_TWIM_FLAG_RX_POSTINC
DECL|NRFX_TWIM_FLAG_TX_NO_STOP|macro|NRFX_TWIM_FLAG_TX_NO_STOP
DECL|NRFX_TWIM_FLAG_TX_POSTINC|macro|NRFX_TWIM_FLAG_TX_POSTINC
DECL|NRFX_TWIM_H__|macro|NRFX_TWIM_H__
DECL|NRFX_TWIM_INSTANCE|macro|NRFX_TWIM_INSTANCE
DECL|NRFX_TWIM_XFER_DESC_RX|macro|NRFX_TWIM_XFER_DESC_RX
DECL|NRFX_TWIM_XFER_DESC_TXRX|macro|NRFX_TWIM_XFER_DESC_TXRX
DECL|NRFX_TWIM_XFER_DESC_TXTX|macro|NRFX_TWIM_XFER_DESC_TXTX
DECL|NRFX_TWIM_XFER_DESC_TX|macro|NRFX_TWIM_XFER_DESC_TX
DECL|NRFX_TWIM_XFER_RX|enumerator|NRFX_TWIM_XFER_RX, ///< RX transfer.
DECL|NRFX_TWIM_XFER_TXRX|enumerator|NRFX_TWIM_XFER_TXRX, ///< TX transfer followed by RX transfer with repeated start.
DECL|NRFX_TWIM_XFER_TXTX|enumerator|NRFX_TWIM_XFER_TXTX ///< TX transfer followed by TX transfer with repeated start.
DECL|NRFX_TWIM_XFER_TX|enumerator|NRFX_TWIM_XFER_TX, ///< TX transfer.
DECL|address|member|uint8_t address; ///< Slave address.
DECL|drv_inst_idx|member|uint8_t drv_inst_idx; ///< Driver instance index.
DECL|frequency|member|nrf_twim_frequency_t frequency; ///< TWIM frequency.
DECL|hold_bus_uninit|member|bool hold_bus_uninit; ///< Hold pull up state on gpio pins after uninit.
DECL|interrupt_priority|member|uint8_t interrupt_priority; ///< Interrupt priority.
DECL|nrfx_twim_config_t|typedef|} nrfx_twim_config_t;
DECL|nrfx_twim_evt_handler_t|typedef|typedef void (* nrfx_twim_evt_handler_t)(nrfx_twim_evt_t const * p_event,
DECL|nrfx_twim_evt_type_t|typedef|} nrfx_twim_evt_type_t;
DECL|nrfx_twim_evt_t|typedef|} nrfx_twim_evt_t;
DECL|nrfx_twim_t|typedef|} nrfx_twim_t;
DECL|nrfx_twim_xfer_desc_t|typedef|} nrfx_twim_xfer_desc_t;
DECL|nrfx_twim_xfer_type_t|typedef|} nrfx_twim_xfer_type_t;
DECL|p_primary_buf|member|uint8_t * p_primary_buf; ///< Pointer to transferred data.
DECL|p_secondary_buf|member|uint8_t * p_secondary_buf; ///< Pointer to transferred data.
DECL|p_twim|member|NRF_TWIM_Type * p_twim; ///< Pointer to a structure with TWIM registers.
DECL|primary_length|member|size_t primary_length; ///< Number of bytes transferred.
DECL|scl|member|uint32_t scl; ///< SCL pin number.
DECL|sda|member|uint32_t sda; ///< SDA pin number.
DECL|secondary_length|member|size_t secondary_length; ///< Number of bytes transferred.
DECL|type|member|nrfx_twim_evt_type_t type; ///< Event type.
DECL|type|member|nrfx_twim_xfer_type_t type; ///< Type of transfer.
DECL|xfer_desc|member|nrfx_twim_xfer_desc_t xfer_desc; ///< Transfer details.
