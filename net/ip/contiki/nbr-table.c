DECL|MAX_NUM_TABLES|macro|MAX_NUM_TABLES
DECL|all_tables|variable|all_tables
DECL|index_from_item|function|index_from_item(nbr_table_t *table, const nbr_table_item_t *item)
DECL|index_from_key|function|index_from_key(nbr_table_key_t *key)
DECL|index_from_lladdr|function|index_from_lladdr(const linkaddr_t *lladdr)
DECL|item_from_index|function|item_from_index(nbr_table_t *table, int index)
DECL|item_from_key|function|item_from_key(nbr_table_t *table, nbr_table_key_t *key)
DECL|key_from_index|function|key_from_index(int index)
DECL|key_from_item|function|key_from_item(nbr_table_t *table, const nbr_table_item_t *item)
DECL|lladdr|member|linkaddr_t lladdr;
DECL|locked_map|variable|locked_map
DECL|nbr_get_bit|function|nbr_get_bit(uint8_t *bitmap, nbr_table_t *table, nbr_table_item_t *item)
DECL|nbr_set_bit|function|nbr_set_bit(uint8_t *bitmap, nbr_table_t *table, nbr_table_item_t *item, int value)
DECL|nbr_table_add_lladdr|function|nbr_table_add_lladdr(nbr_table_t *table, const linkaddr_t *lladdr)
DECL|nbr_table_allocate|function|nbr_table_allocate(void)
DECL|nbr_table_get_from_lladdr|function|nbr_table_get_from_lladdr(nbr_table_t *table, const linkaddr_t *lladdr)
DECL|nbr_table_get_lladdr|function|nbr_table_get_lladdr(nbr_table_t *table, const void *item)
DECL|nbr_table_head|function|nbr_table_head(nbr_table_t *table)
DECL|nbr_table_key_t|typedef|} nbr_table_key_t;
DECL|nbr_table_keys|variable|nbr_table_keys
DECL|nbr_table_key|struct|typedef struct nbr_table_key {
DECL|nbr_table_lock|function|nbr_table_lock(nbr_table_t *table, void *item)
DECL|nbr_table_next|function|nbr_table_next(nbr_table_t *table, nbr_table_item_t *item)
DECL|nbr_table_register|function|nbr_table_register(nbr_table_t *table, nbr_table_callback *callback)
DECL|nbr_table_remove|function|nbr_table_remove(nbr_table_t *table, void *item)
DECL|nbr_table_unlock|function|nbr_table_unlock(nbr_table_t *table, void *item)
DECL|next|member|struct nbr_table_key *next;
DECL|num_tables|variable|num_tables
DECL|used_map|variable|used_map
