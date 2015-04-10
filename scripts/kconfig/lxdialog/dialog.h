DECL|ACS_DARROW|macro|ACS_DARROW
DECL|ACS_HLINE|macro|ACS_HLINE
DECL|ACS_LLCORNER|macro|ACS_LLCORNER
DECL|ACS_LRCORNER|macro|ACS_LRCORNER
DECL|ACS_LTEE|macro|ACS_LTEE
DECL|ACS_RTEE|macro|ACS_RTEE
DECL|ACS_UARROW|macro|ACS_UARROW
DECL|ACS_ULCORNER|macro|ACS_ULCORNER
DECL|ACS_URCORNER|macro|ACS_URCORNER
DECL|ACS_VLINE|macro|ACS_VLINE
DECL|BUF_SIZE|macro|BUF_SIZE
DECL|CHECKLIST_HEIGTH_MIN|macro|CHECKLIST_HEIGTH_MIN
DECL|CHECKLIST_WIDTH_MIN|macro|CHECKLIST_WIDTH_MIN
DECL|CURS_MACROS|macro|CURS_MACROS
DECL|ERRDISPLAYTOOSMALL|macro|ERRDISPLAYTOOSMALL
DECL|INPUTBOX_HEIGTH_MIN|macro|INPUTBOX_HEIGTH_MIN
DECL|INPUTBOX_WIDTH_MIN|macro|INPUTBOX_WIDTH_MIN
DECL|KEY_ESC|macro|KEY_ESC
DECL|MAXITEMSTR|macro|MAXITEMSTR
DECL|MAX_LEN|macro|MAX_LEN
DECL|MAX|macro|MAX
DECL|MENUBOX_HEIGTH_MIN|macro|MENUBOX_HEIGTH_MIN
DECL|MENUBOX_WIDTH_MIN|macro|MENUBOX_WIDTH_MIN
DECL|MIN|macro|MIN
DECL|M_EVENT|macro|M_EVENT
DECL|OLD_NCURSES|macro|OLD_NCURSES
DECL|OLD_NCURSES|macro|OLD_NCURSES
DECL|TAB|macro|TAB
DECL|TEXTBOX_HEIGTH_MIN|macro|TEXTBOX_HEIGTH_MIN
DECL|TEXTBOX_WIDTH_MIN|macro|TEXTBOX_WIDTH_MIN
DECL|TR|macro|TR
DECL|WINDOW_HEIGTH_MIN|macro|WINDOW_HEIGTH_MIN
DECL|WINDOW_WIDTH_MIN|macro|WINDOW_WIDTH_MIN
DECL|YESNO_HEIGTH_MIN|macro|YESNO_HEIGTH_MIN
DECL|YESNO_WIDTH_MIN|macro|YESNO_WIDTH_MIN
DECL|atr|member|chtype atr; /* Color attribute */
DECL|backtitle|member|const char *backtitle;
DECL|bg|member|int bg; /* background */
DECL|border|member|struct dialog_color border;
DECL|button_active|member|struct dialog_color button_active;
DECL|button_inactive|member|struct dialog_color button_inactive;
DECL|button_key_active|member|struct dialog_color button_key_active;
DECL|button_key_inactive|member|struct dialog_color button_key_inactive;
DECL|button_label_active|member|struct dialog_color button_label_active;
DECL|button_label_inactive|member|struct dialog_color button_label_inactive;
DECL|check_selected|member|struct dialog_color check_selected;
DECL|check|member|struct dialog_color check;
DECL|darrow|member|struct dialog_color darrow;
DECL|data|member|void *data; /* pointer to menu item - used by menubox+checklist */
DECL|dialog_color|struct|struct dialog_color {
DECL|dialog_info|struct|struct dialog_info {
DECL|dialog_item|struct|struct dialog_item {
DECL|dialog_list|struct|struct dialog_list {
DECL|dialog|member|struct dialog_color dialog;
DECL|fg|member|int fg; /* foreground */
DECL|gettext|macro|gettext
DECL|hl|member|int hl; /* highlight this item */
DECL|inputbox_border|member|struct dialog_color inputbox_border;
DECL|inputbox|member|struct dialog_color inputbox;
DECL|item_foreach|macro|item_foreach
DECL|item_selected|member|struct dialog_color item_selected;
DECL|item|member|struct dialog_color item;
DECL|menubox_border|member|struct dialog_color menubox_border;
DECL|menubox|member|struct dialog_color menubox;
DECL|next|member|struct dialog_list *next;
DECL|next|member|struct subtitle_list *next;
DECL|node|member|struct dialog_item node;
DECL|position_indicator|member|struct dialog_color position_indicator;
DECL|screen|member|struct dialog_color screen;
DECL|searchbox_border|member|struct dialog_color searchbox_border;
DECL|searchbox_title|member|struct dialog_color searchbox_title;
DECL|searchbox|member|struct dialog_color searchbox;
DECL|selected|member|int selected; /* Set to 1 by dialog_*() function if selected. */
DECL|shadow|member|struct dialog_color shadow;
DECL|str|member|char str[MAXITEMSTR]; /* prompt displayed */
DECL|subtitle_list|struct|struct subtitle_list {
DECL|subtitles|member|struct subtitle_list *subtitles;
DECL|tag_key_selected|member|struct dialog_color tag_key_selected;
DECL|tag_key|member|struct dialog_color tag_key;
DECL|tag_selected|member|struct dialog_color tag_selected;
DECL|tag|member|char tag;
DECL|tag|member|struct dialog_color tag;
DECL|text|member|const char *text;
DECL|title|member|struct dialog_color title;
DECL|uarrow|member|struct dialog_color uarrow;
DECL|update_text_fn|typedef|typedef void (*update_text_fn)(char *buf, size_t start, size_t end, void
DECL|wbkgdset|macro|wbkgdset
DECL|wbkgdset|macro|wbkgdset
