DECL|EXPR_AND|macro|EXPR_AND
DECL|EXPR_H|macro|EXPR_H
DECL|EXPR_NOT|macro|EXPR_NOT
DECL|EXPR_OR|macro|EXPR_OR
DECL|E_AND|enumerator|E_NONE, E_OR, E_AND, E_NOT, E_EQUAL, E_UNEQUAL, E_LIST, E_SYMBOL, E_RANGE
DECL|E_EQUAL|enumerator|E_NONE, E_OR, E_AND, E_NOT, E_EQUAL, E_UNEQUAL, E_LIST, E_SYMBOL, E_RANGE
DECL|E_LIST|enumerator|E_NONE, E_OR, E_AND, E_NOT, E_EQUAL, E_UNEQUAL, E_LIST, E_SYMBOL, E_RANGE
DECL|E_NONE|enumerator|E_NONE, E_OR, E_AND, E_NOT, E_EQUAL, E_UNEQUAL, E_LIST, E_SYMBOL, E_RANGE
DECL|E_NOT|enumerator|E_NONE, E_OR, E_AND, E_NOT, E_EQUAL, E_UNEQUAL, E_LIST, E_SYMBOL, E_RANGE
DECL|E_OR|enumerator|E_NONE, E_OR, E_AND, E_NOT, E_EQUAL, E_UNEQUAL, E_LIST, E_SYMBOL, E_RANGE
DECL|E_RANGE|enumerator|E_NONE, E_OR, E_AND, E_NOT, E_EQUAL, E_UNEQUAL, E_LIST, E_SYMBOL, E_RANGE
DECL|E_SYMBOL|enumerator|E_NONE, E_OR, E_AND, E_NOT, E_EQUAL, E_UNEQUAL, E_LIST, E_SYMBOL, E_RANGE
DECL|E_UNEQUAL|enumerator|E_NONE, E_OR, E_AND, E_NOT, E_EQUAL, E_UNEQUAL, E_LIST, E_SYMBOL, E_RANGE
DECL|JUMP_NB|macro|JUMP_NB
DECL|MENU_CHANGED|macro|MENU_CHANGED
DECL|MENU_ROOT|macro|MENU_ROOT
DECL|P_CHOICE|enumerator|P_CHOICE, /* choice value */
DECL|P_COMMENT|enumerator|P_COMMENT, /* text associated with a comment */
DECL|P_DEFAULT|enumerator|P_DEFAULT, /* default y */
DECL|P_ENV|enumerator|P_ENV, /* value from environment variable */
DECL|P_MENU|enumerator|P_MENU, /* prompt associated with a menuconfig option */
DECL|P_PROMPT|enumerator|P_PROMPT, /* prompt "foo prompt" or "BAZ Value" */
DECL|P_RANGE|enumerator|P_RANGE, /* range 7..100 (for a symbol) */
DECL|P_SELECT|enumerator|P_SELECT, /* select BAR */
DECL|P_SYMBOL|enumerator|P_SYMBOL, /* where a symbol is defined */
DECL|P_UNKNOWN|enumerator|P_UNKNOWN,
DECL|SYMBOL_ALLNOCONFIG_Y|macro|SYMBOL_ALLNOCONFIG_Y
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
DECL|SYMBOL_HASHSIZE|macro|SYMBOL_HASHSIZE
DECL|SYMBOL_MAXLENGTH|macro|SYMBOL_MAXLENGTH
DECL|SYMBOL_NEED_SET_CHOICE_VALUES|macro|SYMBOL_NEED_SET_CHOICE_VALUES
DECL|SYMBOL_OPTIONAL|macro|SYMBOL_OPTIONAL
DECL|SYMBOL_VALID|macro|SYMBOL_VALID
DECL|SYMBOL_WARNED|macro|SYMBOL_WARNED
DECL|SYMBOL_WRITE|macro|SYMBOL_WRITE
DECL|S_BOOLEAN|enumerator|S_UNKNOWN, S_BOOLEAN, S_TRISTATE, S_INT, S_HEX, S_STRING, S_OTHER
DECL|S_DEF_AUTO|enumerator|S_DEF_AUTO, /* values read from auto.conf */
DECL|S_DEF_COUNT|enumerator|S_DEF_COUNT
DECL|S_DEF_DEF3|enumerator|S_DEF_DEF3, /* Reserved for UI usage */
DECL|S_DEF_DEF4|enumerator|S_DEF_DEF4, /* Reserved for UI usage */
DECL|S_DEF_USER|enumerator|S_DEF_USER, /* main user value */
DECL|S_HEX|enumerator|S_UNKNOWN, S_BOOLEAN, S_TRISTATE, S_INT, S_HEX, S_STRING, S_OTHER
DECL|S_INT|enumerator|S_UNKNOWN, S_BOOLEAN, S_TRISTATE, S_INT, S_HEX, S_STRING, S_OTHER
DECL|S_OTHER|enumerator|S_UNKNOWN, S_BOOLEAN, S_TRISTATE, S_INT, S_HEX, S_STRING, S_OTHER
DECL|S_STRING|enumerator|S_UNKNOWN, S_BOOLEAN, S_TRISTATE, S_INT, S_HEX, S_STRING, S_OTHER
DECL|S_TRISTATE|enumerator|S_UNKNOWN, S_BOOLEAN, S_TRISTATE, S_INT, S_HEX, S_STRING, S_OTHER
DECL|S_UNKNOWN|enumerator|S_UNKNOWN, S_BOOLEAN, S_TRISTATE, S_INT, S_HEX, S_STRING, S_OTHER
DECL|curr|member|struct symbol_value curr;
DECL|data|member|void *data;
DECL|def|member|struct symbol_value def[S_DEF_COUNT];
DECL|dep|member|struct expr *dep;
DECL|dir_dep|member|struct expr_value dir_dep;
DECL|entries|member|struct list_head entries;
DECL|expr_data|union|union expr_data {
DECL|expr_is_no|function|static inline int expr_is_no(struct expr *e)
DECL|expr_is_yes|function|static inline int expr_is_yes(struct expr *e)
DECL|expr_list_for_each_sym|macro|expr_list_for_each_sym
DECL|expr_type|enum|enum expr_type {
DECL|expr_value|struct|struct expr_value {
DECL|expr|member|struct expr *expr;
DECL|expr|member|struct expr *expr;
DECL|expr|member|struct expr *expr; /* the optional conditional part of the property */
DECL|expr|struct|struct expr {
DECL|file|member|struct file *file;
DECL|file|member|struct file *file; /* what file was this property defined */
DECL|file|struct|struct file {
DECL|flags|member|int flags;
DECL|flags|member|unsigned int flags;
DECL|for_all_choices|macro|for_all_choices
DECL|for_all_defaults|macro|for_all_defaults
DECL|for_all_prompts|macro|for_all_prompts
DECL|for_all_properties|macro|for_all_properties
DECL|for_all_symbols|macro|for_all_symbols
DECL|help|member|char *help;
DECL|index|member|int index;
DECL|jump_key|struct|struct jump_key {
DECL|left|member|union expr_data left, right;
DECL|lineno|member|int lineno;
DECL|lineno|member|int lineno;
DECL|lineno|member|int lineno; /* what lineno was this property defined */
DECL|list|member|struct menu *list;
DECL|menu|member|struct menu *menu; /* the menu the property are associated with
DECL|menu|struct|struct menu {
DECL|mod|enumerator|no, mod, yes
DECL|name|member|char *name;
DECL|name|member|const char *name;
DECL|next|member|struct file *next;
DECL|next|member|struct menu *next;
DECL|next|member|struct property *next; /* next property - null if last */
DECL|next|member|struct symbol *next;
DECL|no|enumerator|no, mod, yes
DECL|offset|member|size_t offset;
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
DECL|sym|member|struct symbol *sym; /* the symbol for which the property is associated */
DECL|target|member|struct menu *target;
DECL|text|member|const char *text; /* the prompt value - P_PROMPT, P_MENU, P_COMMENT */
DECL|tristate|enum|typedef enum tristate {
DECL|tristate|typedef|} tristate;
DECL|tri|member|tristate tri;
DECL|tri|member|tristate tri;
DECL|type|member|enum expr_type type;
DECL|type|member|enum prop_type type; /* type of property */
DECL|type|member|enum symbol_type type;
DECL|val|member|void *val;
DECL|visibility|member|struct expr *visibility;
DECL|visible|member|struct expr_value visible;
DECL|visible|member|tristate visible;
DECL|yes|enumerator|no, mod, yes
