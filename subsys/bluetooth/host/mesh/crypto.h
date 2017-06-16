DECL|bt_mesh_aes_cmac_one|function|static inline int bt_mesh_aes_cmac_one(const u8_t key[16], const void *m, size_t len, u8_t mac[16])
DECL|bt_mesh_app_id|function|static inline int bt_mesh_app_id(const u8_t app_key[16], u8_t app_id[1])
DECL|bt_mesh_beacon_key|function|static inline int bt_mesh_beacon_key(const u8_t net_key[16], u8_t beacon_key[16])
DECL|bt_mesh_dev_key|function|static inline int bt_mesh_dev_key(const u8_t dhkey[32], const u8_t prov_salt[16], u8_t dev_key[16])
DECL|bt_mesh_id_resolving_key|function|static inline int bt_mesh_id_resolving_key(const u8_t net_key[16], u8_t resolving_key[16])
DECL|bt_mesh_identity_key|function|static inline int bt_mesh_identity_key(const u8_t net_key[16], u8_t identity_key[16])
DECL|bt_mesh_k1_str|macro|bt_mesh_k1_str
DECL|bt_mesh_prov_nonce|function|static inline int bt_mesh_prov_nonce(const u8_t dhkey[32], const u8_t prov_salt[16], u8_t nonce[13])
DECL|bt_mesh_prov_salt|function|static inline int bt_mesh_prov_salt(const u8_t conf_salt[16], const u8_t prov_rand[16], const u8_t dev_rand[16], u8_t prov_salt[16])
DECL|bt_mesh_s1|function|static inline bool bt_mesh_s1(const char *m, u8_t salt[16])
DECL|bt_mesh_session_key|function|static inline int bt_mesh_session_key(const u8_t dhkey[32], const u8_t prov_salt[16], u8_t session_key[16])
DECL|bt_mesh_sg|struct|struct bt_mesh_sg {
DECL|data|member|const void *data;
DECL|len|member|size_t len;
