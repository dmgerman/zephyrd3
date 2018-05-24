DECL|BITS_TO_LIMBS|macro|BITS_TO_LIMBS
DECL|CEIL_MAXUINT_DIV_SQRT2|macro|CEIL_MAXUINT_DIV_SQRT2
DECL|CHARS_TO_LIMBS|macro|CHARS_TO_LIMBS
DECL|GCD_PAIR_COUNT|macro|GCD_PAIR_COUNT
DECL|MPI_SIZE_T_MAX|macro|MPI_SIZE_T_MAX
DECL|biH|macro|biH
DECL|biL|macro|biL
DECL|ciL|macro|ciL
DECL|gcd_pairs|variable|gcd_pairs
DECL|mbedtls_calloc|macro|mbedtls_calloc
DECL|mbedtls_clz|function|static size_t mbedtls_clz( const mbedtls_mpi_uint x )
DECL|mbedtls_free|macro|mbedtls_free
DECL|mbedtls_int_div_int|function|static mbedtls_mpi_uint mbedtls_int_div_int( mbedtls_mpi_uint u1, mbedtls_mpi_uint u0, mbedtls_mpi_uint d, mbedtls_mpi_uint *r )
DECL|mbedtls_mpi_add_abs|function|int mbedtls_mpi_add_abs( mbedtls_mpi *X, const mbedtls_mpi *A, const mbedtls_mpi *B )
DECL|mbedtls_mpi_add_int|function|int mbedtls_mpi_add_int( mbedtls_mpi *X, const mbedtls_mpi *A, mbedtls_mpi_sint b )
DECL|mbedtls_mpi_add_mpi|function|int mbedtls_mpi_add_mpi( mbedtls_mpi *X, const mbedtls_mpi *A, const mbedtls_mpi *B )
DECL|mbedtls_mpi_bitlen|function|size_t mbedtls_mpi_bitlen( const mbedtls_mpi *X )
DECL|mbedtls_mpi_cmp_abs|function|int mbedtls_mpi_cmp_abs( const mbedtls_mpi *X, const mbedtls_mpi *Y )
DECL|mbedtls_mpi_cmp_int|function|int mbedtls_mpi_cmp_int( const mbedtls_mpi *X, mbedtls_mpi_sint z )
DECL|mbedtls_mpi_cmp_mpi|function|int mbedtls_mpi_cmp_mpi( const mbedtls_mpi *X, const mbedtls_mpi *Y )
DECL|mbedtls_mpi_copy|function|int mbedtls_mpi_copy( mbedtls_mpi *X, const mbedtls_mpi *Y )
DECL|mbedtls_mpi_div_int|function|int mbedtls_mpi_div_int( mbedtls_mpi *Q, mbedtls_mpi *R, const mbedtls_mpi *A, mbedtls_mpi_sint b )
DECL|mbedtls_mpi_div_mpi|function|int mbedtls_mpi_div_mpi( mbedtls_mpi *Q, mbedtls_mpi *R, const mbedtls_mpi *A, const mbedtls_mpi *B )
DECL|mbedtls_mpi_exp_mod|function|int mbedtls_mpi_exp_mod( mbedtls_mpi *X, const mbedtls_mpi *A, const mbedtls_mpi *E, const mbedtls_mpi *N, mbedtls_mpi *_RR )
DECL|mbedtls_mpi_fill_random|function|int mbedtls_mpi_fill_random( mbedtls_mpi *X, size_t size, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_mpi_free|function|void mbedtls_mpi_free( mbedtls_mpi *X )
DECL|mbedtls_mpi_gcd|function|int mbedtls_mpi_gcd( mbedtls_mpi *G, const mbedtls_mpi *A, const mbedtls_mpi *B )
DECL|mbedtls_mpi_gen_prime|function|int mbedtls_mpi_gen_prime( mbedtls_mpi *X, size_t nbits, int dh_flag, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_mpi_get_bit|function|int mbedtls_mpi_get_bit( const mbedtls_mpi *X, size_t pos )
DECL|mbedtls_mpi_grow|function|int mbedtls_mpi_grow( mbedtls_mpi *X, size_t nblimbs )
DECL|mbedtls_mpi_init|function|void mbedtls_mpi_init( mbedtls_mpi *X )
DECL|mbedtls_mpi_inv_mod|function|int mbedtls_mpi_inv_mod( mbedtls_mpi *X, const mbedtls_mpi *A, const mbedtls_mpi *N )
DECL|mbedtls_mpi_is_prime|function|int mbedtls_mpi_is_prime( const mbedtls_mpi *X, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mbedtls_mpi_lsb|function|size_t mbedtls_mpi_lsb( const mbedtls_mpi *X )
DECL|mbedtls_mpi_lset|function|int mbedtls_mpi_lset( mbedtls_mpi *X, mbedtls_mpi_sint z )
DECL|mbedtls_mpi_mod_int|function|int mbedtls_mpi_mod_int( mbedtls_mpi_uint *r, const mbedtls_mpi *A, mbedtls_mpi_sint b )
DECL|mbedtls_mpi_mod_mpi|function|int mbedtls_mpi_mod_mpi( mbedtls_mpi *R, const mbedtls_mpi *A, const mbedtls_mpi *B )
DECL|mbedtls_mpi_mul_int|function|int mbedtls_mpi_mul_int( mbedtls_mpi *X, const mbedtls_mpi *A, mbedtls_mpi_uint b )
DECL|mbedtls_mpi_mul_mpi|function|int mbedtls_mpi_mul_mpi( mbedtls_mpi *X, const mbedtls_mpi *A, const mbedtls_mpi *B )
DECL|mbedtls_mpi_read_binary|function|int mbedtls_mpi_read_binary( mbedtls_mpi *X, const unsigned char *buf, size_t buflen )
DECL|mbedtls_mpi_read_file|function|int mbedtls_mpi_read_file( mbedtls_mpi *X, int radix, FILE *fin )
DECL|mbedtls_mpi_read_string|function|int mbedtls_mpi_read_string( mbedtls_mpi *X, int radix, const char *s )
DECL|mbedtls_mpi_safe_cond_assign|function|int mbedtls_mpi_safe_cond_assign( mbedtls_mpi *X, const mbedtls_mpi *Y, unsigned char assign )
DECL|mbedtls_mpi_safe_cond_swap|function|int mbedtls_mpi_safe_cond_swap( mbedtls_mpi *X, mbedtls_mpi *Y, unsigned char swap )
DECL|mbedtls_mpi_self_test|function|int mbedtls_mpi_self_test( int verbose )
DECL|mbedtls_mpi_set_bit|function|int mbedtls_mpi_set_bit( mbedtls_mpi *X, size_t pos, unsigned char val )
DECL|mbedtls_mpi_shift_l|function|int mbedtls_mpi_shift_l( mbedtls_mpi *X, size_t count )
DECL|mbedtls_mpi_shift_r|function|int mbedtls_mpi_shift_r( mbedtls_mpi *X, size_t count )
DECL|mbedtls_mpi_shrink|function|int mbedtls_mpi_shrink( mbedtls_mpi *X, size_t nblimbs )
DECL|mbedtls_mpi_size|function|size_t mbedtls_mpi_size( const mbedtls_mpi *X )
DECL|mbedtls_mpi_sub_abs|function|int mbedtls_mpi_sub_abs( mbedtls_mpi *X, const mbedtls_mpi *A, const mbedtls_mpi *B )
DECL|mbedtls_mpi_sub_int|function|int mbedtls_mpi_sub_int( mbedtls_mpi *X, const mbedtls_mpi *A, mbedtls_mpi_sint b )
DECL|mbedtls_mpi_sub_mpi|function|int mbedtls_mpi_sub_mpi( mbedtls_mpi *X, const mbedtls_mpi *A, const mbedtls_mpi *B )
DECL|mbedtls_mpi_swap|function|void mbedtls_mpi_swap( mbedtls_mpi *X, mbedtls_mpi *Y )
DECL|mbedtls_mpi_write_binary|function|int mbedtls_mpi_write_binary( const mbedtls_mpi *X, unsigned char *buf, size_t buflen )
DECL|mbedtls_mpi_write_file|function|int mbedtls_mpi_write_file( const char *p, const mbedtls_mpi *X, int radix, FILE *fout )
DECL|mbedtls_mpi_write_string|function|int mbedtls_mpi_write_string( const mbedtls_mpi *X, int radix, char *buf, size_t buflen, size_t *olen )
DECL|mbedtls_mpi_zeroize|function|static void mbedtls_mpi_zeroize( mbedtls_mpi_uint *v, size_t n ) {
DECL|mbedtls_printf|macro|mbedtls_printf
DECL|mbedtls_zeroize|function|static void mbedtls_zeroize( void *v, size_t n ) {
DECL|mpi_check_small_factors|function|static int mpi_check_small_factors( const mbedtls_mpi *X )
DECL|mpi_get_digit|function|static int mpi_get_digit( mbedtls_mpi_uint *d, int radix, char c )
DECL|mpi_miller_rabin|function|static int mpi_miller_rabin( const mbedtls_mpi *X, int (*f_rng)(void *, unsigned char *, size_t), void *p_rng )
DECL|mpi_montg_init|function|static void mpi_montg_init( mbedtls_mpi_uint *mm, const mbedtls_mpi *N )
DECL|mpi_montmul|function|static int mpi_montmul( mbedtls_mpi *A, const mbedtls_mpi *B, const mbedtls_mpi *N, mbedtls_mpi_uint mm, const mbedtls_mpi *T )
DECL|mpi_montred|function|static int mpi_montred( mbedtls_mpi *A, const mbedtls_mpi *N, mbedtls_mpi_uint mm, const mbedtls_mpi *T )
DECL|mpi_mul_hlp|function|void mpi_mul_hlp( size_t i, mbedtls_mpi_uint *s, mbedtls_mpi_uint *d, mbedtls_mpi_uint b )
DECL|mpi_sub_hlp|function|static void mpi_sub_hlp( size_t n, mbedtls_mpi_uint *s, mbedtls_mpi_uint *d )
DECL|mpi_write_hlp|function|static int mpi_write_hlp( mbedtls_mpi *X, int radix, char **p )
DECL|small_prime|variable|small_prime
