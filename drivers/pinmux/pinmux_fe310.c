DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_PINMUX|macro|DEV_PINMUX
DECL|base|member|uint32_t base;
DECL|iof_en|member|uint32_t iof_en;
DECL|iof_sel|member|uint32_t iof_sel;
DECL|pinmux_fe310_0_config|variable|pinmux_fe310_0_config
DECL|pinmux_fe310_config|struct|struct pinmux_fe310_config {
DECL|pinmux_fe310_driver_api|variable|pinmux_fe310_driver_api
DECL|pinmux_fe310_get|function|static int pinmux_fe310_get(struct device *dev, uint32_t pin, uint32_t *func)
DECL|pinmux_fe310_init|function|static int pinmux_fe310_init(struct device *dev)
DECL|pinmux_fe310_input|function|static int pinmux_fe310_input(struct device *dev, uint32_t pin, uint8_t func)
DECL|pinmux_fe310_pullup|function|static int pinmux_fe310_pullup(struct device *dev, uint32_t pin, uint8_t func)
DECL|pinmux_fe310_regs_t|struct|struct pinmux_fe310_regs_t {
DECL|pinmux_fe310_set|function|static int pinmux_fe310_set(struct device *dev, uint32_t pin, uint32_t func)
