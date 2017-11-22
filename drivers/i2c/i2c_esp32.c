DECL|I2C_ESP32_BUFFER_SIZE|macro|I2C_ESP32_BUFFER_SIZE
DECL|I2C_ESP32_NUM_CMDS|macro|I2C_ESP32_NUM_CMDS
DECL|I2C_ESP32_OP_END|enumerator|I2C_ESP32_OP_END
DECL|I2C_ESP32_OP_READ|enumerator|I2C_ESP32_OP_READ,
DECL|I2C_ESP32_OP_RSTART|enumerator|I2C_ESP32_OP_RSTART,
DECL|I2C_ESP32_OP_STOP|enumerator|I2C_ESP32_OP_STOP,
DECL|I2C_ESP32_OP_WRITE|enumerator|I2C_ESP32_OP_WRITE,
DECL|I2C_ESP32_SPIN_THRESHOLD|macro|I2C_ESP32_SPIN_THRESHOLD
DECL|I2C_ESP32_TIMEOUT_MS|macro|I2C_ESP32_TIMEOUT_MS
DECL|I2C_ESP32_TIMEOUT|macro|I2C_ESP32_TIMEOUT
DECL|I2C_ESP32_YIELD_THRESHOLD|macro|I2C_ESP32_YIELD_THRESHOLD
DECL|ack_en|member|u32_t ack_en : 1;
DECL|ack_exp|member|u32_t ack_exp : 1;
DECL|ack_val|member|u32_t ack_val : 1;
DECL|address|member|u16_t address;
DECL|connect_irq|member|irq_connect_cb connect_irq;
DECL|default_config|member|const u32_t default_config;
DECL|dev_config|member|u32_t dev_config;
DECL|done|member|u32_t done : 1;
DECL|fifo_sem|member|struct k_sem fifo_sem;
DECL|i2c_esp32_0|variable|i2c_esp32_0
DECL|i2c_esp32_1|variable|i2c_esp32_1
DECL|i2c_esp32_cmd|struct|struct i2c_esp32_cmd {
DECL|i2c_esp32_config_0|variable|i2c_esp32_config_0
DECL|i2c_esp32_config_1|variable|i2c_esp32_config_1
DECL|i2c_esp32_configure_pins|function|static int i2c_esp32_configure_pins(int pin, int matrix_out, int matrix_in)
DECL|i2c_esp32_configure_speed|function|static int i2c_esp32_configure_speed(const struct i2c_esp32_config *config, u32_t speed)
DECL|i2c_esp32_configure|function|static int i2c_esp32_configure(struct device *dev, u32_t dev_config)
DECL|i2c_esp32_config|struct|struct i2c_esp32_config {
DECL|i2c_esp32_connect_irq_0|function|static void i2c_esp32_connect_irq_0(void)
DECL|i2c_esp32_connect_irq_1|function|static void i2c_esp32_connect_irq_1(void)
DECL|i2c_esp32_data_0|variable|i2c_esp32_data_0
DECL|i2c_esp32_data_1|variable|i2c_esp32_data_1
DECL|i2c_esp32_data|struct|struct i2c_esp32_data {
DECL|i2c_esp32_driver_api|variable|i2c_esp32_driver_api
DECL|i2c_esp32_init|function|static int i2c_esp32_init(struct device *dev)
DECL|i2c_esp32_isr|function|static void i2c_esp32_isr(void *arg)
DECL|i2c_esp32_opcodes|enum|enum i2c_esp32_opcodes {
DECL|i2c_esp32_read_msg|function|static int i2c_esp32_read_msg(struct device *dev, u16_t addr, struct i2c_msg msg)
DECL|i2c_esp32_reset_fifo|function|static inline void i2c_esp32_reset_fifo(const struct i2c_esp32_config *config)
DECL|i2c_esp32_spin_yield|function|static int i2c_esp32_spin_yield(int *counter)
DECL|i2c_esp32_transfer|function|static int i2c_esp32_transfer(struct device *dev, struct i2c_msg *msgs, u8_t num_msgs, u16_t addr)
DECL|i2c_esp32_transmit_wait|function|static int i2c_esp32_transmit_wait(struct device *dev, volatile struct i2c_esp32_cmd *wait_cmd)
DECL|i2c_esp32_transmit|function|static int i2c_esp32_transmit(struct device *dev)
DECL|i2c_esp32_wait|function|static int i2c_esp32_wait(struct device *dev, volatile struct i2c_esp32_cmd *wait_cmd)
DECL|i2c_esp32_write_addr|function|i2c_esp32_write_addr(struct device *dev, volatile struct i2c_esp32_cmd *cmd, struct i2c_msg *msg, u16_t addr)
DECL|i2c_esp32_write_msg|function|static int i2c_esp32_write_msg(struct device *dev, u16_t addr, struct i2c_msg msg)
DECL|index|member|int index;
DECL|irq_connect_cb|typedef|typedef void (*irq_connect_cb)(void);
DECL|irq|member|} irq;
DECL|line|member|int line;
DECL|mode|member|} mode;
DECL|num_bytes|member|u32_t num_bytes : 8;
DECL|opcode|member|u32_t opcode : 3;
DECL|peripheral|member|const struct esp32_peripheral peripheral;
DECL|pins|member|} pins;
DECL|reserved|member|u32_t reserved : 17;
DECL|rx_lsb_first|member|bool rx_lsb_first;
DECL|scl_in|member|int scl_in;
DECL|scl_out|member|int scl_out;
DECL|scl|member|int scl;
DECL|sda_in|member|int sda_in;
DECL|sda_out|member|int sda_out;
DECL|sda|member|int sda;
DECL|sig|member|} sig;
DECL|source|member|int source;
DECL|transfer_sem|member|struct k_sem transfer_sem;
DECL|tx_lsb_first|member|bool tx_lsb_first;
