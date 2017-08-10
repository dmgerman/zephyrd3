DECL|DEV_BASE|macro|DEV_BASE
DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|base|member|I2C_Type *base;
DECL|bitrate|member|u32_t bitrate;
DECL|callback_status|member|status_t callback_status;
DECL|clock_source|member|clock_name_t clock_source;
DECL|device_sync_sem|member|struct k_sem device_sync_sem;
DECL|handle|member|i2c_master_handle_t handle;
DECL|i2c_mcux_config_0|variable|i2c_mcux_config_0
DECL|i2c_mcux_config_1|variable|i2c_mcux_config_1
DECL|i2c_mcux_config_func_0|function|static void i2c_mcux_config_func_0(struct device *dev)
DECL|i2c_mcux_config_func_1|function|static void i2c_mcux_config_func_1(struct device *dev)
DECL|i2c_mcux_configure|function|static int i2c_mcux_configure(struct device *dev, u32_t dev_config_raw)
DECL|i2c_mcux_config|struct|struct i2c_mcux_config {
DECL|i2c_mcux_convert_flags|function|static u32_t i2c_mcux_convert_flags(int msg_flags)
DECL|i2c_mcux_data_0|variable|i2c_mcux_data_0
DECL|i2c_mcux_data_1|variable|i2c_mcux_data_1
DECL|i2c_mcux_data|struct|struct i2c_mcux_data {
DECL|i2c_mcux_driver_api|variable|i2c_mcux_driver_api
DECL|i2c_mcux_init|function|static int i2c_mcux_init(struct device *dev)
DECL|i2c_mcux_isr|function|static void i2c_mcux_isr(void *arg)
DECL|i2c_mcux_master_transfer_callback|function|static void i2c_mcux_master_transfer_callback(I2C_Type *base,i2c_master_handle_t *handle, status_t status, void *userData)
DECL|i2c_mcux_transfer|function|static int i2c_mcux_transfer(struct device *dev, struct i2c_msg *msgs,u8_t num_msgs, u16_t addr)
DECL|irq_config_func|member|void (*irq_config_func)(struct device *dev);
