DECL|MCP9808_ALERT_CNT|macro|MCP9808_ALERT_CNT
DECL|MCP9808_ALERT_INT|macro|MCP9808_ALERT_INT
DECL|MCP9808_INT_CLEAR|macro|MCP9808_INT_CLEAR
DECL|MCP9808_REG_CONFIG|macro|MCP9808_REG_CONFIG
DECL|MCP9808_REG_CRITICAL|macro|MCP9808_REG_CRITICAL
DECL|MCP9808_REG_LOWER_LIMIT|macro|MCP9808_REG_LOWER_LIMIT
DECL|MCP9808_REG_TEMP_AMB|macro|MCP9808_REG_TEMP_AMB
DECL|MCP9808_REG_UPPER_LIMIT|macro|MCP9808_REG_UPPER_LIMIT
DECL|MCP9808_SIGN_BIT|macro|MCP9808_SIGN_BIT
DECL|MCP9808_TEMP_FRAC_MASK|macro|MCP9808_TEMP_FRAC_MASK
DECL|MCP9808_TEMP_INT_MASK|macro|MCP9808_TEMP_INT_MASK
DECL|MCP9808_TEMP_INT_SHIFT|macro|MCP9808_TEMP_INT_SHIFT
DECL|MCP9808_TEMP_MAX|macro|MCP9808_TEMP_MAX
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|ZEPHYR_DRIVERS_SENSOR_MCP9808_MCP9808_H_|macro|ZEPHYR_DRIVERS_SENSOR_MCP9808_MCP9808_H_
DECL|dev|member|struct device *dev;
DECL|gpio_cb|member|struct gpio_callback gpio_cb;
DECL|i2c_master|member|struct device *i2c_master;
DECL|i2c_slave_addr|member|u16_t i2c_slave_addr;
DECL|mcp9808_attr_set|function|static inline int mcp9808_attr_set(struct device *dev, enum sensor_channel chan, enum sensor_attribute attr, const struct sensor_value *val)
DECL|mcp9808_data|struct|struct mcp9808_data {
DECL|mcp9808_setup_interrupt|function|static void mcp9808_setup_interrupt(struct device *dev)
DECL|mcp9808_trigger_set|function|static inline int mcp9808_trigger_set(struct device *dev, const struct sensor_trigger *trig, sensor_trigger_handler_t handler)
DECL|reg_val|member|u16_t reg_val;
DECL|sem|member|struct k_sem sem;
DECL|trigger_handler|member|sensor_trigger_handler_t trigger_handler;
DECL|trig|member|struct sensor_trigger trig;
DECL|work|member|struct k_work work;
