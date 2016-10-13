DECL|QM_I2S_12_BIT_SAMPLE_RESOLUTION|enumerator|QM_I2S_12_BIT_SAMPLE_RESOLUTION = 12,
DECL|QM_I2S_13_BIT_SAMPLE_RESOLUTION|enumerator|QM_I2S_13_BIT_SAMPLE_RESOLUTION = 13,
DECL|QM_I2S_14_BIT_SAMPLE_RESOLUTION|enumerator|QM_I2S_14_BIT_SAMPLE_RESOLUTION = 14,
DECL|QM_I2S_15_BIT_SAMPLE_RESOLUTION|enumerator|QM_I2S_15_BIT_SAMPLE_RESOLUTION = 15,
DECL|QM_I2S_16_BIT_SAMPLE_RESOLUTION|enumerator|QM_I2S_16_BIT_SAMPLE_RESOLUTION = 16,
DECL|QM_I2S_17_BIT_SAMPLE_RESOLUTION|enumerator|QM_I2S_17_BIT_SAMPLE_RESOLUTION = 17,
DECL|QM_I2S_18_BIT_SAMPLE_RESOLUTION|enumerator|QM_I2S_18_BIT_SAMPLE_RESOLUTION = 18,
DECL|QM_I2S_19_BIT_SAMPLE_RESOLUTION|enumerator|QM_I2S_19_BIT_SAMPLE_RESOLUTION = 19,
DECL|QM_I2S_20_BIT_SAMPLE_RESOLUTION|enumerator|QM_I2S_20_BIT_SAMPLE_RESOLUTION = 20,
DECL|QM_I2S_21_BIT_SAMPLE_RESOLUTION|enumerator|QM_I2S_21_BIT_SAMPLE_RESOLUTION = 21,
DECL|QM_I2S_22_BIT_SAMPLE_RESOLUTION|enumerator|QM_I2S_22_BIT_SAMPLE_RESOLUTION = 22,
DECL|QM_I2S_23_BIT_SAMPLE_RESOLUTION|enumerator|QM_I2S_23_BIT_SAMPLE_RESOLUTION = 23,
DECL|QM_I2S_24_BIT_SAMPLE_RESOLUTION|enumerator|QM_I2S_24_BIT_SAMPLE_RESOLUTION = 24,
DECL|QM_I2S_25_BIT_SAMPLE_RESOLUTION|enumerator|QM_I2S_25_BIT_SAMPLE_RESOLUTION = 25,
DECL|QM_I2S_26_BIT_SAMPLE_RESOLUTION|enumerator|QM_I2S_26_BIT_SAMPLE_RESOLUTION = 26,
DECL|QM_I2S_27_BIT_SAMPLE_RESOLUTION|enumerator|QM_I2S_27_BIT_SAMPLE_RESOLUTION = 27,
DECL|QM_I2S_28_BIT_SAMPLE_RESOLUTION|enumerator|QM_I2S_28_BIT_SAMPLE_RESOLUTION = 28,
DECL|QM_I2S_29_BIT_SAMPLE_RESOLUTION|enumerator|QM_I2S_29_BIT_SAMPLE_RESOLUTION = 29,
DECL|QM_I2S_30_BIT_SAMPLE_RESOLUTION|enumerator|QM_I2S_30_BIT_SAMPLE_RESOLUTION = 30,
DECL|QM_I2S_31_BIT_SAMPLE_RESOLUTION|enumerator|QM_I2S_31_BIT_SAMPLE_RESOLUTION = 31,
DECL|QM_I2S_32_BIT_SAMPLE_RESOLUTION|enumerator|QM_I2S_32_BIT_SAMPLE_RESOLUTION = 32
DECL|QM_I2S_AUDIO_FORMAT_DSP_MODE|enumerator|QM_I2S_AUDIO_FORMAT_DSP_MODE /**< DSP mode audio format */
DECL|QM_I2S_AUDIO_FORMAT_I2S_MODE|enumerator|QM_I2S_AUDIO_FORMAT_I2S_MODE = 0, /**< I2S Mode audio format */
DECL|QM_I2S_AUDIO_FORMAT_LEFT_J|enumerator|QM_I2S_AUDIO_FORMAT_LEFT_J, /**< Left justified audio format */
DECL|QM_I2S_AUDIO_FORMAT_RIGHT_J|enumerator|QM_I2S_AUDIO_FORMAT_RIGHT_J, /**< Right justified audio format */
DECL|QM_I2S_AUDIO_STREAM_RECEIVE|enumerator|QM_I2S_AUDIO_STREAM_RECEIVE /**< Capture audio stream */
DECL|QM_I2S_AUDIO_STREAM_TRANSMIT|enumerator|QM_I2S_AUDIO_STREAM_TRANSMIT = 0, /**< Playback audio stream */
DECL|QM_I2S_DMA_COMPLETE|enumerator|QM_I2S_DMA_COMPLETE = BIT(11),
DECL|QM_I2S_DMA_ERROR|enumerator|QM_I2S_DMA_ERROR = BIT(10),
DECL|QM_I2S_FIFO_OVERFLOW|enumerator|QM_I2S_FIFO_OVERFLOW = BIT(0),
DECL|QM_I2S_FIFO_UNDERRUN|enumerator|QM_I2S_FIFO_UNDERRUN = BIT(1),
DECL|QM_I2S_INT_CLK|enumerator|QM_I2S_INT_CLK = 0, /**< Use internal clock. */
DECL|QM_I2S_MASTER|enumerator|QM_I2S_MASTER = 0, /**< Master configuration selection */
DECL|QM_I2S_MCLK|enumerator|QM_I2S_MCLK, /**< Take in clock from external source. */
DECL|QM_I2S_RATE_11025KHZ|enumerator|QM_I2S_RATE_11025KHZ, /**< 11.025kHz audio rate */
DECL|QM_I2S_RATE_16000KHZ|enumerator|QM_I2S_RATE_16000KHZ, /**< 16kHz audio rate */
DECL|QM_I2S_RATE_22050KHZ|enumerator|QM_I2S_RATE_22050KHZ, /**< 22.05kHz audio rate */
DECL|QM_I2S_RATE_32000KHZ|enumerator|QM_I2S_RATE_32000KHZ, /**< 32kHz audio rate */
DECL|QM_I2S_RATE_4000KHZ|enumerator|QM_I2S_RATE_4000KHZ = 0, /**< 4kHz audio rate */
DECL|QM_I2S_RATE_44100KHZ|enumerator|QM_I2S_RATE_44100KHZ, /**< 44.1kHz audio rate */
DECL|QM_I2S_RATE_48000KHZ|enumerator|QM_I2S_RATE_48000KHZ, /**< 48kHz audio rate */
DECL|QM_I2S_RATE_8000KHZ|enumerator|QM_I2S_RATE_8000KHZ, /**< 8kHz audio rate */
DECL|QM_I2S_RING_BUFFER|enumerator|QM_I2S_RING_BUFFER /**< Used for continuous audio playback/recording. */
DECL|QM_I2S_RX_FIFO_ALMOST_EMPTY|enumerator|QM_I2S_RX_FIFO_ALMOST_EMPTY = BIT(8),
DECL|QM_I2S_RX_FIFO_ALMOST_FULL|enumerator|QM_I2S_RX_FIFO_ALMOST_FULL = BIT(7),
DECL|QM_I2S_RX_FIFO_EMPTY|enumerator|QM_I2S_RX_FIFO_EMPTY = BIT(9),
DECL|QM_I2S_RX_FIFO_FULL|enumerator|QM_I2S_RX_FIFO_FULL = BIT(6),
DECL|QM_I2S_SLAVE|enumerator|QM_I2S_SLAVE /**< Slave configuration selection */
DECL|QM_I2S_TERMINATED_BUFFER|enumerator|QM_I2S_TERMINATED_BUFFER = 0,
DECL|QM_I2S_TX_FIFO_ALMOST_EMPTY|enumerator|QM_I2S_TX_FIFO_ALMOST_EMPTY = BIT(4),
DECL|QM_I2S_TX_FIFO_ALMOST_FULL|enumerator|QM_I2S_TX_FIFO_ALMOST_FULL = BIT(3),
DECL|QM_I2S_TX_FIFO_EMPTY|enumerator|QM_I2S_TX_FIFO_EMPTY = BIT(5),
DECL|QM_I2S_TX_FIFO_FULL|enumerator|QM_I2S_TX_FIFO_FULL = BIT(2),
DECL|__QM_I2S_H__|macro|__QM_I2S_H__
DECL|aempty_thresh|member|uint32_t aempty_thresh; /**< TX/RX almost empty threshold. */
DECL|afull_thresh|member|uint32_t afull_thresh; /**< TX/RX almost full threshold. */
DECL|audio_buff_cfg|member|qm_i2s_buffer_mode_t audio_buff_cfg;
DECL|audio_format|member|qm_i2s_audio_format_t audio_format;
DECL|audio_rate|member|qm_i2s_audio_rate_t audio_rate; /**< Audio rate */
DECL|audio_stream|member|qm_i2s_audio_stream_t audio_stream; /**< I2S audio stream identifier */
DECL|block_size|member|uint32_t block_size;
DECL|buffer_len|member|uint32_t buffer_len; /**< Length of a buffer in the ring buffer. */
DECL|buffer_link|member|qm_i2s_buffer_link_t *buffer_link; /**< Ring buffer head pointer. */
DECL|buff|member|uint32_t *buff; /**< Pointer to the buffer base address. */
DECL|callback_data|member|void *callback_data; /**< Callback user data. */
DECL|callback|member|void (*callback)(void *data, qm_i2s_status_t i2s_status);
DECL|dma_channel|member|qm_dma_channel_id_t dma_channel; /**< DMA controller Channel ID */
DECL|dma_link_head|member|qm_dma_lli_item_t *dma_link_head;
DECL|dma_link|member|qm_dma_lli_item_t *dma_link; /**< Pointer to the DMA link list */
DECL|i2s_clk_freq|member|uint32_t i2s_clk_freq;
DECL|i2s_clock_sel|member|qm_i2s_clk_src_t i2s_clock_sel;
DECL|i2s_ext_clk_freq|member|uint32_t i2s_ext_clk_freq;
DECL|i2s_mclk_divisor|member|uint32_t i2s_mclk_divisor;
DECL|i2s_mclk_output_en|member|bool i2s_mclk_output_en;
DECL|master_slave|member|qm_i2s_master_slave_t master_slave;
DECL|next|member|struct qm_i2s_buffer_link *next;
DECL|num_buffer_links|member|uint32_t num_buffer_links;
DECL|num_dma_link_per_buffer|member|uint32_t num_dma_link_per_buffer;
DECL|num_dma_links|member|uint32_t num_dma_links; /**< Total number of DMA links. */
DECL|qm_i2s_audio_format_t|typedef|} qm_i2s_audio_format_t;
DECL|qm_i2s_audio_rate_t|typedef|} qm_i2s_audio_rate_t;
DECL|qm_i2s_audio_stream_t|typedef|} qm_i2s_audio_stream_t;
DECL|qm_i2s_buffer_link_t|typedef|} qm_i2s_buffer_link_t;
DECL|qm_i2s_buffer_link|struct|typedef struct qm_i2s_buffer_link {
DECL|qm_i2s_buffer_mode_t|typedef|} qm_i2s_buffer_mode_t;
DECL|qm_i2s_channel_cfg_data_t|typedef|} qm_i2s_channel_cfg_data_t;
DECL|qm_i2s_clk_src_t|typedef|} qm_i2s_clk_src_t;
DECL|qm_i2s_clock_cfg_data_t|typedef|} qm_i2s_clock_cfg_data_t;
DECL|qm_i2s_master_slave_t|typedef|} qm_i2s_master_slave_t;
DECL|qm_i2s_sample_resolution_t|typedef|} qm_i2s_sample_resolution_t;
DECL|qm_i2s_status_t|typedef|} qm_i2s_status_t;
DECL|sample_resolution|member|qm_i2s_sample_resolution_t sample_resolution;
