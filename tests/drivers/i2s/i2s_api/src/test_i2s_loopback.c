DECL|BLOCK_SIZE|macro|BLOCK_SIZE
DECL|FRAME_CLK_FREQ|macro|FRAME_CLK_FREQ
DECL|I2S_DEV_NAME|macro|I2S_DEV_NAME
DECL|NUM_RX_BLOCKS|macro|NUM_RX_BLOCKS
DECL|NUM_TX_BLOCKS|macro|NUM_TX_BLOCKS
DECL|SAMPLE_NO|macro|SAMPLE_NO
DECL|TEST_I2S_TRANSFER_LONG_REPEAT_COUNT|macro|TEST_I2S_TRANSFER_LONG_REPEAT_COUNT
DECL|TEST_I2S_TRANSFER_RESTART_PAUSE_LENGTH_US|macro|TEST_I2S_TRANSFER_RESTART_PAUSE_LENGTH_US
DECL|TEST_I2S_TRANSFER_RX_OVERRUN_PAUSE_LENGTH_US|macro|TEST_I2S_TRANSFER_RX_OVERRUN_PAUSE_LENGTH_US
DECL|TIMEOUT|macro|TIMEOUT
DECL|data_l|variable|data_l
DECL|data_r|variable|data_r
DECL|fill_buf_const|function|static void fill_buf_const(s16_t *tx_block, s16_t val_l, s16_t val_r)
DECL|fill_buf|function|static void fill_buf(s16_t *tx_block, int att)
DECL|rx_block_read|function|static int rx_block_read(struct device *dev_i2s, int att)
DECL|test_i2s_rx_empty_timeout|function|void test_i2s_rx_empty_timeout(void)
DECL|test_i2s_rx_sync_start|function|void test_i2s_rx_sync_start(void)
DECL|test_i2s_rx_transfer_configure_0|function|void test_i2s_rx_transfer_configure_0(void)
DECL|test_i2s_transfer_long|function|void test_i2s_transfer_long(void)
DECL|test_i2s_transfer_restart|function|void test_i2s_transfer_restart(void)
DECL|test_i2s_transfer_rx_overrun|function|void test_i2s_transfer_rx_overrun(void)
DECL|test_i2s_transfer_short|function|void test_i2s_transfer_short(void)
DECL|test_i2s_transfer_tx_underrun|function|void test_i2s_transfer_tx_underrun(void)
DECL|test_i2s_tx_transfer_configure_0|function|void test_i2s_tx_transfer_configure_0(void)
DECL|tx_block_write|function|static int tx_block_write(struct device *dev_i2s, int att, int err)
DECL|verify_buf_const|function|static int verify_buf_const(s16_t *rx_block, s16_t val_l, s16_t val_r)
DECL|verify_buf|function|static int verify_buf(s16_t *rx_block, int att)
