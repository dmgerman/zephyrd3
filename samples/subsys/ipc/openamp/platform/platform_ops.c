DECL|alloc_shm|function|static struct metal_io_region *alloc_shm(struct hil_proc *proc, metal_phys_addr_t physical, size_t size, struct metal_device **device)
DECL|boot_cpu|function|static int boot_cpu(struct hil_proc *proc, unsigned int load_addr)
DECL|enable_interrupt|function|static int enable_interrupt(struct proc_intr *intr)
DECL|initialize|function|static int initialize(struct hil_proc *proc)
DECL|ipm_handle|variable|ipm_handle
DECL|notify|function|static void notify(struct hil_proc *proc, struct proc_intr *intr_info)
DECL|platform_ipm_callback|function|static void platform_ipm_callback(void *context, u32_t id, volatile void *data)
DECL|platform_ops|variable|platform_ops
DECL|poll|function|static int poll(struct hil_proc *proc, int nonblock)
DECL|release_shm|function|static void release_shm(struct hil_proc *proc, struct metal_device *device,struct metal_io_region *io)
DECL|release|function|static void release(struct hil_proc *proc)
DECL|shutdown_cpu|function|static void shutdown_cpu(struct hil_proc *proc)
