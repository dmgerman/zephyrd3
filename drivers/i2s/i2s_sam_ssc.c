DECL|DCACHE_CLEAN|macro|DCACHE_CLEAN
DECL|DCACHE_INVALIDATE|macro|DCACHE_INVALIDATE
DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|DEV_NAME|macro|DEV_NAME
DECL|MODULO_INC|macro|MODULO_INC
DECL|SAM_SSC_WORD_PER_FRAME_MAX|macro|SAM_SSC_WORD_PER_FRAME_MAX
DECL|SAM_SSC_WORD_PER_FRAME_MIN|macro|SAM_SSC_WORD_PER_FRAME_MIN
DECL|SAM_SSC_WORD_SIZE_BITS_MAX|macro|SAM_SSC_WORD_SIZE_BITS_MAX
DECL|SAM_SSC_WORD_SIZE_BITS_MIN|macro|SAM_SSC_WORD_SIZE_BITS_MIN
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|bit_clock_set|function|static int bit_clock_set(Ssc *const ssc, u32_t bit_clk_freq)
DECL|buf|member|struct queue_item *buf;
DECL|cfg|member|struct i2s_config cfg;
DECL|dev_dma|member|struct device *dev_dma;
DECL|dma_cfg|member|struct dma_config dma_cfg;
DECL|dma_channel|member|u32_t dma_channel;
DECL|dma_rx_callback|function|static void dma_rx_callback(struct device *dev_dma, u32_t channel, int status)
DECL|dma_tx_callback|function|static void dma_tx_callback(struct device *dev_dma, u32_t channel, int status)
DECL|get_dev_from_dma_channel|function|static struct device *get_dev_from_dma_channel(u32_t dma_channel)
DECL|get_word_size_bytes|function|static u8_t get_word_size_bytes(u8_t bit_size)
DECL|head|member|u16_t head;
DECL|i2s0_pins|variable|i2s0_pins
DECL|i2s0_sam_config|variable|i2s0_sam_config
DECL|i2s0_sam_data|variable|i2s0_sam_data
DECL|i2s0_sam_irq_config|function|static void i2s0_sam_irq_config(void)
DECL|i2s_sam_config_get|function|static struct i2s_config *i2s_sam_config_get(struct device *dev, enum i2s_dir dir)
DECL|i2s_sam_configure|function|static int i2s_sam_configure(struct device *dev, enum i2s_dir dir, struct i2s_config *i2s_cfg)
DECL|i2s_sam_dev_cfg|struct|struct i2s_sam_dev_cfg {
DECL|i2s_sam_dev_data|struct|struct i2s_sam_dev_data {
DECL|i2s_sam_driver_api|variable|i2s_sam_driver_api
DECL|i2s_sam_initialize|function|static int i2s_sam_initialize(struct device *dev)
DECL|i2s_sam_isr|function|static void i2s_sam_isr(void *arg)
DECL|i2s_sam_read|function|static int i2s_sam_read(struct device *dev, void **mem_block, size_t *size)
DECL|i2s_sam_trigger|function|static int i2s_sam_trigger(struct device *dev, enum i2s_dir dir, enum i2s_trigger_cmd cmd)
DECL|i2s_sam_write|function|static int i2s_sam_write(struct device *dev, void *mem_block, size_t size)
DECL|irq_config|member|void (*irq_config)(void);
DECL|irq_id|member|u8_t irq_id;
DECL|last_block|member|bool last_block;
DECL|len|member|u16_t len;
DECL|mem_block_queue|member|struct ring_buf mem_block_queue;
DECL|mem_block|member|void *mem_block;
DECL|mem_block|member|void *mem_block;
DECL|periph_id|member|u8_t periph_id;
DECL|pin_list_size|member|u8_t pin_list_size;
DECL|pin_list|member|const struct soc_gpio_pin *pin_list;
DECL|queue_drop|member|void (*queue_drop)(struct stream *);
DECL|queue_get|function|static int queue_get(struct ring_buf *rb, void **mem_block, size_t *size)
DECL|queue_item|struct|struct queue_item {
DECL|queue_put|function|static int queue_put(struct ring_buf *rb, void *mem_block, size_t size)
DECL|regs|member|Ssc *regs;
DECL|ring_buf|struct|struct ring_buf {
DECL|rx_0_ring_buf|variable|rx_0_ring_buf
DECL|rx_queue_drop|function|static void rx_queue_drop(struct stream *stream)
DECL|rx_stream_disable|function|static void rx_stream_disable(struct stream *stream, Ssc *const ssc, struct device *dev_dma)
DECL|rx_stream_start|function|static int rx_stream_start(struct stream *stream, Ssc *const ssc, struct device *dev_dma)
DECL|rx|member|struct stream rx;
DECL|sem|member|struct k_sem sem;
DECL|set_data_format|member|int (*set_data_format)(const struct i2s_sam_dev_cfg *const,
DECL|set_rx_data_format|function|static int set_rx_data_format(const struct i2s_sam_dev_cfg *const dev_cfg, struct i2s_config *i2s_cfg)
DECL|set_tx_data_format|function|static int set_tx_data_format(const struct i2s_sam_dev_cfg *const dev_cfg, struct i2s_config *i2s_cfg)
DECL|size|member|size_t size;
DECL|start_dma|function|static int start_dma(struct device *dev_dma, u32_t channel, struct dma_config *cfg, void *src, void *dst, u32_t blk_size)
DECL|state|member|s32_t state;
DECL|stream_disable|member|void (*stream_disable)(struct stream *, Ssc *const, struct device *);
DECL|stream_start|member|int (*stream_start)(struct stream *, Ssc *const, struct device *);
DECL|stream|struct|struct stream {
DECL|tail|member|u16_t tail;
DECL|tx_0_ring_buf|variable|tx_0_ring_buf
DECL|tx_queue_drop|function|static void tx_queue_drop(struct stream *stream)
DECL|tx_stream_disable|function|static void tx_stream_disable(struct stream *stream, Ssc *const ssc, struct device *dev_dma)
DECL|tx_stream_start|function|static int tx_stream_start(struct stream *stream, Ssc *const ssc, struct device *dev_dma)
DECL|tx|member|struct stream tx;
