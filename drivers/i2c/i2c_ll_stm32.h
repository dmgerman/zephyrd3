DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|_STM32_I2C_H_|macro|_STM32_I2C_H_
DECL|buf|member|u8_t *buf;
DECL|current|member|} current;
DECL|dev_config|member|union dev_config dev_config;
DECL|device_sync_sem|member|struct k_sem device_sync_sem;
DECL|flags|member|unsigned int flags;
DECL|i2c_stm32_config|struct|struct i2c_stm32_config {
DECL|i2c_stm32_data|struct|struct i2c_stm32_data {
DECL|i2c|member|I2C_TypeDef *i2c;
DECL|irq_config_func_t|typedef|typedef void (*irq_config_func_t)(struct device *port);
DECL|irq_config_func|member|irq_config_func_t irq_config_func;
DECL|is_err|member|unsigned int is_err;
DECL|is_nack|member|unsigned int is_nack;
DECL|is_restart|member|unsigned int is_restart;
DECL|is_write|member|unsigned int is_write;
DECL|len|member|unsigned int len;
DECL|msg|member|struct i2c_msg *msg;
DECL|pclken|member|struct stm32_pclken pclken;
DECL|slave_address|member|u16_t slave_address;
