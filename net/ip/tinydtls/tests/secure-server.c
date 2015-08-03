DECL|CAST|macro|CAST
DECL|CA_CERT_PEM|macro|CA_CERT_PEM
DECL|DTLS|enumerator|typedef enum { UNKNOWN=0, DTLS=1 } protocol_t;
DECL|DUMMYSTR|macro|DUMMYSTR
DECL|MAX_SSL_PEERS|macro|MAX_SSL_PEERS
DECL|MAX_SSL_PENDING|macro|MAX_SSL_PENDING
DECL|PEER_ST_CLOSED|enumerator|PEER_ST_ESTABLISHED, PEER_ST_PENDING, PEER_ST_CLOSED
DECL|PEER_ST_ESTABLISHED|enumerator|PEER_ST_ESTABLISHED, PEER_ST_PENDING, PEER_ST_CLOSED
DECL|PEER_ST_PENDING|enumerator|PEER_ST_ESTABLISHED, PEER_ST_PENDING, PEER_ST_CLOSED
DECL|READ|enumerator|enum { READ, WRITE };
DECL|SERVER_CERT_PEM|macro|SERVER_CERT_PEM
DECL|SERVER_KEY_PEM|macro|SERVER_KEY_PEM
DECL|UNKNOWN|enumerator|typedef enum { UNKNOWN=0, DTLS=1 } protocol_t;
DECL|WRITE|enumerator|enum { READ, WRITE };
DECL|_hash|function|_hash(unsigned long init, const char *s, int num) {
DECL|_read|function|_read(SSL_CTX *ctx, int sockfd) {
DECL|_write|function|_write(SSL_CTX *ctx, int sockfd) {
DECL|assert|macro|assert
DECL|check_close|function|check_close(SSL *ssl) {
DECL|check_connect|function|check_connect(int sockfd, char *buf, int buflen, struct sockaddr *src, int *ifindex)
DECL|check_peers|function|check_peers() {
DECL|check_timeout|function|check_timeout() {
DECL|delete_peer|function|delete_peer(int idx) {
DECL|demux_protocol|function|demux_protocol(const char *buf, int len) {
DECL|generate_cookie|function|generate_cookie(SSL *ssl, unsigned char *cookie, unsigned int *cookie_len) {
DECL|get_index_of_peer|function|get_index_of_peer(const struct sockaddr *peer, int ifindex) {
DECL|get_ssl|function|get_ssl(SSL_CTX *ctx, int sockfd, struct sockaddr *src, int ifindex) {
DECL|handle_sigint|function|handle_sigint(int signum) {
DECL|hash_peer|function|hash_peer(const struct sockaddr *peer, int ifindex) {
DECL|h|member|unsigned long h;
DECL|info_callback|function|info_callback(const SSL *ssl, int where, int ret) {
DECL|main|function|main(int argc, char **argv) {
DECL|min|macro|min
DECL|peer_state_t|typedef|} peer_state_t;
DECL|pending|variable|pending
DECL|protocol_t|typedef|typedef enum { UNKNOWN=0, DTLS=1 } protocol_t;
DECL|psk_server_callback|function|psk_server_callback(SSL *ssl, const char *identity, unsigned char *psk, unsigned int max_psk_len)
DECL|quit|variable|quit
DECL|remove_closed|function|remove_closed() {
DECL|ssl_peer_storage|variable|ssl_peer_storage
DECL|ssl_peer_t|typedef|} ssl_peer_t;
DECL|ssl|member|SSL *ssl;
DECL|state|member|peer_state_t state;
DECL|verify_cookie|function|verify_cookie(SSL *ssl, unsigned char *cookie, unsigned int cookie_len) {
