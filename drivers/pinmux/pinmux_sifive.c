DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_PINMUX|macro|DEV_PINMUX
DECL|base|member|u32_t base;
DECL|iof_en|member|u32_t iof_en;
DECL|iof_sel|member|u32_t iof_sel;
DECL|pinmux_sifive_0_config|variable|pinmux_sifive_0_config
DECL|pinmux_sifive_config|struct|struct pinmux_sifive_config {
DECL|pinmux_sifive_driver_api|variable|pinmux_sifive_driver_api
DECL|pinmux_sifive_get|function|static int pinmux_sifive_get(struct device *dev, u32_t pin, u32_t *func)
DECL|pinmux_sifive_init|function|static int pinmux_sifive_init(struct device *dev)
DECL|pinmux_sifive_input|function|static int pinmux_sifive_input(struct device *dev, u32_t pin, u8_t func)
DECL|pinmux_sifive_pullup|function|static int pinmux_sifive_pullup(struct device *dev, u32_t pin, u8_t func)
DECL|pinmux_sifive_regs_t|struct|struct pinmux_sifive_regs_t {
DECL|pinmux_sifive_set|function|static int pinmux_sifive_set(struct device *dev, u32_t pin, u32_t func)
