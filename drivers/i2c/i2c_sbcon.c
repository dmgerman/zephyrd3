DECL|DEFINE_I2C_SBCON|macro|DEFINE_I2C_SBCON
DECL|SB_CONTROLC|member|volatile u32_t SB_CONTROLC; /* Write to set pins low */
DECL|SB_CONTROLS|member|volatile u32_t SB_CONTROLS; /* Write to set pins high */
DECL|SB_CONTROL|member|volatile u32_t SB_CONTROL; /* Read for state of pins */
DECL|SCL|macro|SCL
DECL|SDA|macro|SDA
DECL|api|variable|api
DECL|bitbang|member|struct i2c_bitbang bitbang; /* Bit-bang library data */
DECL|i2c_sbcon_configure|function|static int i2c_sbcon_configure(struct device *dev, u32_t dev_config)
DECL|i2c_sbcon_config|struct|struct i2c_sbcon_config {
DECL|i2c_sbcon_context|struct|struct i2c_sbcon_context {
DECL|i2c_sbcon_get_sda|function|static int i2c_sbcon_get_sda(void *io_context)
DECL|i2c_sbcon_init|function|static int i2c_sbcon_init(struct device *dev)
DECL|i2c_sbcon_set_scl|function|static void i2c_sbcon_set_scl(void *io_context, int state)
DECL|i2c_sbcon_set_sda|function|static void i2c_sbcon_set_sda(void *io_context, int state)
DECL|i2c_sbcon_transfer|function|static int i2c_sbcon_transfer(struct device *dev, struct i2c_msg *msgs,u8_t num_msgs, u16_t slave_address)
DECL|io_fns|variable|io_fns
DECL|sbcon|member|struct sbcon *sbcon; /* Address of hardware registers */
DECL|sbcon|struct|struct sbcon {
