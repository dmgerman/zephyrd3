DECL|QM_SPI_BMODE_0|enumerator|QM_SPI_BMODE_0, /**< Clock Polarity = 0, Clock Phase = 0 */
DECL|QM_SPI_BMODE_1|enumerator|QM_SPI_BMODE_1, /**< Clock Polarity = 0, Clock Phase = 1 */
DECL|QM_SPI_BMODE_2|enumerator|QM_SPI_BMODE_2, /**< Clock Polarity = 1, Clock Phase = 0 */
DECL|QM_SPI_BMODE_3|enumerator|QM_SPI_BMODE_3 /**< Clock Polarity = 1, Clock Phase = 1 */
DECL|QM_SPI_BUSY|enumerator|QM_SPI_BUSY,
DECL|QM_SPI_EINVAL|enumerator|QM_SPI_EINVAL
DECL|QM_SPI_FRAME_SIZE_10_BIT|enumerator|QM_SPI_FRAME_SIZE_10_BIT,
DECL|QM_SPI_FRAME_SIZE_11_BIT|enumerator|QM_SPI_FRAME_SIZE_11_BIT,
DECL|QM_SPI_FRAME_SIZE_12_BIT|enumerator|QM_SPI_FRAME_SIZE_12_BIT,
DECL|QM_SPI_FRAME_SIZE_13_BIT|enumerator|QM_SPI_FRAME_SIZE_13_BIT,
DECL|QM_SPI_FRAME_SIZE_14_BIT|enumerator|QM_SPI_FRAME_SIZE_14_BIT,
DECL|QM_SPI_FRAME_SIZE_15_BIT|enumerator|QM_SPI_FRAME_SIZE_15_BIT,
DECL|QM_SPI_FRAME_SIZE_16_BIT|enumerator|QM_SPI_FRAME_SIZE_16_BIT,
DECL|QM_SPI_FRAME_SIZE_17_BIT|enumerator|QM_SPI_FRAME_SIZE_17_BIT,
DECL|QM_SPI_FRAME_SIZE_18_BIT|enumerator|QM_SPI_FRAME_SIZE_18_BIT,
DECL|QM_SPI_FRAME_SIZE_19_BIT|enumerator|QM_SPI_FRAME_SIZE_19_BIT,
DECL|QM_SPI_FRAME_SIZE_20_BIT|enumerator|QM_SPI_FRAME_SIZE_20_BIT,
DECL|QM_SPI_FRAME_SIZE_21_BIT|enumerator|QM_SPI_FRAME_SIZE_21_BIT,
DECL|QM_SPI_FRAME_SIZE_22_BIT|enumerator|QM_SPI_FRAME_SIZE_22_BIT,
DECL|QM_SPI_FRAME_SIZE_23_BIT|enumerator|QM_SPI_FRAME_SIZE_23_BIT,
DECL|QM_SPI_FRAME_SIZE_24_BIT|enumerator|QM_SPI_FRAME_SIZE_24_BIT,
DECL|QM_SPI_FRAME_SIZE_25_BIT|enumerator|QM_SPI_FRAME_SIZE_25_BIT,
DECL|QM_SPI_FRAME_SIZE_26_BIT|enumerator|QM_SPI_FRAME_SIZE_26_BIT,
DECL|QM_SPI_FRAME_SIZE_27_BIT|enumerator|QM_SPI_FRAME_SIZE_27_BIT,
DECL|QM_SPI_FRAME_SIZE_28_BIT|enumerator|QM_SPI_FRAME_SIZE_28_BIT,
DECL|QM_SPI_FRAME_SIZE_29_BIT|enumerator|QM_SPI_FRAME_SIZE_29_BIT,
DECL|QM_SPI_FRAME_SIZE_30_BIT|enumerator|QM_SPI_FRAME_SIZE_30_BIT,
DECL|QM_SPI_FRAME_SIZE_31_BIT|enumerator|QM_SPI_FRAME_SIZE_31_BIT,
DECL|QM_SPI_FRAME_SIZE_32_BIT|enumerator|QM_SPI_FRAME_SIZE_32_BIT
DECL|QM_SPI_FRAME_SIZE_4_BIT|enumerator|QM_SPI_FRAME_SIZE_4_BIT = 3, /* Min. size is 4 bits. */
DECL|QM_SPI_FRAME_SIZE_5_BIT|enumerator|QM_SPI_FRAME_SIZE_5_BIT,
DECL|QM_SPI_FRAME_SIZE_6_BIT|enumerator|QM_SPI_FRAME_SIZE_6_BIT,
DECL|QM_SPI_FRAME_SIZE_7_BIT|enumerator|QM_SPI_FRAME_SIZE_7_BIT,
DECL|QM_SPI_FRAME_SIZE_8_BIT|enumerator|QM_SPI_FRAME_SIZE_8_BIT,
DECL|QM_SPI_FRAME_SIZE_9_BIT|enumerator|QM_SPI_FRAME_SIZE_9_BIT,
DECL|QM_SPI_FREE|enumerator|QM_SPI_FREE,
DECL|QM_SPI_SS_0|enumerator|QM_SPI_SS_0 = BIT(0),
DECL|QM_SPI_SS_1|enumerator|QM_SPI_SS_1 = BIT(1),
DECL|QM_SPI_SS_2|enumerator|QM_SPI_SS_2 = BIT(2),
DECL|QM_SPI_SS_3|enumerator|QM_SPI_SS_3 = BIT(3),
DECL|QM_SPI_SS_NONE|enumerator|QM_SPI_SS_NONE = 0,
DECL|QM_SPI_TMOD_EEPROM_READ|enumerator|QM_SPI_TMOD_EEPROM_READ /**< EEPROM Read */
DECL|QM_SPI_TMOD_RX|enumerator|QM_SPI_TMOD_RX, /**< Receive Only */
DECL|QM_SPI_TMOD_TX_RX|enumerator|QM_SPI_TMOD_TX_RX, /**< Transmit & Receive */
DECL|QM_SPI_TMOD_TX|enumerator|QM_SPI_TMOD_TX, /**< Transmit Only */
DECL|QM_SPI_TX_ERROR|enumerator|QM_SPI_TX_ERROR,
DECL|__QM_SPI_H__|macro|__QM_SPI_H__
DECL|bus_mode|member|qm_spi_bmode_t bus_mode; /**< Bus mode (enum) */
DECL|clk_divider|member|uint16_t clk_divider; /**< SCK = SPI_clock/clk_divider. A value of 0
DECL|err_callback|member|void (*err_callback)(uint32_t id, qm_rc_t status);
DECL|frame_size|member|qm_spi_frame_size_t frame_size; /**< Frame Size */
DECL|id|member|uint32_t id; /* Callback identifier */
DECL|qm_spi_async_transfer_t|typedef|} qm_spi_async_transfer_t;
DECL|qm_spi_bmode_t|typedef|} qm_spi_bmode_t;
DECL|qm_spi_config_t|typedef|} qm_spi_config_t;
DECL|qm_spi_frame_size_t|typedef|} qm_spi_frame_size_t;
DECL|qm_spi_slave_select_t|typedef|} qm_spi_slave_select_t;
DECL|qm_spi_status_t|typedef|} qm_spi_status_t;
DECL|qm_spi_tmode_t|typedef|} qm_spi_tmode_t;
DECL|qm_spi_transfer_t|typedef|} qm_spi_transfer_t;
DECL|rx_callback|member|void (*rx_callback)(uint32_t id, uint32_t len);
DECL|rx_len|member|uint32_t rx_len; /* Read buffer length */
DECL|rx_len|member|uint32_t rx_len; /* Receive Data Length */
DECL|rx|member|uint8_t *rx; /* Read Data */
DECL|rx|member|uint8_t *rx; /* Read data */
DECL|transfer_mode|member|qm_spi_tmode_t transfer_mode; /**< Transfer mode (enum) */
DECL|tx_callback|member|void (*tx_callback)(uint32_t id, uint32_t len);
DECL|tx_len|member|uint32_t tx_len; /* Write Data Length */
DECL|tx_len|member|uint32_t tx_len; /* Write data Length */
DECL|tx|member|uint8_t *tx; /* Write Data */
DECL|tx|member|uint8_t *tx; /* Write data */
