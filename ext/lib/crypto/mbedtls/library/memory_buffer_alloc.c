DECL|MAGIC1|macro|MAGIC1
DECL|MAGIC2|macro|MAGIC2
DECL|MAX_BT|macro|MAX_BT
DECL|TEST_ASSERT|macro|TEST_ASSERT
DECL|_memory_header|struct|struct _memory_header
DECL|alloc_count|member|size_t alloc_count;
DECL|alloc|member|size_t alloc;
DECL|buffer_alloc_calloc_mutexed|function|static void *buffer_alloc_calloc_mutexed( size_t n, size_t size )
DECL|buffer_alloc_calloc|function|static void *buffer_alloc_calloc( size_t n, size_t size )
DECL|buffer_alloc_ctx|typedef|buffer_alloc_ctx;
DECL|buffer_alloc_free_mutexed|function|static void buffer_alloc_free_mutexed( void *ptr )
DECL|buffer_alloc_free|function|static void buffer_alloc_free( void *ptr )
DECL|buf|member|unsigned char *buf;
DECL|check_all_free|function|static int check_all_free( void )
DECL|check_pointer|function|static int check_pointer( void *p )
DECL|debug_chain|function|static void debug_chain( void )
DECL|debug_header|function|static void debug_header( memory_header *hdr )
DECL|first_free|member|memory_header *first_free;
DECL|first|member|memory_header *first;
DECL|free_count|member|size_t free_count;
DECL|header_count|member|size_t header_count;
DECL|heap|variable|heap
DECL|len|member|size_t len;
DECL|magic1|member|size_t magic1;
DECL|magic2|member|size_t magic2;
DECL|maximum_header_count|member|size_t maximum_header_count;
DECL|maximum_used|member|size_t maximum_used;
DECL|mbedtls_memory_buffer_alloc_cur_get|function|void mbedtls_memory_buffer_alloc_cur_get( size_t *cur_used, size_t *cur_blocks )
DECL|mbedtls_memory_buffer_alloc_free|function|void mbedtls_memory_buffer_alloc_free( void )
DECL|mbedtls_memory_buffer_alloc_init|function|void mbedtls_memory_buffer_alloc_init( unsigned char *buf, size_t len )
DECL|mbedtls_memory_buffer_alloc_max_get|function|void mbedtls_memory_buffer_alloc_max_get( size_t *max_used, size_t *max_blocks )
DECL|mbedtls_memory_buffer_alloc_max_reset|function|void mbedtls_memory_buffer_alloc_max_reset( void )
DECL|mbedtls_memory_buffer_alloc_self_test|function|int mbedtls_memory_buffer_alloc_self_test( int verbose )
DECL|mbedtls_memory_buffer_alloc_status|function|void mbedtls_memory_buffer_alloc_status( void )
DECL|mbedtls_memory_buffer_alloc_verify|function|int mbedtls_memory_buffer_alloc_verify( void )
DECL|mbedtls_memory_buffer_set_verify|function|void mbedtls_memory_buffer_set_verify( int verify )
DECL|mbedtls_zeroize|function|static void mbedtls_zeroize( void *v, size_t n ) {
DECL|memory_header|typedef|typedef struct _memory_header memory_header;
DECL|mutex|member|mbedtls_threading_mutex_t mutex;
DECL|next_free|member|memory_header *next_free;
DECL|next|member|memory_header *next;
DECL|prev_free|member|memory_header *prev_free;
DECL|prev|member|memory_header *prev;
DECL|size|member|size_t size;
DECL|total_used|member|size_t total_used;
DECL|trace_count|member|size_t trace_count;
DECL|trace|member|char **trace;
DECL|verify_chain|function|static int verify_chain( void )
DECL|verify_header|function|static int verify_header( memory_header *hdr )
DECL|verify|member|int verify;
