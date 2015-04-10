DECL|FIND_NEXT_MATCH_DOWN|enumerator|FIND_NEXT_MATCH_DOWN, FIND_NEXT_MATCH_UP} match_f;
DECL|FIND_NEXT_MATCH_UP|enumerator|FIND_NEXT_MATCH_DOWN, FIND_NEXT_MATCH_UP} match_f;
DECL|MATCH_TINKER_PATTERN_DOWN|enumerator|typedef enum {MATCH_TINKER_PATTERN_UP, MATCH_TINKER_PATTERN_DOWN,
DECL|MATCH_TINKER_PATTERN_UP|enumerator|typedef enum {MATCH_TINKER_PATTERN_UP, MATCH_TINKER_PATTERN_DOWN,
DECL|MAX_MENU_ITEMS|macro|MAX_MENU_ITEMS
DECL|_GNU_SOURCE|macro|_GNU_SOURCE
DECL|adj_match_dir|function|static void adj_match_dir(match_f *match_direction)
DECL|build_conf|function|static void build_conf(struct menu *menu)
DECL|center_item|function|static void center_item(int selected_index, int *last_top_row)
DECL|child_count|variable|child_count
DECL|clean_items|function|static void clean_items(void)
DECL|conf_choice|function|static void conf_choice(struct menu *menu)
DECL|conf_load|function|static void conf_load(void)
DECL|conf_message_callback|function|static void conf_message_callback(const char *fmt, va_list ap)
DECL|conf_save|function|static void conf_save(void)
DECL|conf_string|function|static void conf_string(struct menu *menu)
DECL|conf|function|static void conf(struct menu *menu)
DECL|current_instructions|variable|current_instructions
DECL|current_menu|variable|current_menu
DECL|curses_item_index|function|static int curses_item_index(void)
DECL|curses_menu_items|variable|curses_menu_items
DECL|curses_menu|variable|curses_menu
DECL|dialog_input_result_len|variable|dialog_input_result_len
DECL|dialog_input_result|variable|dialog_input_result
DECL|do_exit|function|static int do_exit(void)
DECL|do_match|function|static int do_match(int key, struct match_state *state, int *ans)
DECL|filename|variable|filename
DECL|function_key_handler_t|typedef|typedef void (*function_key_handler_t)(int *key, struct menu *menu);
DECL|function_keys_num|variable|function_keys_num
DECL|function_keys|struct|struct function_keys {
DECL|function_keys|variable|function_keys
DECL|func|member|const char *func;
DECL|get_mext_match|function|static int get_mext_match(const char *match_str, match_f flag)
DECL|global_exit|variable|global_exit
DECL|handle_f1|function|static void handle_f1(int *key, struct menu *current_item)
DECL|handle_f2|function|static void handle_f2(int *key, struct menu *current_item)
DECL|handle_f3|function|static void handle_f3(int *key, struct menu *current_item)
DECL|handle_f4|function|static void handle_f4(int *key, struct menu *current_item)
DECL|handle_f5|function|static void handle_f5(int *key, struct menu *current_item)
DECL|handle_f6|function|static void handle_f6(int *key, struct menu *current_item)
DECL|handle_f7|function|static void handle_f7(int *key, struct menu *current_item)
DECL|handle_f8|function|static void handle_f8(int *key, struct menu *current_item)
DECL|handle_f9|function|static void handle_f9(int *key, struct menu *current_item)
DECL|handler|member|function_key_handler_t handler;
DECL|in_search|member|int in_search;
DECL|indent|variable|indent
DECL|inputbox_instructions_hex|variable|inputbox_instructions_hex
DECL|inputbox_instructions_int|variable|inputbox_instructions_int
DECL|inputbox_instructions_string|variable|inputbox_instructions_string
DECL|is_visible|member|int is_visible;
DECL|item_add_str|function|static void item_add_str(const char *fmt, ...)
DECL|item_data|function|static void *item_data(void)
DECL|item_is_tag|function|static int item_is_tag(char tag)
DECL|item_make|function|static void item_make(struct menu *menu, char tag, const char *fmt, ...)
DECL|item_tag|function|static char item_tag(void)
DECL|items_num|variable|items_num
DECL|k_menu_items|variable|k_menu_items
DECL|key_str|member|const char *key_str;
DECL|key|member|function_key key;
DECL|load_config_help|variable|load_config_help
DECL|load_config_text|variable|load_config_text
DECL|main_window|variable|main_window
DECL|main|function|int main(int ac, char **av)
DECL|match_direction|member|match_f match_direction;
DECL|match_f|typedef|FIND_NEXT_MATCH_DOWN, FIND_NEXT_MATCH_UP} match_f;
DECL|match_state|struct|struct match_state
DECL|menu_backtitle|variable|menu_backtitle
DECL|menu_instructions|variable|menu_instructions
DECL|menu_no_f_instructions|variable|menu_no_f_instructions
DECL|mitem|struct|struct mitem {
DECL|mwin_max_cols|variable|mwin_max_cols
DECL|mwin_max_lines|variable|mwin_max_lines
DECL|nconf_global_help|variable|nconf_global_help
DECL|pattern|member|char pattern[256];
DECL|print_function_line|function|static void print_function_line(void)
DECL|process_special_keys|function|static int process_special_keys(int *key, struct menu *menu)
DECL|radiolist_instructions|variable|radiolist_instructions
DECL|reset_menu|function|static void reset_menu(void)
DECL|save_config_help|variable|save_config_help
DECL|save_config_text|variable|save_config_text
DECL|search_conf|function|static void search_conf(void)
DECL|search_help|variable|search_help
DECL|set_config_filename|function|static const char *set_config_filename(const char *config_filename)
DECL|setmod_text|variable|setmod_text
DECL|setup_windows|function|void setup_windows(void)
DECL|show_all_items|variable|show_all_items
DECL|show_help|function|static void show_help(struct menu *menu)
DECL|show_menu|function|static void show_menu(const char *prompt, const char *instructions,int selected_index, int *last_top_row)
DECL|single_menu_mode|variable|single_menu_mode
DECL|str|member|char str[256];
DECL|tag|member|char tag;
DECL|usrptr|member|void *usrptr;
