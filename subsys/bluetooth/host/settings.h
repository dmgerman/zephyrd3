DECL|BT_SETTINGS_DEFINE|macro|BT_SETTINGS_DEFINE
DECL|BT_SETTINGS_KEY_MAX|macro|BT_SETTINGS_KEY_MAX
DECL|BT_SETTINGS_SIZE|macro|BT_SETTINGS_SIZE
DECL|bt_settings_handler|struct|struct bt_settings_handler {
DECL|commit|member|int (*commit)(void);
DECL|export|member|int (*export)(int (*func)(const char *name, char *val));
DECL|name|member|const char *name;
DECL|set|member|int (*set)(int argc, char **argv, char *val);
