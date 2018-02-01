DECL|MAX_USER_DATA_LENGTH|macro|MAX_USER_DATA_LENGTH
DECL|MB85RS64V_MANUFACTURER_ID_CMD|macro|MB85RS64V_MANUFACTURER_ID_CMD
DECL|MB85RS64V_READ_CMD|macro|MB85RS64V_READ_CMD
DECL|MB85RS64V_WRITE_CMD|macro|MB85RS64V_WRITE_CMD
DECL|MB85RS64V_WRITE_ENABLE_CMD|macro|MB85RS64V_WRITE_ENABLE_CMD
DECL|cmp_data|variable|cmp_data
DECL|data|variable|data
DECL|main|function|void main(void)
DECL|mb85rs64v_access|function|static int mb85rs64v_access(struct device *spi, struct spi_config *spi_cfg, u8_t cmd, u16_t addr, void *data, size_t len)
DECL|mb85rs64v_read_id|function|static int mb85rs64v_read_id(struct device *spi, struct spi_config *spi_cfg)
DECL|read_bytes|function|static int read_bytes(struct device *spi, struct spi_config *spi_cfg, u16_t addr, u8_t *data, u32_t num_bytes)
DECL|write_bytes|function|static int write_bytes(struct device *spi, struct spi_config *spi_cfg, u16_t addr, u8_t *data, u32_t num_bytes)
