DECL|OPENAMP_PACKED_END|variable|OPENAMP_PACKED_END
DECL|OPENAMP_PACKED_END|variable|OPENAMP_PACKED_END
DECL|RPMSG_ADDR_ANY|macro|RPMSG_ADDR_ANY
DECL|RPMSG_BUF_HELD|macro|RPMSG_BUF_HELD
DECL|RPMSG_LOCATE_DATA|macro|RPMSG_LOCATE_DATA
DECL|RPMSG_NAME_SIZE|macro|RPMSG_NAME_SIZE
DECL|RPMSG_NS_CREATE|enumerator|RPMSG_NS_CREATE = 0,
DECL|RPMSG_NS_DESTROY|enumerator|RPMSG_NS_DESTROY = 1,
DECL|VIRTIO_RPMSG_F_NS|macro|VIRTIO_RPMSG_F_NS
DECL|_RPMSG_H_|macro|_RPMSG_H_
DECL|addr|member|uint32_t addr;
DECL|addr|member|uint32_t addr;
DECL|cb|member|rpmsg_rx_cb_t cb;
DECL|channel_info|struct|struct channel_info {
DECL|dest|member|uint32_t dest;
DECL|dst|member|uint32_t dst;
DECL|dst|member|uint32_t dst;
DECL|flags|member|uint16_t flags;
DECL|flags|member|uint32_t flags;
DECL|idx|member|uint16_t idx;
DECL|len|member|uint16_t len;
DECL|name|member|char name[RPMSG_NAME_SIZE];
DECL|name|member|char name[RPMSG_NAME_SIZE];
DECL|name|member|char name[RPMSG_NAME_SIZE];
DECL|node|member|struct metal_list node;
DECL|node|member|struct metal_list node;
DECL|priv|member|void *priv;
DECL|rdev|member|struct remote_device *rdev;
DECL|reserved|member|uint32_t reserved;
DECL|rfu|member|uint16_t rfu; /* reserved for future usage */
DECL|rp_chnl|member|struct rpmsg_channel *rp_chnl;
DECL|rp_ept|member|struct rpmsg_endpoint *rp_ept;
DECL|rpmsg_channel|struct|struct rpmsg_channel {
DECL|rpmsg_endpoint|struct|struct rpmsg_endpoint {
DECL|rpmsg_hdr_reserved|struct|struct rpmsg_hdr_reserved
DECL|rpmsg_hdr|struct|struct rpmsg_hdr {
DECL|rpmsg_ns_flags|enum|enum rpmsg_ns_flags {
DECL|rpmsg_ns_msg|struct|struct rpmsg_ns_msg {
DECL|rpmsg_send_nocopy|function|int rpmsg_send_nocopy(struct rpmsg_channel *rpdev, void *txbuf, int len)
DECL|rpmsg_send_offchannel|function|static inline int rpmsg_send_offchannel(struct rpmsg_channel *rpdev,uint32_t src, uint32_t dst, const void *data, int len)
DECL|rpmsg_sendto_nocopy|function|int rpmsg_sendto_nocopy(struct rpmsg_channel *rpdev, void *txbuf, int len,uint32_t dst)
DECL|rpmsg_sendto|function|static inline int rpmsg_sendto(struct rpmsg_channel *rpdev, const void *data, int len, uint32_t dst)
DECL|rpmsg_send|function|static inline int rpmsg_send(struct rpmsg_channel *rpdev, const void *data,int len)
DECL|rpmsg_trysend_offchannel|function|static inline int rpmsg_trysend_offchannel(struct rpmsg_channel *rpdev, uint32_t src, uint32_t dst, const void *data, int len)
DECL|rpmsg_trysendto|function|static inline int rpmsg_trysendto(struct rpmsg_channel *rpdev, const void *data, int len, uint32_t dst)
DECL|rpmsg_trysend|function|static inline int rpmsg_trysend(struct rpmsg_channel *rpdev, const void *data,int len)
DECL|src|member|uint32_t src;
DECL|src|member|uint32_t src;
DECL|src|member|uint32_t src;
DECL|state|member|unsigned int state;
