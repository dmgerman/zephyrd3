DECL|AES_MAXKEYBITS|macro|AES_MAXKEYBITS
DECL|AES_MAXKEYBYTES|macro|AES_MAXKEYBYTES
DECL|AES_MAXROUNDS|macro|AES_MAXROUNDS
DECL|Nr|member|int Nr; /* key-length-dependent number of rounds */
DECL|__RIJNDAEL_H|macro|__RIJNDAEL_H
DECL|aes_u16|typedef|typedef uint16_t aes_u16;
DECL|aes_u32|typedef|typedef uint32_t aes_u32;
DECL|aes_u8|typedef|typedef uint8_t aes_u8;
DECL|dk|member|aes_u32 dk[4*(AES_MAXROUNDS + 1)]; /* decrypt key schedule */
DECL|ek|member|aes_u32 ek[4*(AES_MAXROUNDS + 1)]; /* encrypt key schedule */
DECL|enc_only|member|int enc_only; /* context contains only encrypt schedule */
DECL|rijndael_ctx|typedef|} rijndael_ctx;
DECL|u_char|typedef|typedef unsigned char u_char;
