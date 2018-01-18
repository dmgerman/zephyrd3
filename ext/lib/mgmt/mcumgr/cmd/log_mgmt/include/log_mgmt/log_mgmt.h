DECL|H_LOG_MGMT_|macro|H_LOG_MGMT_
DECL|LOG_MGMT_ID_APPEND|macro|LOG_MGMT_ID_APPEND
DECL|LOG_MGMT_ID_CLEAR|macro|LOG_MGMT_ID_CLEAR
DECL|LOG_MGMT_ID_LEVEL_LIST|macro|LOG_MGMT_ID_LEVEL_LIST
DECL|LOG_MGMT_ID_LOGS_LIST|macro|LOG_MGMT_ID_LOGS_LIST
DECL|LOG_MGMT_ID_MODULE_LIST|macro|LOG_MGMT_ID_MODULE_LIST
DECL|LOG_MGMT_ID_SHOW|macro|LOG_MGMT_ID_SHOW
DECL|LOG_MGMT_TYPE_MEMORY|macro|LOG_MGMT_TYPE_MEMORY
DECL|LOG_MGMT_TYPE_STORAGE|macro|LOG_MGMT_TYPE_STORAGE
DECL|LOG_MGMT_TYPE_STREAM|macro|LOG_MGMT_TYPE_STREAM
DECL|data|member|const void *data;
DECL|index|member|uint32_t index;
DECL|len|member|size_t len;
DECL|level|member|uint8_t level;
DECL|log_mgmt_entry|struct|struct log_mgmt_entry {
DECL|log_mgmt_filter|struct|struct log_mgmt_filter {
DECL|log_mgmt_log|struct|struct log_mgmt_log {
DECL|min_index|member|uint32_t min_index;
DECL|min_timestamp|member|int64_t min_timestamp;
DECL|module|member|uint8_t module;
DECL|name|member|const char *name;
DECL|ts|member|int64_t ts;
DECL|type|member|int type;
