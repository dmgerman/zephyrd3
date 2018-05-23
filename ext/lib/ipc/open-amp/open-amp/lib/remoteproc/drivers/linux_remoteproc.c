DECL|MAX_VRING_MEM_SIZE|macro|MAX_VRING_MEM_SIZE
DECL|UNIXS_PREFIX|macro|UNIXS_PREFIX
DECL|UNIX_PREFIX|macro|UNIX_PREFIX
DECL|_alloc_shm|function|static struct metal_io_region* _alloc_shm(struct hil_proc *proc,metal_phys_addr_t pa, size_t size, struct metal_device **dev)
DECL|_boot_cpu|function|static int _boot_cpu(struct hil_proc *proc, unsigned int load_addr)
DECL|_create_vring_io|function|static struct metal_io_region *_create_vring_io(struct metal_io_region *in_io,int start_phy)
DECL|_enable_interrupt|function|static int _enable_interrupt(struct proc_intr *intr)
DECL|_initialize|function|static int _initialize(struct hil_proc *proc)
DECL|_ipi_handler|function|static int _ipi_handler(int vect_id, void *data)
DECL|_notify|function|static void _notify(struct hil_proc *proc, struct proc_intr *intr_info)
DECL|_poll|function|static int _poll(struct hil_proc *proc, int nonblock)
DECL|_release_shm|function|static void _release_shm(struct hil_proc *proc,struct metal_device *dev, struct metal_io_region *io)
DECL|_release|function|static void _release(struct hil_proc *proc)
DECL|_rproc_wait|macro|_rproc_wait
DECL|_shutdown_cpu|function|static void _shutdown_cpu(struct hil_proc *proc)
DECL|event_open|function|static int event_open(const char *descr)
DECL|fd|member|int fd;
DECL|linux_proc_ops|variable|linux_proc_ops
DECL|path|member|char *path;
DECL|sk_unix_client|function|static int sk_unix_client(const char *descr)
DECL|sk_unix_server|function|static int sk_unix_server(const char *descr)
DECL|sync|member|atomic_int sync;
DECL|vring_io|member|struct metal_io_region *vring_io;
DECL|vring_ipi_info|struct|struct vring_ipi_info {
