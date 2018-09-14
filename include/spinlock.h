DECL|ZEPHYR_INCLUDE_SPINLOCK_H_|macro|ZEPHYR_INCLUDE_SPINLOCK_H_
DECL|k_spin_lock|function|static inline k_spinlock_key_t k_spin_lock(struct k_spinlock *l)
DECL|k_spin_unlock|function|static inline void k_spin_unlock(struct k_spinlock *l, k_spinlock_key_t key)
DECL|k_spinlock_key_t|typedef|typedef struct k_spinlock_key k_spinlock_key_t;
DECL|k_spinlock_key|struct|struct k_spinlock_key {
DECL|k_spinlock|struct|struct k_spinlock {
DECL|key|member|int key;
DECL|locked|member|atomic_t locked;
DECL|saved_key|member|int saved_key;
