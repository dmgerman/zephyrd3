DECL|_NanoCpuExcConnectAtDpl|function|void _NanoCpuExcConnectAtDpl(unsigned int vector, /* interrupt vector: 0 to 255 on IA-32 */ void (*routine)(NANO_ESF * pEsf), unsigned int dpl /* priv level for interrupt-gate descriptor */ )
DECL|_common_dynamic_exc_handler|function|void _common_dynamic_exc_handler(uint32_t stub_idx, NANO_ESF *pEsf)
DECL|exc_handlers|variable|exc_handlers
DECL|nanoCpuExcConnect|function|void nanoCpuExcConnect(unsigned int vector, /* interrupt vector: 0 to 255 on * IA-32 */ void (*routine)(NANO_ESF * pEsf))
DECL|next_exc_noerr_stub|variable|next_exc_noerr_stub
DECL|next_exc_stub|variable|next_exc_stub
