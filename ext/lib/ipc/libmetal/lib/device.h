DECL|METAL_MAX_DEVICE_REGIONS|macro|METAL_MAX_DEVICE_REGIONS
DECL|__METAL_BUS__H__|macro|__METAL_BUS__H__
DECL|bus_close|member|void (*bus_close)(struct metal_bus *bus);
DECL|bus|member|struct metal_bus *bus; /**< Bus that contains device */
DECL|dev_close|member|void (*dev_close)(struct metal_bus *bus,
DECL|dev_dma_map|member|int (*dev_dma_map)(struct metal_bus *bus,
DECL|dev_dma_unmap|member|void (*dev_dma_unmap)(struct metal_bus *bus,
DECL|dev_irq_ack|member|void (*dev_irq_ack)(struct metal_bus *bus,
DECL|dev_open|member|int (*dev_open)(struct metal_bus *bus,
DECL|devices|member|struct metal_list devices;
DECL|irq_info|member|void *irq_info; /**< IRQ ID */
DECL|irq_num|member|int irq_num; /**< Number of IRQs per device */
DECL|metal_bus_ops|struct|struct metal_bus_ops {
DECL|metal_bus|struct|struct metal_bus {
DECL|metal_device_io_region|function|metal_device_io_region(struct metal_device *device, unsigned index)
DECL|metal_device|struct|struct metal_device {
DECL|name|member|const char *name;
DECL|name|member|const char *name; /**< Device name */
DECL|node|member|struct metal_list node;
DECL|node|member|struct metal_list node; /**< Node on bus' list of devices */
DECL|num_regions|member|unsigned num_regions; /**< Number of I/O regions in
DECL|ops|member|struct metal_bus_ops ops;
DECL|regions|member|struct metal_io_region regions[METAL_MAX_DEVICE_REGIONS]; /**< Array of
