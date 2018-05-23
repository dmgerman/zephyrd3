DECL|I2C_NRFX_TWIM_DEVICE|macro|I2C_NRFX_TWIM_DEVICE
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|event_handler|function|static void event_handler(nrfx_twim_evt_t const *p_event, void *p_context)
DECL|get_dev_config|function|const struct i2c_nrfx_twim_config *get_dev_config(struct device *dev)
DECL|get_dev_data|function|static inline struct i2c_nrfx_twim_data *get_dev_data(struct device *dev)
DECL|i2c_nrfx_twim_configure|function|static int i2c_nrfx_twim_configure(struct device *dev, u32_t dev_config)
DECL|i2c_nrfx_twim_config|struct|struct i2c_nrfx_twim_config {
DECL|i2c_nrfx_twim_data|struct|struct i2c_nrfx_twim_data {
DECL|i2c_nrfx_twim_driver_api|variable|i2c_nrfx_twim_driver_api
DECL|i2c_nrfx_twim_transfer|function|static int i2c_nrfx_twim_transfer(struct device *dev, struct i2c_msg *msgs, u8_t num_msgs, u16_t addr)
DECL|init_twim|function|static int init_twim(struct device *dev, const nrfx_twim_config_t *config)
DECL|res|member|volatile nrfx_err_t res;
DECL|sync|member|struct k_sem sync;
DECL|twim|member|nrfx_twim_t twim;
