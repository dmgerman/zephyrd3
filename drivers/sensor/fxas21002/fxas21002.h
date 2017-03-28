DECL|FXAS21002_BYTES_PER_CHANNEL|macro|FXAS21002_BYTES_PER_CHANNEL
DECL|FXAS21002_CHANNEL_GYRO_X|enumerator|FXAS21002_CHANNEL_GYRO_X = 0,
DECL|FXAS21002_CHANNEL_GYRO_Y|enumerator|FXAS21002_CHANNEL_GYRO_Y,
DECL|FXAS21002_CHANNEL_GYRO_Z|enumerator|FXAS21002_CHANNEL_GYRO_Z,
DECL|FXAS21002_CTRLREG0_FS_MASK|macro|FXAS21002_CTRLREG0_FS_MASK
DECL|FXAS21002_CTRLREG1_DR_MASK|macro|FXAS21002_CTRLREG1_DR_MASK
DECL|FXAS21002_CTRLREG1_DR_SHIFT|macro|FXAS21002_CTRLREG1_DR_SHIFT
DECL|FXAS21002_CTRLREG1_POWER_MASK|macro|FXAS21002_CTRLREG1_POWER_MASK
DECL|FXAS21002_CTRLREG1_RST_MASK|macro|FXAS21002_CTRLREG1_RST_MASK
DECL|FXAS21002_CTRLREG2_CFG_DRDY_MASK|macro|FXAS21002_CTRLREG2_CFG_DRDY_MASK
DECL|FXAS21002_CTRLREG2_CFG_EN_MASK|macro|FXAS21002_CTRLREG2_CFG_EN_MASK
DECL|FXAS21002_INT_SOURCE_DRDY_MASK|macro|FXAS21002_INT_SOURCE_DRDY_MASK
DECL|FXAS21002_MAX_NUM_BYTES|macro|FXAS21002_MAX_NUM_BYTES
DECL|FXAS21002_MAX_NUM_CHANNELS|macro|FXAS21002_MAX_NUM_CHANNELS
DECL|FXAS21002_POWER_ACTIVE|enumerator|FXAS21002_POWER_ACTIVE = 3,
DECL|FXAS21002_POWER_READY|enumerator|FXAS21002_POWER_READY = 1,
DECL|FXAS21002_POWER_STANDBY|enumerator|FXAS21002_POWER_STANDBY = 0,
DECL|FXAS21002_RANGE_1000DPS|enumerator|FXAS21002_RANGE_1000DPS,
DECL|FXAS21002_RANGE_2000DPS|enumerator|FXAS21002_RANGE_2000DPS = 0,
DECL|FXAS21002_RANGE_250DPS|enumerator|FXAS21002_RANGE_250DPS,
DECL|FXAS21002_RANGE_500DPS|enumerator|FXAS21002_RANGE_500DPS,
DECL|FXAS21002_REG_CTRLREG0|macro|FXAS21002_REG_CTRLREG0
DECL|FXAS21002_REG_CTRLREG1|macro|FXAS21002_REG_CTRLREG1
DECL|FXAS21002_REG_CTRLREG2|macro|FXAS21002_REG_CTRLREG2
DECL|FXAS21002_REG_CTRLREG3|macro|FXAS21002_REG_CTRLREG3
DECL|FXAS21002_REG_INT_SOURCE|macro|FXAS21002_REG_INT_SOURCE
DECL|FXAS21002_REG_OUTXMSB|macro|FXAS21002_REG_OUTXMSB
DECL|FXAS21002_REG_STATUS|macro|FXAS21002_REG_STATUS
DECL|FXAS21002_REG_WHOAMI|macro|FXAS21002_REG_WHOAMI
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|dev|member|struct device *dev;
DECL|drdy_handler|member|sensor_trigger_handler_t drdy_handler;
DECL|dr|member|uint8_t dr;
DECL|fxas21002_channel|enum|enum fxas21002_channel {
DECL|fxas21002_config|struct|struct fxas21002_config {
DECL|fxas21002_data|struct|struct fxas21002_data {
DECL|fxas21002_power|enum|enum fxas21002_power {
DECL|fxas21002_range|enum|enum fxas21002_range {
DECL|gpio_cb|member|struct gpio_callback gpio_cb;
DECL|gpio_name|member|char *gpio_name;
DECL|gpio_pin|member|uint8_t gpio_pin;
DECL|gpio_pin|member|uint8_t gpio_pin;
DECL|gpio|member|struct device *gpio;
DECL|i2c_address|member|uint8_t i2c_address;
DECL|i2c_name|member|char *i2c_name;
DECL|i2c|member|struct device *i2c;
DECL|range|member|enum fxas21002_range range;
DECL|raw|member|int16_t raw[FXAS21002_MAX_NUM_CHANNELS];
DECL|sem|member|struct k_sem sem;
DECL|thread_stack|member|char __stack thread_stack[CONFIG_FXAS21002_THREAD_STACK_SIZE];
DECL|trig_sem|member|struct k_sem trig_sem;
DECL|whoami|member|uint8_t whoami;
DECL|work|member|struct k_work work;
