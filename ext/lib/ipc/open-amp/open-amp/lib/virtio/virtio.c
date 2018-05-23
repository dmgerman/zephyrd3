DECL|devid|member|unsigned short devid;
DECL|name|member|const char *name;
DECL|virtio_common_feature_desc|variable|virtio_common_feature_desc
DECL|virtio_describe|function|void virtio_describe(struct virtio_device *dev, const char *msg, uint32_t features, struct virtio_feature_desc *desc)
DECL|virtio_dev_name|function|const char *virtio_dev_name(unsigned short devid)
DECL|virtio_feature_name|function|static const char *virtio_feature_name(unsigned long val, const struct virtio_feature_desc *desc)
DECL|virtio_ident_table|variable|virtio_ident_table
DECL|virtio_ident|struct|static const struct virtio_ident {
