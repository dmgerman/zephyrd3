DECL|_GPIO_PCAL9535A_H_|macro|_GPIO_PCAL9535A_H_
DECL|gpio_pcal9535a_config|struct|struct gpio_pcal9535a_config {
DECL|gpio_pcal9535a_drv_data|struct|struct gpio_pcal9535a_drv_data {
DECL|i2c_master_dev_name|member|const char * const i2c_master_dev_name;
DECL|i2c_master|member|struct device *i2c_master;
DECL|i2c_slave_addr|member|uint16_t i2c_slave_addr;
DECL|out_pol_inv|member|uint32_t out_pol_inv;
DECL|timer|member|struct nano_timer timer;
