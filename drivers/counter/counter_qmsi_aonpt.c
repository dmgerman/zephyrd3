DECL|aon_timer_data|struct|struct aon_timer_data {
DECL|aon_timer_init|function|static int aon_timer_init(struct device *dev)
DECL|aon_timer_qmsi_api|variable|aon_timer_qmsi_api
DECL|aon_timer_qmsi_read|function|static uint32_t aon_timer_qmsi_read(void)
DECL|aon_timer_qmsi_set_alarm|function|static int aon_timer_qmsi_set_alarm(struct device *dev, counter_callback_t callback, uint32_t count, void *user_data)
DECL|aon_timer_qmsi_start|function|static int aon_timer_qmsi_start(struct device *dev)
DECL|aon_timer_qmsi_stop|function|static int aon_timer_qmsi_stop(struct device *dev)
DECL|aonpt_driver_data|variable|aonpt_driver_data
DECL|aonpt_int_callback|function|static void aonpt_int_callback(void)
DECL|callback_user_data|member|void *callback_user_data;
DECL|timer_callback|member|counter_callback_t timer_callback;
