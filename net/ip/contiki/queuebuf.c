DECL|DEBUG|macro|DEBUG
DECL|IN_CFS|enumerator|enum {IN_RAM, IN_CFS} location;
DECL|IN_RAM|enumerator|enum {IN_RAM, IN_CFS} location;
DECL|NQBUF_FILES|macro|NQBUF_FILES
DECL|NQBUF_ID|macro|NQBUF_ID
DECL|NQBUF_PER_FILE|macro|NQBUF_PER_FILE
DECL|PRINTF|macro|PRINTF
DECL|PRINTF|macro|PRINTF
DECL|QBUF_FILE_SIZE|macro|QBUF_FILE_SIZE
DECL|QUEUEBUF_REF_NUM|macro|QUEUEBUF_REF_NUM
DECL|QUEUEBUF_REF_NUM|macro|QUEUEBUF_REF_NUM
DECL|QUEUEBUF_STATS|macro|QUEUEBUF_STATS
DECL|QUEUEBUF_STATS|macro|QUEUEBUF_STATS
DECL|addrs|member|struct packetbuf_addr addrs[PACKETBUF_NUM_ADDRS];
DECL|attrs|member|struct packetbuf_attr attrs[PACKETBUF_NUM_ATTRS];
DECL|data|member|uint8_t data[PACKETBUF_SIZE];
DECL|fd|member|int fd;
DECL|file|member|const char *file;
DECL|get_new_swap_id|function|get_new_swap_id(void)
DECL|hdrlen|member|uint8_t hdrlen;
DECL|hdr|member|uint8_t hdr[PACKETBUF_HDR_SIZE];
DECL|len|member|uint16_t len;
DECL|len|member|uint16_t len;
DECL|line|member|int line;
DECL|location|member|enum {IN_RAM, IN_CFS} location;
DECL|next_swap_id|variable|next_swap_id
DECL|next|member|struct queuebuf *next;
DECL|qbuf_files|variable|qbuf_files
DECL|qbuf_file|struct|struct qbuf_file {
DECL|qbuf_renew_all|function|qbuf_renew_all(void *unused)
DECL|qbuf_renew_file|function|qbuf_renew_file(int file)
DECL|queuebuf_addr|function|queuebuf_addr(struct queuebuf *b, uint8_t type)
DECL|queuebuf_attr|function|queuebuf_attr(struct queuebuf *b, uint8_t type)
DECL|queuebuf_datalen|function|queuebuf_datalen(struct queuebuf *b)
DECL|queuebuf_dataptr|function|queuebuf_dataptr(struct queuebuf *b)
DECL|queuebuf_data|struct|struct queuebuf_data {
DECL|queuebuf_debug_print|function|queuebuf_debug_print(void)
DECL|queuebuf_flush_tmpdata|function|queuebuf_flush_tmpdata(void)
DECL|queuebuf_free|function|queuebuf_free(struct queuebuf *buf)
DECL|queuebuf_init|function|queuebuf_init(void)
DECL|queuebuf_len|variable|queuebuf_len
DECL|queuebuf_list|variable|queuebuf_list
DECL|queuebuf_load_to_ram|function|queuebuf_load_to_ram(struct queuebuf *b)
DECL|queuebuf_load_to_ram|function|queuebuf_load_to_ram(struct queuebuf *b)
DECL|queuebuf_max_len|variable|queuebuf_max_len
DECL|queuebuf_new_from_packetbuf_debug|function|queuebuf_new_from_packetbuf_debug(const char *file, int line)
DECL|queuebuf_numfree|function|queuebuf_numfree(void)
DECL|queuebuf_ref_len|variable|queuebuf_ref_len
DECL|queuebuf_ref|struct|struct queuebuf_ref {
DECL|queuebuf_remove_from_file|function|queuebuf_remove_from_file(int swap_id)
DECL|queuebuf_to_packetbuf|function|queuebuf_to_packetbuf(struct queuebuf *b)
DECL|queuebuf_update_attr_from_packetbuf|function|queuebuf_update_attr_from_packetbuf(struct queuebuf *buf)
DECL|queuebuf_update_from_packetbuf|function|queuebuf_update_from_packetbuf(struct queuebuf *buf)
DECL|queuebuf|struct|struct queuebuf {
DECL|ram_ptr|member|struct queuebuf_data *ram_ptr;
DECL|ref|member|uint8_t *ref;
DECL|renew_timer|variable|renew_timer
DECL|renewable|member|int renewable;
DECL|swap_id|member|int swap_id;
DECL|time|member|clock_time_t time;
DECL|tmpdata_qbuf|variable|tmpdata_qbuf
DECL|tmpdata|variable|tmpdata
DECL|usage|member|int usage;
