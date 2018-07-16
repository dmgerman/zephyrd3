DECL|zephyr_smp_alloc_rsp|function|zephyr_smp_alloc_rsp(const void *req, void *arg)
DECL|zephyr_smp_alloc_rsp|variable|zephyr_smp_alloc_rsp
DECL|zephyr_smp_cbor_cfg|variable|zephyr_smp_cbor_cfg
DECL|zephyr_smp_free_buf|function|zephyr_smp_free_buf(void *buf, void *arg)
DECL|zephyr_smp_free_buf|variable|zephyr_smp_free_buf
DECL|zephyr_smp_handle_reqs|function|zephyr_smp_handle_reqs(struct k_work *work)
DECL|zephyr_smp_init_reader|function|zephyr_smp_init_reader(struct cbor_decoder_reader *reader, void *buf, void *arg)
DECL|zephyr_smp_init_reader|variable|zephyr_smp_init_reader
DECL|zephyr_smp_init_writer|function|zephyr_smp_init_writer(struct cbor_encoder_writer *writer, void *buf, void *arg)
DECL|zephyr_smp_init_writer|variable|zephyr_smp_init_writer
DECL|zephyr_smp_process_packet|function|zephyr_smp_process_packet(struct zephyr_smp_transport *zst, struct net_buf *nb)
DECL|zephyr_smp_reset_buf|function|zephyr_smp_reset_buf(void *buf, void *arg)
DECL|zephyr_smp_reset_buf|variable|zephyr_smp_reset_buf
DECL|zephyr_smp_rx_req|function|zephyr_smp_rx_req(struct zephyr_smp_transport *zst, struct net_buf *nb)
DECL|zephyr_smp_split_frag|function|zephyr_smp_split_frag(struct net_buf **nb, void *arg, u16_t mtu)
DECL|zephyr_smp_transport_init|function|zephyr_smp_transport_init(struct zephyr_smp_transport *zst, zephyr_smp_transport_out_fn *output_func, zephyr_smp_transport_get_mtu_fn *get_mtu_func, zephyr_smp_transport_ud_copy_fn *ud_copy_func, zephyr_smp_transport_ud_free_fn *ud_free_func)
DECL|zephyr_smp_trim_front|function|zephyr_smp_trim_front(void *buf, size_t len, void *arg)
DECL|zephyr_smp_trim_front|variable|zephyr_smp_trim_front
DECL|zephyr_smp_tx_rsp|function|zephyr_smp_tx_rsp(struct smp_streamer *ns, void *rsp, void *arg)
DECL|zephyr_smp_tx_rsp|variable|zephyr_smp_tx_rsp
DECL|zephyr_smp_write_at|function|zephyr_smp_write_at(struct cbor_encoder_writer *writer, size_t offset, const void *data, size_t len, void *arg)
DECL|zephyr_smp_write_at|variable|zephyr_smp_write_at
