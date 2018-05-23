DECL|VIRTIO_CONFIG_STATUS_ACK|macro|VIRTIO_CONFIG_STATUS_ACK
DECL|VIRTIO_CONFIG_STATUS_DRIVER_OK|macro|VIRTIO_CONFIG_STATUS_DRIVER_OK
DECL|VIRTIO_CONFIG_STATUS_DRIVER|macro|VIRTIO_CONFIG_STATUS_DRIVER
DECL|VIRTIO_CONFIG_STATUS_FAILED|macro|VIRTIO_CONFIG_STATUS_FAILED
DECL|VIRTIO_CONFIG_STATUS_NEEDS_RESET|macro|VIRTIO_CONFIG_STATUS_NEEDS_RESET
DECL|VIRTIO_F_BAD_FEATURE|macro|VIRTIO_F_BAD_FEATURE
DECL|VIRTIO_F_NOTIFY_ON_EMPTY|macro|VIRTIO_F_NOTIFY_ON_EMPTY
DECL|VIRTIO_ID_9P|macro|VIRTIO_ID_9P
DECL|VIRTIO_ID_BALLOON|macro|VIRTIO_ID_BALLOON
DECL|VIRTIO_ID_BLOCK|macro|VIRTIO_ID_BLOCK
DECL|VIRTIO_ID_CONSOLE|macro|VIRTIO_ID_CONSOLE
DECL|VIRTIO_ID_ENTROPY|macro|VIRTIO_ID_ENTROPY
DECL|VIRTIO_ID_IOMEMORY|macro|VIRTIO_ID_IOMEMORY
DECL|VIRTIO_ID_NETWORK|macro|VIRTIO_ID_NETWORK
DECL|VIRTIO_ID_RPMSG|macro|VIRTIO_ID_RPMSG
DECL|VIRTIO_ID_SCSI|macro|VIRTIO_ID_SCSI
DECL|VIRTIO_TRANSPORT_F_END|macro|VIRTIO_TRANSPORT_F_END
DECL|VIRTIO_TRANSPORT_F_START|macro|VIRTIO_TRANSPORT_F_START
DECL|_VIRTIO_H_|macro|_VIRTIO_H_
DECL|_virtio_dispatch_|struct|struct _virtio_dispatch_ {
DECL|create_virtqueues|member|int (*create_virtqueues) (struct virtio_device * dev, int flags,
DECL|data|member|void *data;
DECL|device|member|void *device;
DECL|features|member|uint32_t features;
DECL|func|member|virtio_dispatch *func;
DECL|get_features|member|uint32_t(*get_features) (struct virtio_device * dev);
DECL|get_status|member|uint8_t(*get_status) (struct virtio_device * dev);
DECL|name|member|char *name;
DECL|negotiate_features|member|uint32_t(*negotiate_features) (struct virtio_device * dev,
DECL|read_config|member|void (*read_config) (struct virtio_device * dev, uint32_t offset,
DECL|reset_device|member|void (*reset_device) (struct virtio_device * dev);
DECL|set_features|member|void (*set_features) (struct virtio_device * dev, uint32_t feature);
DECL|set_status|member|void (*set_status) (struct virtio_device * dev, uint8_t status);
DECL|vfd_str|member|const char *vfd_str;
DECL|vfd_val|member|uint32_t vfd_val;
DECL|virtio_device|struct|struct virtio_device {
DECL|virtio_dispatch|typedef|typedef struct _virtio_dispatch_ virtio_dispatch;
DECL|virtio_feature_desc|struct|struct virtio_feature_desc {
DECL|vq_list|member|void *vq_list;
DECL|write_config|member|void (*write_config) (struct virtio_device * dev, uint32_t offset,
