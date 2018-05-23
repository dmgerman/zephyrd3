DECL|RPMSG_ADDR_BMP_SIZE|macro|RPMSG_ADDR_BMP_SIZE
DECL|RPMSG_BUFFER_SIZE|macro|RPMSG_BUFFER_SIZE
DECL|RPMSG_CHNL_STATE_ACTIVE|macro|RPMSG_CHNL_STATE_ACTIVE
DECL|RPMSG_CHNL_STATE_IDLE|macro|RPMSG_CHNL_STATE_IDLE
DECL|RPMSG_CHNL_STATE_NS|macro|RPMSG_CHNL_STATE_NS
DECL|RPMSG_DEV_STATE_ACTIVE|macro|RPMSG_DEV_STATE_ACTIVE
DECL|RPMSG_DEV_STATE_IDLE|macro|RPMSG_DEV_STATE_IDLE
DECL|RPMSG_ERROR_BASE|macro|RPMSG_ERROR_BASE
DECL|RPMSG_ERR_BUFF_SIZE|macro|RPMSG_ERR_BUFF_SIZE
DECL|RPMSG_ERR_DEV_ADDR|macro|RPMSG_ERR_DEV_ADDR
DECL|RPMSG_ERR_DEV_INIT|macro|RPMSG_ERR_DEV_INIT
DECL|RPMSG_ERR_DEV_STATE|macro|RPMSG_ERR_DEV_STATE
DECL|RPMSG_ERR_MAX_VQ|macro|RPMSG_ERR_MAX_VQ
DECL|RPMSG_ERR_NO_BUFF|macro|RPMSG_ERR_NO_BUFF
DECL|RPMSG_ERR_NO_MEM|macro|RPMSG_ERR_NO_MEM
DECL|RPMSG_ERR_PARAM|macro|RPMSG_ERR_PARAM
DECL|RPMSG_FALSE|macro|RPMSG_FALSE
DECL|RPMSG_HDR_FROM_BUF|macro|RPMSG_HDR_FROM_BUF
DECL|RPMSG_MASTER|macro|RPMSG_MASTER
DECL|RPMSG_MAX_VQ_PER_RDEV|macro|RPMSG_MAX_VQ_PER_RDEV
DECL|RPMSG_NS_EPT_ADDR|macro|RPMSG_NS_EPT_ADDR
DECL|RPMSG_NULL|macro|RPMSG_NULL
DECL|RPMSG_REMOTE|macro|RPMSG_REMOTE
DECL|RPMSG_SUCCESS|macro|RPMSG_SUCCESS
DECL|RPMSG_TICKS_PER_INTERVAL|macro|RPMSG_TICKS_PER_INTERVAL
DECL|RPMSG_TICK_COUNT|macro|RPMSG_TICK_COUNT
DECL|RPMSG_TRUE|macro|RPMSG_TRUE
DECL|_RPMSG_CORE_H_|macro|_RPMSG_CORE_H_
DECL|bitmap|member|unsigned long bitmap[RPMSG_ADDR_BMP_SIZE];
DECL|channel_created|member|rpmsg_chnl_cb_t channel_created;
DECL|channel_destroyed|member|rpmsg_chnl_cb_t channel_destroyed;
DECL|default_cb|member|rpmsg_rx_cb_t default_cb;
DECL|lock|member|metal_mutex_t lock;
DECL|mem_pool|member|struct sh_mem_pool *mem_pool;
DECL|proc|member|struct hil_proc *proc;
DECL|remote_device|struct|struct remote_device {
DECL|role|member|unsigned int role;
DECL|rp_channels|member|struct metal_list rp_channels;
DECL|rp_endpoints|member|struct metal_list rp_endpoints;
DECL|rpmsg_chnl_cb_t|typedef|typedef void (*rpmsg_chnl_cb_t) (struct rpmsg_channel * rp_chl);
DECL|rpmsg_rx_cb_t|typedef|typedef void (*rpmsg_rx_cb_t) (struct rpmsg_channel *, void *, int, void *,
DECL|rvq|member|struct virtqueue *rvq;
DECL|state|member|unsigned int state;
DECL|support_ns|member|int support_ns;
DECL|tvq|member|struct virtqueue *tvq;
DECL|virt_dev|member|struct virtio_device virt_dev;
