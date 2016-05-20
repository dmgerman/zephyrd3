DECL|IDT_NUM_GATES|macro|IDT_NUM_GATES
DECL|IDT_NUM_GATES|macro|IDT_NUM_GATES
DECL|IDT_SIZE|macro|IDT_SIZE
DECL|__IDT_H__|macro|__IDT_H__
DECL|base|member|uint32_t base;
DECL|conf|member|uint16_t conf;
DECL|idt_init|function|static __inline__ void idt_init(void)
DECL|idt_set_intr_gate_desc|function|static __inline__ void idt_set_intr_gate_desc(uint32_t vector, uint32_t isr)
DECL|idtr_t|typedef|} __attribute__((packed)) idtr_t;
DECL|idtr|struct|typedef struct idtr {
DECL|intr_gate_desc_t|typedef|} __attribute__((packed)) intr_gate_desc_t;
DECL|intr_gate_desc|struct|typedef struct intr_gate_desc {
DECL|isr_high|member|uint16_t isr_high;
DECL|isr_low|member|uint16_t isr_low;
DECL|limit|member|uint16_t limit;
DECL|selector|member|uint16_t selector; /* Segment selector */
