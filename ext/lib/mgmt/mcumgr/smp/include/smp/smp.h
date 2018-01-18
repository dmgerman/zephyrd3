DECL|H_SMP_|macro|H_SMP_
DECL|mgmt_stmr|member|struct mgmt_streamer mgmt_stmr;
DECL|smp_streamer|struct|struct smp_streamer {
DECL|smp_tx_rsp_fn|typedef|typedef int smp_tx_rsp_fn(struct smp_streamer *ss, void *buf, void *arg);
DECL|tx_rsp_cb|member|smp_tx_rsp_fn *tx_rsp_cb;
