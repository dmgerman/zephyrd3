DECL|find_in_list|function|static mqueue_object *find_in_list(const char *name)
DECL|flags|member|u32_t flags;
DECL|mem_buffer|member|char *mem_buffer;
DECL|mem_desc|member|char *mem_desc;
DECL|mem_obj|member|char *mem_obj;
DECL|mq_close|function|int mq_close(mqd_t mqdes)
DECL|mq_getattr|function|int mq_getattr(mqd_t mqdes, struct mq_attr *mqstat)
DECL|mq_list|variable|mq_list
DECL|mq_open|function|mqd_t mq_open(const char *name, int oflags, ...)
DECL|mq_receive|function|int mq_receive(mqd_t mqdes, char *msg_ptr, size_t msg_len, unsigned int *msg_prio)
DECL|mq_send|function|int mq_send(mqd_t mqdes, const char *msg_ptr, size_t msg_len, unsigned int msg_prio)
DECL|mq_setattr|function|int mq_setattr(mqd_t mqdes, const struct mq_attr *mqstat, struct mq_attr *omqstat)
DECL|mq_timedreceive|function|int mq_timedreceive(mqd_t mqdes, char *msg_ptr, size_t msg_len,unsigned int *msg_prio, const struct timespec *abstime)
DECL|mq_timedsend|function|int mq_timedsend(mqd_t mqdes, const char *msg_ptr, size_t msg_len, unsigned int msg_prio, const struct timespec *abstime)
DECL|mq_unlink|function|int mq_unlink(const char *name)
DECL|mqueue_desc|struct|typedef struct mqueue_desc {
DECL|mqueue_desc|typedef|} mqueue_desc;
DECL|mqueue_object|struct|typedef struct mqueue_object {
DECL|mqueue_object|typedef|} mqueue_object;
DECL|mqueue|member|mqueue_object *mqueue;
DECL|name|member|char *name;
DECL|queue|member|struct k_msgq queue;
DECL|receive_message|function|static s32_t receive_message(mqueue_desc *mqd, char *msg_ptr, size_t msg_len, s32_t timeout)
DECL|ref_count|member|atomic_t ref_count;
DECL|remove_mq|function|static void remove_mq(mqueue_object *msg_queue)
DECL|send_message|function|static s32_t send_message(mqueue_desc *mqd, const char *msg_ptr, size_t msg_len, s32_t timeout)
DECL|snode|member|sys_snode_t snode;
