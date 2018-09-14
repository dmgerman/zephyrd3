DECL|DTE_BASE|macro|DTE_BASE
DECL|DTE_LIMIT|macro|DTE_LIMIT
DECL|DTE_OFFSET|macro|DTE_OFFSET
DECL|DT_CALL_GATE_ENTRY|macro|DT_CALL_GATE_ENTRY
DECL|DT_CODE_SEG_ENTRY|macro|DT_CODE_SEG_ENTRY
DECL|DT_CONFORM|macro|DT_CONFORM
DECL|DT_DATA_SEG_ENTRY|macro|DT_DATA_SEG_ENTRY
DECL|DT_EXPAND_DOWN|macro|DT_EXPAND_DOWN
DECL|DT_EXPAND_UP|macro|DT_EXPAND_UP
DECL|DT_GRAN_BYTE|macro|DT_GRAN_BYTE
DECL|DT_GRAN_PAGE|macro|DT_GRAN_PAGE
DECL|DT_INIT|macro|DT_INIT
DECL|DT_IRQ_GATE_ENTRY|macro|DT_IRQ_GATE_ENTRY
DECL|DT_LDT_ENTRY|macro|DT_LDT_ENTRY
DECL|DT_NONCONFORM|macro|DT_NONCONFORM
DECL|DT_NON_READABLE|macro|DT_NON_READABLE
DECL|DT_NON_WRITABLE|macro|DT_NON_WRITABLE
DECL|DT_READABLE|macro|DT_READABLE
DECL|DT_TASK_GATE_ENTRY|macro|DT_TASK_GATE_ENTRY
DECL|DT_TRAP_GATE_ENTRY|macro|DT_TRAP_GATE_ENTRY
DECL|DT_TSS_ENTRY|macro|DT_TSS_ENTRY
DECL|DT_TSS_STD_ENTRY|macro|DT_TSS_STD_ENTRY
DECL|DT_TYPE_CODEDATA|macro|DT_TYPE_CODEDATA
DECL|DT_TYPE_SYSTEM|macro|DT_TYPE_SYSTEM
DECL|DT_WRITABLE|macro|DT_WRITABLE
DECL|DT_ZERO_ENTRY|macro|DT_ZERO_ENTRY
DECL|SEG_SELECTOR|macro|SEG_SELECTOR
DECL|SEG_TYPE_CALL_GATE|macro|SEG_TYPE_CALL_GATE
DECL|SEG_TYPE_IRQ_GATE|macro|SEG_TYPE_IRQ_GATE
DECL|SEG_TYPE_LDT|macro|SEG_TYPE_LDT
DECL|SEG_TYPE_TASK_GATE|macro|SEG_TYPE_TASK_GATE
DECL|SEG_TYPE_TRAP_GATE|macro|SEG_TYPE_TRAP_GATE
DECL|SEG_TYPE_TSS_BUSY|macro|SEG_TYPE_TSS_BUSY
DECL|SEG_TYPE_TSS|macro|SEG_TYPE_TSS
DECL|ZEPHYR_INCLUDE_ARCH_X86_SEGMENTATION_H_|macro|ZEPHYR_INCLUDE_ARCH_X86_SEGMENTATION_H_
DECL|_DESC_COMMON|macro|_DESC_COMMON
DECL|_EXC_ERROR_CODE_FAULTS|macro|_EXC_ERROR_CODE_FAULTS
DECL|_LIMIT_AND_BASE|macro|_LIMIT_AND_BASE
DECL|_SEGMENT_AND_OFFSET|macro|_SEGMENT_AND_OFFSET
DECL|_SYS_DESC|macro|_SYS_DESC
DECL|__packed|macro|__packed
DECL|_get_cs|function|static inline u16_t _get_cs(void)
DECL|_get_ds|function|static inline u16_t _get_ds(void)
DECL|_get_gdt|function|static inline void _get_gdt(struct pseudo_descriptor *gdt)
DECL|_get_idt|function|static inline void _get_idt(struct pseudo_descriptor *idt)
DECL|_get_ldt|function|static inline u16_t _get_ldt(void)
DECL|_get_tss|function|static inline u16_t _get_tss(void)
DECL|_init_irq_gate|function|static inline void _init_irq_gate(struct segment_descriptor *sd, u16_t seg_selector, u32_t offset, u32_t dpl)
DECL|_sd_set_seg_offset|function|static inline void _sd_set_seg_offset(struct segment_descriptor *sd, u16_t segment_selector, u32_t offset)
DECL|_set_gdt|function|static inline void _set_gdt(const struct pseudo_descriptor *gdt)
DECL|_set_idt|function|static inline void _set_idt(const struct pseudo_descriptor *idt)
DECL|_set_ldt|function|static inline void _set_ldt(u16_t ldt)
DECL|_set_tss|function|static inline void _set_tss(u16_t sel)
DECL|accessed|member|u8_t accessed:1;
DECL|always_0_0|member|u8_t always_0_0:3;
DECL|avl|member|u8_t avl:1; /* CPU ignores this */
DECL|backlink|member|u16_t backlink;
DECL|base_hi|member|u8_t base_hi; /* Bits 24-31 */
DECL|base_low|member|u16_t base_low; /* Bits 0-15 */
DECL|base_mid|member|u8_t base_mid; /* Bits 16-23 */
DECL|cd|member|u8_t cd:1;
DECL|cr3|member|u32_t cr3;
DECL|cs|member|u16_t cs;
DECL|db|member|u8_t db:1; /* D/B field 1=32-bit 0=16-bit*/
DECL|descriptor_type|member|u8_t descriptor_type:1;
DECL|dpl|member|u8_t dpl:2;
DECL|ds|member|u16_t ds;
DECL|eax|member|u32_t eax;
DECL|ebp|member|u32_t ebp;
DECL|ebx|member|u32_t ebx;
DECL|ecx|member|u32_t ecx;
DECL|edi|member|u32_t edi;
DECL|edx|member|u32_t edx;
DECL|eflags|member|u32_t eflags;
DECL|eip|member|u32_t eip;
DECL|entries|member|struct segment_descriptor *entries;
DECL|esi|member|u32_t esi;
DECL|esp0|member|u32_t esp0;
DECL|esp1|member|u32_t esp1;
DECL|esp2|member|u32_t esp2;
DECL|esp|member|u32_t esp;
DECL|es|member|u16_t es;
DECL|executable|member|u8_t executable:1;
DECL|far_ptr|struct|struct __packed far_ptr {
DECL|flags_l|member|u8_t flags_l:1; /* L field */
DECL|fs|member|u16_t fs;
DECL|granularity|member|u8_t granularity:1;
DECL|gs|member|u16_t gs;
DECL|index|member|u16_t index:13;
DECL|iomap|member|u16_t iomap;
DECL|ldt_ss|member|u16_t ldt_ss;
DECL|limit_hi|member|u8_t limit_hi:4;
DECL|limit_low|member|u16_t limit_low;
DECL|offset_hi|member|u16_t offset_hi;
DECL|offset_low|member|u16_t offset_low;
DECL|offset|member|void *offset;
DECL|present|member|u8_t present:1;
DECL|pseudo_descriptor|struct|struct __packed pseudo_descriptor {
DECL|reserved_10|member|u16_t reserved_10;
DECL|reserved_11|member|u16_t reserved_11;
DECL|reserved_12|member|u16_t reserved_12:15;
DECL|reserved_1|member|u16_t reserved_1;
DECL|reserved_2|member|u16_t reserved_2;
DECL|reserved_3|member|u16_t reserved_3;
DECL|reserved_4|member|u16_t reserved_4;
DECL|reserved_5|member|u16_t reserved_5;
DECL|reserved_6|member|u16_t reserved_6;
DECL|reserved_7|member|u16_t reserved_7;
DECL|reserved_8|member|u16_t reserved_8;
DECL|reserved_9|member|u16_t reserved_9;
DECL|reserved_or_param|member|u8_t reserved_or_param:5;
DECL|reserved_task_gate_0|member|u16_t reserved_task_gate_0;
DECL|reserved_task_gate_1|member|u8_t reserved_task_gate_1;
DECL|reserved_task_gate_2|member|u16_t reserved_task_gate_2;
DECL|rpl|member|u8_t rpl:2;
DECL|rw|member|u8_t rw:1;
DECL|segment_descriptor|struct|struct __packed segment_descriptor {
DECL|segment_selector|member|u16_t segment_selector;
DECL|segment_selector|struct|struct __packed segment_selector {
DECL|sel|member|u16_t sel;
DECL|size|member|u16_t size;
DECL|ss0|member|u16_t ss0;
DECL|ss1|member|u16_t ss1;
DECL|ss2|member|u16_t ss2;
DECL|ss|member|u16_t ss;
DECL|table|member|u8_t table:1; /* 0=gdt 1=ldt */
DECL|task_state_segment|struct|struct __packed task_state_segment {
DECL|type|member|u8_t type:4;
DECL|t|member|u8_t t:1; /* Trap bit */
DECL|use_other_union|member|u8_t use_other_union:4;
DECL|val|member|u16_t val;
