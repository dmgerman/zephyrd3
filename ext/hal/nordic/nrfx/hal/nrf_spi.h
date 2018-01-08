DECL|NRF_SPI_ALL_INTS_MASK|enumerator|NRF_SPI_ALL_INTS_MASK = SPI_INTENSET_READY_Msk ///< All SPI interrupts.
DECL|NRF_SPI_BIT_ORDER_LSB_FIRST|enumerator|NRF_SPI_BIT_ORDER_LSB_FIRST = SPI_CONFIG_ORDER_LsbFirst ///< Least significant bit shifted out first.
DECL|NRF_SPI_BIT_ORDER_MSB_FIRST|enumerator|NRF_SPI_BIT_ORDER_MSB_FIRST = SPI_CONFIG_ORDER_MsbFirst, ///< Most significant bit shifted out first.
DECL|NRF_SPI_EVENT_READY|enumerator|NRF_SPI_EVENT_READY = offsetof(NRF_SPI_Type, EVENTS_READY) ///< TXD byte sent and RXD byte received.
DECL|NRF_SPI_FREQ_125K|enumerator|NRF_SPI_FREQ_125K = SPI_FREQUENCY_FREQUENCY_K125, ///< 125 kbps.
DECL|NRF_SPI_FREQ_1M|enumerator|NRF_SPI_FREQ_1M = SPI_FREQUENCY_FREQUENCY_M1, ///< 1 Mbps.
DECL|NRF_SPI_FREQ_250K|enumerator|NRF_SPI_FREQ_250K = SPI_FREQUENCY_FREQUENCY_K250, ///< 250 kbps.
DECL|NRF_SPI_FREQ_2M|enumerator|NRF_SPI_FREQ_2M = SPI_FREQUENCY_FREQUENCY_M2, ///< 2 Mbps.
DECL|NRF_SPI_FREQ_4M|enumerator|NRF_SPI_FREQ_4M = SPI_FREQUENCY_FREQUENCY_M4, ///< 4 Mbps.
DECL|NRF_SPI_FREQ_500K|enumerator|NRF_SPI_FREQ_500K = SPI_FREQUENCY_FREQUENCY_K500, ///< 500 kbps.
DECL|NRF_SPI_FREQ_8M|enumerator|NRF_SPI_FREQ_8M = (int)SPI_FREQUENCY_FREQUENCY_M8 ///< 8 Mbps.
DECL|NRF_SPI_H__|macro|NRF_SPI_H__
DECL|NRF_SPI_INT_READY_MASK|enumerator|NRF_SPI_INT_READY_MASK = SPI_INTENSET_READY_Msk, ///< Interrupt on READY event.
DECL|NRF_SPI_MODE_0|enumerator|NRF_SPI_MODE_0, ///< SCK active high, sample on leading edge of clock.
DECL|NRF_SPI_MODE_1|enumerator|NRF_SPI_MODE_1, ///< SCK active high, sample on trailing edge of clock.
DECL|NRF_SPI_MODE_2|enumerator|NRF_SPI_MODE_2, ///< SCK active low, sample on leading edge of clock.
DECL|NRF_SPI_MODE_3|enumerator|NRF_SPI_MODE_3 ///< SCK active low, sample on trailing edge of clock.
DECL|NRF_SPI_PIN_NOT_CONNECTED|macro|NRF_SPI_PIN_NOT_CONNECTED
DECL|nrf_spi_bit_order_t|typedef|} nrf_spi_bit_order_t;
DECL|nrf_spi_configure|function|__STATIC_INLINE void nrf_spi_configure(NRF_SPI_Type * p_reg, nrf_spi_mode_t spi_mode, nrf_spi_bit_order_t spi_bit_order)
DECL|nrf_spi_disable|function|__STATIC_INLINE void nrf_spi_disable(NRF_SPI_Type * p_reg)
DECL|nrf_spi_enable|function|__STATIC_INLINE void nrf_spi_enable(NRF_SPI_Type * p_reg)
DECL|nrf_spi_event_address_get|function|__STATIC_INLINE uint32_t * nrf_spi_event_address_get(NRF_SPI_Type * p_reg, nrf_spi_event_t spi_event)
DECL|nrf_spi_event_check|function|__STATIC_INLINE bool nrf_spi_event_check(NRF_SPI_Type * p_reg, nrf_spi_event_t spi_event)
DECL|nrf_spi_event_clear|function|__STATIC_INLINE void nrf_spi_event_clear(NRF_SPI_Type * p_reg, nrf_spi_event_t spi_event)
DECL|nrf_spi_event_t|typedef|} nrf_spi_event_t;
DECL|nrf_spi_frequency_set|function|__STATIC_INLINE void nrf_spi_frequency_set(NRF_SPI_Type * p_reg, nrf_spi_frequency_t frequency)
DECL|nrf_spi_frequency_t|typedef|} nrf_spi_frequency_t;
DECL|nrf_spi_int_disable|function|__STATIC_INLINE void nrf_spi_int_disable(NRF_SPI_Type * p_reg, uint32_t spi_int_mask)
DECL|nrf_spi_int_enable_check|function|__STATIC_INLINE bool nrf_spi_int_enable_check(NRF_SPI_Type * p_reg, nrf_spi_int_mask_t spi_int)
DECL|nrf_spi_int_enable|function|__STATIC_INLINE void nrf_spi_int_enable(NRF_SPI_Type * p_reg, uint32_t spi_int_mask)
DECL|nrf_spi_int_mask_t|typedef|} nrf_spi_int_mask_t;
DECL|nrf_spi_mode_t|typedef|} nrf_spi_mode_t;
DECL|nrf_spi_pins_set|function|__STATIC_INLINE void nrf_spi_pins_set(NRF_SPI_Type * p_reg, uint32_t sck_pin, uint32_t mosi_pin, uint32_t miso_pin)
DECL|nrf_spi_rxd_get|function|__STATIC_INLINE uint8_t nrf_spi_rxd_get(NRF_SPI_Type * p_reg)
DECL|nrf_spi_txd_set|function|__STATIC_INLINE void nrf_spi_txd_set(NRF_SPI_Type * p_reg, uint8_t data)
