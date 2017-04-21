DECL|BUS_SPEED_FAST_HZ|macro|BUS_SPEED_FAST_HZ
DECL|BUS_SPEED_HIGH_HZ|macro|BUS_SPEED_HIGH_HZ
DECL|BUS_SPEED_STANDARD_HZ|macro|BUS_SPEED_STANDARD_HZ
DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|buf|member|u8_t *buf;
DECL|clk_div_calc|function|static u32_t clk_div_calc(u32_t speed)
DECL|flags|member|u8_t flags;
DECL|i2c0_sam_config|variable|i2c0_sam_config
DECL|i2c0_sam_data|variable|i2c0_sam_data
DECL|i2c0_sam_irq_config|function|static void i2c0_sam_irq_config(void)
DECL|i2c1_sam_config|variable|i2c1_sam_config
DECL|i2c1_sam_data|variable|i2c1_sam_data
DECL|i2c1_sam_irq_config|function|static void i2c1_sam_irq_config(void)
DECL|i2c2_sam_config|variable|i2c2_sam_config
DECL|i2c2_sam_data|variable|i2c2_sam_data
DECL|i2c2_sam_irq_config|function|static void i2c2_sam_irq_config(void)
DECL|idx|member|u32_t idx;
DECL|irq_config|member|void (*irq_config)(void);
DECL|irq_id|member|u8_t irq_id;
DECL|len|member|u32_t len;
DECL|mode_config|member|union dev_config mode_config;
DECL|msg|member|struct twihs_msg msg;
DECL|periph_id|member|u8_t periph_id;
DECL|pin_list_size|member|u8_t pin_list_size;
DECL|pin_list|member|const struct soc_gpio_pin *pin_list;
DECL|pins_twihs0|variable|pins_twihs0
DECL|pins_twihs1|variable|pins_twihs1
DECL|pins_twihs2|variable|pins_twihs2
DECL|read_msg_start|function|static void read_msg_start(Twihs *const twihs, struct twihs_msg *msg, u8_t daddr)
DECL|regs|member|Twihs *regs;
DECL|sem|member|struct k_sem sem;
DECL|twihs_msg|struct|struct twihs_msg {
DECL|twihs_sam_configure|function|static int twihs_sam_configure(struct device *dev, u32_t config)
DECL|twihs_sam_dev_cfg|struct|struct twihs_sam_dev_cfg {
DECL|twihs_sam_dev_data|struct|struct twihs_sam_dev_data {
DECL|twihs_sam_driver_api|variable|twihs_sam_driver_api
DECL|twihs_sam_initialize|function|static int twihs_sam_initialize(struct device *dev)
DECL|twihs_sam_isr|function|static void twihs_sam_isr(void *arg)
DECL|twihs_sam_transfer|function|static int twihs_sam_transfer(struct device *dev, struct i2c_msg *msgs, u8_t num_msgs, u16_t addr)
DECL|twihs_sr|member|u32_t twihs_sr;
DECL|write_msg_start|function|static void write_msg_start(Twihs *const twihs, struct twihs_msg *msg, u8_t daddr)
