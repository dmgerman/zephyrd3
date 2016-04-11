DECL|ADD_DEL_BP_SIG|macro|ADD_DEL_BP_SIG
DECL|GDB_INVALID_REG_SET|macro|GDB_INVALID_REG_SET
DECL|GDB_NOTIF_DATA_SIZE|macro|GDB_NOTIF_DATA_SIZE
DECL|MAX_SW_BP|macro|MAX_SW_BP
DECL|NOTIF_PACKET_OVERHEAD|macro|NOTIF_PACKET_OVERHEAD
DECL|REMOVE_ALL_INSTALLED_BREAKPOINTS|macro|REMOVE_ALL_INSTALLED_BREAKPOINTS
DECL|REMOVE_ALL_INSTALLED_BREAKPOINTS|macro|REMOVE_ALL_INSTALLED_BREAKPOINTS
DECL|RESUME_SYSTEM|macro|RESUME_SYSTEM
DECL|RESUME_SYSTEM|macro|RESUME_SYSTEM
DECL|STR_REBOOT|macro|STR_REBOOT
DECL|STR_TYPE|macro|STR_TYPE
DECL|STR_TYPE|macro|STR_TYPE
DECL|STUB_ERROR|macro|STUB_ERROR
DECL|STUB_OK|macro|STUB_OK
DECL|UART_CONSOLE_OUT_DEBUG_HOOK_SIG|function|static UART_CONSOLE_OUT_DEBUG_HOOK_SIG(gdb_console_out)
DECL|UNINSTALL_BREAKPOINTS|macro|UNINSTALL_BREAKPOINTS
DECL|UNINSTALL_BREAKPOINTS|macro|UNINSTALL_BREAKPOINTS
DECL|WRITE_MEM_SIG|function|static WRITE_MEM_SIG(write_memory)
DECL|WRITE_MEM_SIG|function|static WRITE_MEM_SIG(write_memory_from_binary_format)
DECL|WRITE_MEM_SIG|macro|WRITE_MEM_SIG
DECL|_debug_fatal_hook|function|void _debug_fatal_hook(const NANO_ESF *esf)
DECL|add_bp|function|static int add_bp(enum gdb_bp_type type, long addr, int len,enum gdb_error_code *err)
DECL|add_del_bp_t|typedef|typedef ADD_DEL_BP_SIG(add_del_bp_t);
DECL|add_hw_bp|function|static int add_hw_bp(long addr, enum gdb_bp_type type, int len,enum gdb_error_code *err)
DECL|addr|member|gdb_instr_t *addr; /* breakpoint address */
DECL|avail_queue|variable|avail_queue
DECL|bp_array|struct|struct bp_array {
DECL|bp_array|variable|bp_array
DECL|clear_debug_regs_for_hw_breakpoints|function|static inline void clear_debug_regs_for_hw_breakpoints(void)
DECL|clear_debug_regs_for_hw_breakpoints|macro|clear_debug_regs_for_hw_breakpoints
DECL|client_is_connected|variable|client_is_connected
DECL|cmds_queue|variable|cmds_queue
DECL|compress|function|static unsigned char *compress(unsigned char *buf)
DECL|concat_reboot_feature_if_supported|function|static size_t concat_reboot_feature_if_supported(size_t size)
DECL|concat_reboot_feature_if_supported|macro|concat_reboot_feature_if_supported
DECL|console_irq_input_hook|function|static int console_irq_input_hook(struct device *dev, uint8_t ch)
DECL|control_loop|function|static void control_loop(void)
DECL|cpu_pending_signal|variable|cpu_pending_signal
DECL|cpu_stop_bp_type|variable|cpu_stop_bp_type
DECL|cpu_stop_hw_bp_addr|variable|cpu_stop_hw_bp_addr
DECL|cpu_stop_signal|variable|cpu_stop_signal
DECL|dbg_regs|variable|dbg_regs
DECL|delete_bp|function|static int delete_bp(enum gdb_bp_type type, long addr, int len,enum gdb_error_code *err)
DECL|detach|function|static void detach(void)
DECL|disable_trace_mode|function|static inline void disable_trace_mode(void)
DECL|do_mem_probe|function|static inline int do_mem_probe(char *addr, int mode, int width, int preserve, long *dummy)
DECL|do_post_event_hw_bp|function|static void do_post_event_hw_bp(unsigned char **buf, size_t *buf_size)
DECL|do_post_event|function|static void do_post_event(void)
DECL|enabled|member|char enabled; /* breakpoint is enabled? */
DECL|enter_trace_mode|function|static inline void enter_trace_mode(void)
DECL|event_is_pending|variable|event_is_pending
DECL|fill_output_buffer|macro|fill_output_buffer
DECL|gdb_buffer|variable|gdb_buffer
DECL|gdb_debug_status|variable|gdb_debug_status
DECL|gdb_handler|function|void gdb_handler(enum gdb_exc_mode mode, void *esf, int signal)
DECL|gdb_regs|variable|gdb_regs
DECL|gdb_step_emu_instr|variable|gdb_step_emu_instr
DECL|gdb_step_emu_next_pc|variable|gdb_step_emu_next_pc
DECL|get_debug_char_raw|function|static int get_debug_char_raw(void)
DECL|get_debug_char|function|static unsigned char get_debug_char(void)
DECL|get_hex_char_value|function|static int get_hex_char_value(unsigned char ch)
DECL|get_packet|function|static unsigned char *get_packet(unsigned char *buffer, size_t size)
DECL|get_xml_target_description|function|static char *get_xml_target_description(void)
DECL|handle_breakpoint_install|function|unsigned char *handle_breakpoint_install(unsigned char *packet, add_del_bp_t *bp_op)
DECL|handle_continue_execution|function|unsigned char *handle_continue_execution(unsigned char *packet)
DECL|handle_general_query|function|static unsigned char *handle_general_query(unsigned char *packet)
DECL|handle_get_registers|function|static ALWAYS_INLINE void handle_get_registers(void)
DECL|handle_new_connection|function|static void handle_new_connection(void)
DECL|handle_notification|function|static void handle_notification(void)
DECL|handle_pass_signal_to_context|function|unsigned char *handle_pass_signal_to_context(unsigned char *packet)
DECL|handle_read_memory|function|unsigned char *handle_read_memory(unsigned char *packet)
DECL|handle_read_single_register|function|unsigned char *handle_read_single_register(unsigned char *packet)
DECL|handle_single_stepping|function|static inline int handle_single_stepping(void)
DECL|handle_step|function|static ALWAYS_INLINE unsigned char *handle_step(unsigned char *packet)
DECL|handle_system_stop|function|static void handle_system_stop(NANO_ISF *regs, int signal)
DECL|handle_thread_query|function|static unsigned char *handle_thread_query(unsigned char *packet)
DECL|handle_vcont_action|function|unsigned char *handle_vcont_action(unsigned char *packet, int *do_not_send_ack)
DECL|handle_write_memory|function|static ALWAYS_INLINE unsigned char *handle_write_memory(unsigned char *packet,write_mem_t *write_mem)
DECL|handle_write_registers|function|unsigned char *handle_write_registers(unsigned char *packet)
DECL|handle_write_single_register|function|unsigned char *handle_write_single_register(unsigned char *packet)
DECL|handle_xml_query|function|static unsigned char *handle_xml_query(unsigned char *packet)
DECL|has_hit_a_hw_bp|function|static int has_hit_a_hw_bp(void)
DECL|hex_chars|variable|hex_chars
DECL|hex_str_to_byte|function|static int hex_str_to_byte(unsigned char **str)
DECL|hex_str_to_int|function|static int hex_str_to_int(unsigned char **ptr, int *value)
DECL|hex_str_to_longlong|function|static int hex_str_to_longlong(unsigned char **hex_str, long long *value)
DECL|hw_bp_cnt|variable|hw_bp_cnt
DECL|in_no_ack_mode|variable|in_no_ack_mode
DECL|init_gdb_server|function|static int init_gdb_server(struct device *unused)
DECL|init_interrupt_handling|function|static void init_interrupt_handling(void)
DECL|init_interrupt_handling|macro|init_interrupt_handling
DECL|init_mem_safe_access|function|static void init_mem_safe_access(void)
DECL|init_mem_safe_access|macro|init_mem_safe_access
DECL|install_breakpoints|function|static void install_breakpoints(void)
DECL|instr|member|gdb_instr_t instr; /* saved instruction */
DECL|is_size_encoder|function|static inline int is_size_encoder(int num)
DECL|is_valid_xml_query|function|static ALWAYS_INLINE int is_valid_xml_query(unsigned char **packet,int *off, int *len)
DECL|mem2hex|function|static unsigned char *mem2hex(unsigned char *mem, unsigned char *buf,int count, int do_compress)
DECL|mem_probe|function|static int mem_probe(char *addr, int mode, int size,int width, int preserve)
DECL|must_flush_notification_buffer|function|static inline int must_flush_notification_buffer(unsigned char ch)
DECL|notif_data_idx|variable|notif_data_idx
DECL|notif_data|variable|notif_data
DECL|notif_pkt_pending|variable|notif_pkt_pending
DECL|post_event|function|static void post_event(void)
DECL|protocol_parse|function|static int protocol_parse(unsigned char *packet)
DECL|put_debug_char|function|static void put_debug_char(unsigned char ch)
DECL|put_hex_byte|function|static unsigned char *put_hex_byte(unsigned char *buf, int value)
DECL|put_packet|function|static int put_packet(unsigned char *buffer)
DECL|reboot|function|static void reboot(void)
DECL|remove_all_installed_breakpoints|function|static void remove_all_installed_breakpoints(void)
DECL|remove_hw_bp|function|static int remove_hw_bp(long addr, enum gdb_bp_type type, int len,enum gdb_error_code *err)
DECL|request_notification_packet_flush|function|static void request_notification_packet_flush(void)
DECL|resume_system|function|static void resume_system(void)
DECL|set_debug_regs_for_hw_breakpoints|function|static inline void set_debug_regs_for_hw_breakpoints(void)
DECL|set_debug_regs_for_hw_breakpoints|macro|set_debug_regs_for_hw_breakpoints
DECL|set_instruction|function|static int set_instruction(void *addr, gdb_instr_t *instr, size_t size)
DECL|setup_singlestep_if_non_steppable_instruction|function|static inline void setup_singlestep_if_non_steppable_instruction(void)
DECL|supported_features_cmd|variable|supported_features_cmd
DECL|system_stop_here|function|void system_stop_here(void *regs)
DECL|tmp_reg_buffer|variable|tmp_reg_buffer
DECL|trace_lock_key|variable|trace_lock_key
DECL|uart_console_dev|variable|uart_console_dev
DECL|uninstall_breakpoints|function|static void uninstall_breakpoints(void)
DECL|valid_registers|variable|valid_registers
DECL|valid|member|char valid; /* breakpoint is valid? */
DECL|write_mem_t|typedef|typedef WRITE_MEM_SIG(write_mem_t);
DECL|write_regs_to_buffer|function|static void write_regs_to_buffer(unsigned char **buf, size_t *buf_size)
DECL|write_to_console|function|static uint32_t write_to_console(char *buf, uint32_t len)
DECL|write_xml_string|function|static void write_xml_string(char *buf, const char *xml_str, int off, int len)
DECL|xml_target_footer|variable|xml_target_footer
DECL|xml_target_header|variable|xml_target_header
