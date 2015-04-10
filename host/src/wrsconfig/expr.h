DECL|EXPR_H|macro|EXPR_H
DECL|E_AND|enumerator|E_NONE, E_OR, E_AND, E_NOT, E_EQUAL, E_UNEQUAL, E_CHOICE, E_SYMBOL, E_RANGE
DECL|E_AND|macro|E_AND
DECL|E_CHOICE|enumerator|E_NONE, E_OR, E_AND, E_NOT, E_EQUAL, E_UNEQUAL, E_CHOICE, E_SYMBOL, E_RANGE
DECL|E_EQUAL|enumerator|E_NONE, E_OR, E_AND, E_NOT, E_EQUAL, E_UNEQUAL, E_CHOICE, E_SYMBOL, E_RANGE
DECL|E_NONE|enumerator|E_NONE, E_OR, E_AND, E_NOT, E_EQUAL, E_UNEQUAL, E_CHOICE, E_SYMBOL, E_RANGE
DECL|E_NOT|enumerator|E_NONE, E_OR, E_AND, E_NOT, E_EQUAL, E_UNEQUAL, E_CHOICE, E_SYMBOL, E_RANGE
DECL|E_NOT|macro|E_NOT
DECL|E_OR|enumerator|E_NONE, E_OR, E_AND, E_NOT, E_EQUAL, E_UNEQUAL, E_CHOICE, E_SYMBOL, E_RANGE
DECL|E_OR|macro|E_OR
DECL|E_RANGE|enumerator|E_NONE, E_OR, E_AND, E_NOT, E_EQUAL, E_UNEQUAL, E_CHOICE, E_SYMBOL, E_RANGE
DECL|E_SYMBOL|enumerator|E_NONE, E_OR, E_AND, E_NOT, E_EQUAL, E_UNEQUAL, E_CHOICE, E_SYMBOL, E_RANGE
DECL|E_UNEQUAL|enumerator|E_NONE, E_OR, E_AND, E_NOT, E_EQUAL, E_UNEQUAL, E_CHOICE, E_SYMBOL, E_RANGE
DECL|FILE_BUSY|macro|FILE_BUSY
DECL|FILE_PRINTED|macro|FILE_PRINTED
DECL|FILE_SCANNED|macro|FILE_SCANNED
DECL|MENU_CHANGED|macro|MENU_CHANGED
DECL|MENU_ROOT|macro|MENU_ROOT
DECL|P_CHOICE|enumerator|P_UNKNOWN, P_PROMPT, P_COMMENT, P_MENU, P_DEFAULT, P_CHOICE, P_SELECT, P_RANGE
DECL|P_COMMENT|enumerator|P_UNKNOWN, P_PROMPT, P_COMMENT, P_MENU, P_DEFAULT, P_CHOICE, P_SELECT, P_RANGE
DECL|P_DEFAULT|enumerator|P_UNKNOWN, P_PROMPT, P_COMMENT, P_MENU, P_DEFAULT, P_CHOICE, P_SELECT, P_RANGE
DECL|P_MENU|enumerator|P_UNKNOWN, P_PROMPT, P_COMMENT, P_MENU, P_DEFAULT, P_CHOICE, P_SELECT, P_RANGE
DECL|P_PROMPT|enumerator|P_UNKNOWN, P_PROMPT, P_COMMENT, P_MENU, P_DEFAULT, P_CHOICE, P_SELECT, P_RANGE
DECL|P_RANGE|enumerator|P_UNKNOWN, P_PROMPT, P_COMMENT, P_MENU, P_DEFAULT, P_CHOICE, P_SELECT, P_RANGE
DECL|P_SELECT|enumerator|P_UNKNOWN, P_PROMPT, P_COMMENT, P_MENU, P_DEFAULT, P_CHOICE, P_SELECT, P_RANGE
DECL|P_UNKNOWN|enumerator|P_UNKNOWN, P_PROMPT, P_COMMENT, P_MENU, P_DEFAULT, P_CHOICE, P_SELECT, P_RANGE
DECL|SYMBOL_AUTO|macro|SYMBOL_AUTO
DECL|SYMBOL_CHANGED|macro|SYMBOL_CHANGED
DECL|SYMBOL_CHECKED|macro|SYMBOL_CHECKED
DECL|SYMBOL_CHECK|macro|SYMBOL_CHECK
DECL|SYMBOL_CHOICEVAL|macro|SYMBOL_CHOICEVAL
DECL|SYMBOL_CHOICE|macro|SYMBOL_CHOICE
DECL|SYMBOL_CONST|macro|SYMBOL_CONST
DECL|SYMBOL_DEF3|macro|SYMBOL_DEF3
DECL|SYMBOL_DEF4|macro|SYMBOL_DEF4
DECL|SYMBOL_DEF_AUTO|macro|SYMBOL_DEF_AUTO
DECL|SYMBOL_DEF_USER|macro|SYMBOL_DEF_USER
DECL|SYMBOL_DEF|macro|SYMBOL_DEF
DECL|SYMBOL_HASHMASK|macro|SYMBOL_HASHMASK
DECL|SYMBOL_HASHSIZE|macro|SYMBOL_HASHSIZE
DECL|SYMBOL_MAXLENGTH|macro|SYMBOL_MAXLENGTH
DECL|SYMBOL_OPTIONAL|macro|SYMBOL_OPTIONAL
DECL|SYMBOL_PRINTED|macro|SYMBOL_PRINTED
DECL|SYMBOL_VALID|macro|SYMBOL_VALID
DECL|SYMBOL_WARNED|macro|SYMBOL_WARNED
DECL|SYMBOL_WRITE|macro|SYMBOL_WRITE
DECL|S_BOOLEAN|enumerator|S_UNKNOWN, S_BOOLEAN, S_TRISTATE, S_INT, S_HEX, S_STRING, S_OTHER
DECL|S_DEF_AUTO|enumerator|S_DEF_AUTO,
DECL|S_DEF_USER|enumerator|S_DEF_USER, /* main user value */
DECL|S_HEX|enumerator|S_UNKNOWN, S_BOOLEAN, S_TRISTATE, S_INT, S_HEX, S_STRING, S_OTHER
DECL|S_INT|enumerator|S_UNKNOWN, S_BOOLEAN, S_TRISTATE, S_INT, S_HEX, S_STRING, S_OTHER
DECL|S_OTHER|enumerator|S_UNKNOWN, S_BOOLEAN, S_TRISTATE, S_INT, S_HEX, S_STRING, S_OTHER
DECL|S_STRING|enumerator|S_UNKNOWN, S_BOOLEAN, S_TRISTATE, S_INT, S_HEX, S_STRING, S_OTHER
DECL|S_TRISTATE|enumerator|S_UNKNOWN, S_BOOLEAN, S_TRISTATE, S_INT, S_HEX, S_STRING, S_OTHER
DECL|S_UNKNOWN|enumerator|S_UNKNOWN, S_BOOLEAN, S_TRISTATE, S_INT, S_HEX, S_STRING, S_OTHER
DECL|curr|member|struct symbol_value curr;
DECL|data|member|void *data;
DECL|def|member|struct symbol_value def[4];
DECL|dep|member|struct expr *dep;
DECL|expr_data|union|union expr_data {
DECL|expr_is_no|function|static inline int expr_is_no(struct expr *e)
DECL|expr_is_yes|function|static inline int expr_is_yes(struct expr *e)
DECL|expr_type|enum|enum expr_type {
DECL|expr_value|struct|struct expr_value {
DECL|expr|member|struct expr *expr;
DECL|expr|member|struct expr *expr;
DECL|expr|member|struct expr *expr;
DECL|expr|struct|struct expr {
DECL|file|member|struct file *file;
DECL|file|member|struct file *file;
DECL|file|struct|struct file {
DECL|flags|member|int flags;
DECL|flags|member|int flags;
DECL|flags|member|unsigned int flags;
DECL|for_all_choices|macro|for_all_choices
DECL|for_all_defaults|macro|for_all_defaults
DECL|for_all_prompts|macro|for_all_prompts
DECL|for_all_properties|macro|for_all_properties
DECL|for_all_symbols|macro|for_all_symbols
DECL|help|member|char *help;
DECL|left|member|union expr_data left, right;
DECL|lineno|member|int lineno;
DECL|lineno|member|int lineno;
DECL|lineno|member|int lineno;
DECL|list|member|struct menu *list;
DECL|menu|member|struct menu *menu;
DECL|menu|struct|struct menu {
DECL|mod|enumerator|no, mod, yes
DECL|name|member|char *name;
DECL|name|member|char *name;
DECL|next|member|struct file *next;
DECL|next|member|struct menu *next;
DECL|next|member|struct property *next;
DECL|next|member|struct symbol *next;
DECL|no|enumerator|no, mod, yes
DECL|parent|member|struct file *parent;
DECL|parent|member|struct menu *parent;
DECL|prompt|member|struct property *prompt;
DECL|prop_type|enum|enum prop_type {
DECL|property|struct|struct property {
DECL|prop|member|struct property *prop;
DECL|rev_dep|member|struct expr_value rev_dep;
DECL|right|member|union expr_data left, right;
DECL|symbol_type|enum|enum symbol_type {
DECL|symbol_value|struct|struct symbol_value {
DECL|symbol|struct|struct symbol {
DECL|sym|member|struct symbol *sym;
DECL|sym|member|struct symbol *sym;
DECL|sym|member|struct symbol *sym;
DECL|text|member|const char *text;
DECL|tristate|enum|typedef enum tristate {
DECL|tristate|typedef|} tristate;
DECL|tri|member|tristate tri;
DECL|tri|member|tristate tri;
DECL|type|member|enum expr_type type;
DECL|type|member|enum prop_type type;
DECL|type|member|enum symbol_type type;
DECL|val|member|void *val;
DECL|visible|member|struct expr_value visible;
DECL|visible|member|tristate visible;
DECL|yes|enumerator|no, mod, yes
