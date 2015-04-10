DECL|_GDT_H|macro|_GDT_H
DECL|baseAdrsLowerWord|member|uint16_t baseAdrsLowerWord; /* bits 0:15 of segment base address */
DECL|baseAdrsMidByte|member|uint8_t baseAdrsMidByte; /* bits 16:23 of segment base address */
DECL|baseAdrsUpperByte|member|uint8_t baseAdrsUpperByte; /* bits 24:31 of segment base address */
DECL|descType|member|uint8_t descType; /* descriptor type fields */
DECL|limitLowerWord|member|uint16_t limitLowerWord; /* bits 0:15 of segment limit */
DECL|limitUpperByte|member|uint8_t limitUpperByte; /* bits 16:19 of limit + more type fields */
DECL|limit|member|uint16_t limit; /* GDT limit */
DECL|pEntries|member|tGdtDesc *pEntries; /* pointer to the GDT entries */
DECL|s_gdtDesc|struct|typedef struct s_gdtDesc {
DECL|s_gdtHeader|struct|typedef struct PACK_STRUCT s_gdtHeader
DECL|tGdtDesc|typedef|} tGdtDesc;
DECL|tGdtHeader|typedef|} tGdtHeader __attribute__((aligned(4)));
