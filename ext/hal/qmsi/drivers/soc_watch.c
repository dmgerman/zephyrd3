DECL|AVG_EVENT_SIZE|macro|AVG_EVENT_SIZE
DECL|MLOG_BYTE|macro|MLOG_BYTE
DECL|MLOG_BYTE|macro|MLOG_BYTE
DECL|MLOG_SIZE|macro|MLOG_SIZE
DECL|MLOG|macro|MLOG
DECL|MLOG|macro|MLOG
DECL|NONUTSTATIC|macro|NONUTSTATIC
DECL|NONUTSTATIC|macro|NONUTSTATIC
DECL|SOC_WATCH_EVENT_BUFFER_SIZE|macro|SOC_WATCH_EVENT_BUFFER_SIZE
DECL|SOC_WATCH_TRACE|macro|SOC_WATCH_TRACE
DECL|SOC_WATCH_TRACE|macro|SOC_WATCH_TRACE
DECL|SW_EB_HIGH_WATER|macro|SW_EB_HIGH_WATER
DECL|eb_idx|member|uint8_t eb_idx; /* Index of next byte to be written */
DECL|eb_size|member|uint8_t eb_size; /* Buffer size == SOC_WATCH_EVENT_BUFFER_SIZE */
DECL|eb_write_char|function|static void eb_write_char(uint8_t data)
DECL|eb_write_uint32|function|static void eb_write_uint32(uint32_t *data)
DECL|ev_strs|variable|ev_strs
DECL|event_data|member|uint8_t event_data[SOC_WATCH_EVENT_BUFFER_SIZE - 2]; /* Event data -
DECL|mlog_byte|function|void mlog_byte(uint8_t byte)
DECL|mlog_events|variable|mlog_events
DECL|mlog_idx|variable|mlog_idx
DECL|mlog|function|void mlog(uint8_t event)
DECL|platform_regs|variable|platform_regs
DECL|platform_regs|variable|platform_regs
DECL|soc_watch_buffer_full|function|NONUTSTATIC int soc_watch_buffer_full(void)
DECL|soc_watch_event_buffer_flush|function|static void soc_watch_event_buffer_flush(void)
DECL|soc_watch_event_buffer|variable|soc_watch_event_buffer
DECL|soc_watch_flush_flag|variable|soc_watch_flush_flag
DECL|soc_watch_log_app_event|function|void soc_watch_log_app_event(soc_watch_event_t event_id, uint8_t ev_subtype, uintptr_t ev_data)
DECL|soc_watch_log_event|function|void soc_watch_log_event(soc_watch_event_t event_id, uintptr_t ev_data)
DECL|sw_profiling_event_buffer|struct|struct sw_profiling_event_buffer {
