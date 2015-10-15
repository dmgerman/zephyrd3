DECL|DBG|macro|DBG
DECL|DBG|macro|DBG
DECL|DBG|macro|DBG
DECL|REG_CONF_PORT0|macro|REG_CONF_PORT0
DECL|REG_CONG_PORT1|macro|REG_CONG_PORT1
DECL|REG_INPUT_LATCH_PORT0|macro|REG_INPUT_LATCH_PORT0
DECL|REG_INPUT_LATCH_PORT1|macro|REG_INPUT_LATCH_PORT1
DECL|REG_INPUT_PORT0|macro|REG_INPUT_PORT0
DECL|REG_INPUT_PORT1|macro|REG_INPUT_PORT1
DECL|REG_INT_MASK_PORT0|macro|REG_INT_MASK_PORT0
DECL|REG_INT_MASK_PORT1|macro|REG_INT_MASK_PORT1
DECL|REG_INT_STATUS_PORT0|macro|REG_INT_STATUS_PORT0
DECL|REG_INT_STATUS_PORT1|macro|REG_INT_STATUS_PORT1
DECL|REG_OUTPUT_PORT0|macro|REG_OUTPUT_PORT0
DECL|REG_OUTPUT_PORT1|macro|REG_OUTPUT_PORT1
DECL|REG_OUTPUT_PORT_CONF|macro|REG_OUTPUT_PORT_CONF
DECL|REG_OUT_DRV_STRENGTH_PORT0_H|macro|REG_OUT_DRV_STRENGTH_PORT0_H
DECL|REG_OUT_DRV_STRENGTH_PORT0_L|macro|REG_OUT_DRV_STRENGTH_PORT0_L
DECL|REG_OUT_DRV_STRENGTH_PORT1_H|macro|REG_OUT_DRV_STRENGTH_PORT1_H
DECL|REG_OUT_DRV_STRENGTH_PORT1_L|macro|REG_OUT_DRV_STRENGTH_PORT1_L
DECL|REG_POL_INV_PORT0|macro|REG_POL_INV_PORT0
DECL|REG_POL_INV_PORT1|macro|REG_POL_INV_PORT1
DECL|REG_PUD_EN_PORT0|macro|REG_PUD_EN_PORT0
DECL|REG_PUD_EN_PORT1|macro|REG_PUD_EN_PORT1
DECL|REG_PUD_SEL_PORT0|macro|REG_PUD_SEL_PORT0
DECL|REG_PUD_SEL_PORT1|macro|REG_PUD_SEL_PORT1
DECL|WAIT_10MS|macro|WAIT_10MS
DECL|_has_i2c_master|function|static inline int _has_i2c_master(struct device *dev)
DECL|_read_port_regs|function|static int _read_port_regs(struct device *dev, uint8_t reg, union gpio_pcal9535a_port_data *buf)
DECL|_setup_pin_dir|function|static int _setup_pin_dir(struct device *dev, int access_op, uint32_t pin, int flags)
DECL|_setup_pin_polarity|function|static int _setup_pin_polarity(struct device *dev, int access_op, uint32_t pin, int flags)
DECL|_setup_pin_pullupdown|function|static int _setup_pin_pullupdown(struct device *dev, int access_op, uint32_t pin, int flags)
DECL|_wait_10ms|function|static inline void _wait_10ms(struct nano_timer *timer)
DECL|_write_port_regs|function|static int _write_port_regs(struct device *dev, uint8_t reg, union gpio_pcal9535a_port_data *buf)
DECL|gpio_pcal9535a_0_cfg|variable|gpio_pcal9535a_0_cfg
DECL|gpio_pcal9535a_0_drvdata|variable|gpio_pcal9535a_0_drvdata
DECL|gpio_pcal9535a_1_cfg|variable|gpio_pcal9535a_1_cfg
DECL|gpio_pcal9535a_1_drvdata|variable|gpio_pcal9535a_1_drvdata
DECL|gpio_pcal9535a_2_cfg|variable|gpio_pcal9535a_2_cfg
DECL|gpio_pcal9535a_2_drvdata|variable|gpio_pcal9535a_2_drvdata
DECL|gpio_pcal9535a_3_cfg|variable|gpio_pcal9535a_3_cfg
DECL|gpio_pcal9535a_3_drvdata|variable|gpio_pcal9535a_3_drvdata
DECL|gpio_pcal9535a_config|function|static int gpio_pcal9535a_config(struct device *dev, int access_op, uint32_t pin, int flags)
DECL|gpio_pcal9535a_disable_callback|function|static int gpio_pcal9535a_disable_callback(struct device *dev, int access_op, uint32_t pin)
DECL|gpio_pcal9535a_drv_api_funcs|variable|gpio_pcal9535a_drv_api_funcs
DECL|gpio_pcal9535a_enable_callback|function|static int gpio_pcal9535a_enable_callback(struct device *dev, int access_op, uint32_t pin)
DECL|gpio_pcal9535a_init|function|int gpio_pcal9535a_init(struct device *dev)
DECL|gpio_pcal9535a_read|function|static int gpio_pcal9535a_read(struct device *dev, int access_op, uint32_t pin, uint32_t *value)
DECL|gpio_pcal9535a_resume_port|function|static int gpio_pcal9535a_resume_port(struct device *dev)
DECL|gpio_pcal9535a_set_callback|function|static int gpio_pcal9535a_set_callback(struct device *dev, gpio_callback_t callback)
DECL|gpio_pcal9535a_suspend_port|function|static int gpio_pcal9535a_suspend_port(struct device *dev)
DECL|gpio_pcal9535a_write|function|static int gpio_pcal9535a_write(struct device *dev, int access_op,uint32_t pin, uint32_t value)
