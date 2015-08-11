DECL|EVENT_HEADER_SIZE|macro|EVENT_HEADER_SIZE
DECL|__EVENT_LOGGER_H__|macro|__EVENT_LOGGER_H__
DECL|bits|member|struct event_header_bits bits;
DECL|block|member|uint32_t block;
DECL|buffer_size|member|uint32_t buffer_size;
DECL|buffer|member|uint32_t *buffer;
DECL|data_length|member|uint32_t data_length :4;
DECL|dropped_count|member|uint32_t dropped_count :4;
DECL|dropped_event_count|member|uint16_t dropped_event_count;
DECL|event_header_bits|struct|struct event_header_bits {
DECL|event_header|union|union event_header {
DECL|event_id|member|uint32_t event_id :16;
DECL|event_logger|struct|struct event_logger {
DECL|head|member|uint32_t head;
DECL|reserved|member|uint32_t reserved :8;
DECL|sync_sema|member|struct nano_sem sync_sema;
DECL|tail|member|uint32_t tail;
