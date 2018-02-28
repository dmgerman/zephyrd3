DECL|BLOCK_SIZE_BYTES|macro|BLOCK_SIZE_BYTES
DECL|BLOCK_SIZE|macro|BLOCK_SIZE
DECL|FRAME_CLK_FREQ|macro|FRAME_CLK_FREQ
DECL|I2S_DEV_NAME|macro|I2S_DEV_NAME
DECL|NUM_OF_CHANNELS|macro|NUM_OF_CHANNELS
DECL|NUM_TX_BLOCKS|macro|NUM_TX_BLOCKS
DECL|PRIORITY|macro|PRIORITY
DECL|SAMPLE_NO|macro|SAMPLE_NO
DECL|SLEEPTIME|macro|SLEEPTIME
DECL|STACKSIZE|macro|STACKSIZE
DECL|TIMEOUT|macro|TIMEOUT
DECL|fill_buf_const|function|static void fill_buf_const(s16_t *tx_block, s16_t val_l, s16_t val_r)
DECL|i2s_thread|function|void i2s_thread(void *dummy1, void *dummy2, void *dummy3)
DECL|ping_block|variable|ping_block
DECL|pong_block|variable|pong_block
DECL|test_i2s_transfer_pingpong|function|void test_i2s_transfer_pingpong(void)
DECL|test_i2s_transfer_short|function|void test_i2s_transfer_short(void)
DECL|test_i2s_tx_transfer_configure_0|function|void test_i2s_tx_transfer_configure_0(u8_t mode)
DECL|tx_block_write|function|static int tx_block_write(struct device *dev_i2s, s16_t att_l, s16_t att_r, int err)
DECL|tx_pingpong_write|function|static int tx_pingpong_write(struct device *dev_i2s, s16_t *tx_block, s16_t att_l, s16_t att_r, int err)
