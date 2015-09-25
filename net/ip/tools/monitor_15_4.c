DECL|DBG|macro|DBG
DECL|DEBUG_FLAG_DEFAULT|macro|DEBUG_FLAG_DEFAULT
DECL|DEBUG_FLAG_PRINT|macro|DEBUG_FLAG_PRINT
DECL|DUMMY_RADIO_15_4_FRAME_TYPE|macro|DUMMY_RADIO_15_4_FRAME_TYPE
DECL|EXTRA_DEBUG|macro|EXTRA_DEBUG
DECL|PCAP_HDR_SIZE|macro|PCAP_HDR_SIZE
DECL|PCAP_PKT_SIZE|macro|PCAP_PKT_SIZE
DECL|PIPE_IN|macro|PIPE_IN
DECL|PIPE_OUT|macro|PIPE_OUT
DECL|closed|member|bool closed;
DECL|debug_desc|struct|struct debug_desc {
DECL|debug|function|void debug(const char *format, ...)
DECL|fd1_in|variable|fd1_in
DECL|fd2_in|variable|fd2_in
DECL|fd|member|int fd;
DECL|fifo_handler1|function|static gboolean fifo_handler1(GIOChannel *channel, GIOCondition cond,gpointer user_data)
DECL|fifo_handler2|function|static gboolean fifo_handler2(GIOChannel *channel, GIOCondition cond,gpointer user_data)
DECL|file|member|const char *file;
DECL|flags|member|unsigned int flags;
DECL|incl_len|member|uint32_t incl_len; /* number of octets of packet saved in file */
DECL|input1_len|variable|input1_len
DECL|input1_offset|variable|input1_offset
DECL|input1_type|variable|input1_type
DECL|input1|variable|input1
DECL|input2_len|variable|input2_len
DECL|input2_offset|variable|input2_offset
DECL|input2_type|variable|input2_type
DECL|input2|variable|input2
DECL|log_cleanup|function|void log_cleanup(void)
DECL|log_init|function|int log_init(const char *debug, gboolean detach, gboolean perror)
DECL|magic_number|member|uint32_t magic_number; /* magic number */
DECL|main_loop|variable|main_loop
DECL|main|function|int main(int argc, char *argv[])
DECL|name|member|const char *name;
DECL|network|member|uint32_t network; /* data link type */
DECL|orig_len|member|uint32_t orig_len; /* actual length of packet */
DECL|path|variable|path
DECL|pcap_close|function|void pcap_close(struct pcap *pcap)
DECL|pcap_create|function|struct pcap *pcap_create(const char *pathname)
DECL|pcap_hdr|struct|struct pcap_hdr {
DECL|pcap_open|function|struct pcap *pcap_open(const char *pathname)
DECL|pcap_pkt|struct|struct pcap_pkt {
DECL|pcap_write|function|bool pcap_write(struct pcap *pcap, const struct timeval *tv,const void *data, uint32_t size)
DECL|pcap|struct|struct pcap {
DECL|pcap|variable|pcap
DECL|pipe_1_in|variable|pipe_1_in
DECL|pipe_1_out|variable|pipe_1_out
DECL|pipe_2_in|variable|pipe_2_in
DECL|pipe_2_out|variable|pipe_2_out
DECL|setup_fifofd1|function|static int setup_fifofd1(void)
DECL|setup_fifofd2|function|static int setup_fifofd2(void)
DECL|sigfigs|member|uint32_t sigfigs; /* accuracy of timestamps */
DECL|snaplen|member|uint32_t snaplen;
DECL|snaplen|member|uint32_t snaplen; /* max length of captured packets, in octets */
DECL|thiszone|member|int32_t thiszone; /* GMT to local correction */
DECL|ts_sec|member|uint32_t ts_sec; /* timestamp seconds */
DECL|ts_usec|member|uint32_t ts_usec; /* timestamp microseconds */
DECL|type|member|uint32_t type;
DECL|version_major|member|uint16_t version_major; /* major version number */
DECL|version_minor|member|uint16_t version_minor; /* minor version number */
