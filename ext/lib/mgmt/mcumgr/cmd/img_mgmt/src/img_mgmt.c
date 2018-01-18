DECL|IMG_MGMT_HANDLER_CNT|macro|IMG_MGMT_HANDLER_CNT
DECL|img_mgmt_ctxt|variable|img_mgmt_ctxt
DECL|img_mgmt_encode_upload_rsp|function|img_mgmt_encode_upload_rsp(struct mgmt_ctxt *ctxt, int status)
DECL|img_mgmt_erase|function|img_mgmt_erase(struct mgmt_ctxt *ctxt)
DECL|img_mgmt_erase|variable|img_mgmt_erase
DECL|img_mgmt_find_by_hash|function|img_mgmt_find_by_hash(uint8_t *find, struct image_version *ver)
DECL|img_mgmt_find_by_ver|function|img_mgmt_find_by_ver(struct image_version *find, uint8_t *hash)
DECL|img_mgmt_find_tlvs|function|img_mgmt_find_tlvs(const struct image_header *hdr, int slot, size_t *start_off, size_t *end_off)
DECL|img_mgmt_group|variable|img_mgmt_group
DECL|img_mgmt_handlers|variable|img_mgmt_handlers
DECL|img_mgmt_read_info|function|img_mgmt_read_info(int image_slot, struct image_version *ver, uint8_t *hash, uint32_t *flags)
DECL|img_mgmt_register_group|function|img_mgmt_register_group(void)
DECL|img_mgmt_upload_first_chunk|function|img_mgmt_upload_first_chunk(struct mgmt_ctxt *ctxt, const uint8_t *req_data, size_t len)
DECL|img_mgmt_upload|function|img_mgmt_upload(struct mgmt_ctxt *ctxt)
DECL|img_mgmt_upload|variable|img_mgmt_upload
DECL|len|member|size_t len;
DECL|off|member|size_t off;
DECL|uploading|member|bool uploading;
