DECL|TCCcmMode_t|typedef|} *TCCcmMode_t;
DECL|TC_CCM_AAD_MAX_BYTES|macro|TC_CCM_AAD_MAX_BYTES
DECL|TC_CCM_PAYLOAD_MAX_BYTES|macro|TC_CCM_PAYLOAD_MAX_BYTES
DECL|__TC_CCM_MODE_H__|macro|__TC_CCM_MODE_H__
DECL|mlen|member|uint32_t mlen; /* mac length in bytes (parameter t in SP-800 38C) */
DECL|nonce|member|uint8_t *nonce; /* nonce required by CCM */
DECL|sched|member|TCAesKeySched_t sched; /* AES key schedule */
DECL|tc_ccm_mode_struct|struct|typedef struct tc_ccm_mode_struct {
