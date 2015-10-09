DECL|BFILE|enumerator|BFILE, /* allocated interrupt vector bitmap file */
DECL|EXECFILE|enumerator|EXECFILE = NUSERFILES, /* for name of executable */
DECL|IFILE|enumerator|IFILE = 0, /* input file */
DECL|LONG_USAGE|enumerator|enum { SHORT_USAGE, LONG_USAGE };
DECL|MAX_IRQS|macro|MAX_IRQS
DECL|MAX_NUM_VECTORS|macro|MAX_NUM_VECTORS
DECL|MAX_PRIORITIES|macro|MAX_PRIORITIES
DECL|MAX_VECTORS_PER_PRIORITY|macro|MAX_VECTORS_PER_PRIORITY
DECL|MFILE|enumerator|MFILE, /* irq to interrupt vector mapping file */
DECL|NFILES|enumerator|NFILES /* total number of file names */
DECL|NUSERFILES|enumerator|NUSERFILES, /* number of user-provided file names */
DECL|OFILE|enumerator|OFILE, /* output file */
DECL|O_BINARY|macro|O_BINARY
DECL|PRINTF|macro|PRINTF
DECL|PRINTF|macro|PRINTF
DECL|SHORT_USAGE|enumerator|enum { SHORT_USAGE, LONG_USAGE };
DECL|UNSPECIFIED_INT_VECTOR|macro|UNSPECIFIED_INT_VECTOR
DECL|UNSPECIFIED_IRQ|macro|UNSPECIFIED_IRQ
DECL|UNSPECIFIED_PRIORITY|macro|UNSPECIFIED_PRIORITY
DECL|__packed|macro|__packed
DECL|clean_exit|function|static void clean_exit(int exit_code)
DECL|close_files|function|static void close_files(void)
DECL|dpl|member|unsigned int dpl;
DECL|fds|variable|fds
DECL|filenames|variable|filenames
DECL|find_first_set_lsb|function|static int find_first_set_lsb(unsigned int value)
DECL|generate_idt|function|static void generate_idt(void)
DECL|generate_interrupt_vector_bitmap|function|static void generate_interrupt_vector_bitmap(void)
DECL|generated_entry|variable|generated_entry
DECL|genidt_entry_s|struct|struct genidt_entry_s {
DECL|genidt_header_s|struct|struct genidt_header_s {
DECL|genidt_header|variable|genidt_header
DECL|get_exec_name|function|static void get_exec_name(char *pathname)
DECL|get_options|function|static void get_options(int argc, char *argv[])
DECL|irq|member|unsigned int irq;
DECL|isr|member|void *isr;
DECL|main|function|int main(int argc, char *argv[])
DECL|num_entries|member|unsigned int num_entries;
DECL|num_vectors|variable|num_vectors
DECL|open_files|function|static void open_files(void)
DECL|priority|member|unsigned int priority;
DECL|read_input_file|function|static void read_input_file(void)
DECL|show_entry|function|static void show_entry(struct genidt_entry_s *entry)
DECL|spurious_addr|member|void *spurious_addr;
DECL|spurious_no_error_addr|member|void *spurious_no_error_addr;
DECL|supplied_entry|variable|supplied_entry
DECL|usage|function|static void usage(int len)
DECL|validate_dpl|function|static void validate_dpl(void)
DECL|validate_input_file|function|static void validate_input_file(void)
DECL|validate_irq|function|static void validate_irq(void)
DECL|validate_priority|function|static void validate_priority(void)
DECL|validate_vector_id|function|static void validate_vector_id(void)
DECL|vector_id|member|unsigned int vector_id;
DECL|version|variable|version
