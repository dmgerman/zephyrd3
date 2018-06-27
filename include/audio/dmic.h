DECL|DMIC_STATE_ACTIVE|enumerator|DMIC_STATE_ACTIVE, /* Active */
DECL|DMIC_STATE_CONFIGURED|enumerator|DMIC_STATE_CONFIGURED, /* Configured */
DECL|DMIC_STATE_INITIALIZED|enumerator|DMIC_STATE_INITIALIZED, /* Initialized */
DECL|DMIC_STATE_PAUSED|enumerator|DMIC_STATE_PAUSED, /* Paused */
DECL|DMIC_STATE_UNINIT|enumerator|DMIC_STATE_UNINIT, /* Uninitialized */
DECL|DMIC_TRIGGER_PAUSE|enumerator|DMIC_TRIGGER_PAUSE, /* pause the stream */
DECL|DMIC_TRIGGER_RELEASE|enumerator|DMIC_TRIGGER_RELEASE, /* release paused stream */
DECL|DMIC_TRIGGER_RESET|enumerator|DMIC_TRIGGER_RESET, /* reset */
DECL|DMIC_TRIGGER_START|enumerator|DMIC_TRIGGER_START, /* start stream */
DECL|DMIC_TRIGGER_STOP|enumerator|DMIC_TRIGGER_STOP, /* stop stream */
DECL|PDM_CHAN_LEFT|enumerator|PDM_CHAN_LEFT,
DECL|PDM_CHAN_RIGHT|enumerator|PDM_CHAN_RIGHT,
DECL|__AUDIO_DMIC_H__|macro|__AUDIO_DMIC_H__
DECL|_dmic_ops|struct|struct _dmic_ops {
DECL|act_chan_map_hi|member|u32_t act_chan_map_hi; /* Channels 8 to 15 */
DECL|act_chan_map_lo|member|u32_t act_chan_map_lo; /* Channels 0 to 7 */
DECL|act_num_chan|member|u8_t act_num_chan;
DECL|act_num_streams|member|u8_t act_num_streams;
DECL|block_size|member|u16_t block_size;
DECL|channel|member|struct pdm_chan_cfg channel;
DECL|configure|member|int (*configure)(struct device *dev, struct dmic_cfg *config);
DECL|dmic_build_channel_map|function|static inline u32_t dmic_build_channel_map(u8_t channel, u8_t pdm,enum pdm_lr lr)
DECL|dmic_build_clk_skew_map|function|static inline u32_t dmic_build_clk_skew_map(u8_t pdm, u8_t skew)
DECL|dmic_cfg|struct|struct dmic_cfg {
DECL|dmic_configure|function|static inline int dmic_configure(struct device *dev, struct dmic_cfg *cfg)
DECL|dmic_parse_channel_map|function|static inline void dmic_parse_channel_map(u32_t channel_map_lo,u32_t channel_map_hi, u8_t channel, u8_t *pdm, enum pdm_lr *lr)
DECL|dmic_read|function|static inline int dmic_read(struct device *dev, u8_t stream, void **buffer,size_t *size, s32_t timeout)
DECL|dmic_state|enum|enum dmic_state {
DECL|dmic_trigger|enum|enum dmic_trigger {
DECL|dmic_trigger|function|static inline int dmic_trigger(struct device *dev, enum dmic_trigger cmd)
DECL|io|member|struct pdm_io_cfg io;
DECL|max_pdm_clk_dc|member|u8_t max_pdm_clk_dc;
DECL|max_pdm_clk_freq|member|u32_t max_pdm_clk_freq;
DECL|mem_slab|member|struct k_mem_slab *mem_slab;
DECL|min_pdm_clk_dc|member|u8_t min_pdm_clk_dc;
DECL|min_pdm_clk_freq|member|u32_t min_pdm_clk_freq;
DECL|pcm_rate|member|u32_t pcm_rate;
DECL|pcm_stream_cfg|struct|struct pcm_stream_cfg {
DECL|pcm_width|member|u8_t pcm_width;
DECL|pdm_chan_cfg|struct|struct pdm_chan_cfg {
DECL|pdm_clk_pol|member|u8_t pdm_clk_pol;
DECL|pdm_clk_skew|member|u32_t pdm_clk_skew;
DECL|pdm_data_pol|member|u8_t pdm_data_pol;
DECL|pdm_io_cfg|struct|struct pdm_io_cfg {
DECL|pdm_lr|enum|enum pdm_lr {
DECL|read|member|int (*read)(struct device *dev, u8_t stream, void **buffer,
DECL|req_chan_map_hi|member|u32_t req_chan_map_hi; /* Channels 8 to 15 */
DECL|req_chan_map_lo|member|u32_t req_chan_map_lo; /* Channels 0 to 7 */
DECL|req_num_chan|member|u8_t req_num_chan;
DECL|req_num_streams|member|u8_t req_num_streams;
DECL|streams|member|struct pcm_stream_cfg *streams;
DECL|trigger|member|int (*trigger)(struct device *dev, enum dmic_trigger cmd);
