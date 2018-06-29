DECL|ARGS_CONT_MSG|macro|ARGS_CONT_MSG
DECL|COMMON_PARAM_HDR|macro|COMMON_PARAM_HDR
DECL|HEXDUMP_BYTES_CONT_MSG|macro|HEXDUMP_BYTES_CONT_MSG
DECL|LOG_MAX_NARGS|macro|LOG_MAX_NARGS
DECL|LOG_MSG_HEXDUMP_BYTES_HEAD_CHUNK|macro|LOG_MSG_HEXDUMP_BYTES_HEAD_CHUNK
DECL|LOG_MSG_HEXDUMP_BYTES_SINGLE_CHUNK|macro|LOG_MSG_HEXDUMP_BYTES_SINGLE_CHUNK
DECL|LOG_MSG_HEXDUMP_LENGTH_BITS|macro|LOG_MSG_HEXDUMP_LENGTH_BITS
DECL|LOG_MSG_HEXDUMP_MAX_LENGTH|macro|LOG_MSG_HEXDUMP_MAX_LENGTH
DECL|LOG_MSG_H|macro|LOG_MSG_H
DECL|LOG_MSG_NARGS_HEAD_CHUNK|macro|LOG_MSG_NARGS_HEAD_CHUNK
DECL|LOG_MSG_NARGS_SINGLE_CHUNK|macro|LOG_MSG_NARGS_SINGLE_CHUNK
DECL|LOG_MSG_TYPE_HEXDUMP|macro|LOG_MSG_TYPE_HEXDUMP
DECL|LOG_MSG_TYPE_STD|macro|LOG_MSG_TYPE_STD
DECL|_log_msg_ext_std_alloc|function|static inline struct log_msg *_log_msg_ext_std_alloc(void)
DECL|_log_msg_std_alloc|function|static inline struct log_msg *_log_msg_std_alloc(void)
DECL|args|member|u32_t args[ARGS_CONT_MSG];
DECL|args|member|u32_t args[LOG_MSG_NARGS_HEAD_CHUNK];
DECL|args|member|u32_t args[LOG_MSG_NARGS_SINGLE_CHUNK];
DECL|bytes|member|u8_t bytes[HEXDUMP_BYTES_CONT_MSG];
DECL|bytes|member|u8_t bytes[LOG_MSG_HEXDUMP_BYTES_HEAD_CHUNK];
DECL|bytes|member|u8_t bytes[LOG_MSG_HEXDUMP_BYTES_SINGLE_CHUNK];
DECL|cont|member|struct log_msg_cont cont;
DECL|data|member|union log_msg_head_data data;
DECL|data|member|} data;
DECL|data|member|} data;
DECL|data|member|} data; /*!< Message data. */
DECL|domain_id|member|u16_t domain_id : 3; /*!< Originating domain. */
DECL|ext|member|struct log_msg_ext_head_data ext;
DECL|generic|member|struct log_msg_generic_hdr generic;
DECL|hdr|member|struct log_msg_hdr hdr; /*!< Message header. */
DECL|head|member|struct log_msg head;
DECL|hexdump|member|struct log_msg_hexdump_hdr hexdump;
DECL|ids|member|struct log_msg_ids ids; /*!< Identification part of the message.*/
DECL|length|member|u16_t length : LOG_MSG_HEXDUMP_LENGTH_BITS;
DECL|level|member|u16_t level : 3; /*!< Severity. */
DECL|log_msg_chunk_alloc|function|static inline union log_msg_chunk *log_msg_chunk_alloc(void)
DECL|log_msg_chunk|union|union log_msg_chunk {
DECL|log_msg_cont_data|union|union log_msg_cont_data {
DECL|log_msg_cont|struct|struct log_msg_cont {
DECL|log_msg_create_0|function|static inline struct log_msg *log_msg_create_0(const char *str)
DECL|log_msg_create_1|function|static inline struct log_msg *log_msg_create_1(const char *str, u32_t arg1)
DECL|log_msg_create_2|function|static inline struct log_msg *log_msg_create_2(const char *str, u32_t arg1, u32_t arg2)
DECL|log_msg_create_3|function|static inline struct log_msg *log_msg_create_3(const char *str, u32_t arg1, u32_t arg2, u32_t arg3)
DECL|log_msg_data|union|union log_msg_data {
DECL|log_msg_domain_id_get|function|static inline u32_t log_msg_domain_id_get(struct log_msg *msg)
DECL|log_msg_ext_head_data_data|union|union log_msg_ext_head_data_data {
DECL|log_msg_ext_head_data|struct|struct log_msg_ext_head_data {
DECL|log_msg_generic_hdr|struct|struct log_msg_generic_hdr {
DECL|log_msg_hdr_params|union|union log_msg_hdr_params {
DECL|log_msg_hdr|struct|struct log_msg_hdr {
DECL|log_msg_head_data|union|union log_msg_head_data {
DECL|log_msg_hexdump_hdr|struct|struct log_msg_hexdump_hdr {
DECL|log_msg_ids|struct|struct log_msg_ids {
DECL|log_msg_is_raw_string|function|static inline bool log_msg_is_raw_string(struct log_msg *msg)
DECL|log_msg_is_std|function|static inline bool log_msg_is_std(struct log_msg *msg)
DECL|log_msg_level_get|function|static inline u32_t log_msg_level_get(struct log_msg *msg)
DECL|log_msg_source_id_get|function|static inline u32_t log_msg_source_id_get(struct log_msg *msg)
DECL|log_msg_std_ext_head_data|struct|struct log_msg_std_ext_head_data {
DECL|log_msg_std_hdr|struct|struct log_msg_std_hdr {
DECL|log_msg_std_head_data|struct|struct log_msg_std_head_data {
DECL|log_msg_timestamp_get|function|static inline u32_t log_msg_timestamp_get(struct log_msg *msg)
DECL|log_msg|struct|struct log_msg {
DECL|nargs|member|u16_t nargs : 4;
DECL|next|member|struct log_msg *next; /*!< Used by logger core list.*/
DECL|next|member|struct log_msg_cont *next;
DECL|next|member|struct log_msg_cont *next; /*!< Pointer to the next chunk. */
DECL|params|member|} params;
DECL|raw_string|member|u16_t raw_string : 1;
DECL|raw|member|u16_t raw;
DECL|ref_cnt|member|atomic_t ref_cnt; /*!< Reference counter for tracking message users. */
DECL|reserved|member|u16_t reserved : 10;
DECL|reserved|member|u16_t reserved : 14;
DECL|sizeof|variable|sizeof
DECL|sizeof|variable|sizeof
DECL|sizeof|variable|sizeof
DECL|sizeof|variable|sizeof
DECL|sizeof|variable|sizeof
DECL|source_id|member|u16_t source_id : 10; /*!< Source ID. */
DECL|std|member|struct log_msg_std_ext_head_data std;
DECL|std|member|struct log_msg_std_hdr std;
DECL|std|member|struct log_msg_std_head_data std;
DECL|str|member|const char *str;
DECL|str|member|const char *str;
DECL|timestamp|member|u32_t timestamp; /*!< Timestamp. */
