DECL|CESR|union|union CESR {
DECL|K6x_MPU|struct|struct K6x_MPU {
DECL|MPU_NUM_REGIONS|macro|MPU_NUM_REGIONS
DECL|MPU_NUM_SLV_PORTS|macro|MPU_NUM_SLV_PORTS
DECL|MPU_NUM_WORDS_PER_REGION|macro|MPU_NUM_WORDS_PER_REGION
DECL|MPU_SLV_PORT_ERR_MASK|macro|MPU_SLV_PORT_ERR_MASK
DECL|MPU_VALID_MASK|macro|MPU_VALID_MASK
DECL|_K6xMPU_H_|macro|_K6xMPU_H_
DECL|ctrlErrStatus|member|union CESR ctrlErrStatus; /* 0x0000 */
DECL|errAddr0|member|uint32_t errAddr0; /* 0x0010 */
DECL|errAddr1|member|uint32_t errAddr1; /* 0x0018 */
DECL|errAddr2|member|uint32_t errAddr2; /* 0x0020 */
DECL|errAddr3|member|uint32_t errAddr3; /* 0x0028 */
DECL|errAddr4|member|uint32_t errAddr4; /* 0x0030 */
DECL|errDetail0|member|uint32_t errDetail0; /* 0x0014 */
DECL|errDetail1|member|uint32_t errDetail1; /* 0x001C */
DECL|errDetail2|member|uint32_t errDetail2; /* 0x0024 */
DECL|errDetail3|member|uint32_t errDetail3; /* 0x002C */
DECL|errDetail4|member|uint32_t errDetail4; /* 0x0034 */
DECL|field|member|} field;
DECL|hwRevLvl|member|uint8_t hwRevLvl : 4 __packed; /* Hardware revision */
DECL|numRgnDescs|member|uint8_t numRgnDescs : 4 __packed; /* # of regions */
DECL|numSlvPorts|member|uint8_t numSlvPorts : 4 __packed; /* # of slave ports */
DECL|res_1|member|uint8_t res_1 : 7 __packed; /* RAZ/WI */
DECL|res_20|member|uint8_t res_20 : 3 __packed; /* RAZ/WI */
DECL|res_23|member|uint8_t res_23 : 1 __packed; /* RAO/WI */
DECL|res_24|member|uint8_t res_24 : 3 __packed; /* RAZ/WI */
DECL|rgnDescAltAccCtrl|member|uint32_t rgnDescAltAccCtrl[MPU_NUM_REGIONS]; /* 0x0800 */
DECL|rgnDesc|member|uint32_t rgnDesc[MPU_NUM_REGIONS][MPU_NUM_WORDS_PER_REGION]; /* 0x0400
DECL|slvPortNErr|member|uint8_t slvPortNErr : 5 __packed; /* slave port N err */
DECL|valid|member|uint8_t valid : 1 __packed; /* MPU valid/enable */
DECL|value|member|uint32_t value;
