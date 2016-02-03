DECL|DBG|macro|DBG
DECL|DBG|macro|DBG
DECL|DBG|macro|DBG
DECL|STATE_BUSY|macro|STATE_BUSY
DECL|STATE_ERR|macro|STATE_ERR
DECL|STATE_READY|macro|STATE_READY
DECL|STATE_RX|macro|STATE_RX
DECL|STATE_TX|macro|STATE_TX
DECL|api_funcs|variable|api_funcs
DECL|clk_div_calc|function|static uint32_t clk_div_calc(struct device *dev)
DECL|config_func_0|function|static void config_func_0(struct device *dev)
DECL|config_func_1|function|static void config_func_1(struct device *dev)
DECL|config_func_t|typedef|typedef void (*config_func_t)(struct device *port);
DECL|config_func|member|config_func_t config_func;
DECL|dev_config_0|variable|dev_config_0
DECL|dev_config_1|variable|dev_config_1
DECL|dev_config|member|union dev_config dev_config;
DECL|dev_data_0|variable|dev_data_0
DECL|dev_data_1|variable|dev_data_1
DECL|i2c_sam3_dev_config|struct|struct i2c_sam3_dev_config {
DECL|i2c_sam3_dev_data|struct|struct i2c_sam3_dev_data {
DECL|i2c_sam3_init|function|static int i2c_sam3_init(struct device *dev)
DECL|i2c_sam3_isr|function|static void i2c_sam3_isr(void *arg)
DECL|i2c_sam3_resume|function|static int i2c_sam3_resume(struct device *dev)
DECL|i2c_sam3_runtime_configure|function|static int i2c_sam3_runtime_configure(struct device *dev, uint32_t config)
DECL|i2c_sam3_suspend|function|static int i2c_sam3_suspend(struct device *dev)
DECL|i2c_sam3_transfer|function|static int i2c_sam3_transfer(struct device *dev, struct i2c_msg *msgs, uint8_t num_msgs, uint16_t slave_address)
DECL|msg_read|function|static inline void msg_read(struct device *dev)
DECL|msg_write|function|static inline void msg_write(struct device *dev)
DECL|port|member|volatile struct __twi *port;
DECL|sr_bits_set_wait|function|static inline void sr_bits_set_wait(struct device *dev, uint32_t bits)
DECL|state|member|volatile uint32_t state;
DECL|status_reg_clear|function|static inline void status_reg_clear(struct device *dev)
DECL|sync|member|device_sync_call_t sync;
DECL|transfer_setup|function|static inline void transfer_setup(struct device *dev, uint16_t slave_address)
DECL|xfr_buf|member|uint8_t *xfr_buf;
DECL|xfr_flags|member|uint32_t xfr_flags;
DECL|xfr_len|member|uint32_t xfr_len;
