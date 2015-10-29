DECL|K6x_PMC|struct|struct K6x_PMC {
DECL|PMC_REGSC_ACKISO_MASK|macro|PMC_REGSC_ACKISO_MASK
DECL|REGSC|union|union REGSC {
DECL|_K6xPMC_H_|macro|_K6xPMC_H_
DECL|ackIsolation|member|uint8_t ackIsolation : 1 __packed; /* ack I/O isolation */
DECL|bandgapBufEn|member|uint8_t bandgapBufEn : 1 __packed; /* bandgap buffering */
DECL|bandgapEn|member|uint8_t bandgapEn : 1 __packed; /* bandgap enable */
DECL|field|member|} field;
DECL|lvdsc1|member|uint8_t lvdsc1; /* 0x0000 */
DECL|lvdsc2|member|uint8_t lvdsc2; /* 0x0001 */
DECL|regOnStatus|member|uint8_t regOnStatus : 1 __packed; /* regulator on, R/O */
DECL|regsc|member|union REGSC regsc; /* 0x0002 */
DECL|res_1|member|uint8_t res_1 : 1 __packed; /* SBZ */
DECL|res_5|member|uint8_t res_5 : 1 __packed;
DECL|res_6|member|uint8_t res_6 : 2 __packed; /* RAZ/WI */
DECL|value|member|uint8_t value;
