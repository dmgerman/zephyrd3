DECL|_DLIST_H|macro|_DLIST_H
DECL|dlist_t|typedef|} dlist_t, dnode_t;
DECL|dnode_s|struct|typedef struct dnode_s {
DECL|dnode_t|typedef|} dlist_t, dnode_t;
DECL|head|member|struct dnode_s *head; /* ptr to head of list (dlist_t) */
DECL|next|member|struct dnode_s *next; /* ptr to next node (dnode_t) */
DECL|prev|member|struct dnode_s *prev; /* ptr to previous node (dnode_t) */
DECL|tail|member|struct dnode_s *tail; /* ptr to tail of list (dlist_t) */
