DECL|escape|function|static char *escape(const char* text, char *bf, int len)
DECL|file_line__new|function|static struct file_line *file_line__new(const char *file, int lineno)
DECL|file_line|struct|struct file_line {
DECL|files|member|struct file_line *files;
DECL|file|member|const char *file;
DECL|lineno|member|int lineno;
DECL|main|function|int main(int ac, char **av)
DECL|menu__xgettext|function|static void menu__xgettext(void)
DECL|menu_build_message_list|function|static void menu_build_message_list(struct menu *menu)
DECL|mesage__find|function|static struct message *mesage__find(const char *msg)
DECL|message__add_file_line|function|static int message__add_file_line(struct message *self, const char *file, int lineno)
DECL|message__add|function|static int message__add(const char *msg, char *option, const char *file,int lineno)
DECL|message__list|variable|message__list
DECL|message__new|function|static struct message *message__new(const char *msg, char *option, const char *file, int lineno)
DECL|message__print_file_lineno|function|static void message__print_file_lineno(struct message *self)
DECL|message__print_gettext_msgid_msgstr|function|static void message__print_gettext_msgid_msgstr(struct message *self)
DECL|message|struct|struct message {
DECL|msg|member|const char *msg;
DECL|next|member|struct file_line *next;
DECL|next|member|struct message *next;
DECL|option|member|const char *option;
