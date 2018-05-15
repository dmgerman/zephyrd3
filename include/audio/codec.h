DECL|AUDIO_CHANNEL_ALL|enumerator|AUDIO_CHANNEL_ALL,
DECL|AUDIO_CHANNEL_FRONT_CENTER|enumerator|AUDIO_CHANNEL_FRONT_CENTER,
DECL|AUDIO_CHANNEL_FRONT_LEFT|enumerator|AUDIO_CHANNEL_FRONT_LEFT,
DECL|AUDIO_CHANNEL_FRONT_RIGHT|enumerator|AUDIO_CHANNEL_FRONT_RIGHT,
DECL|AUDIO_CHANNEL_LFE|enumerator|AUDIO_CHANNEL_LFE,
DECL|AUDIO_CHANNEL_REAR_CENTER|enumerator|AUDIO_CHANNEL_REAR_CENTER,
DECL|AUDIO_CHANNEL_REAR_LEFT|enumerator|AUDIO_CHANNEL_REAR_LEFT,
DECL|AUDIO_CHANNEL_REAR_RIGHT|enumerator|AUDIO_CHANNEL_REAR_RIGHT,
DECL|AUDIO_CHANNEL_SIDE_LEFT|enumerator|AUDIO_CHANNEL_SIDE_LEFT,
DECL|AUDIO_CHANNEL_SIDE_RIGHT|enumerator|AUDIO_CHANNEL_SIDE_RIGHT,
DECL|AUDIO_DAI_TYPE_I2S|enumerator|AUDIO_DAI_TYPE_I2S, /* I2S Interface */
DECL|AUDIO_DAI_TYPE_INVALID|enumerator|AUDIO_DAI_TYPE_INVALID, /* Other interfaces can be added here */
DECL|AUDIO_PCM_RATE_16K|enumerator|AUDIO_PCM_RATE_16K = 16000,
DECL|AUDIO_PCM_RATE_192K|enumerator|AUDIO_PCM_RATE_192K = 192000,
DECL|AUDIO_PCM_RATE_24K|enumerator|AUDIO_PCM_RATE_24K = 24000,
DECL|AUDIO_PCM_RATE_32K|enumerator|AUDIO_PCM_RATE_32K = 32000,
DECL|AUDIO_PCM_RATE_44P1K|enumerator|AUDIO_PCM_RATE_44P1K = 44100,
DECL|AUDIO_PCM_RATE_48K|enumerator|AUDIO_PCM_RATE_48K = 48000,
DECL|AUDIO_PCM_RATE_8K|enumerator|AUDIO_PCM_RATE_8K = 8000,
DECL|AUDIO_PCM_RATE_96K|enumerator|AUDIO_PCM_RATE_96K = 96000,
DECL|AUDIO_PCM_WIDTH_16_BITS|enumerator|AUDIO_PCM_WIDTH_16_BITS = 16,
DECL|AUDIO_PCM_WIDTH_20_BITS|enumerator|AUDIO_PCM_WIDTH_20_BITS = 20,
DECL|AUDIO_PCM_WIDTH_24_BITS|enumerator|AUDIO_PCM_WIDTH_24_BITS = 24,
DECL|AUDIO_PCM_WIDTH_32_BITS|enumerator|AUDIO_PCM_WIDTH_32_BITS = 32,
DECL|AUDIO_PROPERTY_OUTPUT_MUTE|enumerator|AUDIO_PROPERTY_OUTPUT_MUTE,
DECL|AUDIO_PROPERTY_OUTPUT_VOLUME|enumerator|AUDIO_PROPERTY_OUTPUT_VOLUME,
DECL|__AUDIO_CODEC_H__|macro|__AUDIO_CODEC_H__
DECL|apply_properties|member|int (*apply_properties)(struct device *dev);
DECL|audio_channel_t|typedef|} audio_channel_t;
DECL|audio_codec_api|struct|struct audio_codec_api {
DECL|audio_codec_apply_properties|function|static inline int audio_codec_apply_properties(struct device *dev)
DECL|audio_codec_cfg|struct|struct audio_codec_cfg {
DECL|audio_codec_configure|function|static inline int audio_codec_configure(struct device *dev,struct audio_codec_cfg *cfg)
DECL|audio_codec_set_property|function|static inline int audio_codec_set_property(struct device *dev, audio_property_t property,audio_channel_t channel, audio_property_value_t val)
DECL|audio_codec_start_output|function|static inline void audio_codec_start_output(struct device *dev)
DECL|audio_codec_stop_output|function|static inline void audio_codec_stop_output(struct device *dev)
DECL|audio_dai_cfg_t|typedef|} audio_dai_cfg_t;
DECL|audio_dai_type_t|typedef|} audio_dai_type_t;
DECL|audio_pcm_rate_t|typedef|} audio_pcm_rate_t;
DECL|audio_pcm_width_t|typedef|} audio_pcm_width_t;
DECL|audio_property_t|typedef|} audio_property_t;
DECL|audio_property_value_t|typedef|} audio_property_value_t;
DECL|configure|member|int (*configure)(struct device *dev, struct audio_codec_cfg *cfg);
DECL|dai_cfg|member|audio_dai_cfg_t dai_cfg; /* DAI configuration info */
DECL|dai_type|member|audio_dai_type_t dai_type; /* Digital interface type */
DECL|i2s|member|struct i2s_config i2s; /* I2S configuration */
DECL|mclk_freq|member|u32_t mclk_freq; /* MCLK input frequency in Hz */
DECL|mute|member|bool mute; /* mute if true, unmute if false */
DECL|set_property|member|int (*set_property)(struct device *dev, audio_property_t property,
DECL|start_output|member|void (*start_output)(struct device *dev);
DECL|stop_output|member|void (*stop_output)(struct device *dev);
DECL|vol|member|int vol; /* Volume level in 0.5dB resolution */
