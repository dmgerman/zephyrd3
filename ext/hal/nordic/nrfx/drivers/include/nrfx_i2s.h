DECL|NRFX_I2S_DEFAULT_CONFIG|macro|NRFX_I2S_DEFAULT_CONFIG
DECL|NRFX_I2S_FLAG_SYNCHRONIZED_MODE|macro|NRFX_I2S_FLAG_SYNCHRONIZED_MODE
DECL|NRFX_I2S_H__|macro|NRFX_I2S_H__
DECL|NRFX_I2S_PIN_NOT_USED|macro|NRFX_I2S_PIN_NOT_USED
DECL|alignment|member|nrf_i2s_align_t alignment; ///< Alignment of sample within a frame.
DECL|channels|member|nrf_i2s_channels_t channels; ///< Enabled channels.
DECL|format|member|nrf_i2s_format_t format; ///< Frame format.
DECL|irq_priority|member|uint8_t irq_priority; ///< Interrupt priority.
DECL|lrck_pin|member|uint8_t lrck_pin; ///< LRCK pin number.
DECL|mck_pin|member|uint8_t mck_pin; ///< MCK pin number.
DECL|mck_setup|member|nrf_i2s_mck_t mck_setup; ///< Master clock setup.
DECL|mode|member|nrf_i2s_mode_t mode; ///< Mode of operation.
DECL|nrfx_i2s_config_t|typedef|} nrfx_i2s_config_t;
DECL|nrfx_i2s_data_handler_t|typedef|typedef void (* nrfx_i2s_data_handler_t)(uint32_t const * p_data_received,
DECL|ratio|member|nrf_i2s_ratio_t ratio; ///< MCK/LRCK ratio.
DECL|sample_width|member|nrf_i2s_swidth_t sample_width; ///< Sample width.
DECL|sck_pin|member|uint8_t sck_pin; ///< SCK pin number.
DECL|sdin_pin|member|uint8_t sdin_pin; ///< SDIN pin number.
DECL|sdout_pin|member|uint8_t sdout_pin; ///< SDOUT pin number.
