DECL|CBOR_ENCODER_H|macro|CBOR_ENCODER_H
DECL|bytes_written|member|int bytes_written;
DECL|cbor_encoder_writer|struct|typedef struct cbor_encoder_writer {
DECL|cbor_encoder_writer|typedef|} cbor_encoder_writer;
DECL|cbor_encoder_write|typedef|typedef int (cbor_encoder_write)(struct cbor_encoder_writer *, const char *data, int len);
DECL|write|member|cbor_encoder_write *write;
