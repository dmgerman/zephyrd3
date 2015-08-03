DECL|DEBUG|macro|DEBUG
DECL|DTLS_LOG_ALERT|enumerator|typedef enum { DTLS_LOG_EMERG=0, DTLS_LOG_ALERT, DTLS_LOG_CRIT, DTLS_LOG_WARN,
DECL|DTLS_LOG_CRIT|enumerator|typedef enum { DTLS_LOG_EMERG=0, DTLS_LOG_ALERT, DTLS_LOG_CRIT, DTLS_LOG_WARN,
DECL|DTLS_LOG_DEBUG|enumerator|DTLS_LOG_NOTICE, DTLS_LOG_INFO, DTLS_LOG_DEBUG
DECL|DTLS_LOG_EMERG|enumerator|typedef enum { DTLS_LOG_EMERG=0, DTLS_LOG_ALERT, DTLS_LOG_CRIT, DTLS_LOG_WARN,
DECL|DTLS_LOG_INFO|enumerator|DTLS_LOG_NOTICE, DTLS_LOG_INFO, DTLS_LOG_DEBUG
DECL|DTLS_LOG_NOTICE|enumerator|DTLS_LOG_NOTICE, DTLS_LOG_INFO, DTLS_LOG_DEBUG
DECL|DTLS_LOG_WARN|enumerator|typedef enum { DTLS_LOG_EMERG=0, DTLS_LOG_ALERT, DTLS_LOG_CRIT, DTLS_LOG_WARN,
DECL|PRINTF|macro|PRINTF
DECL|_DTLS_DEBUG_H_|macro|_DTLS_DEBUG_H_
DECL|check_stack|function|static inline void check_stack() {
DECL|check_stack|function|static inline void check_stack() {
DECL|check_stack|function|static inline void check_stack() {
DECL|dsrv_log|function|static inline void dsrv_log(log_t level, char *format, ...)
DECL|dsrv_log|macro|dsrv_log
DECL|dtls_alert|macro|dtls_alert
DECL|dtls_crit|macro|dtls_crit
DECL|dtls_debug_dump|macro|dtls_debug_dump
DECL|dtls_debug_hexdump|macro|dtls_debug_hexdump
DECL|dtls_debug|macro|dtls_debug
DECL|dtls_dsrv_hexdump_log|function|dtls_dsrv_hexdump_log(log_t level, const char *name, const unsigned char *buf, size_t length, int extend)
DECL|dtls_dsrv_log_addr|function|dtls_dsrv_log_addr(log_t level, const char *name, const session_t *addr)
DECL|dtls_emerg|macro|dtls_emerg
DECL|dtls_get_log_level|function|static inline log_t dtls_get_log_level()
DECL|dtls_info|macro|dtls_info
DECL|dtls_notice|macro|dtls_notice
DECL|dtls_set_log_level|function|static inline void dtls_set_log_level(log_t level)
DECL|dtls_warn|macro|dtls_warn
DECL|dump|function|static inline void dump(unsigned char *buf, size_t len)
DECL|hexdump|function|static inline void hexdump(const unsigned char *packet, int length)
DECL|log_t|typedef|} log_t;
