DECL|arg|member|void *arg;
DECL|cb|member|stat_mgmt_foreach_entry_fn *cb;
DECL|stat_mgmt_impl_foreach_entry|function|stat_mgmt_impl_foreach_entry(const char *group_name, stat_mgmt_foreach_entry_fn *cb, void *arg)
DECL|stat_mgmt_impl_get_group|function|stat_mgmt_impl_get_group(int idx, const char **out_name)
DECL|zephyr_stat_mgmt_walk_arg|struct|struct zephyr_stat_mgmt_walk_arg {
DECL|zephyr_stat_mgmt_walk_cb|function|zephyr_stat_mgmt_walk_cb(struct stats_hdr *hdr, void *arg, const char *name, uint16_t off)
