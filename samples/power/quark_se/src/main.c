DECL|MAX_SUSPEND_DEVICE_COUNT|macro|MAX_SUSPEND_DEVICE_COUNT
DECL|POWER_STATE_CPU_C1|enumerator|POWER_STATE_CPU_C1,
DECL|POWER_STATE_CPU_C2LP|enumerator|POWER_STATE_CPU_C2LP,
DECL|POWER_STATE_CPU_C2|enumerator|POWER_STATE_CPU_C2,
DECL|POWER_STATE_MAX|enumerator|POWER_STATE_MAX
DECL|POWER_STATE_SOC_DEEP_SLEEP|enumerator|POWER_STATE_SOC_DEEP_SLEEP,
DECL|POWER_STATE_SOC_SLEEP|enumerator|POWER_STATE_SOC_SLEEP,
DECL|TIMEOUT|macro|TIMEOUT
DECL|__do_soc_sleep|function|static void __do_soc_sleep(int deep)
DECL|_sys_soc_suspend|function|int _sys_soc_suspend(int32_t ticks)
DECL|build_suspend_device_list|function|static void build_suspend_device_list(void)
DECL|do_soc_sleep|function|static void do_soc_sleep(int deep)
DECL|get_next_state|function|static enum power_states get_next_state(void)
DECL|last_state|variable|last_state
DECL|main|function|void main(void)
DECL|power_states|enum|enum power_states {
DECL|rtc_dev|variable|rtc_dev
DECL|set_rtc_alarm|function|static void set_rtc_alarm(void)
DECL|state_to_string|function|static const char *state_to_string(int state)
DECL|suspend_device_count|variable|suspend_device_count
DECL|suspend_devices|variable|suspend_devices
