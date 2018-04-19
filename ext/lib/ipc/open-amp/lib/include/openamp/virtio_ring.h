DECL|VIRTIO_RING_H|macro|VIRTIO_RING_H
DECL|VRING_AVAIL_F_NO_INTERRUPT|macro|VRING_AVAIL_F_NO_INTERRUPT
DECL|VRING_DESC_F_INDIRECT|macro|VRING_DESC_F_INDIRECT
DECL|VRING_DESC_F_NEXT|macro|VRING_DESC_F_NEXT
DECL|VRING_DESC_F_WRITE|macro|VRING_DESC_F_WRITE
DECL|VRING_USED_F_NO_NOTIFY|macro|VRING_USED_F_NO_NOTIFY
DECL|addr|member|uint64_t addr;
DECL|avail|member|struct vring_avail *avail;
DECL|desc|member|struct vring_desc *desc;
DECL|flags|member|uint16_t flags;
DECL|flags|member|uint16_t flags;
DECL|flags|member|uint16_t flags;
DECL|idx|member|uint16_t idx;
DECL|idx|member|uint16_t idx;
DECL|id|member|uint32_t id;
DECL|len|member|uint32_t len;
DECL|len|member|uint32_t len;
DECL|next|member|uint16_t next;
DECL|num|member|unsigned int num;
DECL|ring|member|struct vring_used_elem ring[0];
DECL|ring|member|uint16_t ring[0];
DECL|used|member|struct vring_used *used;
DECL|vring_avail_event|macro|vring_avail_event
DECL|vring_avail|struct|struct vring_avail {
DECL|vring_desc|struct|struct vring_desc {
DECL|vring_init|function|vring_init(struct vring *vr, unsigned int num, uint8_t * p, unsigned long align)
DECL|vring_need_event|function|vring_need_event(uint16_t event_idx, uint16_t new_idx, uint16_t old)
DECL|vring_size|function|static inline int vring_size(unsigned int num, unsigned long align)
DECL|vring_used_elem|struct|struct vring_used_elem {
DECL|vring_used_event|macro|vring_used_event
DECL|vring_used|struct|struct vring_used {
DECL|vring|struct|struct vring {
