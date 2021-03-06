DECL|GET_CONTROLLER_INSTANCE|macro|GET_CONTROLLER_INSTANCE
DECL|GET_DRIVER_DATA|macro|GET_DRIVER_DATA
DECL|api|variable|api
DECL|bitrate|member|u32_t bitrate;
DECL|config_info_0|variable|config_info_0
DECL|config_info_1|variable|config_info_1
DECL|device_power_state|member|u32_t device_power_state;
DECL|device_sync_sem|member|struct k_sem device_sync_sem;
DECL|driver_data_0|variable|driver_data_0
DECL|driver_data_1|variable|driver_data_1
DECL|i2c_ctx|member|qm_ss_i2c_context_t i2c_ctx;
DECL|i2c_qmsi_ss_config_info|struct|struct i2c_qmsi_ss_config_info {
DECL|i2c_qmsi_ss_config_irq_0|function|static void i2c_qmsi_ss_config_irq_0(void)
DECL|i2c_qmsi_ss_config_irq_1|function|static void i2c_qmsi_ss_config_irq_1(void)
DECL|i2c_qmsi_ss_configure|function|static int i2c_qmsi_ss_configure(struct device *dev, u32_t config)
DECL|i2c_qmsi_ss_driver_data|struct|struct i2c_qmsi_ss_driver_data {
DECL|i2c_qmsi_ss_init|function|static int i2c_qmsi_ss_init(struct device *dev)
DECL|i2c_qmsi_ss_transfer|function|static int i2c_qmsi_ss_transfer(struct device *dev, struct i2c_msg *msgs, u8_t num_msgs, u16_t addr)
DECL|instance|member|qm_ss_i2c_t instance; /* Controller instance. */
DECL|irq_cfg|member|void (*irq_cfg)(void);
DECL|sem|member|struct k_sem sem;
DECL|ss_i2c_device_ctrl|function|static int ss_i2c_device_ctrl(struct device *dev, u32_t ctrl_command, void *context)
DECL|ss_i2c_qmsi_get_power_state|function|static u32_t ss_i2c_qmsi_get_power_state(struct device *dev)
DECL|ss_i2c_qmsi_set_power_state|function|static void ss_i2c_qmsi_set_power_state(struct device *dev,u32_t power_state)
DECL|ss_i2c_qmsi_set_power_state|macro|ss_i2c_qmsi_set_power_state
DECL|ss_i2c_resume_device_from_suspend|function|static int ss_i2c_resume_device_from_suspend(struct device *dev)
DECL|ss_i2c_suspend_device|function|static int ss_i2c_suspend_device(struct device *dev)
DECL|transfer_complete|function|static void transfer_complete(void *data, int rc, qm_ss_i2c_status_t status,uint32_t len)
DECL|transfer_status|member|int transfer_status;
