DECL|arg|member|void *arg;
DECL|body|member|uint8_t body[LOG_MGMT_BODY_LEN];
DECL|cb|member|log_mgmt_foreach_entry_fn *cb;
DECL|log_mgmt_impl_clear|function|log_mgmt_impl_clear(const char *log_name)
DECL|log_mgmt_impl_foreach_entry|function|log_mgmt_impl_foreach_entry(const char *log_name, const struct log_mgmt_filter *filter, log_mgmt_foreach_entry_fn *cb, void *arg)
DECL|log_mgmt_impl_get_level|function|log_mgmt_impl_get_level(int idx, const char **out_level_name)
DECL|log_mgmt_impl_get_log|function|log_mgmt_impl_get_log(int idx, struct log_mgmt_log *out_log)
DECL|log_mgmt_impl_get_module|function|log_mgmt_impl_get_module(int idx, const char **out_module_name)
DECL|log_mgmt_impl_get_next_idx|function|log_mgmt_impl_get_next_idx(uint32_t *out_idx)
DECL|zephyr_log_mgmt_walk_arg|struct|struct zephyr_log_mgmt_walk_arg {
DECL|zephyr_log_mgmt_walk_cb|function|zephyr_log_mgmt_walk_cb(struct mdlog *log, struct mdlog_offset *log_offset, const void *desciptor, uint16_t len)
