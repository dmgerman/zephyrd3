DECL|c1_handle_commit|function|int c1_handle_commit(void)
DECL|c1_handle_export|function|int c1_handle_export(int (*cb)(const char *name, char *value),enum settings_export_tgt tgt)
DECL|c1_handle_get|function|char *c1_handle_get(int argc, char **argv, char *val, int val_len_max)
DECL|c1_handle_set|function|int c1_handle_set(int argc, char **argv, char *val)
DECL|c2_handle_export|function|int c2_handle_export(int (*cb)(const char *name, char *value), enum settings_export_tgt tgt)
DECL|c2_handle_get|function|char *c2_handle_get(int argc, char **argv, char *val, int val_len_max)
DECL|c2_handle_set|function|int c2_handle_set(int argc, char **argv, char *val)
DECL|c2_var_count|variable|c2_var_count
DECL|c2_var_find|function|char *c2_var_find(char *name)
DECL|c3_handle_export|function|int c3_handle_export(int (*cb)(const char *name, char *value), enum settings_export_tgt tgt)
DECL|c3_handle_get|function|char *c3_handle_get(int argc, char **argv, char *val, int val_len_max)
DECL|c3_handle_set|function|int c3_handle_set(int argc, char **argv, char *val)
DECL|c_test_handlers|variable|c_test_handlers
DECL|config_wipe_fcb|function|void config_wipe_fcb(struct flash_sector *fs, int cnt)
DECL|config_wipe_srcs|function|void config_wipe_srcs(void)
DECL|ctest_clear_call_state|function|void ctest_clear_call_state(void)
DECL|ctest_get_call_state|function|int ctest_get_call_state(void)
DECL|fcb_sectors|variable|fcb_sectors
DECL|test_commit_called|variable|test_commit_called
DECL|test_config_fill_area|function|test_config_fill_area(char test_value[SETTINGS_TEST_FCB_VAL_STR_CNT] [SETTINGS_MAX_VAL_LEN], int iteration)
DECL|test_export_block|variable|test_export_block
DECL|test_get_called|variable|test_get_called
DECL|test_main|function|void test_main(void)
DECL|test_ref_value|variable|test_ref_value
DECL|test_set_called|variable|test_set_called
DECL|val32|variable|val32
DECL|val64|variable|val64
DECL|val8|variable|val8
DECL|val_string|variable|val_string
