DECL|DEV_BASE|macro|DEV_BASE
DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|ack|member|volatile bool ack;
DECL|base|member|I2C_Type *base;
DECL|bitrate|member|u32_t bitrate;
DECL|cmdSize|member|volatile u32_t cmdSize;
DECL|currentDir|member|volatile u32_t currentDir;
DECL|currentMode|member|volatile u32_t currentMode;
DECL|device_sync_sem|member|struct k_sem device_sync_sem;
DECL|i2c_imx_config_1|variable|i2c_imx_config_1
DECL|i2c_imx_config_2|variable|i2c_imx_config_2
DECL|i2c_imx_config_3|variable|i2c_imx_config_3
DECL|i2c_imx_config_4|variable|i2c_imx_config_4
DECL|i2c_imx_config_func_1|function|static void i2c_imx_config_func_1(struct device *dev)
DECL|i2c_imx_config_func_2|function|static void i2c_imx_config_func_2(struct device *dev)
DECL|i2c_imx_config_func_3|function|static void i2c_imx_config_func_3(struct device *dev)
DECL|i2c_imx_config_func_4|function|static void i2c_imx_config_func_4(struct device *dev)
DECL|i2c_imx_configure|function|static int i2c_imx_configure(struct device *dev, u32_t dev_config_raw)
DECL|i2c_imx_config|struct|struct i2c_imx_config {
DECL|i2c_imx_data_1|variable|i2c_imx_data_1
DECL|i2c_imx_data_2|variable|i2c_imx_data_2
DECL|i2c_imx_data_3|variable|i2c_imx_data_3
DECL|i2c_imx_data_4|variable|i2c_imx_data_4
DECL|i2c_imx_data|struct|struct i2c_imx_data {
DECL|i2c_imx_driver_api|variable|i2c_imx_driver_api
DECL|i2c_imx_init|function|static int i2c_imx_init(struct device *dev)
DECL|i2c_imx_isr|function|static void i2c_imx_isr(void *arg)
DECL|i2c_imx_read|function|static void i2c_imx_read(struct device *dev, u8_t *rxBuffer, u8_t rxSize)
DECL|i2c_imx_send_addr|function|static int i2c_imx_send_addr(struct device *dev, u16_t addr, u8_t flags)
DECL|i2c_imx_transfer|function|static int i2c_imx_transfer(struct device *dev, struct i2c_msg *msgs,u8_t num_msgs, u16_t addr)
DECL|i2c_imx_write|function|static bool i2c_imx_write(struct device *dev, u8_t *txBuffer, u8_t txSize)
DECL|i2c_master_transfer|struct|struct i2c_master_transfer {
DECL|irq_config_func|member|void (*irq_config_func)(struct device *dev);
DECL|isBusy|member|volatile bool isBusy;
DECL|rxBuff|member|volatile u8_t *rxBuff;
DECL|rxSize|member|volatile u32_t rxSize;
DECL|transfer|member|struct i2c_master_transfer transfer;
DECL|txBuff|member|const u8_t *txBuff;
DECL|txSize|member|volatile u32_t txSize;
