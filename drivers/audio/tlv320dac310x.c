DECL|CODEC_DUMP_REGS|macro|CODEC_DUMP_REGS
DECL|CODEC_DUMP_REGS|macro|CODEC_DUMP_REGS
DECL|CODEC_OUTPUT_VOLUME_MAX|macro|CODEC_OUTPUT_VOLUME_MAX
DECL|CODEC_OUTPUT_VOLUME_MIN|macro|CODEC_OUTPUT_VOLUME_MIN
DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|codec_apply_properties|function|static int codec_apply_properties(struct device *dev)
DECL|codec_configure_clocks|function|static int codec_configure_clocks(struct device *dev,struct audio_codec_cfg *cfg)
DECL|codec_configure_dai|function|static int codec_configure_dai(struct device *dev, audio_dai_cfg_t *cfg)
DECL|codec_configure_filters|function|static int codec_configure_filters(struct device *dev, audio_dai_cfg_t *cfg)
DECL|codec_configure_output|function|static void codec_configure_output(struct device *dev)
DECL|codec_configure|function|static int codec_configure(struct device *dev,struct audio_codec_cfg *cfg)
DECL|codec_device_config|variable|codec_device_config
DECL|codec_device_data|variable|codec_device_data
DECL|codec_driver_api|variable|codec_driver_api
DECL|codec_driver_config|struct|struct codec_driver_config {
DECL|codec_driver_data|struct|struct codec_driver_data {
DECL|codec_get_osr_multiple|function|static enum osr_multiple codec_get_osr_multiple(audio_dai_cfg_t *cfg)
DECL|codec_initialize|function|static int codec_initialize(struct device *dev)
DECL|codec_mute_output|function|static void codec_mute_output(struct device *dev)
DECL|codec_read_all_regs|function|static void codec_read_all_regs(struct device *dev)
DECL|codec_read_reg|function|static void codec_read_reg(struct device *dev, struct reg_addr reg, u8_t *val)
DECL|codec_set_output_volume|function|static int codec_set_output_volume(struct device *dev, int vol)
DECL|codec_set_property|function|static int codec_set_property(struct device *dev,audio_property_t property, audio_channel_t channel, audio_property_value_t val)
DECL|codec_soft_reset|function|static void codec_soft_reset(struct device *dev)
DECL|codec_start_output|function|static void codec_start_output(struct device *dev)
DECL|codec_stop_output|function|static void codec_stop_output(struct device *dev)
DECL|codec_unmute_output|function|static void codec_unmute_output(struct device *dev)
DECL|codec_write_reg|function|static void codec_write_reg(struct device *dev, struct reg_addr reg, u8_t val)
DECL|i2c_address|member|u8_t i2c_address;
DECL|i2c_dev_name|member|const char *i2c_dev_name;
DECL|i2c_device|member|struct device *i2c_device;
DECL|reg_addr_cache|member|struct reg_addr reg_addr_cache;
