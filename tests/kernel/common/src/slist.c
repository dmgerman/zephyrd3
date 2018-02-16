DECL|container_node|struct|struct container_node {
DECL|node|member|sys_snode_t node;
DECL|test_list|variable|test_list
DECL|test_node_1|variable|test_node_1
DECL|test_node_2|variable|test_node_2
DECL|test_node_3|variable|test_node_3
DECL|test_node_4|variable|test_node_4
DECL|test_slist|function|void test_slist(void)
DECL|unused|member|int unused;
DECL|verify_content_amount|function|static inline bool verify_content_amount(sys_slist_t *list, int amount)
DECL|verify_emptyness|function|static inline bool verify_emptyness(sys_slist_t *list)
DECL|verify_tail_head|function|static inline bool verify_tail_head(sys_slist_t *list, sys_snode_t *head, sys_snode_t *tail, bool same)
