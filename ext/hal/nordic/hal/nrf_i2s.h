DECL|NRF_I2S_ALIGN_LEFT|enumerator|NRF_I2S_ALIGN_LEFT = I2S_CONFIG_ALIGN_ALIGN_Left, ///< Left-aligned.
DECL|NRF_I2S_ALIGN_RIGHT|enumerator|NRF_I2S_ALIGN_RIGHT = I2S_CONFIG_ALIGN_ALIGN_Right ///< Right-aligned.
DECL|NRF_I2S_CHANNELS_LEFT|enumerator|NRF_I2S_CHANNELS_LEFT = I2S_CONFIG_CHANNELS_CHANNELS_Left, ///< Left only.
DECL|NRF_I2S_CHANNELS_RIGHT|enumerator|NRF_I2S_CHANNELS_RIGHT = I2S_CONFIG_CHANNELS_CHANNELS_Right ///< Right only.
DECL|NRF_I2S_CHANNELS_STEREO|enumerator|NRF_I2S_CHANNELS_STEREO = I2S_CONFIG_CHANNELS_CHANNELS_Stereo, ///< Stereo.
DECL|NRF_I2S_EVENT_RXPTRUPD|enumerator|NRF_I2S_EVENT_RXPTRUPD = offsetof(NRF_I2S_Type, EVENTS_RXPTRUPD), ///< The RXD.PTR register has been copied to internal double-buffers.
DECL|NRF_I2S_EVENT_STOPPED|enumerator|NRF_I2S_EVENT_STOPPED = offsetof(NRF_I2S_Type, EVENTS_STOPPED) ///< I2S transfer stopped.
DECL|NRF_I2S_EVENT_TXPTRUPD|enumerator|NRF_I2S_EVENT_TXPTRUPD = offsetof(NRF_I2S_Type, EVENTS_TXPTRUPD), ///< The TXD.PTR register has been copied to internal double-buffers.
DECL|NRF_I2S_FORMAT_ALIGNED|enumerator|NRF_I2S_FORMAT_ALIGNED = I2S_CONFIG_FORMAT_FORMAT_Aligned ///< Alternate (left- or right-aligned) format.
DECL|NRF_I2S_FORMAT_I2S|enumerator|NRF_I2S_FORMAT_I2S = I2S_CONFIG_FORMAT_FORMAT_I2S, ///< Original I2S format.
DECL|NRF_I2S_H__|macro|NRF_I2S_H__
DECL|NRF_I2S_INT_RXPTRUPD_MASK|enumerator|NRF_I2S_INT_RXPTRUPD_MASK = I2S_INTENSET_RXPTRUPD_Msk, ///< Interrupt on RXPTRUPD event.
DECL|NRF_I2S_INT_STOPPED_MASK|enumerator|NRF_I2S_INT_STOPPED_MASK = I2S_INTENSET_STOPPED_Msk ///< Interrupt on STOPPED event.
DECL|NRF_I2S_INT_TXPTRUPD_MASK|enumerator|NRF_I2S_INT_TXPTRUPD_MASK = I2S_INTENSET_TXPTRUPD_Msk, ///< Interrupt on TXPTRUPD event.
DECL|NRF_I2S_MCK_32MDIV10|enumerator|NRF_I2S_MCK_32MDIV10 = I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV10, ///< 32 MHz / 10 = 3.2 MHz.
DECL|NRF_I2S_MCK_32MDIV11|enumerator|NRF_I2S_MCK_32MDIV11 = I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV11, ///< 32 MHz / 11 = 2.9090909 MHz.
DECL|NRF_I2S_MCK_32MDIV125|enumerator|NRF_I2S_MCK_32MDIV125 = I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV125 ///< 32 MHz / 125 = 0.256 MHz.
DECL|NRF_I2S_MCK_32MDIV15|enumerator|NRF_I2S_MCK_32MDIV15 = I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV15, ///< 32 MHz / 15 = 2.1333333 MHz.
DECL|NRF_I2S_MCK_32MDIV16|enumerator|NRF_I2S_MCK_32MDIV16 = I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV16, ///< 32 MHz / 16 = 2.0 MHz.
DECL|NRF_I2S_MCK_32MDIV21|enumerator|NRF_I2S_MCK_32MDIV21 = I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV21, ///< 32 MHz / 21 = 1.5238095 MHz.
DECL|NRF_I2S_MCK_32MDIV23|enumerator|NRF_I2S_MCK_32MDIV23 = I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV23, ///< 32 MHz / 23 = 1.3913043 MHz.
DECL|NRF_I2S_MCK_32MDIV2|enumerator|NRF_I2S_MCK_32MDIV2 = (int)I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV2, ///< 32 MHz / 2 = 16.0 MHz.
DECL|NRF_I2S_MCK_32MDIV31|enumerator|NRF_I2S_MCK_32MDIV31 = I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV31, ///< 32 MHz / 31 = 1.0322581 MHz.
DECL|NRF_I2S_MCK_32MDIV3|enumerator|NRF_I2S_MCK_32MDIV3 = I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV3, ///< 32 MHz / 3 = 10.6666667 MHz.
DECL|NRF_I2S_MCK_32MDIV42|enumerator|NRF_I2S_MCK_32MDIV42 = I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV42, ///< 32 MHz / 42 = 0.7619048 MHz.
DECL|NRF_I2S_MCK_32MDIV4|enumerator|NRF_I2S_MCK_32MDIV4 = I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV4, ///< 32 MHz / 4 = 8.0 MHz.
DECL|NRF_I2S_MCK_32MDIV5|enumerator|NRF_I2S_MCK_32MDIV5 = I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV5, ///< 32 MHz / 5 = 6.4 MHz.
DECL|NRF_I2S_MCK_32MDIV63|enumerator|NRF_I2S_MCK_32MDIV63 = I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV63, ///< 32 MHz / 63 = 0.5079365 MHz.
DECL|NRF_I2S_MCK_32MDIV6|enumerator|NRF_I2S_MCK_32MDIV6 = I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV6, ///< 32 MHz / 6 = 5.3333333 MHz.
DECL|NRF_I2S_MCK_32MDIV8|enumerator|NRF_I2S_MCK_32MDIV8 = I2S_CONFIG_MCKFREQ_MCKFREQ_32MDIV8, ///< 32 MHz / 8 = 4.0 MHz.
DECL|NRF_I2S_MCK_DISABLED|enumerator|NRF_I2S_MCK_DISABLED = 0, ///< MCK disabled.
DECL|NRF_I2S_MODE_MASTER|enumerator|NRF_I2S_MODE_MASTER = I2S_CONFIG_MODE_MODE_Master, ///< Master mode.
DECL|NRF_I2S_MODE_SLAVE|enumerator|NRF_I2S_MODE_SLAVE = I2S_CONFIG_MODE_MODE_Slave ///< Slave mode.
DECL|NRF_I2S_PIN_NOT_CONNECTED|macro|NRF_I2S_PIN_NOT_CONNECTED
DECL|NRF_I2S_RATIO_128X|enumerator|NRF_I2S_RATIO_128X = I2S_CONFIG_RATIO_RATIO_128X, ///< LRCK = MCK / 128.
DECL|NRF_I2S_RATIO_192X|enumerator|NRF_I2S_RATIO_192X = I2S_CONFIG_RATIO_RATIO_192X, ///< LRCK = MCK / 192.
DECL|NRF_I2S_RATIO_256X|enumerator|NRF_I2S_RATIO_256X = I2S_CONFIG_RATIO_RATIO_256X, ///< LRCK = MCK / 256.
DECL|NRF_I2S_RATIO_32X|enumerator|NRF_I2S_RATIO_32X = I2S_CONFIG_RATIO_RATIO_32X, ///< LRCK = MCK / 32.
DECL|NRF_I2S_RATIO_384X|enumerator|NRF_I2S_RATIO_384X = I2S_CONFIG_RATIO_RATIO_384X, ///< LRCK = MCK / 384.
DECL|NRF_I2S_RATIO_48X|enumerator|NRF_I2S_RATIO_48X = I2S_CONFIG_RATIO_RATIO_48X, ///< LRCK = MCK / 48.
DECL|NRF_I2S_RATIO_512X|enumerator|NRF_I2S_RATIO_512X = I2S_CONFIG_RATIO_RATIO_512X ///< LRCK = MCK / 512.
DECL|NRF_I2S_RATIO_64X|enumerator|NRF_I2S_RATIO_64X = I2S_CONFIG_RATIO_RATIO_64X, ///< LRCK = MCK / 64.
DECL|NRF_I2S_RATIO_96X|enumerator|NRF_I2S_RATIO_96X = I2S_CONFIG_RATIO_RATIO_96X, ///< LRCK = MCK / 96.
DECL|NRF_I2S_SWIDTH_16BIT|enumerator|NRF_I2S_SWIDTH_16BIT = I2S_CONFIG_SWIDTH_SWIDTH_16Bit, ///< 16 bit.
DECL|NRF_I2S_SWIDTH_24BIT|enumerator|NRF_I2S_SWIDTH_24BIT = I2S_CONFIG_SWIDTH_SWIDTH_24Bit ///< 24 bit.
DECL|NRF_I2S_SWIDTH_8BIT|enumerator|NRF_I2S_SWIDTH_8BIT = I2S_CONFIG_SWIDTH_SWIDTH_8Bit, ///< 8 bit.
DECL|NRF_I2S_TASK_START|enumerator|NRF_I2S_TASK_START = offsetof(NRF_I2S_Type, TASKS_START), ///< Starts continuous I2S transfer. Also starts the MCK generator if this is enabled.
DECL|NRF_I2S_TASK_STOP|enumerator|NRF_I2S_TASK_STOP = offsetof(NRF_I2S_Type, TASKS_STOP) ///< Stops I2S transfer. Also stops the MCK generator.
DECL|nrf_i2s_align_t|typedef|} nrf_i2s_align_t;
DECL|nrf_i2s_channels_t|typedef|} nrf_i2s_channels_t;
DECL|nrf_i2s_configure|function|__STATIC_INLINE bool nrf_i2s_configure(NRF_I2S_Type * p_i2s, nrf_i2s_mode_t mode, nrf_i2s_format_t format, nrf_i2s_align_t alignment, nrf_i2s_swidth_t sample_width,
DECL|nrf_i2s_disable|function|__STATIC_INLINE void nrf_i2s_disable(NRF_I2S_Type * p_i2s)
DECL|nrf_i2s_enable|function|__STATIC_INLINE void nrf_i2s_enable(NRF_I2S_Type * p_i2s)
DECL|nrf_i2s_event_address_get|function|__STATIC_INLINE uint32_t nrf_i2s_event_address_get(NRF_I2S_Type const * p_i2s, nrf_i2s_event_t event)
DECL|nrf_i2s_event_check|function|__STATIC_INLINE bool nrf_i2s_event_check(NRF_I2S_Type const * p_i2s, nrf_i2s_event_t event)
DECL|nrf_i2s_event_clear|function|__STATIC_INLINE void nrf_i2s_event_clear(NRF_I2S_Type * p_i2s, nrf_i2s_event_t event)
DECL|nrf_i2s_event_t|typedef|} nrf_i2s_event_t;
DECL|nrf_i2s_format_t|typedef|} nrf_i2s_format_t;
DECL|nrf_i2s_int_disable|function|__STATIC_INLINE void nrf_i2s_int_disable(NRF_I2S_Type * p_i2s, uint32_t mask)
DECL|nrf_i2s_int_enable_check|function|__STATIC_INLINE bool nrf_i2s_int_enable_check(NRF_I2S_Type const * p_i2s, nrf_i2s_int_mask_t i2s_int)
DECL|nrf_i2s_int_enable|function|__STATIC_INLINE void nrf_i2s_int_enable(NRF_I2S_Type * p_i2s, uint32_t mask)
DECL|nrf_i2s_int_mask_t|typedef|} nrf_i2s_int_mask_t;
DECL|nrf_i2s_mck_t|typedef|} nrf_i2s_mck_t;
DECL|nrf_i2s_mode_t|typedef|} nrf_i2s_mode_t;
DECL|nrf_i2s_pins_set|function|__STATIC_INLINE void nrf_i2s_pins_set(NRF_I2S_Type * p_i2s, uint32_t sck_pin, uint32_t lrck_pin, uint32_t mck_pin, uint32_t sdout_pin,
DECL|nrf_i2s_ratio_t|typedef|} nrf_i2s_ratio_t;
DECL|nrf_i2s_rx_buffer_get|function|__STATIC_INLINE uint32_t * nrf_i2s_rx_buffer_get(NRF_I2S_Type const * p_i2s)
DECL|nrf_i2s_rx_buffer_set|function|__STATIC_INLINE void nrf_i2s_rx_buffer_set(NRF_I2S_Type * p_i2s, uint32_t * p_buffer)
DECL|nrf_i2s_swidth_t|typedef|} nrf_i2s_swidth_t;
DECL|nrf_i2s_task_address_get|function|__STATIC_INLINE uint32_t nrf_i2s_task_address_get(NRF_I2S_Type const * p_i2s, nrf_i2s_task_t task)
DECL|nrf_i2s_task_trigger|function|__STATIC_INLINE void nrf_i2s_task_trigger(NRF_I2S_Type * p_i2s, nrf_i2s_task_t task)
DECL|nrf_i2s_task_t|typedef|} nrf_i2s_task_t;
DECL|nrf_i2s_transfer_set|function|__STATIC_INLINE void nrf_i2s_transfer_set(NRF_I2S_Type * p_i2s, uint16_t size, uint32_t * p_buffer_rx, uint32_t const * p_buffer_tx)
DECL|nrf_i2s_tx_buffer_get|function|__STATIC_INLINE uint32_t * nrf_i2s_tx_buffer_get(NRF_I2S_Type const * p_i2s)
DECL|nrf_i2s_tx_buffer_set|function|__STATIC_INLINE void nrf_i2s_tx_buffer_set(NRF_I2S_Type * p_i2s, uint32_t const * p_buffer)
