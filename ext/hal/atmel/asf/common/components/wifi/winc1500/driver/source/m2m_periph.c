DECL|GPIO_OP_DIR|macro|GPIO_OP_DIR
DECL|GPIO_OP_GET|macro|GPIO_OP_GET
DECL|GPIO_OP_SET|macro|GPIO_OP_SET
DECL|get_gpio_idx|function|static sint8 get_gpio_idx(uint8 u8GpioNum)
DECL|gpio_ioctl|function|static sint8 gpio_ioctl(uint8 op, uint8 u8GpioNum, uint8 u8InVal, uint8 * pu8OutVal)
DECL|m2m_periph_gpio_get_val|function|sint8 m2m_periph_gpio_get_val(uint8 u8GpioNum, uint8 * pu8GpioVal)
DECL|m2m_periph_gpio_pullup_ctrl|function|sint8 m2m_periph_gpio_pullup_ctrl(uint8 u8GpioNum, uint8 u8PullupEn)
DECL|m2m_periph_gpio_set_dir|function|sint8 m2m_periph_gpio_set_dir(uint8 u8GpioNum, uint8 u8GpioDir)
DECL|m2m_periph_gpio_set_val|function|sint8 m2m_periph_gpio_set_val(uint8 u8GpioNum, uint8 u8GpioVal)
DECL|m2m_periph_i2c_master_init|function|sint8 m2m_periph_i2c_master_init(tstrI2cMasterInitParam * param)
DECL|m2m_periph_i2c_master_read|function|sint8 m2m_periph_i2c_master_read(uint8 u8SlaveAddr, uint8 * pu8Buf, uint16 u16BufLen, uint16 * pu16ReadLen, uint8 flags)
DECL|m2m_periph_i2c_master_write|function|sint8 m2m_periph_i2c_master_write(uint8 u8SlaveAddr, uint8 * pu8Buf, uint16 u16BufLen, uint8 flags)
DECL|m2m_periph_init|function|sint8 m2m_periph_init(tstrPerphInitParam * param)
DECL|m2m_periph_pullup_ctrl|function|sint8 m2m_periph_pullup_ctrl(uint32 pinmask, uint8 enable)
