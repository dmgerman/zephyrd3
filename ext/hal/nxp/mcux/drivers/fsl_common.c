DECL|DisableDeepSleepIRQ|function|void DisableDeepSleepIRQ(IRQn_Type interrupt)
DECL|EnableDeepSleepIRQ|function|void EnableDeepSleepIRQ(IRQn_Type interrupt)
DECL|InstallIRQHandler|function|uint32_t InstallIRQHandler(IRQn_Type irq, uint32_t irqHandler)
DECL|SDK_Free|function|void SDK_Free(void *ptr)
DECL|SDK_MEM_MAGIC_NUMBER|macro|SDK_MEM_MAGIC_NUMBER
DECL|SDK_Malloc|function|void *SDK_Malloc(size_t size, size_t alignbytes)
DECL|__RAM_VECTOR_TABLE_SIZE|macro|__RAM_VECTOR_TABLE_SIZE
DECL|__VECTOR_RAM|macro|__VECTOR_RAM
DECL|__VECTOR_TABLE|macro|__VECTOR_TABLE
DECL|_mem_align_control_block|struct|typedef struct _mem_align_control_block
DECL|identifier|member|uint16_t identifier; /*!< Identifier for the memory control block. */
DECL|mem_align_cb_t|typedef|} mem_align_cb_t;
DECL|offset|member|uint16_t offset; /*!< offset from aligned adress to real address */
