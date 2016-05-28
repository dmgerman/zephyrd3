DECL|TCSha256State_t|typedef|typedef struct tc_sha256_state_struct *TCSha256State_t;
DECL|TC_SHA256_BLOCK_SIZE|macro|TC_SHA256_BLOCK_SIZE
DECL|TC_SHA256_DIGEST_SIZE|macro|TC_SHA256_DIGEST_SIZE
DECL|TC_SHA256_STATE_BLOCKS|macro|TC_SHA256_STATE_BLOCKS
DECL|__TC_SHA256_H__|macro|__TC_SHA256_H__
DECL|bits_hashed|member|uint64_t bits_hashed;
DECL|iv|member|uint32_t iv[TC_SHA256_STATE_BLOCKS];
DECL|leftover_offset|member|size_t leftover_offset;
DECL|leftover|member|uint8_t leftover[TC_SHA256_BLOCK_SIZE];
DECL|tc_sha256_state_struct|struct|struct tc_sha256_state_struct {
