DECL|GET_CONTROLLER_INSTANCE|macro|GET_CONTROLLER_INSTANCE
DECL|GET_DRIVER_DATA|macro|GET_DRIVER_DATA
DECL|api|variable|api
DECL|clock_gate|member|clk_periph_t clock_gate;
DECL|config_info_0|variable|config_info_0
DECL|config_info_1|variable|config_info_1
DECL|default_cfg|member|u32_t default_cfg;
DECL|device_power_state|member|u32_t device_power_state;
DECL|device_sync_sem|member|struct k_sem device_sync_sem;
DECL|driver_data_0|variable|driver_data_0
DECL|driver_data_1|variable|driver_data_1
DECL|i2c_ctx|member|qm_i2c_context_t i2c_ctx;
DECL|i2c_device_ctrl|function|static int i2c_device_ctrl(struct device *dev, u32_t ctrl_command, void *context)
DECL|i2c_qmsi_config_info|struct|struct i2c_qmsi_config_info {
DECL|i2c_qmsi_configure|function|static int i2c_qmsi_configure(struct device *dev, u32_t config)
DECL|i2c_qmsi_driver_data|struct|struct i2c_qmsi_driver_data {
DECL|i2c_qmsi_get_power_state|function|static u32_t i2c_qmsi_get_power_state(struct device *dev)
DECL|i2c_qmsi_init|function|static int i2c_qmsi_init(struct device *dev)
DECL|i2c_qmsi_set_power_state|function|static void i2c_qmsi_set_power_state(struct device *dev, u32_t power_state)
DECL|i2c_qmsi_set_power_state|macro|i2c_qmsi_set_power_state
DECL|i2c_qmsi_transfer|function|static int i2c_qmsi_transfer(struct device *dev, struct i2c_msg *msgs, u8_t num_msgs, u16_t addr)
DECL|i2c_resume_device_from_suspend|function|static int i2c_resume_device_from_suspend(struct device *dev)
DECL|i2c_suspend_device|function|static int i2c_suspend_device(struct device *dev)
DECL|instance|member|qm_i2c_t instance; /* Controller instance. */
DECL|sem|member|struct k_sem sem;
DECL|transfer_complete|function|static void transfer_complete(void *data, int rc, qm_i2c_status_t status, u32_t len)
DECL|transfer_status|member|int transfer_status;
