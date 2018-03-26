DECL|NRFX_SPIS0_INST_IDX|enumerator|NRFX_SPIS0_INST_IDX,
DECL|NRFX_SPIS1_INST_IDX|enumerator|NRFX_SPIS1_INST_IDX,
DECL|NRFX_SPIS2_INST_IDX|enumerator|NRFX_SPIS2_INST_IDX,
DECL|NRFX_SPIS_BUFFERS_SET_DONE|enumerator|NRFX_SPIS_BUFFERS_SET_DONE, //!< Memory buffer set event. Memory buffers have been set successfully to the SPI slave device, and SPI transaction can be done.
DECL|NRFX_SPIS_DEFAULT_CONFIG|macro|NRFX_SPIS_DEFAULT_CONFIG
DECL|NRFX_SPIS_DEFAULT_CSN_PULLUP|macro|NRFX_SPIS_DEFAULT_CSN_PULLUP
DECL|NRFX_SPIS_DEFAULT_MISO_DRIVE|macro|NRFX_SPIS_DEFAULT_MISO_DRIVE
DECL|NRFX_SPIS_ENABLED_COUNT|enumerator|NRFX_SPIS_ENABLED_COUNT
DECL|NRFX_SPIS_EVT_TYPE_MAX|enumerator|NRFX_SPIS_EVT_TYPE_MAX //!< Enumeration upper bound.
DECL|NRFX_SPIS_H__|macro|NRFX_SPIS_H__
DECL|NRFX_SPIS_INSTANCE|macro|NRFX_SPIS_INSTANCE
DECL|NRFX_SPIS_PIN_NOT_USED|macro|NRFX_SPIS_PIN_NOT_USED
DECL|NRFX_SPIS_XFER_DONE|enumerator|NRFX_SPIS_XFER_DONE, //!< SPI transaction event. SPI transaction has been completed.
DECL|bit_order|member|nrf_spis_bit_order_t bit_order; //!< SPI transaction bit order.
DECL|csn_pin|member|uint32_t csn_pin; //!< SPI CSN pin.
DECL|csn_pullup|member|nrf_gpio_pin_pull_t csn_pullup; //!< CSN pin pull-up configuration.
DECL|def|member|uint8_t def; //!< Character clocked out in case of an ignored transaction.
DECL|drv_inst_idx|member|uint8_t drv_inst_idx; //!< Driver instance index.
DECL|evt_type|member|nrfx_spis_evt_type_t evt_type; //!< Type of the event.
DECL|irq_priority|member|uint8_t irq_priority; //!< Interrupt priority.
DECL|miso_drive|member|nrf_gpio_pin_drive_t miso_drive; //!< MISO pin drive configuration.
DECL|miso_pin|member|uint32_t miso_pin; //!< SPI MISO pin (optional).
DECL|mode|member|nrf_spis_mode_t mode; //!< SPI mode.
DECL|mosi_pin|member|uint32_t mosi_pin; //!< SPI MOSI pin (optional).
DECL|nrfx_spis_config_t|typedef|} nrfx_spis_config_t;
DECL|nrfx_spis_event_handler_t|typedef|typedef void (*nrfx_spis_event_handler_t)(nrfx_spis_evt_t const * p_event,
DECL|nrfx_spis_evt_type_t|typedef|} nrfx_spis_evt_type_t;
DECL|nrfx_spis_evt_t|typedef|} nrfx_spis_evt_t;
DECL|nrfx_spis_t|typedef|} nrfx_spis_t;
DECL|orc|member|uint8_t orc; //!< Character clocked out after an over-read of the transmit buffer.
DECL|p_reg|member|NRF_SPIS_Type * p_reg; //!< Pointer to a structure with SPIS registers.
DECL|rx_amount|member|size_t rx_amount; //!< Number of bytes received in the last transaction. This parameter is only valid for @ref NRFX_SPIS_XFER_DONE events.
DECL|sck_pin|member|uint32_t sck_pin; //!< SPI SCK pin.
DECL|tx_amount|member|size_t tx_amount; //!< Number of bytes transmitted in the last transaction. This parameter is only valid for @ref NRFX_SPIS_XFER_DONE events.
