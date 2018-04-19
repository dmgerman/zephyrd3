DECL|MAX_DRIVERS|macro|MAX_DRIVERS
DECL|bus_name|member|const char *bus_name;
DECL|bus|member|struct metal_bus bus;
DECL|cls_name|member|const char *cls_name;
DECL|cls_path|member|char cls_path[PATH_MAX];
DECL|dev_close|member|void (*dev_close)(struct linux_bus *lbus,
DECL|dev_dma_map|member|int (*dev_dma_map)(struct linux_bus *lbus,
DECL|dev_dma_unmap|member|void (*dev_dma_unmap)(struct linux_bus *lbus,
DECL|dev_irq_ack|member|void (*dev_irq_ack)(struct linux_bus *lbus,
DECL|dev_name|member|char dev_name[PATH_MAX];
DECL|dev_open|member|int (*dev_open)(struct linux_bus *lbus,
DECL|dev_path|member|char dev_path[PATH_MAX];
DECL|device|member|struct metal_device device;
DECL|drivers|member|struct linux_driver drivers[MAX_DRIVERS];
DECL|drv_name|member|const char *drv_name;
DECL|fd|member|int fd;
DECL|for_each_linux_bus|macro|for_each_linux_bus
DECL|for_each_linux_driver|macro|for_each_linux_driver
DECL|ldrv|member|struct linux_driver *ldrv;
DECL|linux_bus|struct|struct linux_bus {
DECL|linux_bus|variable|linux_bus
DECL|linux_device|struct|struct linux_device {
DECL|linux_driver|struct|struct linux_driver {
DECL|metal_generic_dev_sys_open|function|int metal_generic_dev_sys_open(struct metal_device *dev)
DECL|metal_linux_bus_close|function|static void metal_linux_bus_close(struct metal_bus *bus)
DECL|metal_linux_bus_finish|function|void metal_linux_bus_finish(void)
DECL|metal_linux_bus_init|function|int metal_linux_bus_init(void)
DECL|metal_linux_bus_ops|variable|metal_linux_bus_ops
DECL|metal_linux_dev_close|function|static void metal_linux_dev_close(struct metal_bus *bus, struct metal_device *device)
DECL|metal_linux_dev_dma_map|function|static int metal_linux_dev_dma_map(struct metal_bus *bus, struct metal_device *device, uint32_t dir, struct metal_sg *sg_in, int nents_in,
DECL|metal_linux_dev_dma_unmap|function|static void metal_linux_dev_dma_unmap(struct metal_bus *bus, struct metal_device *device, uint32_t dir, struct metal_sg *sg, int nents)
DECL|metal_linux_dev_irq_ack|function|static void metal_linux_dev_irq_ack(struct metal_bus *bus, struct metal_device *device, int irq)
DECL|metal_linux_dev_open|function|static int metal_linux_dev_open(struct metal_bus *bus,const char *dev_name, struct metal_device **device)
DECL|metal_linux_probe_bus|function|static int metal_linux_probe_bus(struct linux_bus *lbus)
DECL|metal_linux_probe_driver|function|static int metal_linux_probe_driver(struct linux_bus *lbus, struct linux_driver *ldrv)
DECL|metal_linux_register_bus|function|static int metal_linux_register_bus(struct linux_bus *lbus)
DECL|metal_uio_dev_bind|function|static int metal_uio_dev_bind(struct linux_device *ldev, struct linux_driver *ldrv)
DECL|metal_uio_dev_close|function|static void metal_uio_dev_close(struct linux_bus *lbus,struct linux_device *ldev)
DECL|metal_uio_dev_dma_map|function|static int metal_uio_dev_dma_map(struct linux_bus *lbus, struct linux_device *ldev, uint32_t dir, struct metal_sg *sg_in, int nents_in,
DECL|metal_uio_dev_dma_unmap|function|static void metal_uio_dev_dma_unmap(struct linux_bus *lbus, struct linux_device *ldev, uint32_t dir, struct metal_sg *sg, int nents)
DECL|metal_uio_dev_irq_ack|function|static void metal_uio_dev_irq_ack(struct linux_bus *lbus, struct linux_device *ldev, int irq)
DECL|metal_uio_dev_open|function|static int metal_uio_dev_open(struct linux_bus *lbus, struct linux_device *ldev)
DECL|metal_uio_read_map_attr|function|static int metal_uio_read_map_attr(struct linux_device *ldev, unsigned index, const char *name, unsigned long *value)
DECL|mod_name|member|const char *mod_name;
DECL|override|member|struct sysfs_attribute *override;
DECL|region_phys|member|metal_phys_addr_t region_phys[METAL_MAX_DEVICE_REGIONS];
DECL|sbus|member|struct sysfs_bus *sbus;
DECL|sdev|member|struct sysfs_device *sdev;
DECL|sdrv|member|struct sysfs_driver *sdrv;
DECL|to_linux_bus|function|static struct linux_bus *to_linux_bus(struct metal_bus *bus)
DECL|to_linux_device|function|static struct linux_device *to_linux_device(struct metal_device *device)
