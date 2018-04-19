DECL|virtqueue_add_buffer|function|int virtqueue_add_buffer(struct virtqueue *vq, struct metal_sg *sg, int readable, int writable, void *cookie)
DECL|virtqueue_add_consumed_buffer|function|int virtqueue_add_consumed_buffer(struct virtqueue *vq, uint16_t head_idx, uint32_t len)
DECL|virtqueue_add_single_buffer|function|int virtqueue_add_single_buffer(struct virtqueue *vq, void *cookie,struct metal_sg *sg, int writable, boolean has_next)
DECL|virtqueue_create|function|int virtqueue_create(struct virtio_device *virt_dev, unsigned short id, const char *name, struct vring_alloc_info *ring, void (*callback) (struct virtqueue * vq), void (*notify) (struct virtqueue * vq), struct metal_io_region *shm_io,
DECL|virtqueue_disable_cb|function|void virtqueue_disable_cb(struct virtqueue *vq)
DECL|virtqueue_dump|function|void virtqueue_dump(struct virtqueue *vq)
DECL|virtqueue_enable_cb|function|int virtqueue_enable_cb(struct virtqueue *vq)
DECL|virtqueue_free|function|void virtqueue_free(struct virtqueue *vq)
DECL|virtqueue_get_available_buffer|function|void *virtqueue_get_available_buffer(struct virtqueue *vq, uint16_t * avail_idx, uint32_t * len)
DECL|virtqueue_get_buffer_length|function|uint32_t virtqueue_get_buffer_length(struct virtqueue *vq, uint16_t idx)
DECL|virtqueue_get_buffer|function|void *virtqueue_get_buffer(struct virtqueue *vq, uint32_t * len, uint16_t * idx)
DECL|virtqueue_get_desc_size|function|uint32_t virtqueue_get_desc_size(struct virtqueue * vq)
DECL|virtqueue_kick|function|void virtqueue_kick(struct virtqueue *vq)
DECL|virtqueue_notification|function|void virtqueue_notification(struct virtqueue *vq)
DECL|virtqueue_nused|function|static int virtqueue_nused(struct virtqueue *vq)
DECL|vq_ring_add_buffer|function|static uint16_t vq_ring_add_buffer(struct virtqueue *vq, struct vring_desc *desc, uint16_t head_idx, struct metal_sg *sg, int readable, int writable)
DECL|vq_ring_enable_interrupt|function|static int vq_ring_enable_interrupt(struct virtqueue *vq, uint16_t ndesc)
DECL|vq_ring_free_chain|function|static void vq_ring_free_chain(struct virtqueue *vq, uint16_t desc_idx)
DECL|vq_ring_init|function|static void vq_ring_init(struct virtqueue *vq, void *ring_mem, int alignment)
DECL|vq_ring_must_notify_host|function|static int vq_ring_must_notify_host(struct virtqueue *vq)
DECL|vq_ring_notify_host|function|static void vq_ring_notify_host(struct virtqueue *vq)
DECL|vq_ring_update_avail|function|static void vq_ring_update_avail(struct virtqueue *vq, uint16_t desc_idx)
