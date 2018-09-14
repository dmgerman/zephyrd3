DECL|SETTINGS_BOOL|enumerator|SETTINGS_BOOL,
DECL|SETTINGS_BYTES|enumerator|SETTINGS_BYTES,
DECL|SETTINGS_DOUBLE|enumerator|SETTINGS_DOUBLE,
DECL|SETTINGS_EXPORT_PERSIST|enumerator|SETTINGS_EXPORT_PERSIST, /* Value is to be persisted. */
DECL|SETTINGS_EXPORT_SHOW|enumerator|SETTINGS_EXPORT_SHOW /* Value is to be displayed. */
DECL|SETTINGS_EXTRA_LEN|macro|SETTINGS_EXTRA_LEN
DECL|SETTINGS_FLOAT|enumerator|SETTINGS_FLOAT,
DECL|SETTINGS_INT16|enumerator|SETTINGS_INT16,
DECL|SETTINGS_INT32|enumerator|SETTINGS_INT32,
DECL|SETTINGS_INT64|enumerator|SETTINGS_INT64,
DECL|SETTINGS_INT8|enumerator|SETTINGS_INT8,
DECL|SETTINGS_MAX_DIR_DEPTH|macro|SETTINGS_MAX_DIR_DEPTH
DECL|SETTINGS_MAX_NAME_LEN|macro|SETTINGS_MAX_NAME_LEN
DECL|SETTINGS_MAX_VAL_LEN|macro|SETTINGS_MAX_VAL_LEN
DECL|SETTINGS_NAME_SEPARATOR|macro|SETTINGS_NAME_SEPARATOR
DECL|SETTINGS_NMGR_OP|macro|SETTINGS_NMGR_OP
DECL|SETTINGS_NONE|enumerator|SETTINGS_NONE = 0,
DECL|SETTINGS_STRING|enumerator|SETTINGS_STRING,
DECL|SETTINGS_STR_FROM_BYTES_LEN|macro|SETTINGS_STR_FROM_BYTES_LEN
DECL|SETTINGS_VALUE_SET|macro|SETTINGS_VALUE_SET
DECL|ZEPHYR_INCLUDE_SETTINGS_SETTINGS_H_|macro|ZEPHYR_INCLUDE_SETTINGS_SETTINGS_H_
DECL|cs_itf|member|const struct settings_store_itf *cs_itf;
DECL|cs_next|member|sys_snode_t cs_next;
DECL|h_commit|member|int (*h_commit)(void);
DECL|h_export|member|int (*h_export)(int (*export_func)(const char *name, char *val),
DECL|h_get|member|char *(*h_get)(int argc, char **argv, char *val, int val_len_max);
DECL|h_set|member|int (*h_set)(int argc, char **argv, char *val);
DECL|name|member|char *name;
DECL|node|member|sys_snode_t node;
DECL|settings_export_tgt|enum|enum settings_export_tgt {
DECL|settings_handler|struct|struct settings_handler {
DECL|settings_store|struct|struct settings_store {
DECL|settings_type|enum|enum settings_type {
