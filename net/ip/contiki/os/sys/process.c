DECL|DEBUG|macro|DEBUG
DECL|PROCESS_STATE_CALLED|macro|PROCESS_STATE_CALLED
DECL|PROCESS_STATE_NONE|macro|PROCESS_STATE_NONE
DECL|PROCESS_STATE_RUNNING|macro|PROCESS_STATE_RUNNING
DECL|UIP_LOG|macro|UIP_LOG
DECL|UIP_LOG|macro|UIP_LOG
DECL|call_process|function|call_process(struct process *p, process_event_t ev, process_data_t data,struct net_buf *buf)
DECL|data|member|process_data_t data;
DECL|do_event|function|do_event(struct net_buf *buf)
DECL|do_poll|function|do_poll(struct net_buf *buf)
DECL|event_data|struct|struct event_data {
DECL|events|variable|events
DECL|ev|member|process_event_t ev;
DECL|exit_process|function|exit_process(struct process *p, struct process *fromprocess, struct net_buf *buf)
DECL|fevent|variable|fevent
DECL|lastevent|variable|lastevent
DECL|nevents|variable|nevents
DECL|poll_requested|variable|poll_requested
DECL|process_alloc_event|function|process_alloc_event(void)
DECL|process_current|variable|process_current
DECL|process_exit|function|process_exit(struct process *p)
DECL|process_init|function|process_init(void)
DECL|process_is_running|function|process_is_running(struct process *p)
DECL|process_list|variable|process_list
DECL|process_maxevents|variable|process_maxevents
DECL|process_nevents|function|process_nevents(void)
DECL|process_poll|function|process_poll(struct process *p)
DECL|process_post_synch|function|process_post_synch(struct process *p, process_event_t ev, process_data_t data, struct net_buf *buf)
DECL|process_post|function|process_post(struct process *p, process_event_t ev, process_data_t data)
DECL|process_run|function|process_run(struct net_buf *buf)
DECL|process_start|function|process_start(struct process *p, process_data_t data)
DECL|p|member|struct process *p;
