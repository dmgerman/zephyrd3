DECL|H_MGMT_MGMT_|macro|H_MGMT_MGMT_
DECL|MGMT_ERR_EBADSTATE|macro|MGMT_ERR_EBADSTATE
DECL|MGMT_ERR_EINVAL|macro|MGMT_ERR_EINVAL
DECL|MGMT_ERR_EMSGSIZE|macro|MGMT_ERR_EMSGSIZE
DECL|MGMT_ERR_ENOENT|macro|MGMT_ERR_ENOENT
DECL|MGMT_ERR_ENOMEM|macro|MGMT_ERR_ENOMEM
DECL|MGMT_ERR_ENOTSUP|macro|MGMT_ERR_ENOTSUP
DECL|MGMT_ERR_EOK|macro|MGMT_ERR_EOK
DECL|MGMT_ERR_EPERUSER|macro|MGMT_ERR_EPERUSER
DECL|MGMT_ERR_ETIMEOUT|macro|MGMT_ERR_ETIMEOUT
DECL|MGMT_ERR_EUNKNOWN|macro|MGMT_ERR_EUNKNOWN
DECL|MGMT_GROUP_ID_CONFIG|macro|MGMT_GROUP_ID_CONFIG
DECL|MGMT_GROUP_ID_CRASH|macro|MGMT_GROUP_ID_CRASH
DECL|MGMT_GROUP_ID_FS|macro|MGMT_GROUP_ID_FS
DECL|MGMT_GROUP_ID_IMAGE|macro|MGMT_GROUP_ID_IMAGE
DECL|MGMT_GROUP_ID_LOG|macro|MGMT_GROUP_ID_LOG
DECL|MGMT_GROUP_ID_OS|macro|MGMT_GROUP_ID_OS
DECL|MGMT_GROUP_ID_PERUSER|macro|MGMT_GROUP_ID_PERUSER
DECL|MGMT_GROUP_ID_RUN|macro|MGMT_GROUP_ID_RUN
DECL|MGMT_GROUP_ID_SPLIT|macro|MGMT_GROUP_ID_SPLIT
DECL|MGMT_GROUP_ID_STAT|macro|MGMT_GROUP_ID_STAT
DECL|MGMT_HDR_SIZE|macro|MGMT_HDR_SIZE
DECL|MGMT_OP_READ_RSP|macro|MGMT_OP_READ_RSP
DECL|MGMT_OP_READ|macro|MGMT_OP_READ
DECL|MGMT_OP_WRITE_RSP|macro|MGMT_OP_WRITE_RSP
DECL|MGMT_OP_WRITE|macro|MGMT_OP_WRITE
DECL|_res1|member|uint8_t _res1:5;
DECL|_res1|member|uint8_t _res1:5;
DECL|alloc_rsp|member|mgmt_alloc_rsp_fn *alloc_rsp;
DECL|cb_arg|member|void *cb_arg;
DECL|cfg|member|const struct mgmt_streamer_cfg *cfg;
DECL|encoder|member|struct CborEncoder encoder;
DECL|free_buf|member|mgmt_free_buf_fn *free_buf;
DECL|init_reader|member|mgmt_init_reader_fn *init_reader;
DECL|init_writer|member|mgmt_init_writer_fn *init_writer;
DECL|it|member|struct CborValue it;
DECL|mg_group_id|member|uint16_t mg_group_id;
DECL|mg_handlers_count|member|uint16_t mg_handlers_count;
DECL|mg_handlers|member|const struct mgmt_handler *mg_handlers;
DECL|mg_next|member|struct mgmt_group *mg_next;
DECL|mgmt_alloc_rsp_fn|typedef|typedef void *mgmt_alloc_rsp_fn(const void *src_buf, void *arg);
DECL|mgmt_ctxt|struct|struct mgmt_ctxt {
DECL|mgmt_free_buf_fn|typedef|typedef void mgmt_free_buf_fn(void *buf, void *arg);
DECL|mgmt_group|struct|struct mgmt_group {
DECL|mgmt_handler_fn|typedef|typedef int mgmt_handler_fn(struct mgmt_ctxt *ctxt);
DECL|mgmt_handler|struct|struct mgmt_handler {
DECL|mgmt_hdr|struct|struct mgmt_hdr {
DECL|mgmt_init_reader_fn|typedef|typedef int mgmt_init_reader_fn(struct cbor_decoder_reader *reader, void *buf,
DECL|mgmt_init_writer_fn|typedef|typedef int mgmt_init_writer_fn(struct cbor_encoder_writer *writer, void *buf,
DECL|mgmt_reset_buf_fn|typedef|typedef void mgmt_reset_buf_fn(void *buf, void *arg);
DECL|mgmt_streamer_cfg|struct|struct mgmt_streamer_cfg {
DECL|mgmt_streamer|struct|struct mgmt_streamer {
DECL|mgmt_trim_front_fn|typedef|typedef void mgmt_trim_front_fn(void *buf, size_t len, void *arg);
DECL|mgmt_write_at_fn|typedef|typedef int mgmt_write_at_fn(struct cbor_encoder_writer *writer, size_t offset,
DECL|mh_read|member|mgmt_handler_fn *mh_read;
DECL|mh_write|member|mgmt_handler_fn *mh_write;
DECL|nh_flags|member|uint8_t nh_flags; /* Reserved for future flags */
DECL|nh_group|member|uint16_t nh_group; /* MGMT_GROUP_ID_[...] */
DECL|nh_id|member|uint8_t nh_id; /* Message ID within group */
DECL|nh_len|member|uint16_t nh_len; /* Length of the payload */
DECL|nh_op|member|uint8_t nh_op:3; /* MGMT_OP_[...] */
DECL|nh_op|member|uint8_t nh_op:3; /* MGMT_OP_[...] */
DECL|nh_seq|member|uint8_t nh_seq; /* Sequence number */
DECL|parser|member|struct CborParser parser;
DECL|reader|member|struct cbor_decoder_reader *reader;
DECL|reset_buf|member|mgmt_reset_buf_fn *reset_buf;
DECL|trim_front|member|mgmt_trim_front_fn *trim_front;
DECL|write_at|member|mgmt_write_at_fn *write_at;
DECL|writer|member|struct cbor_encoder_writer *writer;
