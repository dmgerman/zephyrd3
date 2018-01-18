DECL|smp_align4|function|smp_align4(int x)
DECL|smp_build_err_rsp|function|smp_build_err_rsp(struct smp_streamer *streamer, const struct mgmt_hdr *req_hdr, int status)
DECL|smp_handle_single_payload|function|smp_handle_single_payload(struct mgmt_ctxt *cbuf, const struct mgmt_hdr *req_hdr)
DECL|smp_handle_single_req|function|smp_handle_single_req(struct smp_streamer *streamer, const struct mgmt_hdr *req_hdr)
DECL|smp_init_rsp_hdr|function|smp_init_rsp_hdr(const struct mgmt_hdr *req_hdr, struct mgmt_hdr *rsp_hdr)
DECL|smp_on_err|function|smp_on_err(struct smp_streamer *streamer, const struct mgmt_hdr *req_hdr, void *req, void *rsp, int status)
DECL|smp_process_request_packet|function|smp_process_request_packet(struct smp_streamer *streamer, void *req)
DECL|smp_read_hdr|function|smp_read_hdr(struct smp_streamer *streamer, struct mgmt_hdr *dst_hdr)
DECL|smp_rsp_op|function|smp_rsp_op(uint8_t req_op)
DECL|smp_write_hdr|function|smp_write_hdr(struct smp_streamer *streamer, const struct mgmt_hdr *src_hdr)
