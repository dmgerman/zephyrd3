DECL|ZEPHYR_DRIVERS_GPIO_GPIO_PCAL9535A_H_|macro|ZEPHYR_DRIVERS_GPIO_GPIO_PCAL9535A_H_
DECL|all|member|u16_t all;
DECL|byte|member|u8_t byte[2];
DECL|dir|member|union gpio_pcal9535a_port_data dir;
DECL|gpio_pcal9535a_config|struct|struct gpio_pcal9535a_config {
DECL|gpio_pcal9535a_drv_data|struct|struct gpio_pcal9535a_drv_data {
DECL|gpio_pcal9535a_port_data|union|union gpio_pcal9535a_port_data {
DECL|i2c_master_dev_name|member|const char * const i2c_master_dev_name;
DECL|i2c_master|member|struct device *i2c_master;
DECL|i2c_slave_addr|member|u16_t i2c_slave_addr;
DECL|out_pol_inv|member|u32_t out_pol_inv;
DECL|output|member|union gpio_pcal9535a_port_data output;
DECL|pol_inv|member|union gpio_pcal9535a_port_data pol_inv;
DECL|port|member|u8_t port[2];
DECL|pud_en|member|union gpio_pcal9535a_port_data pud_en;
DECL|pud_sel|member|union gpio_pcal9535a_port_data pud_sel;
DECL|reg_cache|member|} reg_cache;
DECL|stride|member|u8_t stride[2];
DECL|stride|member|u8_t stride[2];
