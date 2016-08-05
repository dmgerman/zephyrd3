DECL|CHECK_IMIN|macro|CHECK_IMIN
DECL|NET_DEBUG|macro|NET_DEBUG
DECL|SYS_LOG_DOMAIN|macro|SYS_LOG_DOMAIN
DECL|TICK_MAX|macro|TICK_MAX
DECL|double_interval_timeout|function|static void double_interval_timeout(struct nano_work *work)
DECL|get_end|function|static inline uint32_t get_end(struct net_trickle *trickle)
DECL|get_t|function|static uint32_t get_t(uint32_t I)
DECL|is_suppression_disabled|function|static inline bool is_suppression_disabled(struct net_trickle *trickle)
DECL|is_tx_allowed|function|static inline bool is_tx_allowed(struct net_trickle *trickle)
DECL|net_trickle_consistency|function|void net_trickle_consistency(struct net_trickle *trickle)
DECL|net_trickle_create|function|int net_trickle_create(struct net_trickle *trickle, uint32_t Imin, uint8_t Imax, uint8_t k)
DECL|net_trickle_inconsistency|function|void net_trickle_inconsistency(struct net_trickle *trickle)
DECL|net_trickle_start|function|int net_trickle_start(struct net_trickle *trickle, net_trickle_cb_t cb, void *user_data)
DECL|net_trickle_stop|function|int net_trickle_stop(struct net_trickle *trickle)
DECL|reschedule|function|static inline void reschedule(struct net_trickle *trickle)
DECL|setup_new_interval|function|static void setup_new_interval(struct net_trickle *trickle)
DECL|trickle_timeout|function|static void trickle_timeout(struct nano_work *work)
