DECL|ARRAY_SIZE|macro|ARRAY_SIZE
DECL|HASH_BUCKETS|macro|HASH_BUCKETS
DECL|__add_symbol|function|static struct symbol *__add_symbol(const char *name, enum symbol_type type, struct string_list *defn, int is_extern, int is_reference)
DECL|add_reference_symbol|function|static struct symbol *add_reference_symbol(const char *name, enum symbol_type type, struct string_list *defn, int is_extern)
DECL|add_symbol|function|struct symbol *add_symbol(const char *name, enum symbol_type type, struct string_list *defn, int is_extern)
DECL|concat_list|function|static struct string_list *concat_list(struct string_list *start, ...)
DECL|copy_list_range|function|struct string_list *copy_list_range(struct string_list *start, struct string_list *end)
DECL|copy_node|function|struct string_list *copy_node(struct string_list *node)
DECL|crc32|function|static unsigned long crc32(const char *s)
DECL|crctab32|variable|crctab32
DECL|cur_filename|variable|cur_filename
DECL|cur_line|variable|cur_line
DECL|debugfile|variable|debugfile
DECL|equal_list|function|static int equal_list(struct string_list *a, struct string_list *b)
DECL|error_with_pos|function|void error_with_pos(const char *fmt, ...)
DECL|errors|variable|errors
DECL|expand_and_crc_sym|function|static unsigned long expand_and_crc_sym(struct symbol *sym, unsigned long crc)
DECL|expansion_trail|variable|expansion_trail
DECL|export_symbol|function|void export_symbol(const char *name)
DECL|find_symbol|function|struct symbol *find_symbol(const char *name, enum symbol_type ns, int exact)
DECL|flag_debug|variable|flag_debug
DECL|flag_dump_defs|variable|flag_dump_defs
DECL|flag_dump_types|variable|flag_dump_types
DECL|flag_preserve|variable|flag_preserve
DECL|flag_reference|variable|flag_reference
DECL|flag_warnings|variable|flag_warnings
DECL|free_list|function|void free_list(struct string_list *s, struct string_list *e)
DECL|free_node|function|void free_node(struct string_list *node)
DECL|genksyms_usage|function|static void genksyms_usage(void)
DECL|in_source_file|variable|in_source_file
DECL|is_unknown_symbol|function|static int is_unknown_symbol(struct symbol *sym)
DECL|main|function|int main(int argc, char **argv)
DECL|map_to_ns|function|static enum symbol_type map_to_ns(enum symbol_type t)
DECL|mk_node|function|static struct string_list *mk_node(const char *string)
DECL|mod_prefix|variable|mod_prefix
DECL|name|member|const char *name;
DECL|nsyms|variable|nsyms
DECL|n|member|int n;
DECL|partial_crc32_one|function|static unsigned long partial_crc32_one(unsigned char c, unsigned long crc)
DECL|partial_crc32|function|static unsigned long partial_crc32(const char *s, unsigned long crc)
DECL|print_list|function|static void print_list(FILE * f, struct string_list *list)
DECL|print_location|function|static void print_location(void)
DECL|print_node|function|static void print_node(FILE * f, struct string_list *list)
DECL|print_type_name|function|static void print_type_name(enum symbol_type type, const char *name)
DECL|read_node|function|static struct string_list *read_node(FILE *f)
DECL|read_reference|function|static void read_reference(FILE *f)
DECL|source_file|variable|source_file
DECL|symbol_types|variable|symbol_types
DECL|symtab|variable|symtab
DECL|visited_symbols|variable|visited_symbols
