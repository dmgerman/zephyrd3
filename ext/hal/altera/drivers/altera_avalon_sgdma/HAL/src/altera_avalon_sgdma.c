DECL|alt_avalon_sgdma_check_descriptor_status|function|int alt_avalon_sgdma_check_descriptor_status(alt_sgdma_descriptor *desc)
DECL|alt_avalon_sgdma_construct_descriptor_burst|function|void alt_avalon_sgdma_construct_descriptor_burst( alt_sgdma_descriptor *desc, alt_sgdma_descriptor *next, alt_u32 *read_addr, alt_u32 *write_addr,
DECL|alt_avalon_sgdma_construct_descriptor|function|void alt_avalon_sgdma_construct_descriptor( alt_sgdma_descriptor *desc, alt_sgdma_descriptor *next, alt_u32 *read_addr, alt_u32 *write_addr,
DECL|alt_avalon_sgdma_construct_mem_to_mem_desc_burst|function|void alt_avalon_sgdma_construct_mem_to_mem_desc_burst( alt_sgdma_descriptor *desc, alt_sgdma_descriptor *next, alt_u32 *read_addr, alt_u32 *write_addr,
DECL|alt_avalon_sgdma_construct_mem_to_mem_desc|function|void alt_avalon_sgdma_construct_mem_to_mem_desc( alt_sgdma_descriptor *desc, alt_sgdma_descriptor *next, alt_u32 *read_addr, alt_u32 *write_addr,
DECL|alt_avalon_sgdma_construct_mem_to_stream_desc_burst|function|void alt_avalon_sgdma_construct_mem_to_stream_desc_burst( alt_sgdma_descriptor *desc, alt_sgdma_descriptor *next, alt_u32 *read_addr, alt_u16 length,
DECL|alt_avalon_sgdma_construct_mem_to_stream_desc|function|void alt_avalon_sgdma_construct_mem_to_stream_desc( alt_sgdma_descriptor *desc, alt_sgdma_descriptor *next, alt_u32 *read_addr, alt_u16 length,
DECL|alt_avalon_sgdma_construct_stream_to_mem_desc_burst|function|void alt_avalon_sgdma_construct_stream_to_mem_desc_burst( alt_sgdma_descriptor *desc, alt_sgdma_descriptor *next, alt_u32 *write_addr, alt_u16 length_or_eop,
DECL|alt_avalon_sgdma_construct_stream_to_mem_desc|function|void alt_avalon_sgdma_construct_stream_to_mem_desc( alt_sgdma_descriptor *desc, alt_sgdma_descriptor *next, alt_u32 *write_addr, alt_u16 length_or_eop,
DECL|alt_avalon_sgdma_disable_desc_poll|function|void alt_avalon_sgdma_disable_desc_poll(alt_sgdma_dev *dev)
DECL|alt_avalon_sgdma_do_async_transfer|function|int alt_avalon_sgdma_do_async_transfer( alt_sgdma_dev *dev, alt_sgdma_descriptor *desc)
DECL|alt_avalon_sgdma_do_sync_transfer|function|alt_u8 alt_avalon_sgdma_do_sync_transfer( alt_sgdma_dev *dev, alt_sgdma_descriptor *desc)
DECL|alt_avalon_sgdma_enable_desc_poll|function|void alt_avalon_sgdma_enable_desc_poll(alt_sgdma_dev *dev, alt_u32 frequency)
DECL|alt_avalon_sgdma_init|function|void alt_avalon_sgdma_init (alt_sgdma_dev *dev, alt_u32 ic_id, alt_u32 irq)
DECL|alt_avalon_sgdma_irq|function|static void alt_avalon_sgdma_irq(void *context)
DECL|alt_avalon_sgdma_open|function|alt_sgdma_dev* alt_avalon_sgdma_open (const char* name)
DECL|alt_avalon_sgdma_register_callback|function|void alt_avalon_sgdma_register_callback( alt_sgdma_dev *dev, alt_avalon_sgdma_callback callback, alt_u32 chain_control, void *context)
DECL|alt_avalon_sgdma_start|function|void alt_avalon_sgdma_start(alt_sgdma_dev *dev)
DECL|alt_avalon_sgdma_stop|function|void alt_avalon_sgdma_stop(alt_sgdma_dev *dev)
DECL|alt_sgdma_list|variable|alt_sgdma_list
