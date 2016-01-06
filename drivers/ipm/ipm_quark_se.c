DECL|api_funcs|variable|api_funcs
DECL|device_by_channel|variable|device_by_channel
DECL|inbound_channels|variable|inbound_channels
DECL|quark_se_ipm_controller_initialize|function|int quark_se_ipm_controller_initialize(struct device *d)
DECL|quark_se_ipm_initialize|function|int quark_se_ipm_initialize(struct device *d)
DECL|quark_se_ipm_isr|function|void quark_se_ipm_isr(void *param)
DECL|quark_se_ipm_max_data_size_get|function|static int quark_se_ipm_max_data_size_get(struct device *d)
DECL|quark_se_ipm_max_id_val_get|function|static uint32_t quark_se_ipm_max_id_val_get(struct device *d)
DECL|quark_se_ipm_register_callback|function|static void quark_se_ipm_register_callback(struct device *d, ipm_callback_t cb, void *context)
DECL|quark_se_ipm_send|function|static int quark_se_ipm_send(struct device *d, int wait, uint32_t id,const void *data, int size)
DECL|quark_se_ipm_set_enabled|function|static int quark_se_ipm_set_enabled(struct device *d, int enable)
DECL|quark_se_ipm_sts_get|function|static uint32_t quark_se_ipm_sts_get(void)
DECL|set_channel_irq_state|function|static void set_channel_irq_state(int channel, int enable)
