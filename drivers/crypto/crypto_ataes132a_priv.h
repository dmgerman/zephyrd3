DECL|ATAES132A_BUS_SPEED|macro|ATAES132A_BUS_SPEED
DECL|ATAES132A_BUS_SPEED|macro|ATAES132A_BUS_SPEED
DECL|ATAES_ALGORITHM_REG|macro|ATAES_ALGORITHM_REG
DECL|ATAES_BLOCKRD_OP|macro|ATAES_BLOCKRD_OP
DECL|ATAES_CHIPCONFIG_LEGACYE|macro|ATAES_CHIPCONFIG_LEGACYE
DECL|ATAES_CHIPCONFIG_REG|macro|ATAES_CHIPCONFIG_REG
DECL|ATAES_COMMAND_ADDRR_RESET|macro|ATAES_COMMAND_ADDRR_RESET
DECL|ATAES_COMMAND_MEM_ADDR|macro|ATAES_COMMAND_MEM_ADDR
DECL|ATAES_COUNTER_REG|macro|ATAES_COUNTER_REG
DECL|ATAES_CTRCFG_REG|macro|ATAES_CTRCFG_REG
DECL|ATAES_DECRYPT_OP|macro|ATAES_DECRYPT_OP
DECL|ATAES_DEVICENUM_REG|macro|ATAES_DEVICENUM_REG
DECL|ATAES_EEPAGESIZE_REG|macro|ATAES_EEPAGESIZE_REG
DECL|ATAES_ENCREADSIZE_REG|macro|ATAES_ENCREADSIZE_REG
DECL|ATAES_ENCRYPT_OP|macro|ATAES_ENCRYPT_OP
DECL|ATAES_ENCWRITESIZE_REG|macro|ATAES_ENCWRITESIZE_REG
DECL|ATAES_FREESPACE_ADDR|macro|ATAES_FREESPACE_ADDR
DECL|ATAES_I2CADDR_REG|macro|ATAES_I2CADDR_REG
DECL|ATAES_INFO_OP|macro|ATAES_INFO_OP
DECL|ATAES_JEDEC_REG|macro|ATAES_JEDEC_REG
DECL|ATAES_KEYCFG_REG|macro|ATAES_KEYCFG_REG
DECL|ATAES_KEYCONFIG_AUTHKEY|macro|ATAES_KEYCONFIG_AUTHKEY
DECL|ATAES_KEYCONFIG_EXTERNAL|macro|ATAES_KEYCONFIG_EXTERNAL
DECL|ATAES_KEYCONFIG_LEGACYOK|macro|ATAES_KEYCONFIG_LEGACYOK
DECL|ATAES_KEYCONFIG_RAND_NONCE|macro|ATAES_KEYCONFIG_RAND_NONCE
DECL|ATAES_KEYMEMMAP_REG|macro|ATAES_KEYMEMMAP_REG
DECL|ATAES_LEGACY_OP|macro|ATAES_LEGACY_OP
DECL|ATAES_LOTHISTORY_REG|macro|ATAES_LOTHISTORY_REG
DECL|ATAES_MAC_MODE_COUNTER|macro|ATAES_MAC_MODE_COUNTER
DECL|ATAES_MAC_MODE_SERIAL|macro|ATAES_MAC_MODE_SERIAL
DECL|ATAES_MAC_MODE_SMALLZONE|macro|ATAES_MAC_MODE_SMALLZONE
DECL|ATAES_MANUFACTID_REG|macro|ATAES_MANUFACTID_REG
DECL|ATAES_NONCE_OP|macro|ATAES_NONCE_OP
DECL|ATAES_PERMCONFIG_REG|macro|ATAES_PERMCONFIG_REG
DECL|ATAES_SERIALNUM_REG|macro|ATAES_SERIALNUM_REG
DECL|ATAES_SMALLZONE_ADDR|macro|ATAES_SMALLZONE_ADDR
DECL|ATAES_STATUS_CRC|macro|ATAES_STATUS_CRC
DECL|ATAES_STATUS_ERR|macro|ATAES_STATUS_ERR
DECL|ATAES_STATUS_RDY|macro|ATAES_STATUS_RDY
DECL|ATAES_STATUS_REG|macro|ATAES_STATUS_REG
DECL|ATAES_STATUS_WAK|macro|ATAES_STATUS_WAK
DECL|ATAES_STATUS_WEN|macro|ATAES_STATUS_WEN
DECL|ATAES_STATUS_WIP|macro|ATAES_STATUS_WIP
DECL|ATAES_VOLATILE_AUTHCO|macro|ATAES_VOLATILE_AUTHCO
DECL|ATAES_VOLATILE_AUTHOK|macro|ATAES_VOLATILE_AUTHOK
DECL|ATAES_VOLATILE_DECOK|macro|ATAES_VOLATILE_DECOK
DECL|ATAES_VOLATILE_ENCOK|macro|ATAES_VOLATILE_ENCOK
DECL|ATAES_VOLATILE_KEYID|macro|ATAES_VOLATILE_KEYID
DECL|ATAES_VOLATILE_LEGACYOK|macro|ATAES_VOLATILE_LEGACYOK
DECL|ATAES_VOLATILE_RNDNNC|macro|ATAES_VOLATILE_RNDNNC
DECL|ATAES_ZONECFG_REG|macro|ATAES_ZONECFG_REG
DECL|CRC16_POLY|macro|CRC16_POLY
DECL|_ATAES132A_PRIV_|macro|_ATAES132A_PRIV_
DECL|ataes132a_atmel_crc|function|void ataes132a_atmel_crc(uint8_t *input, uint8_t length, uint8_t *output)
DECL|ataes132a_device_config|struct|struct ataes132a_device_config {
DECL|ataes132a_device_data|struct|struct ataes132a_device_data {
DECL|ataes132a_driver_state|struct|struct ataes132a_driver_state {
DECL|ataes132a_mac_mode|struct|struct ataes132a_mac_mode {
DECL|ataes132a_mac_packet|struct|struct ataes132a_mac_packet {
DECL|burst_read_i2c|function|static inline int burst_read_i2c(struct device *dev, uint16_t dev_addr, uint16_t start_addr, uint8_t *buf, uint8_t num_bytes)
DECL|burst_write_i2c|function|static inline int burst_write_i2c(struct device *dev, uint16_t dev_addr, uint16_t start_addr, uint8_t *buf, uint8_t num_bytes)
DECL|chip_config|member|uint8_t chip_config;
DECL|command_buffer|member|uint8_t command_buffer[64];
DECL|device_sem|member|struct k_sem device_sem;
DECL|encryption_key_id|member|uint8_t encryption_key_id;
DECL|encryption_mac_count|member|uint8_t encryption_mac_count;
DECL|i2c_addr|member|uint16_t i2c_addr;
DECL|i2c_port|member|const char *i2c_port;
DECL|i2c_speed|member|uint8_t i2c_speed;
DECL|i2c|member|struct device *i2c;
DECL|in_use|member|bool in_use;
DECL|include_counter|member|bool include_counter;
DECL|include_serial|member|bool include_serial;
DECL|include_smallzone|member|bool include_smallzone;
DECL|key_config|member|uint8_t key_config;
DECL|key_id|member|uint8_t key_id;
DECL|read_reg_i2c|function|static inline int read_reg_i2c(struct device *dev, uint16_t dev_addr, uint16_t reg_addr, uint8_t *value)
DECL|write_reg_i2c|function|static inline int write_reg_i2c(struct device *dev, uint16_t dev_addr,uint16_t reg_addr, uint8_t value)
