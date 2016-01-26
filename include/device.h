DECL|DECLARE_DEVICE_INIT_CONFIG|macro|DECLARE_DEVICE_INIT_CONFIG
DECL|DEV_FAIL|macro|DEV_FAIL
DECL|DEV_INVALID_CONF|macro|DEV_INVALID_CONF
DECL|DEV_INVALID_OP|macro|DEV_INVALID_OP
DECL|DEV_NOT_CONFIG|macro|DEV_NOT_CONFIG
DECL|DEV_NO_ACCESS|macro|DEV_NO_ACCESS
DECL|DEV_NO_SUPPORT|macro|DEV_NO_SUPPORT
DECL|DEV_OK|macro|DEV_OK
DECL|DEV_USED|macro|DEV_USED
DECL|_DEVICE_H_|macro|_DEVICE_H_
DECL|_t_sem|member|struct _k_sem_struct _t_sem;
DECL|caller_is_task|member|bool caller_is_task;
DECL|config_info|member|void *config_info;
DECL|config|member|struct device_config *config;
DECL|device_config|struct|struct device_config {
DECL|device_sync_call_complete|function|static inline void device_sync_call_complete(device_sync_call_t *sync)
DECL|device_sync_call_complete|function|static inline void device_sync_call_complete(device_sync_call_t *sync)
DECL|device_sync_call_init|function|static inline void device_sync_call_init(device_sync_call_t *sync)
DECL|device_sync_call_t|typedef|} device_sync_call_t;
DECL|device_sync_call_wait|function|static inline void device_sync_call_wait(device_sync_call_t *sync)
DECL|device_sync_call_wait|function|static inline void device_sync_call_wait(device_sync_call_t *sync)
DECL|device|struct|struct device {
DECL|driver_api|member|void *driver_api;
DECL|driver_data|member|void *driver_data;
DECL|f_sem|member|struct nano_sem f_sem;
DECL|init|member|int (*init)(struct device *device);
DECL|name|member|char *name;
DECL|t_sem|member|ksem_t t_sem;
