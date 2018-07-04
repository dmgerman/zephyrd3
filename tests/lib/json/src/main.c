DECL|another_array_len|member|size_t another_array_len;
DECL|another_array|member|int another_array[10]; /* JSON: "another-array" */
DECL|another_bxxl|member|bool another_bxxl; /* JSON field: "another_b!@l" */
DECL|array_array_descr|variable|array_array_descr
DECL|array_descr|variable|array_descr
DECL|array|struct|struct array {
DECL|elements|member|struct elt elements[10];
DECL|elt_descr|variable|elt_descr
DECL|elt|struct|struct elt {
DECL|height|member|int height;
DECL|if_|member|bool if_; /* JSON: "if" */
DECL|name|member|const char *name;
DECL|nested_bool|member|bool nested_bool;
DECL|nested_descr|variable|nested_descr
DECL|nested_int|member|int nested_int;
DECL|nested_string|member|const char *nested_string;
DECL|num_elements|member|size_t num_elements;
DECL|obj_array_array|struct|struct obj_array_array {
DECL|obj_array_descr|variable|obj_array_descr
DECL|obj_array|struct|struct obj_array {
DECL|objects_array_len|member|size_t objects_array_len;
DECL|objects_array|member|struct array objects_array[4];
DECL|objects|member|struct elt objects;
DECL|some_array_len|member|size_t some_array_len;
DECL|some_array|member|int some_array[16];
DECL|some_bool|member|bool some_bool;
DECL|some_int|member|int some_int;
DECL|some_nested_struct|member|struct test_nested some_nested_struct;
DECL|some_string|member|const char *some_string;
DECL|test_descr|variable|test_descr
DECL|test_json_decoding_array_array|function|static void test_json_decoding_array_array(void)
DECL|test_json_decoding|function|static void test_json_decoding(void)
DECL|test_json_encoding|function|static void test_json_encoding(void)
DECL|test_json_escape_bounds_check|function|static void test_json_escape_bounds_check(void)
DECL|test_json_escape_empty|function|static void test_json_escape_empty(void)
DECL|test_json_escape_no_op|function|static void test_json_escape_no_op(void)
DECL|test_json_escape_one|function|static void test_json_escape_one(void)
DECL|test_json_escape|function|static void test_json_escape(void)
DECL|test_json_invalid_unicode|function|static void test_json_invalid_unicode(void)
DECL|test_json_item_wrong_type|function|static void test_json_item_wrong_type(void)
DECL|test_json_key_not_in_descr|function|static void test_json_key_not_in_descr(void)
DECL|test_json_missing_quote|function|static void test_json_missing_quote(void)
DECL|test_json_obj_arr_decoding|function|static void test_json_obj_arr_decoding(void)
DECL|test_json_obj_arr_encoding|function|static void test_json_obj_arr_encoding(void)
DECL|test_json_wrong_token|function|static void test_json_wrong_token(void)
DECL|test_main|function|void test_main(void)
DECL|test_nested|struct|struct test_nested {
DECL|test_struct|struct|struct test_struct {
DECL|xnother_nexx|member|struct test_nested xnother_nexx; /* JSON: "4nother_ne$+" */
