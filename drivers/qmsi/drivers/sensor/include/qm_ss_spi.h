DECL|QM_SS_SPI_BMODE_0|enumerator|QM_SS_SPI_BMODE_0, /**< Clock Polarity = 0, Clock Phase = 0. */
DECL|QM_SS_SPI_BMODE_1|enumerator|QM_SS_SPI_BMODE_1, /**< Clock Polarity = 0, Clock Phase = 1. */
DECL|QM_SS_SPI_BMODE_2|enumerator|QM_SS_SPI_BMODE_2, /**< Clock Polarity = 1, Clock Phase = 0. */
DECL|QM_SS_SPI_BMODE_3|enumerator|QM_SS_SPI_BMODE_3 /**< Clock Polarity = 1, Clock Phase = 1. */
DECL|QM_SS_SPI_BUSY|enumerator|QM_SS_SPI_BUSY, /**< SPI device is busy. */
DECL|QM_SS_SPI_FRAME_SIZE_10_BIT|enumerator|QM_SS_SPI_FRAME_SIZE_10_BIT, /**< 10 bit frame. */
DECL|QM_SS_SPI_FRAME_SIZE_11_BIT|enumerator|QM_SS_SPI_FRAME_SIZE_11_BIT, /**< 11 bit frame. */
DECL|QM_SS_SPI_FRAME_SIZE_12_BIT|enumerator|QM_SS_SPI_FRAME_SIZE_12_BIT, /**< 12 bit frame. */
DECL|QM_SS_SPI_FRAME_SIZE_13_BIT|enumerator|QM_SS_SPI_FRAME_SIZE_13_BIT, /**< 13 bit frame. */
DECL|QM_SS_SPI_FRAME_SIZE_14_BIT|enumerator|QM_SS_SPI_FRAME_SIZE_14_BIT, /**< 14 bit frame. */
DECL|QM_SS_SPI_FRAME_SIZE_15_BIT|enumerator|QM_SS_SPI_FRAME_SIZE_15_BIT, /**< 15 bit frame. */
DECL|QM_SS_SPI_FRAME_SIZE_16_BIT|enumerator|QM_SS_SPI_FRAME_SIZE_16_BIT /**< 16 bit frame. */
DECL|QM_SS_SPI_FRAME_SIZE_4_BIT|enumerator|QM_SS_SPI_FRAME_SIZE_4_BIT = 3, /**< 4 bit frame. */
DECL|QM_SS_SPI_FRAME_SIZE_5_BIT|enumerator|QM_SS_SPI_FRAME_SIZE_5_BIT, /**< 5 bit frame. */
DECL|QM_SS_SPI_FRAME_SIZE_6_BIT|enumerator|QM_SS_SPI_FRAME_SIZE_6_BIT, /**< 6 bit frame. */
DECL|QM_SS_SPI_FRAME_SIZE_7_BIT|enumerator|QM_SS_SPI_FRAME_SIZE_7_BIT, /**< 7 bit frame. */
DECL|QM_SS_SPI_FRAME_SIZE_8_BIT|enumerator|QM_SS_SPI_FRAME_SIZE_8_BIT, /**< 8 bit frame. */
DECL|QM_SS_SPI_FRAME_SIZE_9_BIT|enumerator|QM_SS_SPI_FRAME_SIZE_9_BIT, /**< 9 bit frame. */
DECL|QM_SS_SPI_IDLE|enumerator|QM_SS_SPI_IDLE, /**< SPI device is not in use. */
DECL|QM_SS_SPI_RX_OVERFLOW|enumerator|QM_SS_SPI_RX_OVERFLOW /**< RX transfer has overflown. */
DECL|QM_SS_SPI_SS_0|enumerator|QM_SS_SPI_SS_0 = BIT(0), /**< Slave select 0. */
DECL|QM_SS_SPI_SS_1|enumerator|QM_SS_SPI_SS_1 = BIT(1), /**< Slave select 1. */
DECL|QM_SS_SPI_SS_2|enumerator|QM_SS_SPI_SS_2 = BIT(2), /**< Slave select 2. */
DECL|QM_SS_SPI_SS_3|enumerator|QM_SS_SPI_SS_3 = BIT(3), /**< Slave select 3. */
DECL|QM_SS_SPI_SS_NONE|enumerator|QM_SS_SPI_SS_NONE = 0, /**< No slave select. */
DECL|QM_SS_SPI_TMOD_EEPROM_READ|enumerator|QM_SS_SPI_TMOD_EEPROM_READ
DECL|QM_SS_SPI_TMOD_RX|enumerator|QM_SS_SPI_TMOD_RX,
DECL|QM_SS_SPI_TMOD_TX_RX|enumerator|QM_SS_SPI_TMOD_TX_RX,
DECL|QM_SS_SPI_TMOD_TX|enumerator|QM_SS_SPI_TMOD_TX,
DECL|__QM_SS_SPI_H__|macro|__QM_SS_SPI_H__
DECL|bus_mode|member|qm_ss_spi_bmode_t bus_mode; /**< Bus mode (enum). */
DECL|callback|member|void (*callback)(void *data, int error, qm_ss_spi_status_t status,
DECL|clk_divider|member|uint16_t clk_divider;
DECL|data|member|void *data; /**< Callback user data. */
DECL|frame_size|member|qm_ss_spi_frame_size_t frame_size; /**< Frame Size. */
DECL|qm_ss_spi_async_transfer_t|typedef|} qm_ss_spi_async_transfer_t;
DECL|qm_ss_spi_bmode_t|typedef|} qm_ss_spi_bmode_t;
DECL|qm_ss_spi_config_t|typedef|} qm_ss_spi_config_t;
DECL|qm_ss_spi_frame_size_t|typedef|} qm_ss_spi_frame_size_t;
DECL|qm_ss_spi_slave_select_t|typedef|} qm_ss_spi_slave_select_t;
DECL|qm_ss_spi_status_t|typedef|} qm_ss_spi_status_t;
DECL|qm_ss_spi_tmode_t|typedef|} qm_ss_spi_tmode_t;
DECL|qm_ss_spi_transfer_t|typedef|} qm_ss_spi_transfer_t;
DECL|rx_len|member|uint16_t rx_len; /**< Read buffer length. */
DECL|rx_len|member|uint16_t rx_len; /**< Read buffer length. */
DECL|rx|member|uint8_t *rx; /**< Read data buffer pointer. */
DECL|rx|member|uint8_t *rx; /**< Read data buffer pointer. */
DECL|transfer_mode|member|qm_ss_spi_tmode_t transfer_mode; /**< Transfer mode (enum). */
DECL|tx_len|member|uint16_t tx_len; /**< Write data length. */
DECL|tx_len|member|uint16_t tx_len; /**< Write data length. */
DECL|tx|member|uint8_t *tx; /**< Write data buffer pointer. */
DECL|tx|member|uint8_t *tx; /**< Write data buffer pointer. */
