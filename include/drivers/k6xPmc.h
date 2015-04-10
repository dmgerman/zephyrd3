DECL|K6x_PMC_t|typedef|} K6x_PMC_t; /* K6x Microntroller PMC module */
DECL|PMC_REGSC_ACKISO_MASK|macro|PMC_REGSC_ACKISO_MASK
DECL|REGSC_t|typedef|} REGSC_t; /* 0x0002 Regulator Status/Control Register */
DECL|_K6xPMC_H_|macro|_K6xPMC_H_
DECL|ackIsolation|member|uint8_t ackIsolation : 1
DECL|bandgapBufEn|member|uint8_t bandgapBufEn : 1
DECL|bandgapEn|member|uint8_t bandgapEn : 1
DECL|field|member|} field;
DECL|lvdsc1|member|uint8_t lvdsc1; /* 0x0000 */
DECL|lvdsc2|member|uint8_t lvdsc2; /* 0x0001 */
DECL|regOnStatus|member|uint8_t regOnStatus : 1
DECL|regsc|member|REGSC_t regsc; /* 0x0002 */
DECL|res_1|member|uint8_t res_1 : 1 __attribute__((packed)); /* SBZ */
DECL|res_5|member|uint8_t res_5 : 1 __attribute__((packed));
DECL|res_6|member|uint8_t res_6 : 2 __attribute__((packed)); /* RAZ/WI */
DECL|value|member|uint8_t value;
