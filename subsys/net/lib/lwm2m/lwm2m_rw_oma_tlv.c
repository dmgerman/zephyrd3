DECL|OMA_TLV_TYPE_MULTI_RESOURCE|enumerator|OMA_TLV_TYPE_MULTI_RESOURCE = 2,
DECL|OMA_TLV_TYPE_OBJECT_INSTANCE|enumerator|OMA_TLV_TYPE_OBJECT_INSTANCE = 0,
DECL|OMA_TLV_TYPE_RESOURCE_INSTANCE|enumerator|OMA_TLV_TYPE_RESOURCE_INSTANCE = 1,
DECL|OMA_TLV_TYPE_RESOURCE|enumerator|OMA_TLV_TYPE_RESOURCE = 3
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|do_write_op_tlv_dummy_read|function|static int do_write_op_tlv_dummy_read(struct lwm2m_engine_context *context)
DECL|do_write_op_tlv_item|function|static int do_write_op_tlv_item(struct lwm2m_engine_context *context)
DECL|do_write_op_tlv|function|int do_write_op_tlv(struct lwm2m_engine_obj *obj, struct lwm2m_engine_context *context)
DECL|get_bool|function|static size_t get_bool(struct lwm2m_input_context *in, bool *value)
DECL|get_float32fix|function|static size_t get_float32fix(struct lwm2m_input_context *in, float32_value_t *value)
DECL|get_float64fix|function|static size_t get_float64fix(struct lwm2m_input_context *in, float64_value_t *value)
DECL|get_len_type|function|static u8_t get_len_type(const struct oma_tlv *tlv)
DECL|get_number|function|static size_t get_number(struct lwm2m_input_context *in, s64_t *value, u8_t max_len)
DECL|get_opaque|function|static size_t get_opaque(struct lwm2m_input_context *in, u8_t *value, size_t buflen, bool *last_block)
DECL|get_s32|function|static size_t get_s32(struct lwm2m_input_context *in, s32_t *value)
DECL|get_s64|function|static size_t get_s64(struct lwm2m_input_context *in, s64_t *value)
DECL|get_string|function|static size_t get_string(struct lwm2m_input_context *in, u8_t *buf, size_t buflen)
DECL|id|member|u16_t id; /* can be 8-bit or 16-bit when serialized */
DECL|length|member|u32_t length;
DECL|oma_tlv_get|function|static size_t oma_tlv_get(struct oma_tlv *tlv, struct lwm2m_input_context *in, bool dont_advance)
DECL|oma_tlv_put_u8|function|static int oma_tlv_put_u8(struct lwm2m_output_context *out, u8_t value, bool insert)
DECL|oma_tlv_put|function|static size_t oma_tlv_put(const struct oma_tlv *tlv, struct lwm2m_output_context *out, u8_t *value, bool insert)
DECL|oma_tlv_reader|variable|oma_tlv_reader
DECL|oma_tlv_writer|variable|oma_tlv_writer
DECL|oma_tlv|struct|struct oma_tlv {
DECL|put_begin_ri|function|static size_t put_begin_ri(struct lwm2m_output_context *out, struct lwm2m_obj_path *path)
DECL|put_bool|function|static size_t put_bool(struct lwm2m_output_context *out, struct lwm2m_obj_path *path, bool value)
DECL|put_end_ri|function|static size_t put_end_ri(struct lwm2m_output_context *out, struct lwm2m_obj_path *path)
DECL|put_float32fix|function|static size_t put_float32fix(struct lwm2m_output_context *out, struct lwm2m_obj_path *path, float32_value_t *value)
DECL|put_float64fix|function|static size_t put_float64fix(struct lwm2m_output_context *out, struct lwm2m_obj_path *path, float64_value_t *value)
DECL|put_s16|function|static size_t put_s16(struct lwm2m_output_context *out, struct lwm2m_obj_path *path, s16_t value)
DECL|put_s32|function|static size_t put_s32(struct lwm2m_output_context *out,struct lwm2m_obj_path *path, s32_t value)
DECL|put_s64|function|static size_t put_s64(struct lwm2m_output_context *out,struct lwm2m_obj_path *path, s64_t value)
DECL|put_s8|function|static size_t put_s8(struct lwm2m_output_context *out, struct lwm2m_obj_path *path, s8_t value)
DECL|put_string|function|static size_t put_string(struct lwm2m_output_context *out, struct lwm2m_obj_path *path, char *buf, size_t buflen)
DECL|tlv_calc_id|function|static u16_t tlv_calc_id(u8_t flags, struct lwm2m_obj_path *path)
DECL|tlv_calc_type|function|static u8_t tlv_calc_type(u8_t flags)
DECL|tlv_setup|function|static void tlv_setup(struct oma_tlv *tlv, u8_t type, u16_t id, u32_t buflen)
DECL|type|member|u8_t type;
