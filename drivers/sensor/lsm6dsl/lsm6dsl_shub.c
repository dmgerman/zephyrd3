DECL|LIS2MDL_CFG_REG_A|macro|LIS2MDL_CFG_REG_A
DECL|LIS2MDL_CFG_REG_B|macro|LIS2MDL_CFG_REG_B
DECL|LIS2MDL_CFG_REG_C|macro|LIS2MDL_CFG_REG_C
DECL|LIS2MDL_ODR_10HZ|macro|LIS2MDL_ODR_10HZ
DECL|LIS2MDL_OFF_CANC|macro|LIS2MDL_OFF_CANC
DECL|LIS2MDL_SENSITIVITY|macro|LIS2MDL_SENSITIVITY
DECL|LIS2MDL_STATUS_REG|macro|LIS2MDL_STATUS_REG
DECL|LIS2MDL_SW_RESET|macro|LIS2MDL_SW_RESET
DECL|LPS22HB_BDU_EN|macro|LPS22HB_BDU_EN
DECL|LPS22HB_CTRL_REG1|macro|LPS22HB_CTRL_REG1
DECL|LPS22HB_CTRL_REG2|macro|LPS22HB_CTRL_REG2
DECL|LPS22HB_LPF_EN|macro|LPS22HB_LPF_EN
DECL|LPS22HB_ODR_10HZ|macro|LPS22HB_ODR_10HZ
DECL|LPS22HB_SW_RESET|macro|LPS22HB_SW_RESET
DECL|LSM6DSL_EMBEDDED_SLV0_ADDR|macro|LSM6DSL_EMBEDDED_SLV0_ADDR
DECL|LSM6DSL_EMBEDDED_SLV0_CONFIG|macro|LSM6DSL_EMBEDDED_SLV0_CONFIG
DECL|LSM6DSL_EMBEDDED_SLV0_DATAWRITE|macro|LSM6DSL_EMBEDDED_SLV0_DATAWRITE
DECL|LSM6DSL_EMBEDDED_SLV0_SUBADDR|macro|LSM6DSL_EMBEDDED_SLV0_SUBADDR
DECL|LSM6DSL_EMBEDDED_SLV0_WRITE_IDLE|macro|LSM6DSL_EMBEDDED_SLV0_WRITE_IDLE
DECL|LSM6DSL_EMBEDDED_SLV1_ADDR|macro|LSM6DSL_EMBEDDED_SLV1_ADDR
DECL|LSM6DSL_EMBEDDED_SLV1_CONFIG|macro|LSM6DSL_EMBEDDED_SLV1_CONFIG
DECL|LSM6DSL_EMBEDDED_SLV1_SUBADDR|macro|LSM6DSL_EMBEDDED_SLV1_SUBADDR
DECL|LSM6DSL_EMBEDDED_SLV2_ADDR|macro|LSM6DSL_EMBEDDED_SLV2_ADDR
DECL|LSM6DSL_EMBEDDED_SLV2_CONFIG|macro|LSM6DSL_EMBEDDED_SLV2_CONFIG
DECL|LSM6DSL_EMBEDDED_SLV2_SUBADDR|macro|LSM6DSL_EMBEDDED_SLV2_SUBADDR
DECL|LSM6DSL_EMBEDDED_SLV3_ADDR|macro|LSM6DSL_EMBEDDED_SLV3_ADDR
DECL|LSM6DSL_EMBEDDED_SLV3_CONFIG|macro|LSM6DSL_EMBEDDED_SLV3_CONFIG
DECL|LSM6DSL_EMBEDDED_SLV3_SUBADDR|macro|LSM6DSL_EMBEDDED_SLV3_SUBADDR
DECL|LSM6DSL_EMBEDDED_SLVX_READ|macro|LSM6DSL_EMBEDDED_SLVX_READ
DECL|LSM6DSL_EMBEDDED_SLVX_THREE_SENS|macro|LSM6DSL_EMBEDDED_SLVX_THREE_SENS
DECL|dev_init|member|int (*dev_init)(struct lsm6dsl_data *data, u8_t i2c_addr);
DECL|ext_i2c_addr|variable|ext_i2c_addr
DECL|i2c_addr|member|u8_t i2c_addr[2];
DECL|lsm6dsl_lis2mdl_init|function|static int lsm6dsl_lis2mdl_init(struct lsm6dsl_data *data, u8_t i2c_addr)
DECL|lsm6dsl_lps22hb_init|function|static int lsm6dsl_lps22hb_init(struct lsm6dsl_data *data, u8_t i2c_addr)
DECL|lsm6dsl_read_embedded_reg|function|static int lsm6dsl_read_embedded_reg(struct lsm6dsl_data *data, u8_t reg_addr, u8_t *value, int len)
DECL|lsm6dsl_shub_disable|function|static void lsm6dsl_shub_disable(struct lsm6dsl_data *data)
DECL|lsm6dsl_shub_embedded_en|function|static inline void lsm6dsl_shub_embedded_en(struct lsm6dsl_data *data, bool on)
DECL|lsm6dsl_shub_enable|function|static void lsm6dsl_shub_enable(struct lsm6dsl_data *data)
DECL|lsm6dsl_shub_init_external_chip|function|int lsm6dsl_shub_init_external_chip(struct device *dev)
DECL|lsm6dsl_shub_read_external_chip|function|int lsm6dsl_shub_read_external_chip(struct device *dev, u8_t *buf, u8_t len)
DECL|lsm6dsl_shub_read_slave_reg|function|static int lsm6dsl_shub_read_slave_reg(struct lsm6dsl_data *data, u8_t slv_addr, u8_t slv_reg, u8_t *value, u16_t len)
DECL|lsm6dsl_shub_sens_list|struct|static struct lsm6dsl_shub_sens_list {
DECL|lsm6dsl_shub_sens_list|variable|lsm6dsl_shub_sens_list
DECL|lsm6dsl_shub_set_data_channel|function|static int lsm6dsl_shub_set_data_channel(struct lsm6dsl_data *data)
DECL|lsm6dsl_shub_write_embedded_regs|function|static int lsm6dsl_shub_write_embedded_regs(struct lsm6dsl_data *data, u8_t reg_addr, u8_t *value, u8_t len)
DECL|lsm6dsl_shub_write_slave_reg|function|static int lsm6dsl_shub_write_slave_reg(struct lsm6dsl_data *data,u8_t slv_addr, u8_t slv_reg, u8_t *value, u16_t len)
DECL|out_data_addr|member|u8_t out_data_addr;
DECL|out_data_len|member|u8_t out_data_len;
DECL|wai_addr|member|u8_t wai_addr;
DECL|wai_val|member|u8_t wai_val;
