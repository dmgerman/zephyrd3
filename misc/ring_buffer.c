DECL|length|member|u32_t length :8; /**< length in 32-bit chunks */
DECL|ring_element|struct|struct ring_element {
DECL|sys_ring_buf_get|function|int sys_ring_buf_get(struct ring_buf *buf, u16_t *type, u8_t *value, u32_t *data, u8_t *size32)
DECL|sys_ring_buf_put|function|int sys_ring_buf_put(struct ring_buf *buf, u16_t type, u8_t value, u32_t *data, u8_t size32)
DECL|type|member|u32_t type :16; /**< Application-specific */
DECL|value|member|u32_t value :8; /**< Room for small integral values */
