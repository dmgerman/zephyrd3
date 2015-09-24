DECL|DEBUG|macro|DEBUG
DECL|PROCESS_THREAD|function|PROCESS_THREAD(etimer_process, ev, data, buf)
DECL|add_timer|function|add_timer(struct etimer *timer)
DECL|etimer_adjust|function|etimer_adjust(struct etimer *et, int timediff)
DECL|etimer_expiration_time|function|etimer_expiration_time(struct etimer *et)
DECL|etimer_expired|function|etimer_expired(struct etimer *et)
DECL|etimer_is_triggered|function|bool etimer_is_triggered(struct etimer *t)
DECL|etimer_next_expiration_time|function|etimer_next_expiration_time(void)
DECL|etimer_pending|function|etimer_pending(void)
DECL|etimer_request_poll|function|etimer_request_poll(void)
DECL|etimer_reset|function|etimer_reset(struct etimer *et)
DECL|etimer_restart|function|etimer_restart(struct etimer *et)
DECL|etimer_set_triggered|function|void etimer_set_triggered(struct etimer *t)
DECL|etimer_set|function|etimer_set(struct etimer *et, clock_time_t interval, struct process *p)
DECL|etimer_start_time|function|etimer_start_time(struct etimer *et)
DECL|etimer_stop|function|etimer_stop(struct etimer *et)
DECL|next_expiration|variable|next_expiration
DECL|timerlist|variable|timerlist
DECL|update_time|function|update_time(void)
