DECL|B0|macro|B0
DECL|B110|macro|B110
DECL|B115200|macro|B115200
DECL|B1200|macro|B1200
DECL|B134|macro|B134
DECL|B150|macro|B150
DECL|B1800|macro|B1800
DECL|B19200|macro|B19200
DECL|B200|macro|B200
DECL|B2400|macro|B2400
DECL|B300|macro|B300
DECL|B38400|macro|B38400
DECL|B4800|macro|B4800
DECL|B50|macro|B50
DECL|B57600|macro|B57600
DECL|B600|macro|B600
DECL|B75|macro|B75
DECL|B9600|macro|B9600
DECL|BRKINT|macro|BRKINT
DECL|CCTS_OFLOW|macro|CCTS_OFLOW
DECL|CLOCAL|macro|CLOCAL
DECL|CREAD|macro|CREAD
DECL|CRTSCTS|macro|CRTSCTS
DECL|CRTS_IFLOW|macro|CRTS_IFLOW
DECL|CS5|macro|CS5
DECL|CS6|macro|CS6
DECL|CS7|macro|CS7
DECL|CS8|macro|CS8
DECL|CSIZE|macro|CSIZE
DECL|CSTOPB|macro|CSTOPB
DECL|ECHOE|macro|ECHOE
DECL|ECHOK|macro|ECHOK
DECL|ECHONL|macro|ECHONL
DECL|ECHO|macro|ECHO
DECL|HUPCL|macro|HUPCL
DECL|ICANON|macro|ICANON
DECL|ICRNL|macro|ICRNL
DECL|IEXTEN|macro|IEXTEN
DECL|IGNBRK|macro|IGNBRK
DECL|IGNCR|macro|IGNCR
DECL|IGNPAR|macro|IGNPAR
DECL|INLCR|macro|INLCR
DECL|INPCK|macro|INPCK
DECL|ISIG|macro|ISIG
DECL|ISTRIP|macro|ISTRIP
DECL|IXOFF|macro|IXOFF
DECL|IXON|macro|IXON
DECL|NCCS|macro|NCCS
DECL|NOFLSH|macro|NOFLSH
DECL|OCRNL|macro|OCRNL
DECL|ONLCR|macro|ONLCR
DECL|ONOCR|macro|ONOCR
DECL|OPOST|macro|OPOST
DECL|PAODD|macro|PAODD
DECL|PARENB|macro|PARENB
DECL|TAB3|macro|TAB3
DECL|TCIFLUSH|macro|TCIFLUSH
DECL|TCIOFF|macro|TCIOFF
DECL|TCIOFLUSH|macro|TCIOFLUSH
DECL|TCION|macro|TCION
DECL|TCOFLUSH|macro|TCOFLUSH
DECL|TCOOFF|macro|TCOOFF
DECL|TCOON|macro|TCOON
DECL|TCSADFLUSH|macro|TCSADFLUSH
DECL|TCSADRAIN|macro|TCSADRAIN
DECL|TCSAFLUSH|macro|TCSAFLUSH
DECL|TCSANOW|macro|TCSANOW
DECL|TOSTOP|macro|TOSTOP
DECL|VEOF|macro|VEOF
DECL|VEOL|macro|VEOL
DECL|VERASE|macro|VERASE
DECL|VINTR|macro|VINTR
DECL|VKILL|macro|VKILL
DECL|VMIN|macro|VMIN
DECL|VQUIT|macro|VQUIT
DECL|VSTART|macro|VSTART
DECL|VSTOP|macro|VSTOP
DECL|VSUSP|macro|VSUSP
DECL|VTIME|macro|VTIME
DECL|_SYS_TERMIOS_H|macro|_SYS_TERMIOS_H
DECL|_TCFLSH|macro|_TCFLSH
DECL|_TCSBRK|macro|_TCSBRK
DECL|_TCXONC|macro|_TCXONC
DECL|_XCGETA|macro|_XCGETA
DECL|_XCSETAF|macro|_XCSETAF
DECL|_XCSETAW|macro|_XCSETAW
DECL|_XCSETA|macro|_XCSETA
DECL|c_cc|member|cc_t c_cc[NCCS];
DECL|c_cflag|member|tcflag_t c_cflag;
DECL|c_iflag|member|tcflag_t c_iflag;
DECL|c_ispeed|member|speed_t c_ispeed;
DECL|c_lflag|member|tcflag_t c_lflag;
DECL|c_line|member|char c_line;
DECL|c_oflag|member|tcflag_t c_oflag;
DECL|c_ospeed|member|speed_t c_ospeed;
DECL|cc_t|typedef|typedef unsigned char cc_t;
DECL|cfgetispeed|macro|cfgetispeed
DECL|cfgetospeed|macro|cfgetospeed
DECL|cfsetispeed|macro|cfsetispeed
DECL|cfsetospeed|macro|cfsetospeed
DECL|speed_t|typedef|typedef unsigned long speed_t;
DECL|tcdrain|macro|tcdrain
DECL|tcflag_t|typedef|typedef unsigned short tcflag_t;
DECL|termios|struct|struct termios {
