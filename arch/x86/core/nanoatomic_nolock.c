DECL|atomic_add|function|atomic_val_t atomic_add(atomic_t *target, /* memory location to add to */ atomic_val_t value /* value to add */ )
DECL|atomic_and|function|atomic_val_t atomic_and(atomic_t *target, /* memory location to be modified */ atomic_val_t value /* value to AND */ )
DECL|atomic_cas|function|int atomic_cas(atomic_t *target, /* address to be tested */ atomic_val_t oldValue, /* value to compare against */ atomic_val_t newValue /* value to set to */ )
DECL|atomic_clear|function|atomic_val_t atomic_clear(atomic_t *target /* memory location to write to */ )
DECL|atomic_dec|function|atomic_val_t atomic_dec(atomic_t *target /* memory location to decrement */ )
DECL|atomic_get|function|atomic_val_t atomic_get(atomic_t *target /* memory location to read from */ )
DECL|atomic_inc|function|atomic_val_t atomic_inc(atomic_t *target /* memory location to increment */ )
DECL|atomic_nand|function|atomic_val_t atomic_nand(atomic_t *target, /* memory location to be modified */ atomic_val_t value /* value to NAND */ )
DECL|atomic_or|function|atomic_val_t atomic_or(atomic_t *target, /* memory location to be modified */ atomic_val_t value /* value to OR */ )
DECL|atomic_set|function|atomic_val_t atomic_set(atomic_t *target, /* memory location to write to */ atomic_val_t value /* value to write */ )
DECL|atomic_sub|function|atomic_val_t atomic_sub(atomic_t *target, /* memory location to subtract from */ atomic_val_t value /* value to subtract */ )
DECL|atomic_xor|function|atomic_val_t atomic_xor(atomic_t *target, /* memory location to be modified */ atomic_val_t value /* value to XOR */ )
