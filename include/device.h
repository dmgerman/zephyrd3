DECL|DECLARE_DEVICE_INIT_CONFIG|macro|DECLARE_DEVICE_INIT_CONFIG
DECL|_DEVICE_H_|macro|_DEVICE_H_
DECL|config_info|member|void *config_info;
DECL|config|member|struct device_config *config;
DECL|device_config|struct|struct device_config {
DECL|device|struct|struct device {
DECL|driver_api|member|void *driver_api;
DECL|driver_data|member|void *driver_data;
DECL|init|member|int (*init)(struct device *device);
DECL|name|member|char *name;
