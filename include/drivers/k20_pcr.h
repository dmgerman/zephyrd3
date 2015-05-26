DECL|K20_GPC_t|typedef|} K20_GPC_t; /* Global Pin Control Low/High Register */
DECL|K20_PCR_t|typedef|} K20_PCR_t; /* Pin Control Register n, n= 0-31 */
DECL|K20_PCR|macro|K20_PCR
DECL|K20_PORT_PCR_t|typedef|} K20_PORT_PCR_t;
DECL|PCR_MUX_ALT1|macro|PCR_MUX_ALT1
DECL|PCR_MUX_ALT2|macro|PCR_MUX_ALT2
DECL|PCR_MUX_ALT3|macro|PCR_MUX_ALT3
DECL|PCR_MUX_ALT4|macro|PCR_MUX_ALT4
DECL|PCR_MUX_ALT5|macro|PCR_MUX_ALT5
DECL|PCR_MUX_ALT6|macro|PCR_MUX_ALT6
DECL|PCR_MUX_ALT7|macro|PCR_MUX_ALT7
DECL|PCR_MUX_DISABLED|macro|PCR_MUX_DISABLED
DECL|PCR_PORT_A|macro|PCR_PORT_A
DECL|PCR_PORT_B|macro|PCR_PORT_B
DECL|PCR_PORT_C|macro|PCR_PORT_C
DECL|PCR_PORT_D|macro|PCR_PORT_D
DECL|PCR_PORT_E|macro|PCR_PORT_E
DECL|_K20PCR_H_|macro|_K20PCR_H_
DECL|__packed|member|K20_GPC_t gpchr __packed; /* 0x80 */
DECL|__packed|member|K20_GPC_t gpclr __packed; /* 0x84 */
DECL|__packed|member|K20_PCR_t pcr[32] __packed; /* 0x00-07C */
DECL|__packed|member|uint32_t isfr __packed; /* 0xA0 */
DECL|dse|member|uint8_t dse : 1 __packed;
DECL|field|member|} field;
DECL|field|member|} field;
DECL|gpwd|member|uint16_t gpwd : 16 __packed;
DECL|gpwe|member|uint16_t gpwe : 16 __packed;
DECL|irqc|member|uint8_t irqc : 4 __packed;
DECL|isf|member|uint8_t isf : 1 __packed;
DECL|lk|member|uint8_t lk : 1 __packed;
DECL|mux|member|uint8_t mux : 3 __packed;
DECL|ode|member|uint8_t ode : 1 __packed;
DECL|pe|member|uint8_t pe : 1 __packed;
DECL|pfe|member|uint8_t pfe : 1 __packed;
DECL|port|member|} port[5];
DECL|ps|member|uint8_t ps : 1 __packed;
DECL|res_11_14|member|uint8_t res_11_14 : 4 __packed;
DECL|res_20_23|member|uint8_t res_20_23 : 4 __packed;
DECL|res_25_31|member|uint8_t res_25_31 : 7 __packed;
DECL|res_3|member|uint8_t res_3 : 1 __packed;
DECL|res_7|member|uint8_t res_7 : 1 __packed;
DECL|res_88_9F|member|uint8_t res_88_9F[0xA0 - 0x88]; /* 0x88-0x9F Reserved */
DECL|res_A4_FF|member|uint8_t res_A4_FF[0x1000 - 0xA4]; /* 0xA4-0xFFF Reserved */
DECL|sre|member|uint8_t sre : 1 __packed;
DECL|value|member|uint32_t value;
DECL|value|member|uint32_t value;
