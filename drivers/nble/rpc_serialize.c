DECL|FN_INDEX_SIZE|macro|FN_INDEX_SIZE
DECL|FN_SIG_B_B_P|macro|FN_SIG_B_B_P
DECL|FN_SIG_B_B_P|macro|FN_SIG_B_B_P
DECL|FN_SIG_B_B_P|macro|FN_SIG_B_B_P
DECL|FN_SIG_NONE|macro|FN_SIG_NONE
DECL|FN_SIG_NONE|macro|FN_SIG_NONE
DECL|FN_SIG_NONE|macro|FN_SIG_NONE
DECL|FN_SIG_P|macro|FN_SIG_P
DECL|FN_SIG_P|macro|FN_SIG_P
DECL|FN_SIG_P|macro|FN_SIG_P
DECL|FN_SIG_S_B_B_P|macro|FN_SIG_S_B_B_P
DECL|FN_SIG_S_B_B_P|macro|FN_SIG_S_B_B_P
DECL|FN_SIG_S_B_B_P|macro|FN_SIG_S_B_B_P
DECL|FN_SIG_S_B_P|macro|FN_SIG_S_B_P
DECL|FN_SIG_S_B_P|macro|FN_SIG_S_B_P
DECL|FN_SIG_S_B_P|macro|FN_SIG_S_B_P
DECL|FN_SIG_S_B|macro|FN_SIG_S_B
DECL|FN_SIG_S_B|macro|FN_SIG_S_B
DECL|FN_SIG_S_B|macro|FN_SIG_S_B
DECL|FN_SIG_S_P|macro|FN_SIG_S_P
DECL|FN_SIG_S_P|macro|FN_SIG_S_P
DECL|FN_SIG_S_P|macro|FN_SIG_S_P
DECL|FN_SIG_S|macro|FN_SIG_S
DECL|FN_SIG_S|macro|FN_SIG_S
DECL|FN_SIG_S|macro|FN_SIG_S
DECL|LIST_FN_SIG_B_B_P|enumerator|enum { LIST_FN_SIG_B_B_P fn_b_b_p_index_max };
DECL|LIST_FN_SIG_NONE|enumerator|enum { LIST_FN_SIG_NONE fn_none_index_max };
DECL|LIST_FN_SIG_P|enumerator|enum { LIST_FN_SIG_P fn_p_index_max };
DECL|LIST_FN_SIG_S_B_B_P|enumerator|enum { LIST_FN_SIG_S_B_B_P fn_s_b_b_p_index_max };
DECL|LIST_FN_SIG_S_B_P|enumerator|enum { LIST_FN_SIG_S_B_P fn_s_b_p_index_max };
DECL|LIST_FN_SIG_S_B|enumerator|enum { LIST_FN_SIG_S_B fn_s_b_index_max };
DECL|LIST_FN_SIG_S_P|enumerator|enum { LIST_FN_SIG_S_P fn_s_p_index_max };
DECL|LIST_FN_SIG_S|enumerator|enum { LIST_FN_SIG_S fn_s_index_max };
DECL|POINTER_SIZE|macro|POINTER_SIZE
DECL|SIG_TYPE_SIZE|macro|SIG_TYPE_SIZE
DECL|_send|function|static void _send(uint8_t *buf, uint16_t length)
DECL|encoded_buflen|function|static uint16_t encoded_buflen(const uint8_t *buf, uint16_t buflen)
DECL|encoded_structlen|function|static uint16_t encoded_structlen(uint8_t structlen)
DECL|fn_b_b_p_index_max|enumerator|enum { LIST_FN_SIG_B_B_P fn_b_b_p_index_max };
DECL|fn_none_index_max|enumerator|enum { LIST_FN_SIG_NONE fn_none_index_max };
DECL|fn_p_index_max|enumerator|enum { LIST_FN_SIG_P fn_p_index_max };
DECL|fn_s_b_b_p_index_max|enumerator|enum { LIST_FN_SIG_S_B_B_P fn_s_b_b_p_index_max };
DECL|fn_s_b_index_max|enumerator|enum { LIST_FN_SIG_S_B fn_s_b_index_max };
DECL|fn_s_b_p_index_max|enumerator|enum { LIST_FN_SIG_S_B_P fn_s_b_p_index_max };
DECL|fn_s_index_max|enumerator|enum { LIST_FN_SIG_S fn_s_index_max };
DECL|fn_s_p_index_max|enumerator|enum { LIST_FN_SIG_S_P fn_s_p_index_max };
DECL|rpc_serialize_b_b_p|function|void rpc_serialize_b_b_p(uint8_t fn_index, const void *vbuf1, uint16_t vbuf1_length, const void *vbuf2, uint16_t vbuf2_length, void *p_priv)
DECL|rpc_serialize_none|function|void rpc_serialize_none(uint8_t fn_index)
DECL|rpc_serialize_p|function|void rpc_serialize_p(uint8_t fn_index, void *p_priv)
DECL|rpc_serialize_s_b_b_p|function|void rpc_serialize_s_b_b_p(uint8_t fn_index, const void *struct_data, uint8_t struct_length, const void *vbuf1, uint16_t vbuf1_length, const void *vbuf2, uint16_t vbuf2_length, void *p_priv)
DECL|rpc_serialize_s_b_p|function|void rpc_serialize_s_b_p(uint8_t fn_index, const void *struct_data, uint8_t struct_length, const void *vbuf, uint16_t vbuf_length, void *p_priv)
DECL|rpc_serialize_s_b|function|void rpc_serialize_s_b(uint8_t fn_index, const void *struct_data, uint8_t struct_length, const void *vbuf, uint16_t vbuf_length)
DECL|rpc_serialize_s_p|function|void rpc_serialize_s_p(uint8_t fn_index, const void *struct_data, uint8_t struct_length, void *p_priv)
DECL|rpc_serialize_s|function|void rpc_serialize_s(uint8_t fn_index, const void *struct_data, uint8_t struct_length)
DECL|serialize_buf|function|static uint8_t *serialize_buf(uint8_t *p, const uint8_t *buf, uint16_t buflen)
DECL|serialize_p|function|static uint8_t *serialize_p(uint8_t *p, uintptr_t priv)
DECL|serialize_struct|function|static uint8_t *serialize_struct(uint8_t *p, const uint8_t *struct_data, uint8_t struct_length)
