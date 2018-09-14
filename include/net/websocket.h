DECL|WS_FLAG_BINARY|macro|WS_FLAG_BINARY
DECL|WS_FLAG_CLOSE|macro|WS_FLAG_CLOSE
DECL|WS_FLAG_FINAL|macro|WS_FLAG_FINAL
DECL|WS_FLAG_PING|macro|WS_FLAG_PING
DECL|WS_FLAG_PONG|macro|WS_FLAG_PONG
DECL|WS_FLAG_TEXT|macro|WS_FLAG_TEXT
DECL|WS_OPCODE_CLOSE|enumerator|WS_OPCODE_CLOSE = 0x08,
DECL|WS_OPCODE_CONTINUE|enumerator|WS_OPCODE_CONTINUE = 0x00,
DECL|WS_OPCODE_DATA_BINARY|enumerator|WS_OPCODE_DATA_BINARY = 0x02,
DECL|WS_OPCODE_DATA_TEXT|enumerator|WS_OPCODE_DATA_TEXT = 0x01,
DECL|WS_OPCODE_PING|enumerator|WS_OPCODE_PING = 0x09,
DECL|WS_OPCODE_PONG|enumerator|WS_OPCODE_PONG = 0x0A,
DECL|ZEPHYR_INCLUDE_NET_WEBSOCKET_H_|macro|ZEPHYR_INCLUDE_NET_WEBSOCKET_H_
DECL|ws_opcode|enum|enum ws_opcode {
DECL|ws_send_msg_to_client|function|static inline int ws_send_msg_to_client(struct http_ctx *ctx,u8_t *payload, size_t payload_len, enum ws_opcode opcode, bool final,
