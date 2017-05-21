DECL|BUS_SPEED_FAST_HZ|macro|BUS_SPEED_FAST_HZ
DECL|BUS_SPEED_STANDARD_HZ|macro|BUS_SPEED_STANDARD_HZ
DECL|CKDIV_MAX|macro|CKDIV_MAX
DECL|DEV_CFG|macro|DEV_CFG
DECL|DEV_DATA|macro|DEV_DATA
DECL|DEV_NAME|macro|DEV_NAME
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|bitrate|member|u32_t bitrate;
DECL|buf|member|u8_t *buf;
DECL|flags|member|u8_t flags;
DECL|i2c0_sam_config|variable|i2c0_sam_config
DECL|i2c0_sam_data|variable|i2c0_sam_data
DECL|i2c0_sam_irq_config|function|static void i2c0_sam_irq_config(void)
DECL|i2c1_sam_config|variable|i2c1_sam_config
DECL|i2c1_sam_data|variable|i2c1_sam_data
DECL|i2c1_sam_irq_config|function|static void i2c1_sam_irq_config(void)
DECL|i2c_clk_set|function|static int i2c_clk_set(Twi *const twi, u32_t speed)
DECL|i2c_sam_twi_configure|function|static int i2c_sam_twi_configure(struct device *dev, u32_t config)
DECL|i2c_sam_twi_dev_cfg|struct|struct i2c_sam_twi_dev_cfg {
DECL|i2c_sam_twi_dev_data|struct|struct i2c_sam_twi_dev_data {
DECL|i2c_sam_twi_driver_api|variable|i2c_sam_twi_driver_api
DECL|i2c_sam_twi_initialize|function|static int i2c_sam_twi_initialize(struct device *dev)
DECL|i2c_sam_twi_isr|function|static void i2c_sam_twi_isr(void *arg)
DECL|i2c_sam_twi_transfer|function|static int i2c_sam_twi_transfer(struct device *dev, struct i2c_msg *msgs,u8_t num_msgs, u16_t addr)
DECL|idx|member|u32_t idx;
DECL|irq_config|member|void (*irq_config)(void);
DECL|irq_id|member|u8_t irq_id;
DECL|len|member|u32_t len;
DECL|msg|member|struct twi_msg msg;
DECL|periph_id|member|u8_t periph_id;
DECL|pin_list_size|member|u8_t pin_list_size;
DECL|pin_list|member|const struct soc_gpio_pin *pin_list;
DECL|pins_twi0|variable|pins_twi0
DECL|pins_twi1|variable|pins_twi1
DECL|read_msg_start|function|static void read_msg_start(Twi *const twi, struct twi_msg *msg, u8_t daddr)
DECL|regs|member|Twi *regs;
DECL|sem|member|struct k_sem sem;
DECL|twi_msg|struct|struct twi_msg {
DECL|twi_sr|member|u32_t twi_sr;
DECL|write_msg_start|function|static void write_msg_start(Twi *const twi, struct twi_msg *msg, u8_t daddr)
