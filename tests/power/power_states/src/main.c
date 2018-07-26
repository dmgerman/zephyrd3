DECL|CMP_INTERRUPT_PIN|macro|CMP_INTERRUPT_PIN
DECL|GPIO_INTERRUPT_PIN|macro|GPIO_INTERRUPT_PIN
DECL|MAX_SUSPEND_DEVICE_COUNT|macro|MAX_SUSPEND_DEVICE_COUNT
DECL|MAX_SYS_PM_STATES|macro|MAX_SYS_PM_STATES
DECL|MIN_TIME_TO_SUSPEND|macro|MIN_TIME_TO_SUSPEND
DECL|NB_STATES|macro|NB_STATES
DECL|TICKS_TO_SECONDS_MULTIPLIER|macro|TICKS_TO_SECONDS_MULTIPLIER
DECL|TICKS_TO_SECONDS_MULTIPLIER|macro|TICKS_TO_SECONDS_MULTIPLIER
DECL|TIMEOUT|macro|TIMEOUT
DECL|TIME_UNIT_STRING|macro|TIME_UNIT_STRING
DECL|TIME_UNIT_STRING|macro|TIME_UNIT_STRING
DECL|_sys_soc_resume|function|void _sys_soc_resume(void)
DECL|_sys_soc_suspend|function|int _sys_soc_suspend(s32_t ticks)
DECL|build_suspend_device_list|function|static void build_suspend_device_list(void)
DECL|cmp_dev|variable|cmp_dev
DECL|counter_dev|variable|counter_dev
DECL|current_state|variable|current_state
DECL|do_soc_sleep|function|static void do_soc_sleep(enum power_states state)
DECL|get_next_state|function|static enum power_states get_next_state(void)
DECL|gpio_dev|variable|gpio_dev
DECL|milliseconds_spent|variable|milliseconds_spent
DECL|post_ops_done|variable|post_ops_done
DECL|rtc_dev|variable|rtc_dev
DECL|set_counter_alarm|function|static void set_counter_alarm(void)
DECL|set_rtc_alarm|function|static void set_rtc_alarm(void)
DECL|setup_aon_comparator|function|static void setup_aon_comparator(void)
DECL|setup_aon_gpio|function|static void setup_aon_gpio(void)
DECL|setup_counter|function|static void setup_counter(void)
DECL|setup_rtc|function|static void setup_rtc(void)
DECL|setup_wake_event|function|static void setup_wake_event(void)
DECL|start_time|variable|start_time
DECL|state_to_string|function|static const char *state_to_string(int state)
DECL|states_list|variable|states_list
DECL|suspend_device_count|variable|suspend_device_count
DECL|suspend_devices|variable|suspend_devices
DECL|test_complete|variable|test_complete
DECL|test_main|function|void test_main(void)
DECL|test_power_state|function|void test_power_state(void)
