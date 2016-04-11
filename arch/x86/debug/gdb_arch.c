DECL|INSTRUCTION_CLI|macro|INSTRUCTION_CLI
DECL|INSTRUCTION_HLT|macro|INSTRUCTION_HLT
DECL|INSTRUCTION_STI|macro|INSTRUCTION_STI
DECL|INT_FLAG|macro|INT_FLAG
DECL|TRACE_FLAG|macro|TRACE_FLAG
DECL|_do_gdb_trace_handler|function|static void _do_gdb_trace_handler(NANO_ESF *esf)
DECL|_do_gdb_trace_handler|function|static void _do_gdb_trace_handler(NANO_ESF *esf)
DECL|gdb_arch_can_step|function|int gdb_arch_can_step(struct gdb_reg_set *regs)
DECL|gdb_arch_init|function|void gdb_arch_init(void)
DECL|gdb_arch_reg_info_get|function|void gdb_arch_reg_info_get(int reg_id, int *size, int *offset)
DECL|gdb_arch_regs_from_esf|function|void gdb_arch_regs_from_esf(struct gdb_reg_set *regs, NANO_ESF *esf)
DECL|gdb_arch_regs_from_isf|function|void gdb_arch_regs_from_isf(struct gdb_reg_set *regs, NANO_ISF *isf)
DECL|gdb_arch_regs_get|function|void gdb_arch_regs_get(struct gdb_reg_set *regs, char *buffer)
DECL|gdb_arch_regs_set|function|void gdb_arch_regs_set(struct gdb_reg_set *regs, char *buffer)
DECL|gdb_arch_regs_to_esf|function|void gdb_arch_regs_to_esf(struct gdb_reg_set *regs, NANO_ESF *esf)
DECL|gdb_arch_regs_to_isf|function|void gdb_arch_regs_to_isf(struct gdb_reg_set *regs, NANO_ISF *isf)
DECL|gdb_bp_handler|function|void gdb_bp_handler(NANO_ESF *esf)
DECL|gdb_dbg_regs_clear|function|void gdb_dbg_regs_clear(void)
DECL|gdb_div_by_zero_handler|function|void gdb_div_by_zero_handler(NANO_ESF *esf)
DECL|gdb_hw_bp_clear|function|int gdb_hw_bp_clear(struct gdb_debug_regs *regs, long addr, enum gdb_bp_type type, int len, enum gdb_error_code *err)
DECL|gdb_hw_bp_find|function|static int gdb_hw_bp_find(struct gdb_debug_regs *regs, enum gdb_bp_type *bp_type, long *address)
DECL|gdb_hw_bp_set|function|int gdb_hw_bp_set(struct gdb_debug_regs *regs, long addr, enum gdb_bp_type type, int len, enum gdb_error_code *err)
DECL|gdb_hw_bp_type_get|function|static char gdb_hw_bp_type_get(enum gdb_bp_type type, int len,enum gdb_error_code *err)
DECL|gdb_pfault_handler|function|void gdb_pfault_handler(NANO_ESF *esf)
DECL|gdb_trace_handler|function|void gdb_trace_handler(NANO_ESF *esf)
DECL|gdb_trace_mode_clear|function|void gdb_trace_mode_clear(struct gdb_reg_set *regs, int arg)
DECL|gdb_trace_mode_set|function|int gdb_trace_mode_set(struct gdb_reg_set *regs)
