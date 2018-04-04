DECL|_SYSCALL_HANDLER|function|_SYSCALL_HANDLER(i2c_configure, dev, dev_config)
DECL|_SYSCALL_HANDLER|function|_SYSCALL_HANDLER(i2c_transfer, dev, msgs, num_msgs, addr)
DECL|copy_msgs_and_transfer|function|static u32_t copy_msgs_and_transfer(struct device *dev, const struct i2c_msg *msgs, u8_t num_msgs, u16_t addr, void *ssf)
