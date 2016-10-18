DECL|length|member|uint32_t length :8; /**< length in 32-bit chunks */
DECL|ring_element|struct|struct ring_element {
DECL|sys_ring_buf_get|function|int sys_ring_buf_get(struct ring_buf *buf, uint16_t *type, uint8_t *value, uint32_t *data, uint8_t *size32)
DECL|sys_ring_buf_put|function|int sys_ring_buf_put(struct ring_buf *buf, uint16_t type, uint8_t value, uint32_t *data, uint8_t size32)
DECL|type|member|uint32_t type :16; /**< Application-specific */
DECL|value|member|uint32_t value :8; /**< Room for small integral values */
