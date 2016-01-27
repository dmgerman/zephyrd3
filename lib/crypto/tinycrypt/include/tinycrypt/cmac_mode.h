DECL|K1|member|uint8_t K1[TC_AES_BLOCK_SIZE];
DECL|K2|member|uint8_t K2[TC_AES_BLOCK_SIZE];
DECL|TCCmacState_t|typedef|} *TCCmacState_t;
DECL|TC_CMAC_PADDING|macro|TC_CMAC_PADDING
DECL|__TC_CMAC_MODE_H__|macro|__TC_CMAC_MODE_H__
DECL|countdown|member|uint64_t countdown;
DECL|iv|member|uint8_t iv[TC_AES_BLOCK_SIZE];
DECL|keyid|member|uint32_t keyid;
DECL|leftover_offset|member|uint32_t leftover_offset;
DECL|leftover|member|uint8_t leftover[TC_AES_BLOCK_SIZE];
DECL|sched|member|TCAesKeySched_t sched;
DECL|tc_cmac_struct|struct|typedef struct tc_cmac_struct {
