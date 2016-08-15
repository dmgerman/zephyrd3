DECL|_CCM_H_|macro|_CCM_H_
DECL|ccm|struct|struct __packed ccm {
DECL|counter|member|uint64_t counter;
DECL|direction|member|uint8_t direction:1;
DECL|iv|member|uint8_t iv[8];
DECL|key|member|uint8_t key[16];
DECL|resv1|member|uint8_t resv1:7;
