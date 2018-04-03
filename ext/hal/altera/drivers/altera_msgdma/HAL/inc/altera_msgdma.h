DECL|ALTERA_MSGDMA_CSR_DESCRIPTOR_SLAVE_INSTANCE|macro|ALTERA_MSGDMA_CSR_DESCRIPTOR_SLAVE_INSTANCE
DECL|ALTERA_MSGDMA_CSR_DESCRIPTOR_SLAVE_RESPONSE_INSTANCE|macro|ALTERA_MSGDMA_CSR_DESCRIPTOR_SLAVE_RESPONSE_INSTANCE
DECL|ALTERA_MSGDMA_CSR_PREFETCHER_CSR_INSTANCE|macro|ALTERA_MSGDMA_CSR_PREFETCHER_CSR_INSTANCE
DECL|ALTERA_MSGDMA_INIT|macro|ALTERA_MSGDMA_INIT
DECL|__ALTERA_MSGDMA_H__|macro|__ALTERA_MSGDMA_H__
DECL|_pad1_rsvd|member|alt_u16 _pad1_rsvd;
DECL|_pad1_rsvd|member|alt_u16 _pad1_rsvd;
DECL|_pad2_rsvd|member|alt_u32 _pad2_rsvd;
DECL|_pad2_rsvd|member|alt_u32 _pad2_rsvd;
DECL|_pad3_rsvd|member|alt_u32 _pad3_rsvd[3];
DECL|alt_msgdma_callback|typedef|typedef void (*alt_msgdma_callback)(void *context);
DECL|alt_msgdma_dev|struct|typedef struct alt_msgdma_dev
DECL|alt_msgdma_dev|typedef|} alt_msgdma_dev;
DECL|alt_msgdma_extended_descriptor_packed|macro|alt_msgdma_extended_descriptor_packed
DECL|alt_msgdma_extended_descriptor|typedef|} alt_msgdma_extended_descriptor_packed alt_msgdma_extended_descriptor;
DECL|alt_msgdma_prefetcher_extended_descriptor_packed|macro|alt_msgdma_prefetcher_extended_descriptor_packed
DECL|alt_msgdma_prefetcher_extended_descriptor|typedef|} alt_msgdma_prefetcher_extended_descriptor_packed alt_msgdma_prefetcher_extended_descriptor;
DECL|alt_msgdma_prefetcher_standard_descriptor_packed|macro|alt_msgdma_prefetcher_standard_descriptor_packed
DECL|alt_msgdma_prefetcher_standard_descriptor|typedef|} alt_msgdma_prefetcher_standard_descriptor_packed alt_msgdma_prefetcher_standard_descriptor;
DECL|alt_msgdma_response_packed|macro|alt_msgdma_response_packed
DECL|alt_msgdma_standard_descriptor_packed|macro|alt_msgdma_standard_descriptor_packed
DECL|alt_msgdma_standard_descriptor|typedef|} alt_msgdma_standard_descriptor_packed alt_msgdma_standard_descriptor;
DECL|burst_enable|member|alt_u8 burst_enable;
DECL|burst_wrapping_support|member|alt_u8 burst_wrapping_support;
DECL|bytes_transfered|member|alt_u32 bytes_transfered;
DECL|bytes_transfered|member|alt_u32 bytes_transfered;
DECL|callback_context|member|void *callback_context;
DECL|callback|member|alt_msgdma_callback callback;
DECL|control|member|alt_u32 control;
DECL|control|member|alt_u32 control;
DECL|control|member|alt_u32 control;
DECL|control|member|alt_u32 control;
DECL|control|member|alt_u32 control;
DECL|csr_base|member|alt_u32 *csr_base;
DECL|data_fifo_depth|member|alt_u32 data_fifo_depth;
DECL|data_width|member|alt_u32 data_width;
DECL|descriptor_base|member|alt_u32 *descriptor_base;
DECL|descriptor_fifo_depth|member|alt_u32 descriptor_fifo_depth;
DECL|enhanced_features|member|alt_u8 enhanced_features;
DECL|irq_ID|member|alt_u32 irq_ID;
DECL|irq_controller_ID|member|alt_u32 irq_controller_ID;
DECL|llist|member|alt_llist llist;
DECL|max_burst_count|member|alt_u32 max_burst_count;
DECL|max_byte|member|alt_u32 max_byte;
DECL|max_stride|member|alt_u64 max_stride;
DECL|msgdma_addr64|typedef|} msgdma_addr64;
DECL|name|member|const char *name;
DECL|next_desc_ptr_high|member|alt_u32 next_desc_ptr_high;
DECL|next_desc_ptr_low|member|alt_u32 next_desc_ptr_low;
DECL|next_desc_ptr|member|alt_u32 next_desc_ptr;
DECL|prefetcher_base|member|alt_u32 *prefetcher_base;
DECL|prefetcher_enable|member|alt_u8 prefetcher_enable;
DECL|programmable_burst_enable|member|alt_u8 programmable_burst_enable;
DECL|read_address_high|member|alt_u32 *read_address_high;
DECL|read_address_high|member|alt_u32 read_address_high;
DECL|read_address_low|member|alt_u32 *read_address_low;
DECL|read_address_low|member|alt_u32 read_address_low;
DECL|read_address|member|alt_u32 *read_address;
DECL|read_address|member|alt_u32 read_address;
DECL|read_burst_count|member|alt_u8 read_burst_count;
DECL|read_burst_count|member|alt_u8 read_burst_count;
DECL|read_stride|member|alt_u16 read_stride;
DECL|read_stride|member|alt_u16 read_stride;
DECL|response_base|member|alt_u32 *response_base;
DECL|response_fifo_depth|member|alt_u32 response_fifo_depth;
DECL|response_port|member|alt_u8 response_port;
DECL|sequence_number|member|alt_u16 sequence_number;
DECL|sequence_number|member|alt_u16 sequence_number;
DECL|status|member|alt_u16 status;
DECL|status|member|alt_u16 status;
DECL|stride_enable|member|alt_u8 stride_enable;
DECL|transfer_length|member|alt_u32 transfer_length;
DECL|transfer_length|member|alt_u32 transfer_length;
DECL|transfer_length|member|alt_u32 transfer_length;
DECL|transfer_length|member|alt_u32 transfer_length;
DECL|transfer_type|member|const char *transfer_type;
DECL|u32|member|alt_u32 u32[2];
DECL|u64|member|alt_u64 u64;
DECL|write_address_high|member|alt_u32 *write_address_high;
DECL|write_address_high|member|alt_u32 write_address_high;
DECL|write_address_low|member|alt_u32 *write_address_low;
DECL|write_address_low|member|alt_u32 write_address_low;
DECL|write_address|member|alt_u32 *write_address;
DECL|write_address|member|alt_u32 write_address;
DECL|write_burst_count|member|alt_u8 write_burst_count;
DECL|write_burst_count|member|alt_u8 write_burst_count;
DECL|write_stride|member|alt_u16 write_stride;
DECL|write_stride|member|alt_u16 write_stride;
