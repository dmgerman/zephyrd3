DECL|DEV_BASE|macro|DEV_BASE
DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|I2C_CC32XX_ERROR|enumerator|I2C_CC32XX_ERROR = 0xFF
DECL|I2C_CC32XX_READ_MODE|enumerator|I2C_CC32XX_READ_MODE,
DECL|I2C_CC32XX_WRITE_MODE|enumerator|I2C_CC32XX_WRITE_MODE,
DECL|I2C_MASTER_CMD_BURST_RECEIVE_CONT_NACK|macro|I2C_MASTER_CMD_BURST_RECEIVE_CONT_NACK
DECL|I2C_MASTER_CMD_BURST_RECEIVE_START_NACK|macro|I2C_MASTER_CMD_BURST_RECEIVE_START_NACK
DECL|I2C_MASTER_CMD_BURST_RECEIVE_STOP|macro|I2C_MASTER_CMD_BURST_RECEIVE_STOP
DECL|I2C_SEM_MASK|macro|I2C_SEM_MASK
DECL|I2C_SEM_TAKE|macro|I2C_SEM_TAKE
DECL|IS_I2C_MSG_WRITE|macro|IS_I2C_MSG_WRITE
DECL|_i2c_cc32xx_isr_handle_read|function|static void _i2c_cc32xx_isr_handle_read(u32_t base,struct i2c_cc32xx_data *data)
DECL|_i2c_cc32xx_isr_handle_write|function|static void _i2c_cc32xx_isr_handle_write(u32_t base, struct i2c_cc32xx_data *data)
DECL|_i2c_cc32xx_prime_transfer|function|static void _i2c_cc32xx_prime_transfer(struct device *dev, struct i2c_msg *msg, u16_t addr)
DECL|base|member|u32_t base;
DECL|bitrate|member|u32_t bitrate;
DECL|configure_i2c_irq|function|static void configure_i2c_irq(const struct i2c_cc32xx_config *config)
DECL|i2c_cc32xx_configure|function|static int i2c_cc32xx_configure(struct device *dev, u32_t dev_config_raw)
DECL|i2c_cc32xx_config|struct|struct i2c_cc32xx_config {
DECL|i2c_cc32xx_config|variable|i2c_cc32xx_config
DECL|i2c_cc32xx_data|struct|struct i2c_cc32xx_data {
DECL|i2c_cc32xx_data|variable|i2c_cc32xx_data
DECL|i2c_cc32xx_driver_api|variable|i2c_cc32xx_driver_api
DECL|i2c_cc32xx_init|function|static int i2c_cc32xx_init(struct device *dev)
DECL|i2c_cc32xx_isr|function|static void i2c_cc32xx_isr(void *arg)
DECL|i2c_cc32xx_state|enum|enum i2c_cc32xx_state {
DECL|i2c_cc32xx_transfer|function|static int i2c_cc32xx_transfer(struct device *dev, struct i2c_msg *msgs, u8_t num_msgs, u16_t addr)
DECL|irq_no|member|unsigned int irq_no;
DECL|msg|member|struct i2c_msg msg; /* Cache msg for transfer state machine */
DECL|mutex|member|struct k_sem mutex;
DECL|slave_addr|member|u16_t slave_addr; /* Cache slave address for ISR use */
DECL|state|member|volatile enum i2c_cc32xx_state state;
DECL|transfer_complete|member|struct k_sem transfer_complete;
