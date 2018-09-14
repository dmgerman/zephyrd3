DECL|LOG_BACKEND_DEFINE|macro|LOG_BACKEND_DEFINE
DECL|ZEPHYR_INCLUDE_LOGGING_LOG_BACKEND_H_|macro|ZEPHYR_INCLUDE_LOGGING_LOG_BACKEND_H_
DECL|active|member|bool active;
DECL|api|member|const struct log_backend_api *api;
DECL|cb|member|struct log_backend_control_block *cb;
DECL|ctx|member|void *ctx;
DECL|id|member|u8_t id;
DECL|log_backend_activate|function|static inline void log_backend_activate(const struct log_backend *const backend,void *ctx)
DECL|log_backend_api|struct|struct log_backend_api {
DECL|log_backend_control_block|struct|struct log_backend_control_block {
DECL|log_backend_count_get|function|static inline int log_backend_count_get(void)
DECL|log_backend_deactivate|function|static inline void log_backend_deactivate(const struct log_backend *const backend)
DECL|log_backend_get|function|static inline const struct log_backend *log_backend_get(u32_t idx)
DECL|log_backend_id_get|function|static inline u8_t log_backend_id_get(const struct log_backend *const backend)
DECL|log_backend_id_set|function|static inline void log_backend_id_set(const struct log_backend *const backend, u8_t id)
DECL|log_backend_is_active|function|static inline bool log_backend_is_active(const struct log_backend *const backend)
DECL|log_backend_panic|function|static inline void log_backend_panic(const struct log_backend *const backend)
DECL|log_backend_put|function|static inline void log_backend_put(const struct log_backend *const backend, struct log_msg *msg)
DECL|log_backend|struct|struct log_backend {
DECL|name|member|const char *name;
DECL|panic|member|void (*panic)(const struct log_backend *const backend);
DECL|put|member|void (*put)(const struct log_backend *const backend,
