DECL|LOG_MGMT_HANDLER_CNT|macro|LOG_MGMT_HANDLER_CNT
DECL|enc|member|struct CborEncoder *enc;
DECL|log_encode_entries|function|log_encode_entries(const struct log_mgmt_log *log, CborEncoder *enc, int64_t timestamp, uint32_t index)
DECL|log_encode|function|log_encode(const struct log_mgmt_log *log, CborEncoder *ctxt, int64_t timestamp, uint32_t index)
DECL|log_mgmt_cb_encode|function|log_mgmt_cb_encode(const struct log_mgmt_entry *entry, void *arg)
DECL|log_mgmt_clear|function|log_mgmt_clear(struct mgmt_ctxt *ctxt)
DECL|log_mgmt_clear|variable|log_mgmt_clear
DECL|log_mgmt_encode_entry|function|log_mgmt_encode_entry(CborEncoder *enc, const struct log_mgmt_entry *entry, size_t *out_len)
DECL|log_mgmt_group|variable|log_mgmt_group
DECL|log_mgmt_handlers|variable|log_mgmt_handlers
DECL|log_mgmt_level_list|function|log_mgmt_level_list(struct mgmt_ctxt *ctxt)
DECL|log_mgmt_level_list|variable|log_mgmt_level_list
DECL|log_mgmt_logs_list|function|log_mgmt_logs_list(struct mgmt_ctxt *ctxt)
DECL|log_mgmt_logs_list|variable|log_mgmt_logs_list
DECL|log_mgmt_module_list|function|log_mgmt_module_list(struct mgmt_ctxt *ctxt)
DECL|log_mgmt_module_list|variable|log_mgmt_module_list
DECL|log_mgmt_register_group|function|log_mgmt_register_group(void)
DECL|log_mgmt_show|function|log_mgmt_show(struct mgmt_ctxt *ctxt)
DECL|log_mgmt_show|variable|log_mgmt_show
DECL|log_walk_ctxt|struct|struct log_walk_ctxt {
DECL|rsp_len|member|size_t rsp_len;
