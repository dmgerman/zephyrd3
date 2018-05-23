DECL|remoteproc_boot|function|int remoteproc_boot(struct remote_proc *rproc)
DECL|remoteproc_deinit|function|int remoteproc_deinit(struct remote_proc *rproc)
DECL|remoteproc_init|function|int remoteproc_init(char *fw_name, struct hil_proc *proc, rpmsg_chnl_cb_t channel_created, rpmsg_chnl_cb_t channel_destroyed, rpmsg_rx_cb_t default_cb, struct remote_proc **rproc_handle)
DECL|remoteproc_resource_deinit|function|int remoteproc_resource_deinit(struct remote_proc *rproc)
DECL|remoteproc_resource_init|function|int remoteproc_resource_init(struct rsc_table_info *rsc_info, struct hil_proc *proc, rpmsg_chnl_cb_t channel_created, rpmsg_chnl_cb_t channel_destroyed, rpmsg_rx_cb_t default_cb,
DECL|remoteproc_shutdown|function|int remoteproc_shutdown(struct remote_proc *rproc)
