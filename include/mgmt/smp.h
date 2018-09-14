DECL|ZEPHYR_INCLUDE_MGMT_SMP_H_|macro|ZEPHYR_INCLUDE_MGMT_SMP_H_
DECL|zephyr_smp_transport_get_mtu_fn|typedef|typedef uint16_t zephyr_smp_transport_get_mtu_fn(const struct net_buf *nb);
DECL|zephyr_smp_transport_out_fn|typedef|typedef int zephyr_smp_transport_out_fn(struct zephyr_smp_transport *zst,
DECL|zephyr_smp_transport_ud_copy_fn|typedef|typedef int zephyr_smp_transport_ud_copy_fn(struct net_buf *dst,
DECL|zephyr_smp_transport_ud_free_fn|typedef|typedef void zephyr_smp_transport_ud_free_fn(void *ud);
DECL|zephyr_smp_transport|struct|struct zephyr_smp_transport {
DECL|zst_fifo|member|struct k_fifo zst_fifo;
DECL|zst_get_mtu|member|zephyr_smp_transport_get_mtu_fn *zst_get_mtu;
DECL|zst_output|member|zephyr_smp_transport_out_fn *zst_output;
DECL|zst_ud_copy|member|zephyr_smp_transport_ud_copy_fn *zst_ud_copy;
DECL|zst_ud_free|member|zephyr_smp_transport_ud_free_fn *zst_ud_free;
DECL|zst_work|member|struct k_work zst_work;
