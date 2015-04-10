DECL|ISR_LIST|typedef|} ISR_LIST;
DECL|MK_ISR_NAME|macro|MK_ISR_NAME
DECL|NANO_CPU_INT_REGISTER|macro|NANO_CPU_INT_REGISTER
DECL|NANO_CPU_INT_STUB_DECL|macro|NANO_CPU_INT_STUB_DECL
DECL|NANO_EOI_GET_FUNC|typedef|typedef void (*NANO_EOI_GET_FUNC) (void *);
DECL|NANO_ESF|typedef|} NANO_ESF;
DECL|NANO_INT_STUB|typedef|NANO_INT_STUB[_INT_STUB_SIZE];
DECL|NANO_ISF|typedef|} NANO_ISF;
DECL|NANO_SOFT_IRQ|macro|NANO_SOFT_IRQ
DECL|USE_FP|macro|USE_FP
DECL|USE_SSE|macro|USE_SSE
DECL|_ARCH_IFACE_H|macro|_ARCH_IFACE_H
DECL|_INT_STUB_ALIGN|macro|_INT_STUB_ALIGN
DECL|_INT_STUB_ALIGN|macro|_INT_STUB_ALIGN
DECL|_INT_STUB_SIZE|macro|_INT_STUB_SIZE
DECL|_NANO_ERR_GEN_PROT_FAULT|macro|_NANO_ERR_GEN_PROT_FAULT
DECL|_NANO_ERR_INVALID_STRING_OP|macro|_NANO_ERR_INVALID_STRING_OP
DECL|_NANO_ERR_INVALID_TASK_EXIT|macro|_NANO_ERR_INVALID_TASK_EXIT
DECL|_NANO_ERR_PAGE_FAULT|macro|_NANO_ERR_PAGE_FAULT
DECL|_NANO_ERR_SPURIOUS_INT|macro|_NANO_ERR_SPURIOUS_INT
DECL|_NANO_ERR_STACK_CHK_FAIL|macro|_NANO_ERR_STACK_CHK_FAIL
DECL|_NanoTscRead|function|__asm volatile uint64_t _NanoTscRead (void)
DECL|_NanoTscRead|function|static inline uint64_t _NanoTscRead(void)
DECL|cr2|member|unsigned int cr2; /* putting cr2 here allows discarding it and pEsf in
DECL|cs|member|unsigned int cs;
DECL|cs|member|unsigned int cs;
DECL|dpl|member|unsigned int dpl; /* Privilege level associated with ISR/stub */
DECL|eax|member|unsigned int eax;
DECL|eax|member|unsigned int eax;
DECL|ebp|member|unsigned int ebp;
DECL|ebx|member|unsigned int ebx;
DECL|ecx|member|unsigned int ecx;
DECL|ecx|member|unsigned int ecx;
DECL|edi|member|unsigned int edi;
DECL|edx|member|unsigned int edx;
DECL|edx|member|unsigned int edx;
DECL|eflags|member|unsigned int eflags;
DECL|eflags|member|unsigned int eflags;
DECL|eip|member|unsigned int eip;
DECL|eip|member|unsigned int eip;
DECL|errorCode|member|unsigned int errorCode;
DECL|esi|member|unsigned int esi;
DECL|esp|member|unsigned int esp;
DECL|esp|member|unsigned int esp;
DECL|find_first_set_inline|function|__asm volatile unsigned int find_first_set_inline( unsigned int op )
DECL|find_first_set_inline|function|static inline unsigned int find_first_set_inline (unsigned int op)
DECL|find_last_set_inline|function|__asm volatile unsigned int find_last_set_inline( unsigned int op )
DECL|find_last_set_inline|function|static inline unsigned int find_last_set_inline (unsigned int op)
DECL|fnc|member|void *fnc; /* Address of ISR/stub */
DECL|irq_lock_inline|function|__asm volatile unsigned int irq_lock_inline (void)
DECL|irq_lock_inline|function|unsigned int irq_lock_inline( void )
DECL|irq_lock_inline|macro|irq_lock_inline
DECL|irq_lock|function|static inline unsigned int irq_lock(void) {return 1;}
DECL|irq_unlock_inline|function|__asm volatile void irq_unlock_inline( unsigned int key )
DECL|irq_unlock_inline|function|void irq_unlock_inline( unsigned int key )
DECL|irq_unlock_inline|macro|irq_unlock_inline
DECL|irq_unlock|function|static inline void irq_unlock(unsigned int key) {}
DECL|nanoEsf|struct|typedef struct nanoEsf {
DECL|nanoIsf|struct|typedef struct nanoIsf {
DECL|s_isrList|struct|typedef struct s_isrList
DECL|ss|member|unsigned int ss;
DECL|ss|member|unsigned int ss;
DECL|vec|member|unsigned int vec; /* Vector number associated with ISR/stub */
