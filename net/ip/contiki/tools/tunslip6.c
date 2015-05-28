DECL|BAUDRATE|macro|BAUDRATE
DECL|DEBUG_LINE_MARKER|macro|DEBUG_LINE_MARKER
DECL|PROGRESS|macro|PROGRESS
DECL|SLIP_END|macro|SLIP_END
DECL|SLIP_ESC_END|macro|SLIP_ESC_END
DECL|SLIP_ESC_ESC|macro|SLIP_ESC_ESC
DECL|SLIP_ESC|macro|SLIP_ESC
DECL|TIMEOUT|macro|TIMEOUT
DECL|WIRESHARK_IMPORT_FORMAT|macro|WIRESHARK_IMPORT_FORMAT
DECL|b_rate|variable|b_rate
DECL|basedelay|variable|basedelay
DECL|cleanup|function|cleanup(void)
DECL|delaymsec|variable|delaymsec
DECL|delaystartmsec|variable|delaystartmsec
DECL|delaystartsec|variable|delaystartsec
DECL|devopen|function|devopen(const char *dev, int flags)
DECL|flowcontrol|variable|flowcontrol
DECL|get_in_addr|function|get_in_addr(struct sockaddr *sa)
DECL|got_sigalarm|variable|got_sigalarm
DECL|ifconf|function|ifconf(const char *tundev, const char *ipaddr)
DECL|ipaddr|variable|ipaddr
DECL|is_sensible_string|function|is_sensible_string(const unsigned char *s, int len)
DECL|main|function|main(int argc, char **argv)
DECL|netmask|variable|netmask
DECL|serial_to_tun|function|serial_to_tun(FILE *inslip, int outfd)
DECL|sigalarm_reset|function|sigalarm_reset()
DECL|sigalarm|function|sigalarm(int signo)
DECL|sigcleanup|function|sigcleanup(int signo)
DECL|slip_begin|variable|slip_begin
DECL|slip_buf|variable|slip_buf
DECL|slip_empty|function|slip_empty()
DECL|slip_end|variable|slip_end
DECL|slip_flushbuf|function|slip_flushbuf(int fd)
DECL|slip_send_char|function|slip_send_char(int fd, unsigned char c)
DECL|slip_send|function|slip_send(int fd, unsigned char c)
DECL|slipfd|variable|slipfd
DECL|ssystem|function|ssystem(const char *fmt, ...)
DECL|stamptime|function|stamptime(void)
DECL|startmsec|variable|startmsec
DECL|startsec|variable|startsec
DECL|stty_telos|function|stty_telos(int fd)
DECL|timestamp|variable|timestamp
DECL|tun_alloc|function|tun_alloc(char *dev, int tap)
DECL|tun_alloc|function|tun_alloc(char *dev, int tap)
DECL|tun_to_serial|function|tun_to_serial(int infd, int outfd)
DECL|tundev|variable|tundev
DECL|verbose|variable|verbose
DECL|write_to_serial|function|write_to_serial(int outfd, void *inbuf, int len)
