DECL|STATS_GEN_NAME_MAX_LEN|macro|STATS_GEN_NAME_MAX_LEN
DECL|stats_gen_name|function|stats_gen_name(int idx, char *dst)
DECL|stats_get_name|function|stats_get_name(const struct stats_hdr *hdr, int idx)
DECL|stats_get_off|function|stats_get_off(const struct stats_hdr *hdr, int idx)
DECL|stats_group_find|function|stats_group_find(const char *name)
DECL|stats_group_get_next|function|stats_group_get_next(const struct stats_hdr *cur)
DECL|stats_group_walk|function|stats_group_walk(stats_group_walk_fn *walk_func, void *arg)
DECL|stats_init_and_reg|function|stats_init_and_reg(struct stats_hdr *shdr, u8_t size, u8_t cnt, const struct stats_name_map *map, u8_t map_cnt, const char *name)
DECL|stats_init|function|stats_init(struct stats_hdr *hdr, u8_t size, u8_t cnt, const struct stats_name_map *map, u8_t map_cnt)
DECL|stats_list|variable|stats_list
DECL|stats_register|function|stats_register(const char *name, struct stats_hdr *hdr)
DECL|stats_reset|function|stats_reset(struct stats_hdr *hdr)
DECL|stats_walk|function|stats_walk(struct stats_hdr *hdr, stats_walk_fn *walk_func, void *arg)
