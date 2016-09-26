DECL|ALARM|macro|ALARM
DECL|DEVICE_POLICY_MAX|macro|DEVICE_POLICY_MAX
DECL|GPIO_IN_PIN|macro|GPIO_IN_PIN
DECL|SECONDS_TO_SLEEP|macro|SECONDS_TO_SLEEP
DECL|SLEEPTICKS|macro|SLEEPTICKS
DECL|_sys_soc_resume|function|void _sys_soc_resume(void)
DECL|_sys_soc_suspend|function|int _sys_soc_suspend(int32_t ticks)
DECL|check_pm_policy|function|static int check_pm_policy(int32_t ticks)
DECL|create_device_list|function|static void create_device_list(void)
DECL|deep_sleep_entry|function|static int deep_sleep_entry(int32_t ticks)
DECL|deep_sleep_exit|function|static void deep_sleep_exit(void)
DECL|device_count|variable|device_count
DECL|device_list|variable|device_list
DECL|device_policy_list|variable|device_policy_list
DECL|device_retval|variable|device_retval
DECL|enable_wake_event|function|static void enable_wake_event(void)
DECL|end_time|variable|end_time
DECL|gpio_dev|variable|gpio_dev
DECL|low_power_state_entry|function|static int low_power_state_entry(int32_t ticks)
DECL|low_power_state_exit|function|static void low_power_state_exit(void)
DECL|main|function|void main(void)
DECL|resume_devices|function|static void resume_devices(int pm_policy)
DECL|rtc_dev|variable|rtc_dev
DECL|rtc_interrupt_fn|function|void rtc_interrupt_fn(struct device *rtc_dev)
DECL|setup_gpio|function|static int setup_gpio(void)
DECL|setup_rtc|function|static void setup_rtc(void)
DECL|start_time|variable|start_time
DECL|suspend_devices|function|static void suspend_devices(int pm_policy)
DECL|test_started|variable|test_started
DECL|wait_gpio_low|function|static int wait_gpio_low(void)
