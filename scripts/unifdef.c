DECL|CHAR_LITERAL|enumerator|CHAR_LITERAL, /* inside '' */
DECL|CXX_COMMENT|enumerator|CXX_COMMENT, /* between // and end of line */
DECL|C_COMMENT|enumerator|C_COMMENT, /* in a comment like this one */
DECL|Comment_state|typedef|} Comment_state;
DECL|Delif|function|static void Delif (void) { drop(); ignoreoff(); state(IS_FALSE_MIDDLE); }
DECL|Delse|function|static void Delse (void) { drop(); state(IS_FALSE_ELSE); }
DECL|Dendif|function|static void Dendif(void) { drop(); unnest(); }
DECL|Dfalse|function|static void Dfalse(void) { drop(); ignoreoff(); state(IS_FALSE_TRAILER); }
DECL|EDITSLOP|macro|EDITSLOP
DECL|Eelif|function|static void Eelif (void) { error("Inappropriate #elif"); }
DECL|Eelse|function|static void Eelse (void) { error("Inappropriate #else"); }
DECL|Eendif|function|static void Eendif(void) { error("Inappropriate #endif"); }
DECL|Eeof|function|static void Eeof (void) { error("Premature EOF"); }
DECL|Eioccc|function|static void Eioccc(void) { error("Obfuscated preprocessor control line"); }
DECL|FINISHING_COMMENT|enumerator|FINISHING_COMMENT, /* star-backslash-newline in a C comment */
DECL|Fdrop|function|static void Fdrop (void) { nest(); Dfalse(); }
DECL|Ffalse|function|static void Ffalse(void) { nest(); Sfalse(); }
DECL|Fpass|function|static void Fpass (void) { nest(); Pelif(); }
DECL|Ftrue|function|static void Ftrue (void) { nest(); Strue(); }
DECL|IS_COUNT|enumerator|IS_COUNT
DECL|IS_FALSE_ELSE|enumerator|IS_FALSE_ELSE, /* an else after a true state */
DECL|IS_FALSE_MIDDLE|enumerator|IS_FALSE_MIDDLE, /* a false #elif after a pass state */
DECL|IS_FALSE_PREFIX|enumerator|IS_FALSE_PREFIX, /* false #if followed by false #elifs */
DECL|IS_FALSE_TRAILER|enumerator|IS_FALSE_TRAILER, /* #elifs after a true are false */
DECL|IS_OUTSIDE|enumerator|IS_OUTSIDE,
DECL|IS_PASS_ELSE|enumerator|IS_PASS_ELSE, /* an else after a pass state */
DECL|IS_PASS_MIDDLE|enumerator|IS_PASS_MIDDLE, /* first non-false #(el)if is unknown */
DECL|IS_TRUE_ELSE|enumerator|IS_TRUE_ELSE, /* an else after only false states */
DECL|IS_TRUE_MIDDLE|enumerator|IS_TRUE_MIDDLE, /* a true #elif after a pass state */
DECL|IS_TRUE_PREFIX|enumerator|IS_TRUE_PREFIX, /* first non-false #(el)if is true */
DECL|Idrop|function|static void Idrop (void) { Fdrop(); ignoreon(); }
DECL|Ifalse|function|static void Ifalse(void) { Ffalse(); ignoreon(); }
DECL|Ifstate|typedef|} Ifstate;
DECL|Itrue|function|static void Itrue (void) { Ftrue(); ignoreon(); }
DECL|LS_DIRTY|enumerator|LS_DIRTY /* this line can't be a preprocessor line */
DECL|LS_HASH|enumerator|LS_HASH, /* only space, comments, and a hash */
DECL|LS_START|enumerator|LS_START, /* only space and comments on this line */
DECL|LT_COUNT|enumerator|LT_COUNT
DECL|LT_DODGY_LAST|enumerator|LT_DODGY_LAST = LT_DODGY + LT_ENDIF,
DECL|LT_DODGY|enumerator|LT_DODGY, /* flag: directive is not on one line */
DECL|LT_ELFALSE|enumerator|LT_ELFALSE, /* a false #elif */
DECL|LT_ELIF|enumerator|LT_ELIF, /* an unknown #elif */
DECL|LT_ELSE|enumerator|LT_ELSE, /* #else */
DECL|LT_ELTRUE|enumerator|LT_ELTRUE, /* a true #elif */
DECL|LT_ENDIF|enumerator|LT_ENDIF, /* #endif */
DECL|LT_EOF|enumerator|LT_EOF, /* end of file */
DECL|LT_ERROR|enumerator|LT_ERROR, /* unevaluable #if */
DECL|LT_FALSEI|enumerator|LT_FALSEI, /* a false #if with ignore flag */
DECL|LT_FALSE|enumerator|LT_FALSE, /* a false #if */
DECL|LT_IF|enumerator|LT_IF, /* an unknown #if */
DECL|LT_PLAIN|enumerator|LT_PLAIN, /* ordinary line */
DECL|LT_TRUEI|enumerator|LT_TRUEI, /* a true #if with ignore flag */
DECL|LT_TRUE|enumerator|LT_TRUE, /* a true #if */
DECL|Line_state|typedef|} Line_state;
DECL|Linetype|typedef|} Linetype;
DECL|MAXDEPTH|macro|MAXDEPTH
DECL|MAXLINE|macro|MAXLINE
DECL|MAXSYMS|macro|MAXSYMS
DECL|Melif|function|static void Melif (void) { keywordedit("endif"); state(IS_FALSE_TRAILER); }
DECL|Melse|function|static void Melse (void) { keywordedit("endif"); state(IS_FALSE_ELSE); }
DECL|Mpass|function|static void Mpass (void) { strncpy(keyword, "if ", 4); Pelif(); }
DECL|Mtrue|function|static void Mtrue (void) { keywordedit("else"); state(IS_TRUE_MIDDLE); }
DECL|NO_COMMENT|enumerator|NO_COMMENT = false, /* outside a comment */
DECL|Oelif|function|static void Oelif (void) { if (!iocccok) Eioccc(); Pelif(); }
DECL|Oiffy|function|static void Oiffy (void) { if (!iocccok) Eioccc(); Fpass(); ignoreon(); }
DECL|Oif|function|static void Oif (void) { if (!iocccok) Eioccc(); Fpass(); }
DECL|Pelif|function|static void Pelif (void) { print(); ignoreoff(); state(IS_PASS_MIDDLE); }
DECL|Pelse|function|static void Pelse (void) { print(); state(IS_PASS_ELSE); }
DECL|Pendif|function|static void Pendif(void) { print(); unnest(); }
DECL|STARTING_COMMENT|enumerator|STARTING_COMMENT, /* just after slash-backslash-newline */
DECL|STRING_LITERAL|enumerator|STRING_LITERAL /* inside "" */
DECL|Selse|function|static void Selse (void) { drop(); state(IS_TRUE_ELSE); }
DECL|Sfalse|function|static void Sfalse(void) { drop(); ignoreoff(); state(IS_FALSE_PREFIX); }
DECL|Strue|function|static void Strue (void) { drop(); ignoreoff(); state(IS_TRUE_PREFIX); }
DECL|TEMPLATE|macro|TEMPLATE
DECL|addsym|function|addsym(bool ignorethis, bool definethis, char *sym)
DECL|blankcount|variable|blankcount
DECL|blankmax|variable|blankmax
DECL|closeout|function|closeout(void)
DECL|comment_name|variable|comment_name
DECL|compblank|variable|compblank
DECL|complement|variable|complement
DECL|constexpr|variable|constexpr
DECL|copyright|variable|copyright
DECL|debugging|variable|debugging
DECL|debug|function|debug(const char *msg, ...)
DECL|delcount|variable|delcount
DECL|depth|variable|depth
DECL|done|function|done(void)
DECL|drop|function|static void drop (void) { flushline(false); }
DECL|endsym|macro|endsym
DECL|error|function|error(const char *msg)
DECL|eval_fn|typedef|typedef Linetype eval_fn(const struct ops *, int *, const char **);
DECL|eval_ops|variable|eval_ops
DECL|eval_table|function|eval_table(const struct ops *ops, int *valp, const char **cpp)
DECL|eval_table|variable|eval_table
DECL|eval_unary|function|eval_unary(const struct ops *ops, int *valp, const char **cpp)
DECL|eval_unary|variable|eval_unary
DECL|exitstat|variable|exitstat
DECL|filename|variable|filename
DECL|findsym|function|findsym(const char *str)
DECL|firstsym|variable|firstsym
DECL|flushline|function|flushline(bool keep)
DECL|fn|member|Linetype (*fn)(int *, Linetype, int, Linetype, int);
DECL|ifeval|function|ifeval(const char **cpp)
DECL|ifstate_name|variable|ifstate_name
DECL|ifstate|variable|ifstate
DECL|ignoreoff|function|ignoreoff(void)
DECL|ignoreon|function|ignoreon(void)
DECL|ignore|variable|ignore
DECL|ignoring|variable|ignoring
DECL|incomment|variable|incomment
DECL|inner|member|eval_fn *inner;
DECL|input|variable|input
DECL|iocccok|variable|iocccok
DECL|keywordedit|function|keywordedit(const char *replacement)
DECL|keyword|variable|keyword
DECL|killconsts|variable|killconsts
DECL|linenum|variable|linenum
DECL|linestate_name|variable|linestate_name
DECL|linestate|variable|linestate
DECL|linetype_name|variable|linetype_name
DECL|lnblank|variable|lnblank
DECL|lnnum|variable|lnnum
DECL|main|function|main(int argc, char *argv[])
DECL|nest|function|nest(void)
DECL|newline_crlf|variable|newline_crlf
DECL|newline_unix|variable|newline_unix
DECL|newline|variable|newline
DECL|nsyms|variable|nsyms
DECL|ofilename|variable|ofilename
DECL|op_and|function|static Linetype op_and(int *p, Linetype at, int a, Linetype bt, int b) {
DECL|op_eq|function|static Linetype op_eq(int *p, Linetype at, int a, Linetype bt, int b) {
DECL|op_ge|function|static Linetype op_ge(int *p, Linetype at, int a, Linetype bt, int b) {
DECL|op_gt|function|static Linetype op_gt(int *p, Linetype at, int a, Linetype bt, int b) {
DECL|op_le|function|static Linetype op_le(int *p, Linetype at, int a, Linetype bt, int b) {
DECL|op_lt|function|static Linetype op_lt(int *p, Linetype at, int a, Linetype bt, int b) {
DECL|op_ne|function|static Linetype op_ne(int *p, Linetype at, int a, Linetype bt, int b) {
DECL|op_or|function|static Linetype op_or(int *p, Linetype at, int a, Linetype bt, int b) {
DECL|op_strict|function|static Linetype op_strict(int *p, int v, Linetype at, Linetype bt) {
DECL|ops|struct|static const struct ops {
DECL|op|member|} op[5];
DECL|op|struct|struct op {
DECL|output|variable|output
DECL|overwriting|variable|overwriting
DECL|parseline|function|parseline(void)
DECL|print|function|static void print (void) { flushline(true); }
DECL|process|function|process(void)
DECL|skipargs|function|skipargs(const char *cp)
DECL|skipcomment|function|skipcomment(const char *cp)
DECL|skipsym|function|skipsym(const char *cp)
DECL|state_fn|typedef|typedef void state_fn(void);
DECL|state|function|state(Ifstate is)
DECL|stifline|variable|stifline
DECL|strictlogic|variable|strictlogic
DECL|strlcmp|function|strlcmp(const char *s, const char *t, size_t n)
DECL|str|member|const char *str;
DECL|symdepth|variable|symdepth
DECL|symlist|variable|symlist
DECL|symname|variable|symname
DECL|tempname|variable|tempname
DECL|text|variable|text
DECL|tline|variable|tline
DECL|trans_table|variable|trans_table
DECL|unnest|function|unnest(void)
DECL|usage|function|usage(void)
DECL|value|variable|value
DECL|version|function|version(void)
DECL|zerosyms|variable|zerosyms
