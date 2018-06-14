DECL|__packed|variable|__packed
DECL|ccm|struct|struct ccm {
DECL|counter|member|u64_t counter;
DECL|direction|member|u8_t direction:1;
DECL|iv|member|u8_t iv[8];
DECL|key|member|u8_t key[16];
DECL|resv1|member|u8_t resv1:7;
