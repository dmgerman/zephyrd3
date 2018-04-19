DECL|ERROR_EMPTY_RING|macro|ERROR_EMPTY_RING
DECL|ERROR_INVLD_DESC_IDX|macro|ERROR_INVLD_DESC_IDX
DECL|ERROR_NO_MEM|macro|ERROR_NO_MEM
DECL|ERROR_VQUEUE_INVLD_PARAM|macro|ERROR_VQUEUE_INVLD_PARAM
DECL|ERROR_VRING_ALIGN|macro|ERROR_VRING_ALIGN
DECL|ERROR_VRING_FULL|macro|ERROR_VRING_FULL
DECL|ERROR_VRING_MAX_DESC|macro|ERROR_VRING_MAX_DESC
DECL|ERROR_VRING_NO_BUFF|macro|ERROR_VRING_NO_BUFF
DECL|KASSERT|macro|KASSERT
DECL|VIRTIO_RING_F_EVENT_IDX|macro|VIRTIO_RING_F_EVENT_IDX
DECL|VIRTIO_RING_F_INDIRECT_DESC|macro|VIRTIO_RING_F_INDIRECT_DESC
DECL|VIRTQUEUE_FLAG_EVENT_IDX|macro|VIRTQUEUE_FLAG_EVENT_IDX
DECL|VIRTQUEUE_FLAG_INDIRECT|macro|VIRTQUEUE_FLAG_INDIRECT
DECL|VIRTQUEUE_H_|macro|VIRTQUEUE_H_
DECL|VIRTQUEUE_MAX_NAME_SZ|macro|VIRTQUEUE_MAX_NAME_SZ
DECL|VQASSERT|macro|VQASSERT
DECL|VQASSERT|macro|VQASSERT
DECL|VQUEUE_BUSY|macro|VQUEUE_BUSY
DECL|VQUEUE_BUSY|macro|VQUEUE_BUSY
DECL|VQUEUE_DEBUG|macro|VQUEUE_DEBUG
DECL|VQUEUE_IDLE|macro|VQUEUE_IDLE
DECL|VQUEUE_IDLE|macro|VQUEUE_IDLE
DECL|VQUEUE_SUCCESS|macro|VQUEUE_SUCCESS
DECL|VQ_ERROR_BASE|macro|VQ_ERROR_BASE
DECL|VQ_PARAM_CHK|macro|VQ_PARAM_CHK
DECL|VQ_PARAM_CHK|macro|VQ_PARAM_CHK
DECL|VQ_POSTPONE_EMPTIED|enumerator|VQ_POSTPONE_EMPTIED /* Until all available desc are used. */
DECL|VQ_POSTPONE_LONG|enumerator|VQ_POSTPONE_LONG,
DECL|VQ_POSTPONE_SHORT|enumerator|VQ_POSTPONE_SHORT,
DECL|VQ_RING_ASSERT_CHAIN_TERM|macro|VQ_RING_ASSERT_CHAIN_TERM
DECL|VQ_RING_ASSERT_CHAIN_TERM|macro|VQ_RING_ASSERT_CHAIN_TERM
DECL|VQ_RING_ASSERT_VALID_IDX|macro|VQ_RING_ASSERT_VALID_IDX
DECL|VQ_RING_ASSERT_VALID_IDX|macro|VQ_RING_ASSERT_VALID_IDX
DECL|VQ_RING_DESC_CHAIN_END|macro|VQ_RING_DESC_CHAIN_END
DECL|align|member|uint32_t align;
DECL|boolean|typedef|typedef uint8_t boolean;
DECL|callback|member|void (*callback) (struct virtqueue * vq);
DECL|cookie|member|void *cookie;
DECL|ndescs|member|uint16_t ndescs;
DECL|notify|member|void (*notify) (struct virtqueue * vq);
DECL|num_descs|member|uint16_t num_descs;
DECL|pad|member|uint16_t pad;
DECL|shm_io|member|struct metal_io_region *shm_io;
DECL|vaddr|member|void *vaddr;
DECL|virtqueue|struct|struct virtqueue {
DECL|vq_available_idx|member|uint16_t vq_available_idx;
DECL|vq_callback|typedef|typedef void vq_callback(struct virtqueue *);
DECL|vq_desc_extra|struct|struct vq_desc_extra {
DECL|vq_desc_head_idx|member|uint16_t vq_desc_head_idx;
DECL|vq_descx|member|} vq_descx[0];
DECL|vq_dev|member|struct virtio_device *vq_dev;
DECL|vq_flags|member|uint32_t vq_flags;
DECL|vq_free_cnt|member|uint16_t vq_free_cnt;
DECL|vq_inuse|member|boolean vq_inuse;
DECL|vq_name|member|char vq_name[VIRTQUEUE_MAX_NAME_SZ];
DECL|vq_nentries|member|uint16_t vq_nentries;
DECL|vq_notify|typedef|typedef void vq_notify(struct virtqueue *);
DECL|vq_postpone_t|typedef|} vq_postpone_t;
DECL|vq_queue_index|member|uint16_t vq_queue_index;
DECL|vq_queued_cnt|member|uint16_t vq_queued_cnt;
DECL|vq_ring|member|struct vring vq_ring;
DECL|vq_used_cons_idx|member|uint16_t vq_used_cons_idx;
DECL|vring_alloc_info|struct|struct vring_alloc_info {
