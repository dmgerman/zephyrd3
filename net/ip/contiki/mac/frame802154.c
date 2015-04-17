DECL|addr_len|function|addr_len(uint8_t mode)
DECL|aux_sec_len|member|uint8_t aux_sec_len; /**< Length (in bytes) of aux security header field */
DECL|dest_addr_len|member|uint8_t dest_addr_len; /**< Length (in bytes) of destination address field */
DECL|dest_pid_len|member|uint8_t dest_pid_len; /**< Length (in bytes) of destination PAN ID field */
DECL|field_length_t|typedef|} field_length_t;
DECL|field_len|function|field_len(frame802154_t *p, field_length_t *flen)
DECL|frame802154_create|function|frame802154_create(frame802154_t *p, uint8_t *buf)
DECL|frame802154_hdrlen|function|frame802154_hdrlen(frame802154_t *p)
DECL|frame802154_parse|function|frame802154_parse(uint8_t *data, int len, frame802154_t *pf)
DECL|get_key_id_len|function|get_key_id_len(uint8_t key_id_mode)
DECL|src_addr_len|member|uint8_t src_addr_len; /**< Length (in bytes) of source address field */
DECL|src_pid_len|member|uint8_t src_pid_len; /**< Length (in bytes) of source PAN ID field */
