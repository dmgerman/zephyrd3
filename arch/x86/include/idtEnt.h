DECL|IDT_ENTRY|typedef|} __packed IDT_ENTRY;
DECL|_EXC_ERROR_CODE_FAULTS|macro|_EXC_ERROR_CODE_FAULTS
DECL|_IDTENT_H|macro|_IDTENT_H
DECL|always_0_0|member|uint8_t always_0_0:3;
DECL|always_0_1|member|uint8_t always_0_1:1;
DECL|dpl|member|uint8_t dpl:2; /* Descriptor privilege level */
DECL|gate_size|member|uint8_t gate_size:1; /* size of gate, 1: 32-bit, 0:16-bit */
DECL|idt_entry|struct|typedef struct idt_entry {
DECL|offset_high|member|uint16_t offset_high;
DECL|offset_low|member|uint16_t offset_low;
DECL|present|member|uint8_t present:1; /* present yes/no */
DECL|reserved_task_gate_0|member|uint16_t reserved_task_gate_0;
DECL|reserved_task_gate_1|member|uint8_t reserved_task_gate_1;
DECL|reserved_task_gate_2|member|uint16_t reserved_task_gate_2;
DECL|reserved|member|uint8_t reserved:5;
DECL|segment_selector|member|uint16_t segment_selector;
DECL|type|member|uint8_t type:3; /* task:101, irq:110, trap:111 */
