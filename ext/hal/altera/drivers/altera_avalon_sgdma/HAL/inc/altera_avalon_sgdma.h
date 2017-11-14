DECL|ALTERA_AVALON_SGDMA_INIT|macro|ALTERA_AVALON_SGDMA_INIT
DECL|ALTERA_AVALON_SGDMA_INSTANCE|macro|ALTERA_AVALON_SGDMA_INSTANCE
DECL|__ALTERA_AVALON_SGDMA_H__|macro|__ALTERA_AVALON_SGDMA_H__
DECL|alt_avalon_sgdma_callback|typedef|typedef void (*alt_avalon_sgdma_callback)(void *context);
DECL|alt_sgdma_dev|struct|typedef struct alt_sgdma_dev
DECL|alt_sgdma_dev|typedef|} alt_sgdma_dev;
DECL|base|member|void *base; // Base address of SGDMA
DECL|callback_context|member|void *callback_context; // Callback context pointer
DECL|callback|member|alt_avalon_sgdma_callback callback; // Callback routine pointer
DECL|chain_control|member|alt_u32 chain_control; // Value OR'd into control reg
DECL|current_descriptor|member|alt_sgdma_descriptor *current_descriptor; // reserved
DECL|descriptor_base|member|alt_u32 *descriptor_base; // reserved
DECL|llist|member|alt_llist llist; // Device linked-list entry
DECL|name|member|const char *name; // Name of SGDMA in SOPC System
DECL|next_descriptor|member|alt_sgdma_descriptor *next_descriptor; // reserved
DECL|next_index|member|alt_u32 next_index; // reserved
DECL|num_descriptors|member|alt_u32 num_descriptors; // reserved
