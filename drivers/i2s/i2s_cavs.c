DECL|CAVS_SSP_WORD_PER_FRAME_MAX|macro|CAVS_SSP_WORD_PER_FRAME_MAX
DECL|CAVS_SSP_WORD_PER_FRAME_MIN|macro|CAVS_SSP_WORD_PER_FRAME_MIN
DECL|CAVS_SSP_WORD_SIZE_BITS_MAX|macro|CAVS_SSP_WORD_SIZE_BITS_MAX
DECL|CAVS_SSP_WORD_SIZE_BITS_MIN|macro|CAVS_SSP_WORD_SIZE_BITS_MIN
DECL|DCACHE_CLEAN|macro|DCACHE_CLEAN
DECL|DCACHE_CLEAN|macro|DCACHE_CLEAN
DECL|DCACHE_INVALIDATE|macro|DCACHE_INVALIDATE
DECL|DCACHE_INVALIDATE|macro|DCACHE_INVALIDATE
DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|DEV_NAME|macro|DEV_NAME
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|buf|member|struct queue_item *buf;
DECL|cfg|member|struct i2s_config cfg;
DECL|dev_dma|member|struct device *dev_dma;
DECL|dma_cfg|member|struct dma_config dma_cfg;
DECL|dma_channel|member|u32_t dma_channel;
DECL|dma_tx_callback|function|static void dma_tx_callback(struct device *dev_dma, u32_t channel, int status)
DECL|get_dev_from_dma_channel|function|static struct device *get_dev_from_dma_channel(u32_t dma_channel)
DECL|head|member|u16_t head;
DECL|i2s1_cavs_config|variable|i2s1_cavs_config
DECL|i2s1_cavs_data|variable|i2s1_cavs_data
DECL|i2s1_cavs_initialize|function|static int i2s1_cavs_initialize(struct device *dev)
DECL|i2s1_irq_config|function|static void i2s1_irq_config(void)
DECL|i2s_cavs_configure|function|static int i2s_cavs_configure(struct device *dev, enum i2s_dir dir, struct i2s_config *i2s_cfg)
DECL|i2s_cavs_config|struct|struct i2s_cavs_config {
DECL|i2s_cavs_dev_data|struct|struct i2s_cavs_dev_data {
DECL|i2s_cavs_driver_api|variable|i2s_cavs_driver_api
DECL|i2s_cavs_isr|function|static void i2s_cavs_isr(void *arg)
DECL|i2s_cavs_trigger|function|static int i2s_cavs_trigger(struct device *dev, enum i2s_dir dir, enum i2s_trigger_cmd cmd)
DECL|i2s_cavs_write|function|static int i2s_cavs_write(struct device *dev, void *mem_block, size_t size)
DECL|irq_config|member|void (*irq_config)(void);
DECL|irq_id|member|u32_t irq_id;
DECL|last_block|member|bool last_block;
DECL|len|member|u16_t len;
DECL|mem_block_queue|member|struct ring_buf mem_block_queue;
DECL|mem_block|member|void *mem_block;
DECL|mem_block|member|void *mem_block;
DECL|modulo_inc|function|static inline u16_t modulo_inc(u16_t val, u16_t max)
DECL|queue_drop|member|void (*queue_drop)(struct stream *);
DECL|queue_get|function|static int queue_get(struct ring_buf *rb, u8_t mode, void **mem_block,size_t *size)
DECL|queue_item|struct|struct queue_item {
DECL|queue_put|function|static int queue_put(struct ring_buf *rb, u8_t mode, void *mem_block,size_t size)
DECL|regs|member|struct i2s_cavs_ssp *regs;
DECL|ring_buf|struct|struct ring_buf {
DECL|sem|member|struct k_sem sem;
DECL|size|member|size_t size;
DECL|start_dma|function|static int start_dma(struct device *dev_dma, u32_t channel, struct dma_config *cfg, void *src, void *dst, u32_t blk_size)
DECL|state|member|s32_t state;
DECL|stream_disable|member|void (*stream_disable)(struct stream *, struct i2s_cavs_ssp *const,
DECL|stream_start|member|int (*stream_start)(struct stream *, struct i2s_cavs_ssp *const,
DECL|stream|struct|struct stream {
DECL|tail|member|u16_t tail;
DECL|tx_0_ring_buf|variable|tx_0_ring_buf
DECL|tx_queue_drop|function|static void tx_queue_drop(struct stream *strm)
DECL|tx_stream_disable|function|static void tx_stream_disable(struct stream *strm, struct i2s_cavs_ssp *const ssp, struct device *dev_dma)
DECL|tx_stream_start|function|static int tx_stream_start(struct stream *strm, struct i2s_cavs_ssp *const ssp, struct device *dev_dma)
DECL|tx|member|struct stream tx;
