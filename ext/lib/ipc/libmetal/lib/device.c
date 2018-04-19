DECL|metal_bus_find|function|int metal_bus_find(const char *name, struct metal_bus **result)
DECL|metal_bus_register|function|int metal_bus_register(struct metal_bus *bus)
DECL|metal_bus_unregister|function|int metal_bus_unregister(struct metal_bus *bus)
DECL|metal_device_close|function|void metal_device_close(struct metal_device *device)
DECL|metal_device_open|function|int metal_device_open(const char *bus_name, const char *dev_name, struct metal_device **device)
DECL|metal_generic_bus|variable|metal_generic_bus
DECL|metal_generic_dev_dma_map|function|int metal_generic_dev_dma_map(struct metal_bus *bus, struct metal_device *device, uint32_t dir, struct metal_sg *sg_in, int nents_in,
DECL|metal_generic_dev_dma_unmap|function|void metal_generic_dev_dma_unmap(struct metal_bus *bus, struct metal_device *device, uint32_t dir, struct metal_sg *sg, int nents)
DECL|metal_generic_dev_open|function|int metal_generic_dev_open(struct metal_bus *bus, const char *dev_name, struct metal_device **device)
DECL|metal_register_generic_device|function|int metal_register_generic_device(struct metal_device *device)
