DECL|IEEE802154_L2_CTX_TYPE|macro|IEEE802154_L2_CTX_TYPE
DECL|IEEE802154_MAX_ADDR_LENGTH|macro|IEEE802154_MAX_ADDR_LENGTH
DECL|IEEE802154_NO_CHANNEL|macro|IEEE802154_NO_CHANNEL
DECL|ZEPHYR_INCLUDE_NET_IEEE802154_H_|macro|ZEPHYR_INCLUDE_NET_IEEE802154_H_
DECL|_unused|member|u8_t _unused : 3;
DECL|_unused|member|u8_t _unused : 5;
DECL|ack_lock|member|struct k_sem ack_lock;
DECL|ack_received|member|u8_t ack_received : 1;
DECL|ack_requested|member|u8_t ack_requested : 1;
DECL|ack_seq|member|u8_t ack_seq;
DECL|associated|member|u8_t associated : 1;
DECL|channel|member|u16_t channel;
DECL|coord_addr_len|member|u8_t coord_addr_len;
DECL|coord|member|} coord;
DECL|dec|member|struct cipher_ctx dec;
DECL|enc|member|struct cipher_ctx enc;
DECL|ext_addr|member|u8_t ext_addr[IEEE802154_MAX_ADDR_LENGTH];
DECL|ext_addr|member|u8_t ext_addr[IEEE802154_MAX_ADDR_LENGTH];
DECL|flags|member|enum net_l2_flags flags;
DECL|frame_counter|member|u32_t frame_counter;
DECL|ieee802154_context|struct|struct ieee802154_context {
DECL|ieee802154_security_ctx|struct|struct ieee802154_security_ctx {
DECL|key_len|member|u8_t key_len;
DECL|key_mode|member|u8_t key_mode : 2;
DECL|key|member|u8_t key[16];
DECL|level|member|u8_t level : 3;
DECL|pan_id|member|u16_t pan_id;
DECL|req_lock|member|struct k_sem req_lock;
DECL|res_lock|member|struct k_sem res_lock;
DECL|scan_ctx|member|struct ieee802154_req_params *scan_ctx;
DECL|sec_ctx|member|struct ieee802154_security_ctx sec_ctx;
DECL|sequence|member|u8_t sequence;
DECL|short_addr|member|u16_t short_addr;
DECL|short_addr|member|u16_t short_addr;
DECL|tx_power|member|s16_t tx_power;
