DECL|H_ZEPHYR_SMP_|macro|H_ZEPHYR_SMP_
DECL|zephyr_smp_transport_get_mtu_fn|typedef|typedef uint16_t zephyr_smp_transport_get_mtu_fn(const struct net_buf *nb);
DECL|zephyr_smp_transport_out_fn|typedef|typedef int zephyr_smp_transport_out_fn(struct zephyr_smp_transport *zst,
DECL|zephyr_smp_transport|struct|struct zephyr_smp_transport {
DECL|zst_fifo|member|struct k_fifo zst_fifo;
DECL|zst_get_mtu|member|zephyr_smp_transport_get_mtu_fn *zst_get_mtu;
DECL|zst_output|member|zephyr_smp_transport_out_fn *zst_output;
DECL|zst_work|member|struct k_work zst_work;
