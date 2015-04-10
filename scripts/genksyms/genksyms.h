DECL|MODUTILS_GENKSYMS_H|macro|MODUTILS_GENKSYMS_H
DECL|STATUS_DEFINED|enumerator|STATUS_UNCHANGED, STATUS_DEFINED, STATUS_MODIFIED
DECL|STATUS_MODIFIED|enumerator|STATUS_UNCHANGED, STATUS_DEFINED, STATUS_MODIFIED
DECL|STATUS_UNCHANGED|enumerator|STATUS_UNCHANGED, STATUS_DEFINED, STATUS_MODIFIED
DECL|SYM_ENUM_CONST|enumerator|SYM_ENUM_CONST
DECL|SYM_ENUM|enumerator|SYM_NORMAL, SYM_TYPEDEF, SYM_ENUM, SYM_STRUCT, SYM_UNION,
DECL|SYM_NORMAL|enumerator|SYM_NORMAL, SYM_TYPEDEF, SYM_ENUM, SYM_STRUCT, SYM_UNION,
DECL|SYM_STRUCT|enumerator|SYM_NORMAL, SYM_TYPEDEF, SYM_ENUM, SYM_STRUCT, SYM_UNION,
DECL|SYM_TYPEDEF|enumerator|SYM_NORMAL, SYM_TYPEDEF, SYM_ENUM, SYM_STRUCT, SYM_UNION,
DECL|SYM_UNION|enumerator|SYM_NORMAL, SYM_TYPEDEF, SYM_ENUM, SYM_STRUCT, SYM_UNION,
DECL|YYSTYPE|macro|YYSTYPE
DECL|defn|member|struct string_list *defn;
DECL|expansion_trail|member|struct symbol *expansion_trail;
DECL|hash_next|member|struct symbol *hash_next;
DECL|in_source_file|member|int in_source_file;
DECL|is_declared|member|int is_declared;
DECL|is_extern|member|int is_extern;
DECL|is_override|member|int is_override;
DECL|name|member|const char *name;
DECL|next|member|struct string_list *next;
DECL|status|member|enum symbol_status status;
DECL|string_list|struct|struct string_list {
DECL|string|member|char *string;
DECL|symbol_status|enum|enum symbol_status {
DECL|symbol_type|enum|enum symbol_type {
DECL|symbol|struct|struct symbol {
DECL|tag|member|enum symbol_type tag;
DECL|type|member|enum symbol_type type;
DECL|visited|member|struct symbol *visited;
DECL|xmalloc|macro|xmalloc
DECL|xstrdup|macro|xstrdup
DECL|yystype|typedef|typedef struct string_list **yystype;
