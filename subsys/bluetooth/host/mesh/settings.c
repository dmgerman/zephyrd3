DECL|BT_DBG_ENABLED|macro|BT_DBG_ENABLED
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|__packed|variable|__packed
DECL|app_key_set|function|static int app_key_set(int argc, char **argv, char *val)
DECL|app_key_val|struct|struct app_key_val {
DECL|dev_key|member|u8_t dev_key[16];
DECL|func|member|int (*func)(int argc, char **argv, char *val);
DECL|iv_index|member|u32_t iv_index;
DECL|iv_set|function|static int iv_set(int argc, char **argv, char *val)
DECL|iv_update|member|bool iv_update;
DECL|iv_val|struct|struct iv_val {
DECL|kr_flag|member|u8_t kr_flag:1,
DECL|kr_phase|member|kr_phase:7;
DECL|mesh_commit|function|static int mesh_commit(void)
DECL|mesh_setting|struct|const struct mesh_setting {
DECL|mesh_set|function|static int mesh_set(int argc, char **argv, char *val)
DECL|name|member|const char *name;
DECL|net_idx|member|u16_t net_idx;
DECL|net_key_set|function|static int net_key_set(int argc, char **argv, char *val)
DECL|net_key_val|struct|struct net_key_val {
DECL|net_set|function|static int net_set(int argc, char **argv, char *val)
DECL|net_val|struct|struct net_val {
DECL|old_iv|member|old_iv:1;
DECL|primary_addr|member|u16_t primary_addr;
DECL|rpl_alloc|function|static struct bt_mesh_rpl *rpl_alloc(u16_t src)
DECL|rpl_find|function|static struct bt_mesh_rpl *rpl_find(u16_t src)
DECL|rpl_set|function|static int rpl_set(int argc, char **argv, char *val)
DECL|rpl_val|struct|struct rpl_val {
DECL|seq_set|function|static int seq_set(int argc, char **argv, char *val)
DECL|seq_val|struct|struct seq_val {
DECL|seq|member|u32_t seq:24,
DECL|settings|variable|settings
DECL|subnet_init|function|static int subnet_init(struct bt_mesh_subnet *sub)
DECL|updated|member|bool updated;
DECL|val|member|u8_t val[2][16];
DECL|val|member|u8_t val[2][16];
DECL|val|member|u8_t val[3];
