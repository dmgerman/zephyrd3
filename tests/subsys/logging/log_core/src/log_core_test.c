DECL|LOG_MODULE_NAME|macro|LOG_MODULE_NAME
DECL|LOG_MODULE_NAME|variable|LOG_MODULE_NAME
DECL|backend1_cb|variable|backend1_cb
DECL|backend2_cb|variable|backend2_cb
DECL|backend_cb|struct|struct backend_cb {
DECL|check_args|member|bool check_args;
DECL|check_id|member|bool check_id;
DECL|check_timestamp|member|bool check_timestamp;
DECL|counter|member|size_t counter;
DECL|data|variable|data
DECL|exp_id|member|u32_t exp_id[100];
DECL|exp_nargs|member|u32_t exp_nargs[100];
DECL|exp_timestamps|member|u32_t exp_timestamps[100];
DECL|keep_msgs|member|bool keep_msgs;
DECL|log_backend_test_api|variable|log_backend_test_api
DECL|log_setup|function|static void log_setup(bool backend2_enable)
DECL|log_source_id_get|function|static int log_source_id_get(const char *name)
DECL|panic|function|static void panic(struct log_backend const *const backend)
DECL|panic|member|bool panic;
DECL|put|function|static void put(struct log_backend const *const backend,struct log_msg *msg)
DECL|stamp|variable|stamp
DECL|test_log_arguments|function|static void test_log_arguments(void)
DECL|test_log_backend_runtime_filtering|function|static void test_log_backend_runtime_filtering(void)
DECL|test_log_from_declared_module|function|static void test_log_from_declared_module(void)
DECL|test_log_overflow|function|static void test_log_overflow(void)
DECL|test_log_panic|function|static void test_log_panic(void)
DECL|test_main|function|void test_main(void)
DECL|test_source_id|variable|test_source_id
DECL|timestamp_get|function|static u32_t timestamp_get(void)
