DECL|credential_get|function|struct tls_credential *credential_get(sec_tag_t tag, enum tls_credential_type type)
DECL|credential_lock|variable|credential_lock
DECL|credential_next_get|function|struct tls_credential *credential_next_get(sec_tag_t tag, struct tls_credential *iter)
DECL|credentials_init|function|static int credentials_init(struct device *unused)
DECL|credentials_lock|function|void credentials_lock(void)
DECL|credentials_unlock|function|void credentials_unlock(void)
DECL|credentials|variable|credentials
DECL|tls_credential_add|function|int tls_credential_add(sec_tag_t tag, enum tls_credential_type type, const void *cred, size_t credlen)
DECL|tls_credential_delete|function|int tls_credential_delete(sec_tag_t tag, enum tls_credential_type type)
DECL|tls_credential_get|function|int tls_credential_get(sec_tag_t tag, enum tls_credential_type type, void *cred, size_t *credlen)
DECL|unused_credential_get|function|static struct tls_credential *unused_credential_get(void)
