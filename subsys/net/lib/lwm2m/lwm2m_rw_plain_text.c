DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|SYS_LOG_LEVEL|macro|SYS_LOG_LEVEL
DECL|do_write_op_plain_text|function|int do_write_op_plain_text(struct lwm2m_engine_obj *obj, struct lwm2m_engine_context *context)
DECL|get_bool|function|static size_t get_bool(struct lwm2m_input_context *in, bool *value)
DECL|get_float32fix|function|static size_t get_float32fix(struct lwm2m_input_context *in, float32_value_t *value)
DECL|get_float64fix|function|static size_t get_float64fix(struct lwm2m_input_context *in, float64_value_t *value)
DECL|get_s32|function|static size_t get_s32(struct lwm2m_input_context *in, s32_t *value)
DECL|get_s64|function|static size_t get_s64(struct lwm2m_input_context *in, s64_t *value)
DECL|get_string|function|static size_t get_string(struct lwm2m_input_context *in, u8_t *value, size_t buflen)
DECL|plain_text_put_float32fix|function|size_t plain_text_put_float32fix(u8_t *outbuf, size_t outlen, float32_value_t *value)
DECL|plain_text_put_float64fix|function|size_t plain_text_put_float64fix(u8_t *outbuf, size_t outlen, float64_value_t *value)
DECL|plain_text_reader|variable|plain_text_reader
DECL|plain_text_writer|variable|plain_text_writer
DECL|put_bool|function|static size_t put_bool(struct lwm2m_output_context *out, struct lwm2m_obj_path *path, bool value)
DECL|put_float32fix|function|static size_t put_float32fix(struct lwm2m_output_context *out, struct lwm2m_obj_path *path, float32_value_t *value)
DECL|put_float64fix|function|static size_t put_float64fix(struct lwm2m_output_context *out, struct lwm2m_obj_path *path, float64_value_t *value)
DECL|put_s16|function|static size_t put_s16(struct lwm2m_output_context *out, struct lwm2m_obj_path *path, s16_t value)
DECL|put_s32|function|static size_t put_s32(struct lwm2m_output_context *out, struct lwm2m_obj_path *path, s32_t value)
DECL|put_s64|function|static size_t put_s64(struct lwm2m_output_context *out, struct lwm2m_obj_path *path, s64_t value)
DECL|put_s8|function|static size_t put_s8(struct lwm2m_output_context *out, struct lwm2m_obj_path *path, s8_t value)
DECL|put_string|function|static size_t put_string(struct lwm2m_output_context *out, struct lwm2m_obj_path *path, char *buf, size_t buflen)
