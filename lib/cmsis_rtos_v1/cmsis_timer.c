DECL|ACTIVE|macro|ACTIVE
DECL|NOT_ACTIVE|macro|NOT_ACTIVE
DECL|arg|member|void *arg;
DECL|callback_function|member|void (*callback_function)(void const *argument);
DECL|osTimerCreate|function|osTimerId osTimerCreate(const osTimerDef_t *timer_def, os_timer_type type,void *argument)
DECL|osTimerDelete|function|osStatus osTimerDelete(osTimerId timer_id)
DECL|osTimerStart|function|osStatus osTimerStart(osTimerId timer_id, uint32_t millisec)
DECL|osTimerStop|function|osStatus osTimerStop(osTimerId timer_id)
DECL|status|member|u32_t status;
DECL|timer_obj|struct|struct timer_obj {
DECL|type|member|os_timer_type type;
DECL|zephyr_timer_wrapper|function|static void zephyr_timer_wrapper(struct k_timer *timer)
DECL|ztimer|member|struct k_timer ztimer;
