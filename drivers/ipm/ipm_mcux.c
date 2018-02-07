DECL|MAILBOX_ID_OTHER_CPU|macro|MAILBOX_ID_OTHER_CPU
DECL|MAILBOX_ID_OTHER_CPU|macro|MAILBOX_ID_OTHER_CPU
DECL|MAILBOX_ID_THIS_CPU|macro|MAILBOX_ID_THIS_CPU
DECL|MAILBOX_ID_THIS_CPU|macro|MAILBOX_ID_THIS_CPU
DECL|MCUX_IPM_DATA_REGS|macro|MCUX_IPM_DATA_REGS
DECL|MCUX_IPM_MAX_ID_VAL|macro|MCUX_IPM_MAX_ID_VAL
DECL|base|member|MAILBOX_Type *base;
DECL|callback_ctx|member|void *callback_ctx;
DECL|callback|member|ipm_callback_t callback;
DECL|irq_config_func|member|void (*irq_config_func)(struct device *dev);
DECL|mcux_mailbox_0_config|variable|mcux_mailbox_0_config
DECL|mcux_mailbox_0_data|variable|mcux_mailbox_0_data
DECL|mcux_mailbox_config_func_0|function|static void mcux_mailbox_config_func_0(struct device *dev)
DECL|mcux_mailbox_config|struct|struct mcux_mailbox_config {
DECL|mcux_mailbox_data|struct|struct mcux_mailbox_data {
DECL|mcux_mailbox_driver_api|variable|mcux_mailbox_driver_api
DECL|mcux_mailbox_init|function|static int mcux_mailbox_init(struct device *dev)
DECL|mcux_mailbox_ipm_max_data_size_get|function|static int mcux_mailbox_ipm_max_data_size_get(struct device *d)
DECL|mcux_mailbox_ipm_max_id_val_get|function|static u32_t mcux_mailbox_ipm_max_id_val_get(struct device *d)
DECL|mcux_mailbox_ipm_register_callback|function|static void mcux_mailbox_ipm_register_callback(struct device *d, ipm_callback_t cb, void *context)
DECL|mcux_mailbox_ipm_send|function|static int mcux_mailbox_ipm_send(struct device *d, int wait, u32_t id,const void *data, int size)
DECL|mcux_mailbox_ipm_set_enabled|function|static int mcux_mailbox_ipm_set_enabled(struct device *d, int enable)
DECL|mcux_mailbox_isr|function|static void mcux_mailbox_isr(void *arg)
