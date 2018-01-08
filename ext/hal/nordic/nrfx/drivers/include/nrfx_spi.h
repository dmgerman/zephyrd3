DECL|NRFX_SPI0_INST_IDX|enumerator|NRFX_SPI0_INST_IDX,
DECL|NRFX_SPI1_INST_IDX|enumerator|NRFX_SPI1_INST_IDX,
DECL|NRFX_SPI2_INST_IDX|enumerator|NRFX_SPI2_INST_IDX,
DECL|NRFX_SPI_BIT_ORDER_LSB_FIRST|enumerator|NRFX_SPI_BIT_ORDER_LSB_FIRST = NRF_SPI_BIT_ORDER_LSB_FIRST ///< Least significant bit shifted out first.
DECL|NRFX_SPI_BIT_ORDER_MSB_FIRST|enumerator|NRFX_SPI_BIT_ORDER_MSB_FIRST = NRF_SPI_BIT_ORDER_MSB_FIRST, ///< Most significant bit shifted out first.
DECL|NRFX_SPI_DEFAULT_CONFIG|macro|NRFX_SPI_DEFAULT_CONFIG
DECL|NRFX_SPI_ENABLED_COUNT|enumerator|NRFX_SPI_ENABLED_COUNT
DECL|NRFX_SPI_EVENT_DONE|enumerator|NRFX_SPI_EVENT_DONE, ///< Transfer done.
DECL|NRFX_SPI_FREQ_125K|enumerator|NRFX_SPI_FREQ_125K = NRF_SPI_FREQ_125K, ///< 125 kbps.
DECL|NRFX_SPI_FREQ_1M|enumerator|NRFX_SPI_FREQ_1M = NRF_SPI_FREQ_1M, ///< 1 Mbps.
DECL|NRFX_SPI_FREQ_250K|enumerator|NRFX_SPI_FREQ_250K = NRF_SPI_FREQ_250K, ///< 250 kbps.
DECL|NRFX_SPI_FREQ_2M|enumerator|NRFX_SPI_FREQ_2M = NRF_SPI_FREQ_2M, ///< 2 Mbps.
DECL|NRFX_SPI_FREQ_4M|enumerator|NRFX_SPI_FREQ_4M = NRF_SPI_FREQ_4M, ///< 4 Mbps.
DECL|NRFX_SPI_FREQ_500K|enumerator|NRFX_SPI_FREQ_500K = NRF_SPI_FREQ_500K, ///< 500 kbps.
DECL|NRFX_SPI_FREQ_8M|enumerator|NRFX_SPI_FREQ_8M = NRF_SPI_FREQ_8M ///< 8 Mbps.
DECL|NRFX_SPI_H__|macro|NRFX_SPI_H__
DECL|NRFX_SPI_INSTANCE|macro|NRFX_SPI_INSTANCE
DECL|NRFX_SPI_MODE_0|enumerator|NRFX_SPI_MODE_0 = NRF_SPI_MODE_0, ///< SCK active high, sample on leading edge of clock.
DECL|NRFX_SPI_MODE_1|enumerator|NRFX_SPI_MODE_1 = NRF_SPI_MODE_1, ///< SCK active high, sample on trailing edge of clock.
DECL|NRFX_SPI_MODE_2|enumerator|NRFX_SPI_MODE_2 = NRF_SPI_MODE_2, ///< SCK active low, sample on leading edge of clock.
DECL|NRFX_SPI_MODE_3|enumerator|NRFX_SPI_MODE_3 = NRF_SPI_MODE_3 ///< SCK active low, sample on trailing edge of clock.
DECL|NRFX_SPI_PIN_NOT_USED|macro|NRFX_SPI_PIN_NOT_USED
DECL|NRFX_SPI_SINGLE_XFER|macro|NRFX_SPI_SINGLE_XFER
DECL|NRFX_SPI_XFER_RX|macro|NRFX_SPI_XFER_RX
DECL|NRFX_SPI_XFER_TRX|macro|NRFX_SPI_XFER_TRX
DECL|NRFX_SPI_XFER_TX|macro|NRFX_SPI_XFER_TX
DECL|bit_order|member|nrfx_spi_bit_order_t bit_order; ///< SPI bit order.
DECL|drv_inst_idx|member|uint8_t drv_inst_idx; ///< Driver instance index.
DECL|frequency|member|nrfx_spi_frequency_t frequency; ///< SPI frequency.
DECL|irq_priority|member|uint8_t irq_priority; ///< Interrupt priority.
DECL|miso_pin|member|uint8_t miso_pin; ///< MISO pin number (optional).
DECL|mode|member|nrfx_spi_mode_t mode; ///< SPI mode.
DECL|mosi_pin|member|uint8_t mosi_pin; ///< MOSI pin number (optional).
DECL|nrfx_spi_bit_order_t|typedef|} nrfx_spi_bit_order_t;
DECL|nrfx_spi_config_t|typedef|} nrfx_spi_config_t;
DECL|nrfx_spi_evt_handler_t|typedef|typedef void (* nrfx_spi_evt_handler_t)(nrfx_spi_evt_t const * p_event,
DECL|nrfx_spi_evt_type_t|typedef|} nrfx_spi_evt_type_t;
DECL|nrfx_spi_evt_t|typedef|} nrfx_spi_evt_t;
DECL|nrfx_spi_frequency_t|typedef|} nrfx_spi_frequency_t;
DECL|nrfx_spi_mode_t|typedef|} nrfx_spi_mode_t;
DECL|nrfx_spi_t|typedef|} nrfx_spi_t;
DECL|nrfx_spi_xfer_desc_t|typedef|}nrfx_spi_xfer_desc_t;
DECL|orc|member|uint8_t orc; ///< Over-run character.
DECL|p_reg|member|NRF_SPI_Type * p_reg; ///< Pointer to a structure with SPI registers.
DECL|p_rx_buffer|member|uint8_t * p_rx_buffer; ///< Pointer to RX buffer.
DECL|p_tx_buffer|member|uint8_t const * p_tx_buffer; ///< Pointer to TX buffer.
DECL|rx_length|member|size_t rx_length; ///< RX buffer length.
DECL|sck_pin|member|uint8_t sck_pin; ///< SCK pin number.
DECL|ss_pin|member|uint8_t ss_pin; ///< Slave Select pin number (optional).
DECL|tx_length|member|size_t tx_length; ///< TX buffer length.
DECL|type|member|nrfx_spi_evt_type_t type; ///< Event type.
DECL|xfer_desc|member|nrfx_spi_xfer_desc_t xfer_desc; ///< Transfer details.
