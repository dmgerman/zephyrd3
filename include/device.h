DECL|DEVICE_DECLARE|macro|DEVICE_DECLARE
DECL|DEVICE_GET|macro|DEVICE_GET
DECL|DEVICE_INIT_PM|macro|DEVICE_INIT_PM
DECL|DEVICE_INIT|macro|DEVICE_INIT
DECL|DEVICE_INIT|macro|DEVICE_INIT
DECL|DEVICE_NAME_GET|macro|DEVICE_NAME_GET
DECL|DEVICE_SYNC_WAITER_FIBER|enumerator|DEVICE_SYNC_WAITER_FIBER,
DECL|DEVICE_SYNC_WAITER_NONE|enumerator|DEVICE_SYNC_WAITER_NONE,
DECL|DEVICE_SYNC_WAITER_TASK|enumerator|DEVICE_SYNC_WAITER_TASK,
DECL|DEV_FAIL|macro|DEV_FAIL
DECL|DEV_INVALID_CONF|macro|DEV_INVALID_CONF
DECL|DEV_INVALID_OP|macro|DEV_INVALID_OP
DECL|DEV_NOT_CONFIG|macro|DEV_NOT_CONFIG
DECL|DEV_NO_ACCESS|macro|DEV_NO_ACCESS
DECL|DEV_NO_SUPPORT|macro|DEV_NO_SUPPORT
DECL|DEV_OK|macro|DEV_OK
DECL|DEV_USED|macro|DEV_USED
DECL|_DEVICE_H_|macro|_DEVICE_H_
DECL|_is_blocking_task|function|static inline bool _is_blocking_task(void)
DECL|_t_sem|member|struct _k_sem_struct _t_sem;
DECL|config_info|member|void *config_info;
DECL|config|member|struct device_config *config;
DECL|dev_pm_ops|member|struct device_pm_ops *dev_pm_ops;
DECL|device_config|struct|struct device_config {
DECL|device_pm_ops|struct|struct device_pm_ops {
DECL|device_ready|member|bool device_ready;
DECL|device_resume|function|static inline int device_resume(struct device *device, int pm_policy)
DECL|device_suspend|function|static inline int device_suspend(struct device *device, int pm_policy)
DECL|device_sync_call_complete|function|static inline void device_sync_call_complete(device_sync_call_t *sync)
DECL|device_sync_call_complete|function|static inline void device_sync_call_complete(device_sync_call_t *sync)
DECL|device_sync_call_init|function|static inline void device_sync_call_init(device_sync_call_t *sync)
DECL|device_sync_call_t|typedef|} device_sync_call_t;
DECL|device_sync_call_wait|function|static inline void device_sync_call_wait(device_sync_call_t *sync)
DECL|device_sync_call_wait|function|static inline void device_sync_call_wait(device_sync_call_t *sync)
DECL|device_sync_waiter|enum|enum device_sync_waiter {
DECL|device|struct|struct device {
DECL|driver_api|member|void *driver_api;
DECL|driver_data|member|void *driver_data;
DECL|f_sem|member|struct nano_sem f_sem;
DECL|init|member|int (*init)(struct device *device);
DECL|name|member|char *name;
DECL|resume|member|int (*resume)(struct device *device, int pm_policy);
DECL|suspend|member|int (*suspend)(struct device *device, int pm_policy);
DECL|t_sem|member|ksem_t t_sem;
DECL|waiter|member|enum device_sync_waiter waiter;
