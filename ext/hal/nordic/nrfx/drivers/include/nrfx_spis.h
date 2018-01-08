DECL|NRFX_SPIS0_INST_IDX|enumerator|NRFX_SPIS0_INST_IDX,
DECL|NRFX_SPIS1_INST_IDX|enumerator|NRFX_SPIS1_INST_IDX,
DECL|NRFX_SPIS2_INST_IDX|enumerator|NRFX_SPIS2_INST_IDX,
DECL|NRFX_SPIS_BIT_ORDER_LSB_FIRST|enumerator|NRFX_SPIS_BIT_ORDER_LSB_FIRST = NRF_SPIS_BIT_ORDER_LSB_FIRST, /**< Least significant bit shifted out first. */
DECL|NRFX_SPIS_BIT_ORDER_MSB_FIRST|enumerator|NRFX_SPIS_BIT_ORDER_MSB_FIRST = NRF_SPIS_BIT_ORDER_MSB_FIRST /**< Most significant bit shifted out first. */
DECL|NRFX_SPIS_BUFFERS_SET_DONE|enumerator|NRFX_SPIS_BUFFERS_SET_DONE, /**< Memory buffer set event. Memory buffers have been set successfully to the SPI slave device, and SPI transactions can be done. */
DECL|NRFX_SPIS_DEFAULT_CONFIG|macro|NRFX_SPIS_DEFAULT_CONFIG
DECL|NRFX_SPIS_DEFAULT_CSN_PULLUP|macro|NRFX_SPIS_DEFAULT_CSN_PULLUP
DECL|NRFX_SPIS_DEFAULT_MISO_DRIVE|macro|NRFX_SPIS_DEFAULT_MISO_DRIVE
DECL|NRFX_SPIS_ENABLED_COUNT|enumerator|NRFX_SPIS_ENABLED_COUNT
DECL|NRFX_SPIS_EVT_TYPE_MAX|enumerator|NRFX_SPIS_EVT_TYPE_MAX /**< Enumeration upper bound. */
DECL|NRFX_SPIS_H__|macro|NRFX_SPIS_H__
DECL|NRFX_SPIS_INSTANCE|macro|NRFX_SPIS_INSTANCE
DECL|NRFX_SPIS_MODE_0|enumerator|NRFX_SPIS_MODE_0 = NRF_SPIS_MODE_0, /**< (CPOL = 0, CPHA = 0). */
DECL|NRFX_SPIS_MODE_1|enumerator|NRFX_SPIS_MODE_1 = NRF_SPIS_MODE_1, /**< (CPOL = 0, CPHA = 1). */
DECL|NRFX_SPIS_MODE_2|enumerator|NRFX_SPIS_MODE_2 = NRF_SPIS_MODE_2, /**< (CPOL = 1, CPHA = 0). */
DECL|NRFX_SPIS_MODE_3|enumerator|NRFX_SPIS_MODE_3 = NRF_SPIS_MODE_3 /**< (CPOL = 1, CPHA = 1). */
DECL|NRFX_SPIS_PIN_NOT_USED|macro|NRFX_SPIS_PIN_NOT_USED
DECL|NRFX_SPIS_XFER_DONE|enumerator|NRFX_SPIS_XFER_DONE, /**< SPI transaction event. SPI transaction has been completed. */
DECL|bit_order|member|nrfx_spis_endian_t bit_order; //!< SPI transaction bit order.
DECL|csn_pin|member|uint32_t csn_pin; //!< SPI CSN pin.
DECL|csn_pullup|member|nrf_gpio_pin_pull_t csn_pullup; //!< CSN pin pull-up configuration.
DECL|def|member|uint8_t def; //!< Character clocked out in case of an ignored transaction.
DECL|drv_inst_idx|member|uint8_t drv_inst_idx; //!< Driver instance index.
DECL|evt_type|member|nrfx_spis_event_type_t evt_type; //!< Type of event.
DECL|irq_priority|member|uint8_t irq_priority; //!< Interrupt priority.
DECL|miso_drive|member|nrf_gpio_pin_drive_t miso_drive; //!< MISO pin drive configuration.
DECL|miso_pin|member|uint32_t miso_pin; //!< SPI MISO pin (optional).
DECL|mode|member|nrfx_spis_mode_t mode; //!< SPI mode.
DECL|mosi_pin|member|uint32_t mosi_pin; //!< SPI MOSI pin (optional).
DECL|nrfx_spis_config_t|typedef|} nrfx_spis_config_t;
DECL|nrfx_spis_endian_t|typedef|} nrfx_spis_endian_t;
DECL|nrfx_spis_event_handler_t|typedef|typedef void (*nrfx_spis_event_handler_t)(nrfx_spis_event_t event);
DECL|nrfx_spis_event_type_t|typedef|} nrfx_spis_event_type_t;
DECL|nrfx_spis_event_t|typedef|} nrfx_spis_event_t;
DECL|nrfx_spis_mode_t|typedef|} nrfx_spis_mode_t;
DECL|nrfx_spis_t|typedef|} nrfx_spis_t;
DECL|orc|member|uint8_t orc; //!< Character clocked out after an over-read of the transmit buffer.
DECL|p_reg|member|NRF_SPIS_Type * p_reg; //!< Pointer to a structure with SPIS registers.
DECL|rx_amount|member|size_t rx_amount; //!< Number of bytes received in the last transaction. This parameter is only valid for @ref NRFX_SPIS_XFER_DONE events.
DECL|sck_pin|member|uint32_t sck_pin; //!< SPI SCK pin.
DECL|tx_amount|member|size_t tx_amount; //!< Number of bytes transmitted in the last transaction. This parameter is only valid for @ref NRFX_SPIS_XFER_DONE events.
