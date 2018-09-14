DECL|Imax_abs|member|u32_t Imax_abs; /* Max interval size in ms (not doublings)
DECL|Imax|member|u8_t Imax; /* Max number of doublings */
DECL|Imin|member|u32_t Imin; /* Min interval size in ms */
DECL|Istart|member|u32_t Istart; /* Start of the interval in ms */
DECL|I|member|u32_t I; /* Current interval size */
DECL|NET_TRICKLE_INFINITE_REDUNDANCY|macro|NET_TRICKLE_INFINITE_REDUNDANCY
DECL|ZEPHYR_INCLUDE_NET_TRICKLE_H_|macro|ZEPHYR_INCLUDE_NET_TRICKLE_H_
DECL|cb|member|net_trickle_cb_t cb; /* Callback to be called when timer expires */
DECL|c|member|u8_t c; /* Consistency counter */
DECL|k|member|u8_t k; /* Redundancy constant */
DECL|net_trickle_cb_t|typedef|typedef void (*net_trickle_cb_t)(struct net_trickle *trickle,
DECL|net_trickle_is_running|function|static inline bool net_trickle_is_running(struct net_trickle *trickle)
DECL|net_trickle|struct|struct net_trickle {
DECL|timer|member|struct k_delayed_work timer;
DECL|user_data|member|void *user_data;
