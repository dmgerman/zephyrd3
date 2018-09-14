DECL|I2S_DIR_RX|enumerator|I2S_DIR_RX,
DECL|I2S_DIR_TX|enumerator|I2S_DIR_TX,
DECL|I2S_FMT_BIT_CLK_INV|macro|I2S_FMT_BIT_CLK_INV
DECL|I2S_FMT_CLK_FORMAT_MASK|macro|I2S_FMT_CLK_FORMAT_MASK
DECL|I2S_FMT_CLK_FORMAT_SHIFT|macro|I2S_FMT_CLK_FORMAT_SHIFT
DECL|I2S_FMT_CLK_IF_IB|macro|I2S_FMT_CLK_IF_IB
DECL|I2S_FMT_CLK_IF_NB|macro|I2S_FMT_CLK_IF_NB
DECL|I2S_FMT_CLK_NF_IB|macro|I2S_FMT_CLK_NF_IB
DECL|I2S_FMT_CLK_NF_NB|macro|I2S_FMT_CLK_NF_NB
DECL|I2S_FMT_DATA_FORMAT_I2S|macro|I2S_FMT_DATA_FORMAT_I2S
DECL|I2S_FMT_DATA_FORMAT_LEFT_JUSTIFIED|macro|I2S_FMT_DATA_FORMAT_LEFT_JUSTIFIED
DECL|I2S_FMT_DATA_FORMAT_MASK|macro|I2S_FMT_DATA_FORMAT_MASK
DECL|I2S_FMT_DATA_FORMAT_PCM_LONG|macro|I2S_FMT_DATA_FORMAT_PCM_LONG
DECL|I2S_FMT_DATA_FORMAT_PCM_SHORT|macro|I2S_FMT_DATA_FORMAT_PCM_SHORT
DECL|I2S_FMT_DATA_FORMAT_RIGHT_JUSTIFIED|macro|I2S_FMT_DATA_FORMAT_RIGHT_JUSTIFIED
DECL|I2S_FMT_DATA_FORMAT_SHIFT|macro|I2S_FMT_DATA_FORMAT_SHIFT
DECL|I2S_FMT_DATA_ORDER_INV|macro|I2S_FMT_DATA_ORDER_INV
DECL|I2S_FMT_DATA_ORDER_LSB|macro|I2S_FMT_DATA_ORDER_LSB
DECL|I2S_FMT_DATA_ORDER_MSB|macro|I2S_FMT_DATA_ORDER_MSB
DECL|I2S_FMT_FRAME_CLK_INV|macro|I2S_FMT_FRAME_CLK_INV
DECL|I2S_OPT_BIT_CLK_CONT|macro|I2S_OPT_BIT_CLK_CONT
DECL|I2S_OPT_BIT_CLK_GATED|macro|I2S_OPT_BIT_CLK_GATED
DECL|I2S_OPT_BIT_CLK_MASTER|macro|I2S_OPT_BIT_CLK_MASTER
DECL|I2S_OPT_BIT_CLK_SLAVE|macro|I2S_OPT_BIT_CLK_SLAVE
DECL|I2S_OPT_FRAME_CLK_MASTER|macro|I2S_OPT_FRAME_CLK_MASTER
DECL|I2S_OPT_FRAME_CLK_SLAVE|macro|I2S_OPT_FRAME_CLK_SLAVE
DECL|I2S_OPT_LOOPBACK|macro|I2S_OPT_LOOPBACK
DECL|I2S_OPT_PINGPONG|macro|I2S_OPT_PINGPONG
DECL|I2S_STATE_ERROR|enumerator|I2S_STATE_ERROR,
DECL|I2S_STATE_NOT_READY|enumerator|I2S_STATE_NOT_READY,
DECL|I2S_STATE_READY|enumerator|I2S_STATE_READY,
DECL|I2S_STATE_RUNNING|enumerator|I2S_STATE_RUNNING,
DECL|I2S_STATE_STOPPING|enumerator|I2S_STATE_STOPPING,
DECL|I2S_TRIGGER_DRAIN|enumerator|I2S_TRIGGER_DRAIN,
DECL|I2S_TRIGGER_DROP|enumerator|I2S_TRIGGER_DROP,
DECL|I2S_TRIGGER_PREPARE|enumerator|I2S_TRIGGER_PREPARE,
DECL|I2S_TRIGGER_START|enumerator|I2S_TRIGGER_START,
DECL|I2S_TRIGGER_STOP|enumerator|I2S_TRIGGER_STOP,
DECL|ZEPHYR_INCLUDE_I2S_H_|macro|ZEPHYR_INCLUDE_I2S_H_
DECL|_impl_i2s_trigger|function|static inline int _impl_i2s_trigger(struct device *dev, enum i2s_dir dir, enum i2s_trigger_cmd cmd)
DECL|block_size|member|size_t block_size;
DECL|channels|member|u8_t channels;
DECL|config_get|member|struct i2s_config *(*config_get)(struct device *dev,
DECL|configure|member|int (*configure)(struct device *dev, enum i2s_dir dir,
DECL|format|member|i2s_fmt_t format;
DECL|frame_clk_freq|member|u32_t frame_clk_freq;
DECL|i2s_config_get|function|static inline struct i2s_config *i2s_config_get(struct device *dev,enum i2s_dir dir)
DECL|i2s_configure|function|static inline int i2s_configure(struct device *dev, enum i2s_dir dir,struct i2s_config *cfg)
DECL|i2s_config|struct|struct i2s_config {
DECL|i2s_dir|enum|enum i2s_dir {
DECL|i2s_driver_api|struct|struct i2s_driver_api {
DECL|i2s_fmt_t|typedef|typedef u8_t i2s_fmt_t;
DECL|i2s_opt_t|typedef|typedef u8_t i2s_opt_t;
DECL|i2s_read|function|static inline int i2s_read(struct device *dev, void **mem_block, size_t *size)
DECL|i2s_state|enum|enum i2s_state {
DECL|i2s_trigger_cmd|enum|enum i2s_trigger_cmd {
DECL|i2s_write|function|static inline int i2s_write(struct device *dev, void *mem_block, size_t size)
DECL|mem_slab|member|struct k_mem_slab *mem_slab;
DECL|options|member|i2s_opt_t options;
DECL|read|member|int (*read)(struct device *dev, void **mem_block, size_t *size);
DECL|timeout|member|s32_t timeout;
DECL|trigger|member|int (*trigger)(struct device *dev, enum i2s_dir dir,
DECL|word_size|member|u8_t word_size;
DECL|write|member|int (*write)(struct device *dev, void *mem_block, size_t size);
