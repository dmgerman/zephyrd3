DECL|MMA8451Q_CHANNEL_ACCEL_X|enumerator|MMA8451Q_CHANNEL_ACCEL_X = 0,
DECL|MMA8451Q_CHANNEL_ACCEL_Y|enumerator|MMA8451Q_CHANNEL_ACCEL_Y,
DECL|MMA8451Q_CHANNEL_ACCEL_Z|enumerator|MMA8451Q_CHANNEL_ACCEL_Z,
DECL|MMA8451Q_CTRL_REG1|macro|MMA8451Q_CTRL_REG1
DECL|MMA8451Q_CTRL_REG2|macro|MMA8451Q_CTRL_REG2
DECL|MMA8451Q_CTRL_REG3|macro|MMA8451Q_CTRL_REG3
DECL|MMA8451Q_CTRL_REG4|macro|MMA8451Q_CTRL_REG4
DECL|MMA8451Q_CTRL_REG5|macro|MMA8451Q_CTRL_REG5
DECL|MMA8451Q_NUM_ACCEL_CHANNELS|macro|MMA8451Q_NUM_ACCEL_CHANNELS
DECL|MMA8451Q_OUT_X_MSB|macro|MMA8451Q_OUT_X_MSB
DECL|MMA8451Q_OUT_Y_MSB|macro|MMA8451Q_OUT_Y_MSB
DECL|MMA8451Q_OUT_Z_MSB|macro|MMA8451Q_OUT_Z_MSB
DECL|MMA8451Q_RANGE_2G|enumerator|MMA8451Q_RANGE_2G = 0,
DECL|MMA8451Q_RANGE_4G|enumerator|MMA8451Q_RANGE_4G,
DECL|MMA8451Q_RANGE_8G|enumerator|MMA8451Q_RANGE_8G,
DECL|MMA8451Q_REG_WHOAMI|macro|MMA8451Q_REG_WHOAMI
DECL|MMA8451Q_XYZ_DATA_CFG|macro|MMA8451Q_XYZ_DATA_CFG
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|_SENSOR_MMA8451Q|macro|_SENSOR_MMA8451Q
DECL|i2c_address|member|u8_t i2c_address;
DECL|i2c_name|member|char *i2c_name;
DECL|i2c|member|struct device *i2c;
DECL|mma8451q_channel|enum|enum mma8451q_channel {
DECL|mma8451q_config|struct|struct mma8451q_config {
DECL|mma8451q_data|struct|struct mma8451q_data {
DECL|mma8451q_range|enum|enum mma8451q_range {
DECL|range|member|enum mma8451q_range range;
DECL|whoami|member|u8_t whoami;
DECL|x|member|s16_t x;
DECL|y|member|s16_t y;
DECL|z|member|s16_t z;
