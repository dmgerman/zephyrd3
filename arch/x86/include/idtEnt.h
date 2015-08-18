DECL|IDT_ENTRY|typedef|} __packed IDT_ENTRY;
DECL|_EXC_ERROR_CODE_FAULTS|macro|_EXC_ERROR_CODE_FAULTS
DECL|_IDTENT_H|macro|_IDTENT_H
DECL|_IdtEntCreate|function|static inline void _IdtEntCreate (unsigned long long *pIdtEntry, void (*routine)(void *), unsigned int dpl)
DECL|descPrivLevel|member|unsigned short descPrivLevel:2;
DECL|hiOffset|member|unsigned short hiOffset;
DECL|idtEntry|struct|typedef struct idtEntry {
DECL|intGateIndicator|member|unsigned short intGateIndicator:8;
DECL|lowOffset|member|unsigned short lowOffset;
DECL|present|member|unsigned short present:1;
DECL|reserved|member|unsigned short reserved:5;
DECL|segmentSelector|member|unsigned short segmentSelector;
