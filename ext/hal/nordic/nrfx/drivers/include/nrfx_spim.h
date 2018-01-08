DECL|NRFX_SPIM0_INST_IDX|enumerator|NRFX_SPIM0_INST_IDX,
DECL|NRFX_SPIM1_INST_IDX|enumerator|NRFX_SPIM1_INST_IDX,
DECL|NRFX_SPIM2_INST_IDX|enumerator|NRFX_SPIM2_INST_IDX,
DECL|NRFX_SPIM3_INST_IDX|enumerator|NRFX_SPIM3_INST_IDX,
DECL|NRFX_SPIM_DEFAULT_CONFIG|macro|NRFX_SPIM_DEFAULT_CONFIG
DECL|NRFX_SPIM_DEFAULT_EXTENDED_CONFIG|macro|NRFX_SPIM_DEFAULT_EXTENDED_CONFIG
DECL|NRFX_SPIM_DEFAULT_EXTENDED_CONFIG|macro|NRFX_SPIM_DEFAULT_EXTENDED_CONFIG
DECL|NRFX_SPIM_ENABLED_COUNT|enumerator|NRFX_SPIM_ENABLED_COUNT
DECL|NRFX_SPIM_EVENT_DONE|enumerator|NRFX_SPIM_EVENT_DONE, ///< Transfer done.
DECL|NRFX_SPIM_FLAG_HOLD_XFER|macro|NRFX_SPIM_FLAG_HOLD_XFER
DECL|NRFX_SPIM_FLAG_NO_XFER_EVT_HANDLER|macro|NRFX_SPIM_FLAG_NO_XFER_EVT_HANDLER
DECL|NRFX_SPIM_FLAG_REPEATED_XFER|macro|NRFX_SPIM_FLAG_REPEATED_XFER
DECL|NRFX_SPIM_FLAG_RX_POSTINC|macro|NRFX_SPIM_FLAG_RX_POSTINC
DECL|NRFX_SPIM_FLAG_TX_POSTINC|macro|NRFX_SPIM_FLAG_TX_POSTINC
DECL|NRFX_SPIM_H__|macro|NRFX_SPIM_H__
DECL|NRFX_SPIM_INSTANCE|macro|NRFX_SPIM_INSTANCE
DECL|NRFX_SPIM_PIN_NOT_USED|macro|NRFX_SPIM_PIN_NOT_USED
DECL|NRFX_SPIM_SINGLE_XFER|macro|NRFX_SPIM_SINGLE_XFER
DECL|NRFX_SPIM_XFER_RX|macro|NRFX_SPIM_XFER_RX
DECL|NRFX_SPIM_XFER_TRX|macro|NRFX_SPIM_XFER_TRX
DECL|NRFX_SPIM_XFER_TX|macro|NRFX_SPIM_XFER_TX
DECL|bit_order|member|nrf_spim_bit_order_t bit_order; ///< SPI bit order.
DECL|dcx_pin|member|uint8_t dcx_pin; ///< D/CX pin number (optional).
DECL|drv_inst_idx|member|uint8_t drv_inst_idx; ///< Driver instance index.
DECL|frequency|member|nrf_spim_frequency_t frequency; ///< SPI frequency.
DECL|irq_priority|member|uint8_t irq_priority; ///< Interrupt priority.
DECL|miso_pin|member|uint8_t miso_pin; ///< MISO pin number (optional).
DECL|mode|member|nrf_spim_mode_t mode; ///< SPI mode.
DECL|mosi_pin|member|uint8_t mosi_pin; ///< MOSI pin number (optional).
DECL|nrfx_spim_config_t|typedef|} nrfx_spim_config_t;
DECL|nrfx_spim_evt_handler_t|typedef|typedef void (* nrfx_spim_evt_handler_t)(nrfx_spim_evt_t const * p_event,
DECL|nrfx_spim_evt_type_t|typedef|} nrfx_spim_evt_type_t;
DECL|nrfx_spim_evt_t|typedef|} nrfx_spim_evt_t;
DECL|nrfx_spim_t|typedef|} nrfx_spim_t;
DECL|nrfx_spim_xfer_desc_t|typedef|} nrfx_spim_xfer_desc_t;
DECL|orc|member|uint8_t orc; ///< Over-run character.
DECL|p_reg|member|NRF_SPIM_Type * p_reg; ///< Pointer to a structure with SPIM registers.
DECL|p_rx_buffer|member|uint8_t * p_rx_buffer; ///< Pointer to RX buffer.
DECL|p_tx_buffer|member|uint8_t const * p_tx_buffer; ///< Pointer to TX buffer.
DECL|rx_delay|member|uint8_t rx_delay; ///< Sample delay for input serial data on MISO.
DECL|rx_length|member|size_t rx_length; ///< RX buffer length.
DECL|sck_pin|member|uint8_t sck_pin; ///< SCK pin number.
DECL|ss_active_high|member|bool ss_active_high; ///< Polarity of the Slave Select pin during transmission.
DECL|ss_duration|member|uint8_t ss_duration; ///< Slave Select duration before and after transmission.
DECL|ss_pin|member|uint8_t ss_pin; ///< Slave Select pin number (optional).
DECL|tx_length|member|size_t tx_length; ///< TX buffer length.
DECL|type|member|nrfx_spim_evt_type_t type; ///< Event type.
DECL|use_hw_ss|member|bool use_hw_ss; ///< Indication to use software or hardware controlled Slave Select pin.
DECL|xfer_desc|member|nrfx_spim_xfer_desc_t xfer_desc; ///< Transfer details.
