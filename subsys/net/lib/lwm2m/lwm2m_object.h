DECL|INIT_OBJ_RES_DATA|macro|INIT_OBJ_RES_DATA
DECL|INIT_OBJ_RES_DUMMY|macro|INIT_OBJ_RES_DUMMY
DECL|INIT_OBJ_RES_EXECUTE|macro|INIT_OBJ_RES_EXECUTE
DECL|INIT_OBJ_RES_MULTI_DATA|macro|INIT_OBJ_RES_MULTI_DATA
DECL|INIT_OBJ_RES|macro|INIT_OBJ_RES
DECL|LWM2M_ATTR_GT|macro|LWM2M_ATTR_GT
DECL|LWM2M_ATTR_LT|macro|LWM2M_ATTR_LT
DECL|LWM2M_ATTR_PMAX|macro|LWM2M_ATTR_PMAX
DECL|LWM2M_ATTR_PMIN|macro|LWM2M_ATTR_PMIN
DECL|LWM2M_ATTR_STEP|macro|LWM2M_ATTR_STEP
DECL|LWM2M_HAS_PERM|macro|LWM2M_HAS_PERM
DECL|LWM2M_OBJECT_H_|macro|LWM2M_OBJECT_H_
DECL|LWM2M_OP_CREATE|macro|LWM2M_OP_CREATE
DECL|LWM2M_OP_DELETE|macro|LWM2M_OP_DELETE
DECL|LWM2M_OP_DISCOVER|macro|LWM2M_OP_DISCOVER
DECL|LWM2M_OP_EXECUTE|macro|LWM2M_OP_EXECUTE
DECL|LWM2M_OP_READ|macro|LWM2M_OP_READ
DECL|LWM2M_OP_WRITE_ATTR|macro|LWM2M_OP_WRITE_ATTR
DECL|LWM2M_OP_WRITE|macro|LWM2M_OP_WRITE
DECL|LWM2M_PERM_RWX|macro|LWM2M_PERM_RWX
DECL|LWM2M_PERM_RW|macro|LWM2M_PERM_RW
DECL|LWM2M_PERM_R|macro|LWM2M_PERM_R
DECL|LWM2M_PERM_W|macro|LWM2M_PERM_W
DECL|LWM2M_PERM_X|macro|LWM2M_PERM_X
DECL|LWM2M_RES_TYPE_BOOL|macro|LWM2M_RES_TYPE_BOOL
DECL|LWM2M_RES_TYPE_FLOAT32|macro|LWM2M_RES_TYPE_FLOAT32
DECL|LWM2M_RES_TYPE_FLOAT64|macro|LWM2M_RES_TYPE_FLOAT64
DECL|LWM2M_RES_TYPE_INT64|macro|LWM2M_RES_TYPE_INT64
DECL|LWM2M_RES_TYPE_INT|macro|LWM2M_RES_TYPE_INT
DECL|LWM2M_RES_TYPE_NONE|macro|LWM2M_RES_TYPE_NONE
DECL|LWM2M_RES_TYPE_OPAQUE|macro|LWM2M_RES_TYPE_OPAQUE
DECL|LWM2M_RES_TYPE_S16|macro|LWM2M_RES_TYPE_S16
DECL|LWM2M_RES_TYPE_S32|macro|LWM2M_RES_TYPE_S32
DECL|LWM2M_RES_TYPE_S64|macro|LWM2M_RES_TYPE_S64
DECL|LWM2M_RES_TYPE_S8|macro|LWM2M_RES_TYPE_S8
DECL|LWM2M_RES_TYPE_STRING|macro|LWM2M_RES_TYPE_STRING
DECL|LWM2M_RES_TYPE_TIME|macro|LWM2M_RES_TYPE_TIME
DECL|LWM2M_RES_TYPE_U16|macro|LWM2M_RES_TYPE_U16
DECL|LWM2M_RES_TYPE_U32|macro|LWM2M_RES_TYPE_U32
DECL|LWM2M_RES_TYPE_U64|macro|LWM2M_RES_TYPE_U64
DECL|LWM2M_RES_TYPE_U8|macro|LWM2M_RES_TYPE_U8
DECL|LWM2M_RES_TYPE_UINT64|macro|LWM2M_RES_TYPE_UINT64
DECL|LWM2M_RES_TYPE_UINT|macro|LWM2M_RES_TYPE_UINT
DECL|MAX_RESOURCE_LEN|macro|MAX_RESOURCE_LEN
DECL|NR_LWM2M_ATTR|macro|NR_LWM2M_ATTR
DECL|OBJ_FIELD_DATA|macro|OBJ_FIELD_DATA
DECL|OBJ_FIELD_EXECUTE|macro|OBJ_FIELD_EXECUTE
DECL|OBJ_FIELD_MULTI_DATA|macro|OBJ_FIELD_MULTI_DATA
DECL|OBJ_FIELD|macro|OBJ_FIELD
DECL|WRITER_OUTPUT_VALUE|macro|WRITER_OUTPUT_VALUE
DECL|WRITER_RESOURCE_INSTANCE|macro|WRITER_RESOURCE_INSTANCE
DECL|create_cb|member|lwm2m_engine_obj_create_cb_t create_cb;
DECL|data_len|member|u16_t data_len;
DECL|data_ptr|member|void *data_ptr;
DECL|data_type|member|u8_t data_type;
DECL|delete_cb|member|lwm2m_engine_obj_delete_cb_t delete_cb;
DECL|engine_get_bool|function|static inline size_t engine_get_bool(struct lwm2m_input_context *in, bool *value)
DECL|engine_get_float32fix|function|static inline size_t engine_get_float32fix(struct lwm2m_input_context *in, float32_value_t *value)
DECL|engine_get_float64fix|function|static inline size_t engine_get_float64fix(struct lwm2m_input_context *in, float64_value_t *value)
DECL|engine_get_opaque|function|static inline size_t engine_get_opaque(struct lwm2m_input_context *in, u8_t *buf, size_t buflen, bool *last_block)
DECL|engine_get_s32|function|static inline size_t engine_get_s32(struct lwm2m_input_context *in, s32_t *value)
DECL|engine_get_s64|function|static inline size_t engine_get_s64(struct lwm2m_input_context *in, s64_t *value)
DECL|engine_get_string|function|static inline size_t engine_get_string(struct lwm2m_input_context *in, u8_t *buf, size_t buflen)
DECL|engine_put_begin_ri|function|static inline size_t engine_put_begin_ri(struct lwm2m_output_context *out, struct lwm2m_obj_path *path)
DECL|engine_put_begin|function|static inline size_t engine_put_begin(struct lwm2m_output_context *out, struct lwm2m_obj_path *path)
DECL|engine_put_bool|function|static inline size_t engine_put_bool(struct lwm2m_output_context *out, struct lwm2m_obj_path *path, bool value)
DECL|engine_put_end_ri|function|static inline size_t engine_put_end_ri(struct lwm2m_output_context *out, struct lwm2m_obj_path *path)
DECL|engine_put_end|function|static inline size_t engine_put_end(struct lwm2m_output_context *out, struct lwm2m_obj_path *path)
DECL|engine_put_float32fix|function|static inline size_t engine_put_float32fix(struct lwm2m_output_context *out, struct lwm2m_obj_path *path, float32_value_t *value)
DECL|engine_put_float64fix|function|static inline size_t engine_put_float64fix(struct lwm2m_output_context *out, struct lwm2m_obj_path *path, float64_value_t *value)
DECL|engine_put_opaque|function|static inline size_t engine_put_opaque(struct lwm2m_output_context *out, struct lwm2m_obj_path *path, char *buf, size_t buflen)
DECL|engine_put_s16|function|static inline size_t engine_put_s16(struct lwm2m_output_context *out, struct lwm2m_obj_path *path, s16_t value)
DECL|engine_put_s32|function|static inline size_t engine_put_s32(struct lwm2m_output_context *out, struct lwm2m_obj_path *path, s32_t value)
DECL|engine_put_s64|function|static inline size_t engine_put_s64(struct lwm2m_output_context *out, struct lwm2m_obj_path *path, s64_t value)
DECL|engine_put_s8|function|static inline size_t engine_put_s8(struct lwm2m_output_context *out, struct lwm2m_obj_path *path, s8_t value)
DECL|engine_put_string|function|static inline size_t engine_put_string(struct lwm2m_output_context *out, struct lwm2m_obj_path *path, char *buf, size_t buflen)
DECL|execute_cb|member|lwm2m_engine_exec_cb_t execute_cb;
DECL|field_count|member|u16_t field_count;
DECL|fields|member|struct lwm2m_engine_obj_field *fields;
DECL|float_val|member|float32_value_t float_val;
DECL|frag|member|struct net_buf *frag;
DECL|frag|member|struct net_buf *frag;
DECL|get_bool|member|size_t (*get_bool)(struct lwm2m_input_context *in,
DECL|get_float32fix|member|size_t (*get_float32fix)(struct lwm2m_input_context *in,
DECL|get_float64fix|member|size_t (*get_float64fix)(struct lwm2m_input_context *in,
DECL|get_opaque|member|size_t (*get_opaque)(struct lwm2m_input_context *in,
DECL|get_s32|member|size_t (*get_s32)(struct lwm2m_input_context *in,
DECL|get_s64|member|size_t (*get_s64)(struct lwm2m_input_context *in,
DECL|get_string|member|size_t (*get_string)(struct lwm2m_input_context *in,
DECL|in_cpkt|member|struct coap_packet *in_cpkt;
DECL|instance_count|member|u16_t instance_count;
DECL|int_val|member|s32_t int_val;
DECL|in|member|struct lwm2m_input_context *in;
DECL|level|member|u8_t level; /* 0/1/2/3 = 3 = resource */
DECL|lwm2m_attr|struct|struct lwm2m_attr {
DECL|lwm2m_engine_context|struct|struct lwm2m_engine_context {
DECL|lwm2m_engine_obj_create_cb_t|typedef|(*lwm2m_engine_obj_create_cb_t)(u16_t obj_inst_id);
DECL|lwm2m_engine_obj_delete_cb_t|typedef|typedef int (*lwm2m_engine_obj_delete_cb_t)(u16_t obj_inst_id);
DECL|lwm2m_engine_obj_field|struct|struct lwm2m_engine_obj_field {
DECL|lwm2m_engine_obj_inst|struct|struct lwm2m_engine_obj_inst {
DECL|lwm2m_engine_obj|struct|struct lwm2m_engine_obj {
DECL|lwm2m_engine_res_inst|struct|struct lwm2m_engine_res_inst {
DECL|lwm2m_input_context|struct|struct lwm2m_input_context {
DECL|lwm2m_obj_path|struct|struct lwm2m_obj_path {
DECL|lwm2m_output_context|struct|struct lwm2m_output_context {
DECL|lwm2m_reader|struct|struct lwm2m_reader {
DECL|lwm2m_writer|struct|struct lwm2m_writer {
DECL|mark_frag_ri|member|struct net_buf *mark_frag_ri;
DECL|mark_pos_ri|member|u16_t mark_pos_ri;
DECL|max_instance_count|member|u16_t max_instance_count;
DECL|multi_count_var|member|u8_t *multi_count_var;
DECL|multi_max_count|member|u8_t multi_max_count;
DECL|node|member|sys_snode_t node;
DECL|node|member|sys_snode_t node;
DECL|obj_id|member|u16_t obj_id;
DECL|obj_id|member|u16_t obj_id;
DECL|obj_inst_id|member|u16_t obj_inst_id;
DECL|obj_inst_id|member|u16_t obj_inst_id;
DECL|obj|member|struct lwm2m_engine_obj *obj;
DECL|offset|member|u16_t offset;
DECL|offset|member|u16_t offset;
DECL|opaque_len|member|u16_t opaque_len;
DECL|operation|member|u8_t operation;
DECL|out_cpkt|member|struct coap_packet *out_cpkt;
DECL|out|member|struct lwm2m_output_context *out;
DECL|path|member|struct lwm2m_obj_path *path;
DECL|payload_len|member|u16_t payload_len;
DECL|permissions|member|u8_t permissions;
DECL|post_write_cb|member|lwm2m_engine_set_data_cb_t post_write_cb;
DECL|pre_write_cb|member|lwm2m_engine_get_data_cb_t pre_write_cb;
DECL|put_begin_ri|member|size_t (*put_begin_ri)(struct lwm2m_output_context *out,
DECL|put_begin|member|size_t (*put_begin)(struct lwm2m_output_context *out,
DECL|put_bool|member|size_t (*put_bool)(struct lwm2m_output_context *out,
DECL|put_end_ri|member|size_t (*put_end_ri)(struct lwm2m_output_context *out,
DECL|put_end|member|size_t (*put_end)(struct lwm2m_output_context *out,
DECL|put_float32fix|member|size_t (*put_float32fix)(struct lwm2m_output_context *out,
DECL|put_float64fix|member|size_t (*put_float64fix)(struct lwm2m_output_context *out,
DECL|put_opaque|member|size_t (*put_opaque)(struct lwm2m_output_context *out,
DECL|put_s16|member|size_t (*put_s16)(struct lwm2m_output_context *out,
DECL|put_s32|member|size_t (*put_s32)(struct lwm2m_output_context *out,
DECL|put_s64|member|size_t (*put_s64)(struct lwm2m_output_context *out,
DECL|put_s8|member|size_t (*put_s8)(struct lwm2m_output_context *out,
DECL|put_string|member|size_t (*put_string)(struct lwm2m_output_context *out,
DECL|read_cb|member|lwm2m_engine_get_data_cb_t read_cb;
DECL|reader|member|const struct lwm2m_reader *reader;
DECL|ref|member|void *ref;
DECL|res_id|member|u16_t res_id;
DECL|res_id|member|u16_t res_id;
DECL|res_id|member|u16_t res_id;
DECL|res_inst_id|member|u16_t res_inst_id;
DECL|resource_count|member|u16_t resource_count;
DECL|resources|member|struct lwm2m_engine_res_inst *resources;
DECL|type|member|u8_t type;
DECL|writer_flags|member|u8_t writer_flags;
DECL|writer|member|const struct lwm2m_writer *writer;
