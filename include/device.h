DECL|DEVICE_AND_API_INIT|macro|DEVICE_AND_API_INIT
DECL|DEVICE_AND_API_INIT|macro|DEVICE_AND_API_INIT
DECL|DEVICE_DECLARE|macro|DEVICE_DECLARE
DECL|DEVICE_DEFINE|macro|DEVICE_DEFINE
DECL|DEVICE_DEFINE|macro|DEVICE_DEFINE
DECL|DEVICE_GET|macro|DEVICE_GET
DECL|DEVICE_INIT|macro|DEVICE_INIT
DECL|DEVICE_NAME_GET|macro|DEVICE_NAME_GET
DECL|DEVICE_PM_ACTIVE_STATE|macro|DEVICE_PM_ACTIVE_STATE
DECL|DEVICE_PM_GET_POWER_STATE|macro|DEVICE_PM_GET_POWER_STATE
DECL|DEVICE_PM_LOW_POWER_STATE|macro|DEVICE_PM_LOW_POWER_STATE
DECL|DEVICE_PM_OFF_STATE|macro|DEVICE_PM_OFF_STATE
DECL|DEVICE_PM_SET_POWER_STATE|macro|DEVICE_PM_SET_POWER_STATE
DECL|DEVICE_PM_SUSPEND_STATE|macro|DEVICE_PM_SUSPEND_STATE
DECL|ZEPHYR_INCLUDE_DEVICE_H_|macro|ZEPHYR_INCLUDE_DEVICE_H_
DECL|config_info|member|const void *config_info;
DECL|config|member|struct device_config *config;
DECL|device_config|struct|struct device_config {
DECL|device_get_power_state|function|static inline int device_get_power_state(struct device *device, u32_t *device_power_state)
DECL|device_pm_control|member|int (*device_pm_control)(struct device *device, u32_t command,
DECL|device_set_power_state|function|static inline int device_set_power_state(struct device *device, u32_t device_power_state)
DECL|device|struct|struct device {
DECL|driver_api|member|const void *driver_api;
DECL|driver_data|member|void *driver_data;
DECL|init|member|int (*init)(struct device *device);
DECL|name|member|const char *name;
