DECL|NS_TO_SYS_CLOCK_HW_CYCLES|macro|NS_TO_SYS_CLOCK_HW_CYCLES
DECL|T_BUF|macro|T_BUF
DECL|T_HD_STA|macro|T_HD_STA
DECL|T_HIGH|macro|T_HIGH
DECL|T_LOW|macro|T_LOW
DECL|T_SU_STA|macro|T_SU_STA
DECL|T_SU_STP|macro|T_SU_STP
DECL|delays_fast|variable|delays_fast
DECL|delays_standard|variable|delays_standard
DECL|i2c_bitbang_configure|function|int i2c_bitbang_configure(struct i2c_bitbang *context, u32_t dev_config)
DECL|i2c_bitbang_init|function|void i2c_bitbang_init(struct i2c_bitbang *context,const struct i2c_bitbang_io *io, void *io_context)
DECL|i2c_bitbang_transfer|function|int i2c_bitbang_transfer(struct i2c_bitbang *context, struct i2c_msg *msgs, u8_t num_msgs, u16_t slave_address)
DECL|i2c_delay|function|static void i2c_delay(unsigned int cycles_to_wait)
DECL|i2c_get_sda|function|static int i2c_get_sda(struct i2c_bitbang *context)
DECL|i2c_read_bit|function|static bool i2c_read_bit(struct i2c_bitbang *context)
DECL|i2c_read_byte|function|static u8_t i2c_read_byte(struct i2c_bitbang *context)
DECL|i2c_repeated_start|function|static void i2c_repeated_start(struct i2c_bitbang *context)
DECL|i2c_set_scl|function|static void i2c_set_scl(struct i2c_bitbang *context, int state)
DECL|i2c_set_sda|function|static void i2c_set_sda(struct i2c_bitbang *context, int state)
DECL|i2c_start|function|static void i2c_start(struct i2c_bitbang *context)
DECL|i2c_stop|function|static void i2c_stop(struct i2c_bitbang *context)
DECL|i2c_write_bit|function|static void i2c_write_bit(struct i2c_bitbang *context, int bit)
DECL|i2c_write_byte|function|static bool i2c_write_byte(struct i2c_bitbang *context, u8_t byte)
