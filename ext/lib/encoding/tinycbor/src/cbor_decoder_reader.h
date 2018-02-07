DECL|CBOR_DECODER_WRITER_H|macro|CBOR_DECODER_WRITER_H
DECL|cbor_decoder_reader|struct|struct cbor_decoder_reader {
DECL|cbor_get_string_chunk|typedef|typedef uintptr_t (cbor_get_string_chunk)(struct cbor_decoder_reader *d, int offset, size_t *len);
DECL|cbor_memcmp|typedef|typedef uintptr_t (cbor_memcmp)(struct cbor_decoder_reader *d, char *buf, int offset, size_t len);
DECL|cbor_memcpy|typedef|typedef uintptr_t (cbor_memcpy)(struct cbor_decoder_reader *d, char *buf, int offset, size_t len);
DECL|cbor_reader_get16|typedef|typedef uint16_t (cbor_reader_get16)(struct cbor_decoder_reader *d, int offset);
DECL|cbor_reader_get32|typedef|typedef uint32_t (cbor_reader_get32)(struct cbor_decoder_reader *d, int offset);
DECL|cbor_reader_get64|typedef|typedef uint64_t (cbor_reader_get64)(struct cbor_decoder_reader *d, int offset);
DECL|cbor_reader_get8|typedef|typedef uint8_t (cbor_reader_get8)(struct cbor_decoder_reader *d, int offset);
DECL|cmp|member|cbor_memcmp *cmp;
DECL|cpy|member|cbor_memcpy *cpy;
DECL|get16|member|cbor_reader_get16 *get16;
DECL|get32|member|cbor_reader_get32 *get32;
DECL|get64|member|cbor_reader_get64 *get64;
DECL|get8|member|cbor_reader_get8 *get8;
DECL|get_string_chunk|member|cbor_get_string_chunk *get_string_chunk;
DECL|message_size|member|size_t message_size;
