DECL|SIZE32_OF|macro|SIZE32_OF
DECL|SYS_RING_BUF_DECLARE_POW2|macro|SYS_RING_BUF_DECLARE_POW2
DECL|SYS_RING_BUF_DECLARE_SIZE|macro|SYS_RING_BUF_DECLARE_SIZE
DECL|__RING_BUFFER_H__|macro|__RING_BUFFER_H__
DECL|buf|member|uint32_t *buf; /**< Memory region for stored entries */
DECL|dropped_put_count|member|uint32_t dropped_put_count; /**< Running tally of the number of failed
DECL|head|member|uint32_t head; /**< Index in buf for the head element */
DECL|mask|member|uint32_t mask; /**< Modulo mask if size is a power of 2 */
DECL|ring_buf|struct|struct ring_buf {
DECL|size|member|uint32_t size; /**< Size of buf in 32-bit chunks */
DECL|sys_ring_buf_init|function|static inline void sys_ring_buf_init(struct ring_buf *buf, uint32_t size, uint32_t *data)
DECL|sys_ring_buf_is_empty|function|static inline int sys_ring_buf_is_empty(struct ring_buf *buf)
DECL|sys_ring_buf_space_get|function|static inline int sys_ring_buf_space_get(struct ring_buf *buf)
DECL|tail|member|uint32_t tail; /**< Index in buf for the tail element */
