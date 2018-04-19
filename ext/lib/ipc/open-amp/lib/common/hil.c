DECL|DEFAULT_VRING_MEM_SIZE|macro|DEFAULT_VRING_MEM_SIZE
DECL|HIL_DEV_NAME_PREFIX|macro|HIL_DEV_NAME_PREFIX
DECL|boot_time_stamp|variable|boot_time_stamp
DECL|device|member|struct metal_device device;
DECL|hil_boot_cpu|function|int hil_boot_cpu(struct hil_proc *proc, unsigned int start_addr)
DECL|hil_close_generic_mem_dev|function|void hil_close_generic_mem_dev(struct metal_device *dev)
DECL|hil_create_generic_mem_dev|function|struct metal_device *hil_create_generic_mem_dev(metal_phys_addr_t pa, size_t size, unsigned int flags)
DECL|hil_create_proc|function|struct hil_proc *hil_create_proc(struct hil_platform_ops *ops,unsigned long cpu_id, void *pdata)
DECL|hil_delete_proc|function|void hil_delete_proc(struct hil_proc *proc)
DECL|hil_enable_vdev_notification|function|int hil_enable_vdev_notification(struct hil_proc *proc, int id)
DECL|hil_enable_vring_notifications|function|int hil_enable_vring_notifications(int vring_index, struct virtqueue *vq)
DECL|hil_free_vqs|function|void hil_free_vqs(struct virtio_device *vdev)
DECL|hil_generic_start_paddr|variable|hil_generic_start_paddr
DECL|hil_get_chnl_info|function|struct proc_chnl *hil_get_chnl_info(struct hil_proc *proc, int *num_chnls)
DECL|hil_get_firmware|function|int hil_get_firmware(char *fw_name, uintptr_t *start_addr, unsigned int *size)
DECL|hil_get_mem_io|function|static struct metal_io_region *hil_get_mem_io(struct metal_device *dev, metal_phys_addr_t pa, size_t size)
DECL|hil_get_shm_info|function|struct proc_shm *hil_get_shm_info(struct hil_proc *proc)
DECL|hil_get_status|function|int hil_get_status(struct hil_proc *proc)
DECL|hil_get_vdev_info|function|struct proc_vdev *hil_get_vdev_info(struct hil_proc *proc)
DECL|hil_get_vring_info|function|struct proc_vring *hil_get_vring_info(struct proc_vdev *vdev, int *num_vrings)
DECL|hil_init_proc|function|int hil_init_proc(struct hil_proc *proc)
DECL|hil_mem_device|struct|struct hil_mem_device {
DECL|hil_notified|function|void hil_notified(struct hil_proc *proc, uint32_t notifyid)
DECL|hil_poll|function|int hil_poll (struct hil_proc *proc, int nonblock)
DECL|hil_set_rpmsg_channel|function|int hil_set_rpmsg_channel (struct hil_proc *proc, int index, char *name)
DECL|hil_set_rsc|function|int hil_set_rsc (struct hil_proc *proc,const char *bus_name, const char *name, metal_phys_addr_t paddr, size_t size)
DECL|hil_set_shm|function|int hil_set_shm (struct hil_proc *proc, const char *bus_name, const char *name, metal_phys_addr_t paddr, size_t size)
DECL|hil_set_status|function|int hil_set_status(struct hil_proc *proc)
DECL|hil_set_vdev_ipi|function|int hil_set_vdev_ipi (struct hil_proc *proc, int index, unsigned int irq, void *data)
DECL|hil_set_vdev_rst_cb|function|int hil_set_vdev_rst_cb (struct hil_proc *proc, int index,hil_proc_vdev_rst_cb_t cb)
DECL|hil_set_vring_ipi|function|int hil_set_vring_ipi (struct hil_proc *proc, int index, unsigned int irq, void *data)
DECL|hil_set_vring|function|int hil_set_vring (struct hil_proc *proc, int index, const char *bus_name, const char *name, metal_phys_addr_t paddr, size_t size)
DECL|hil_shm_block_set|function|static void hil_shm_block_set(struct metal_io_region *io,unsigned long offset, unsigned char value, memory_order order, int len)
DECL|hil_shm_block_write|function|static int hil_shm_block_write(struct metal_io_region *io,unsigned long offset, const void *restrict src, memory_order order, int len)
DECL|hil_shm_generic_io|variable|hil_shm_generic_io
DECL|hil_shutdown_cpu|function|void hil_shutdown_cpu(struct hil_proc *proc)
DECL|hil_vdev_notify|function|void hil_vdev_notify(struct virtio_device *vdev)
DECL|hil_vring_notify|function|void hil_vring_notify(struct virtqueue *vq)
DECL|name|member|char name[64];
DECL|pa|member|metal_phys_addr_t pa;
DECL|shutdown_time_stamp|variable|shutdown_time_stamp
