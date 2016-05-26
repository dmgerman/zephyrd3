DECL|GET_CONTROLLER_INSTANCE|macro|GET_CONTROLLER_INSTANCE
DECL|GET_DRIVER_DATA|macro|GET_DRIVER_DATA
DECL|api|variable|api
DECL|config_info_0|variable|config_info_0
DECL|config_info_1|variable|config_info_1
DECL|default_cfg|member|union dev_config default_cfg;
DECL|driver_data_0|variable|driver_data_0
DECL|driver_data_1|variable|driver_data_1
DECL|i2c_qmsi_config_info|struct|struct i2c_qmsi_config_info {
DECL|i2c_qmsi_configure|function|static int i2c_qmsi_configure(struct device *dev, uint32_t config)
DECL|i2c_qmsi_driver_data|struct|struct i2c_qmsi_driver_data {
DECL|i2c_qmsi_init|function|static int i2c_qmsi_init(struct device *dev)
DECL|i2c_qmsi_resume|function|static int i2c_qmsi_resume(struct device *dev)
DECL|i2c_qmsi_suspend|function|static int i2c_qmsi_suspend(struct device *dev)
DECL|i2c_qmsi_transfer|function|static int i2c_qmsi_transfer(struct device *dev, struct i2c_msg *msgs, uint8_t num_msgs, uint16_t addr)
DECL|instance|member|qm_i2c_t instance; /* Controller instance. */
DECL|sem|member|struct nano_sem sem;
DECL|sync|member|device_sync_call_t sync;
DECL|transfer_complete|function|static void transfer_complete(void *data, int rc, qm_i2c_status_t status, uint32_t len)
DECL|transfer_status|member|int transfer_status;
