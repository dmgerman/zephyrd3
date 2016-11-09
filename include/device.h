DECL|DEFINE_DEVICE_PM_OPS|macro|DEFINE_DEVICE_PM_OPS
DECL|DEFINE_DEVICE_PM_OPS|macro|DEFINE_DEVICE_PM_OPS
DECL|DEVICE_AND_API_INIT_PM|macro|DEVICE_AND_API_INIT_PM
DECL|DEVICE_AND_API_INIT_PM|macro|DEVICE_AND_API_INIT_PM
DECL|DEVICE_AND_API_INIT|macro|DEVICE_AND_API_INIT
DECL|DEVICE_AND_API_INIT|macro|DEVICE_AND_API_INIT
DECL|DEVICE_DECLARE|macro|DEVICE_DECLARE
DECL|DEVICE_DEFINE|macro|DEVICE_DEFINE
DECL|DEVICE_DEFINE|macro|DEVICE_DEFINE
DECL|DEVICE_GET|macro|DEVICE_GET
DECL|DEVICE_INIT_PM|macro|DEVICE_INIT_PM
DECL|DEVICE_INIT|macro|DEVICE_INIT
DECL|DEVICE_NAME_GET|macro|DEVICE_NAME_GET
DECL|DEVICE_PM_ACTIVE_STATE|macro|DEVICE_PM_ACTIVE_STATE
DECL|DEVICE_PM_GET_POWER_STATE|macro|DEVICE_PM_GET_POWER_STATE
DECL|DEVICE_PM_LOW_POWER_STATE|macro|DEVICE_PM_LOW_POWER_STATE
DECL|DEVICE_PM_OFF_STATE|macro|DEVICE_PM_OFF_STATE
DECL|DEVICE_PM_OPS_GET|macro|DEVICE_PM_OPS_GET
DECL|DEVICE_PM_OPS_GET|macro|DEVICE_PM_OPS_GET
DECL|DEVICE_PM_SET_POWER_STATE|macro|DEVICE_PM_SET_POWER_STATE
DECL|DEVICE_PM_SUSPEND_STATE|macro|DEVICE_PM_SUSPEND_STATE
DECL|_DEVICE_H_|macro|_DEVICE_H_
DECL|config_info|member|const void *config_info;
DECL|config|member|struct device_config *config;
DECL|dev_pm_ops|member|struct device_pm_ops *dev_pm_ops; /* deprecated */
DECL|device_config|struct|struct device_config {
DECL|device_get_power_state|function|static inline int device_get_power_state(struct device *device, uint32_t *device_power_state)
DECL|device_pm_control|member|int (*device_pm_control)(struct device *device, uint32_t command,
DECL|device_pm_ops|struct|struct device_pm_ops {
DECL|device_resume|function|static inline int __deprecated device_resume(struct device *device,int pm_policy)
DECL|device_set_power_state|function|static inline int device_set_power_state(struct device *device, uint32_t device_power_state)
DECL|device_suspend|function|static inline int __deprecated device_suspend(struct device *device,int pm_policy)
DECL|device_sync_call_complete|function|static inline void device_sync_call_complete(device_sync_call_t *sync)
DECL|device_sync_call_init|function|static inline void device_sync_call_init(device_sync_call_t *sync)
DECL|device_sync_call_t|typedef|} device_sync_call_t;
DECL|device_sync_call_wait|function|static inline void device_sync_call_wait(device_sync_call_t *sync)
DECL|device|struct|struct device {
DECL|driver_api|member|const void *driver_api;
DECL|driver_data|member|void *driver_data;
DECL|f_sem|member|struct k_sem f_sem;
DECL|init|member|int (*init)(struct device *device);
DECL|name|member|char *name;
DECL|resume|member|int (*resume)(struct device *device, int pm_policy);
DECL|suspend|member|int (*suspend)(struct device *device, int pm_policy);
