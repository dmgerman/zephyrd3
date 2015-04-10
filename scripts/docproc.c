DECL|DFL|typedef|typedef void DFL(char *);
DECL|DOCBOOK|macro|DOCBOOK
DECL|FILELINE|typedef|typedef void FILELINE(char * file, char * line);
DECL|FILEONLY|typedef|typedef void FILEONLY(char * file);
DECL|FUNCTION|macro|FUNCTION
DECL|KERNELDOCPATH|macro|KERNELDOCPATH
DECL|KERNELDOC|macro|KERNELDOC
DECL|LIST|macro|LIST
DECL|MAXFILES|macro|MAXFILES
DECL|MAXLINESZ|macro|MAXLINESZ
DECL|NODOCSECTIONS|macro|NODOCSECTIONS
DECL|NOFUNCTION|macro|NOFUNCTION
DECL|SHOWNOTFOUND|macro|SHOWNOTFOUND
DECL|_GNU_SOURCE|macro|_GNU_SOURCE
DECL|add_new_file|function|static struct symfile * add_new_file(char * filename)
DECL|add_new_symbol|function|static void add_new_symbol(struct symfile *sym, char * symname)
DECL|adddep2|function|static void adddep2(char * file, char * line) { line = line; adddep(file); }
DECL|adddep|function|static void adddep(char * file) { printf("\t%s", file); }
DECL|all_list_len|variable|all_list_len
DECL|all_list|variable|all_list
DECL|consume_symbol|function|static void consume_symbol(const char *sym)
DECL|defaultline|variable|defaultline
DECL|docfunctions|function|static void docfunctions(char * filename, char * type)
DECL|docsection|variable|docsection
DECL|docsect|function|static void docsect(char *filename, char *line)
DECL|entity_system|variable|entity_system
DECL|exec_kernel_doc|function|static void exec_kernel_doc(char **svec)
DECL|exitstatus|variable|exitstatus
DECL|externalfunctions|variable|externalfunctions
DECL|extfunc|function|static void extfunc(char * filename) { docfunctions(filename, FUNCTION); }
DECL|filename_exist|function|static struct symfile * filename_exist(char * filename)
DECL|filename|member|char *filename;
DECL|find_all_symbols|function|static void find_all_symbols(char *filename)
DECL|find_export_symbols|function|static void find_export_symbols(char * filename)
DECL|findall|variable|findall
DECL|internalfunctions|variable|internalfunctions
DECL|intfunc|function|static void intfunc(char * filename) { docfunctions(filename, NOFUNCTION); }
DECL|kernsrctree|variable|kernsrctree
DECL|main|function|int main(int argc, char *argv[])
DECL|name|member|char *name;
DECL|noaction2|function|static void noaction2(char * file, char * line) { file = file; line = line; }
DECL|noaction|function|static void noaction(char * line) { line = line; }
DECL|parse_file|function|static void parse_file(FILE *infile)
DECL|printline|function|static void printline(char * line) { printf("%s", line); }
DECL|singfunc|function|static void singfunc(char * filename, char * line)
DECL|singlefunctions|variable|singlefunctions
DECL|srctree|variable|srctree
DECL|symbolcnt|member|int symbolcnt;
DECL|symbollist|member|struct symbols *symbollist;
DECL|symbolsonly|variable|symbolsonly
DECL|symbols|struct|struct symbols
DECL|symfilecnt|variable|symfilecnt
DECL|symfilelist|variable|symfilelist
DECL|symfile|struct|struct symfile
DECL|usage|function|static void usage (void)
