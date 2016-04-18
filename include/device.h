DECL|DEVICE_AND_API_INIT_PM|macro|DEVICE_AND_API_INIT_PM
DECL|DEVICE_AND_API_INIT|macro|DEVICE_AND_API_INIT
DECL|DEVICE_AND_API_INIT|macro|DEVICE_AND_API_INIT
DECL|DEVICE_DECLARE|macro|DEVICE_DECLARE
DECL|DEVICE_GET|macro|DEVICE_GET
DECL|DEVICE_INIT_PM|macro|DEVICE_INIT_PM
DECL|DEVICE_INIT|macro|DEVICE_INIT
DECL|DEVICE_INIT|macro|DEVICE_INIT
DECL|DEVICE_NAME_GET|macro|DEVICE_NAME_GET
DECL|_DEVICE_H_|macro|_DEVICE_H_
DECL|config_info|member|void *config_info;
DECL|config|member|struct device_config *config;
DECL|dev_pm_ops|member|struct device_pm_ops *dev_pm_ops;
DECL|device_config|struct|struct device_config {
DECL|device_pm_ops|struct|struct device_pm_ops {
DECL|device_resume|function|static inline int device_resume(struct device *device, int pm_policy)
DECL|device_suspend|function|static inline int device_suspend(struct device *device, int pm_policy)
DECL|device_sync_call_complete|function|static inline void device_sync_call_complete(device_sync_call_t *sync)
DECL|device_sync_call_init|function|static inline void device_sync_call_init(device_sync_call_t *sync)
DECL|device_sync_call_t|typedef|} device_sync_call_t;
DECL|device_sync_call_wait|function|static inline void device_sync_call_wait(device_sync_call_t *sync)
DECL|device|struct|struct device {
DECL|driver_api|member|void *driver_api;
DECL|driver_data|member|void *driver_data;
DECL|f_sem|member|struct nano_sem f_sem;
DECL|init|member|int (*init)(struct device *device);
DECL|name|member|char *name;
DECL|resume|member|int (*resume)(struct device *device, int pm_policy);
DECL|suspend|member|int (*suspend)(struct device *device, int pm_policy);
