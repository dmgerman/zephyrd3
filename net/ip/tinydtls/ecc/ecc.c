DECL|add|function|static uint32_t add( const uint32_t *x, const uint32_t *y, uint32_t *result, uint8_t length){
DECL|copy|function|static void copy(const uint32_t *from, uint32_t *to, uint8_t length){
DECL|ec_add|function|void static ec_add(const uint32_t *px, const uint32_t *py, const uint32_t *qx, const uint32_t *qy, uint32_t *Sx, uint32_t *Sy){
DECL|ec_double|function|void static ec_double(const uint32_t *px, const uint32_t *py, uint32_t *Dx, uint32_t *Dy){
DECL|ecc_add|function|uint32_t ecc_add( const uint32_t *x, const uint32_t *y, uint32_t *result, uint8_t length)
DECL|ecc_copy|function|void ecc_copy(const uint32_t *from, uint32_t *to, uint8_t length)
DECL|ecc_ec_add|function|void ecc_ec_add(const uint32_t *px, const uint32_t *py, const uint32_t *qx, const uint32_t *qy, uint32_t *Sx, uint32_t *Sy)
DECL|ecc_ec_double|function|void ecc_ec_double(const uint32_t *px, const uint32_t *py, uint32_t *Dx, uint32_t *Dy)
DECL|ecc_ec_mult|function|void ecc_ec_mult(const uint32_t *px, const uint32_t *py, const uint32_t *secret, uint32_t *resultx, uint32_t *resulty){
DECL|ecc_ecdsa_sign|function|int ecc_ecdsa_sign(const uint32_t *d, const uint32_t *e, const uint32_t *k, uint32_t *r, uint32_t *s)
DECL|ecc_ecdsa_validate|function|int ecc_ecdsa_validate(const uint32_t *x, const uint32_t *y, const uint32_t *e, const uint32_t *r, const uint32_t *s)
DECL|ecc_fieldAdd|function|int ecc_fieldAdd(const uint32_t *x, const uint32_t *y, const uint32_t *reducer, uint32_t *result)
DECL|ecc_fieldInv|function|void ecc_fieldInv(const uint32_t *A, const uint32_t *modulus, const uint32_t *reducer, uint32_t *B)
DECL|ecc_fieldModO|function|void ecc_fieldModO(const uint32_t *A, uint32_t *result, uint8_t length)
DECL|ecc_fieldModP|function|void ecc_fieldModP(uint32_t *A, const uint32_t *B)
DECL|ecc_fieldMult|function|int ecc_fieldMult(const uint32_t *x, const uint32_t *y, uint32_t *result, uint8_t length)
DECL|ecc_fieldSub|function|int ecc_fieldSub(const uint32_t *x, const uint32_t *y, const uint32_t *modulus, uint32_t *result)
DECL|ecc_g_point_x|variable|ecc_g_point_x
DECL|ecc_g_point_y|variable|ecc_g_point_y
DECL|ecc_isGreater|function|int ecc_isGreater(const uint32_t *A, const uint32_t *B, uint8_t length)
DECL|ecc_isOne|function|int ecc_isOne(const uint32_t* A)
DECL|ecc_isSame|function|int ecc_isSame(const uint32_t *A, const uint32_t *B, uint8_t length)
DECL|ecc_is_valid_key|function|int ecc_is_valid_key(const uint32_t * priv_key)
DECL|ecc_order_k|variable|ecc_order_k
DECL|ecc_order_mu|variable|ecc_order_mu
DECL|ecc_order_m|variable|ecc_order_m
DECL|ecc_order_r|variable|ecc_order_r
DECL|ecc_prime_m|variable|ecc_prime_m
DECL|ecc_prime_r|variable|ecc_prime_r
DECL|ecc_rshift|function|void ecc_rshift(uint32_t* A)
DECL|ecc_setZero|function|void ecc_setZero(uint32_t *A, const int length)
DECL|ecc_sub|function|uint32_t ecc_sub( const uint32_t *x, const uint32_t *y, uint32_t *result, uint8_t length)
DECL|fieldAddAndDivide|function|static int fieldAddAndDivide(const uint32_t *x, const uint32_t *modulus, const uint32_t *reducer, uint32_t* result){
DECL|fieldAdd|function|static int fieldAdd(const uint32_t *x, const uint32_t *y, const uint32_t *reducer, uint32_t *result){
DECL|fieldInv|function|static void fieldInv(const uint32_t *A, const uint32_t *modulus, const uint32_t *reducer, uint32_t *B){
DECL|fieldModO|function|static void fieldModO(const uint32_t *A, uint32_t *result, uint8_t length) {
DECL|fieldModP|function|static void fieldModP(uint32_t *A, const uint32_t *B)
DECL|fieldMult|function|static int fieldMult(const uint32_t *x, const uint32_t *y, uint32_t *result, uint8_t length){
DECL|fieldSub|function|static int fieldSub(const uint32_t *x, const uint32_t *y, const uint32_t *modulus, uint32_t *result){
DECL|isGreater|function|static int isGreater(const uint32_t *A, const uint32_t *B, uint8_t length){
DECL|isOne|function|static int isOne(const uint32_t* A){
DECL|isSame|function|static int isSame(const uint32_t *A, const uint32_t *B, uint8_t length){
DECL|isZero|function|static int isZero(const uint32_t* A){
DECL|rshiftby|function|static void rshiftby(const uint32_t *in, uint8_t in_size, uint32_t *out, uint8_t out_size, uint8_t shift) {
DECL|rshift|function|static void rshift(uint32_t* A){
DECL|setZero|function|static void setZero(uint32_t *A, const int length){
DECL|sub|function|static uint32_t sub( const uint32_t *x, const uint32_t *y, uint32_t *result, uint8_t length){
