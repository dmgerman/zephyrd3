DECL|PSOCK_BEGIN|macro|PSOCK_BEGIN
DECL|PSOCK_CLOSE_EXIT|macro|PSOCK_CLOSE_EXIT
DECL|PSOCK_CLOSE|macro|PSOCK_CLOSE
DECL|PSOCK_DATALEN|macro|PSOCK_DATALEN
DECL|PSOCK_END|macro|PSOCK_END
DECL|PSOCK_EXIT|macro|PSOCK_EXIT
DECL|PSOCK_GENERATOR_SEND|macro|PSOCK_GENERATOR_SEND
DECL|PSOCK_H_|macro|PSOCK_H_
DECL|PSOCK_INIT|macro|PSOCK_INIT
DECL|PSOCK_NEWDATA|macro|PSOCK_NEWDATA
DECL|PSOCK_READBUF_LEN|macro|PSOCK_READBUF_LEN
DECL|PSOCK_READBUF|macro|PSOCK_READBUF
DECL|PSOCK_READTO|macro|PSOCK_READTO
DECL|PSOCK_SEND_STR|macro|PSOCK_SEND_STR
DECL|PSOCK_SEND|macro|PSOCK_SEND
DECL|PSOCK_WAIT_THREAD|macro|PSOCK_WAIT_THREAD
DECL|PSOCK_WAIT_UNTIL|macro|PSOCK_WAIT_UNTIL
DECL|bufptr|member|uint8_t *bufptr; /* Pointer to the buffer used for buffering
DECL|bufsize|member|unsigned int bufsize; /* The size of the input buffer. */
DECL|buf|member|struct psock_buf buf; /* The structure holding the state of the
DECL|left|member|unsigned short left;
DECL|psock_buf|struct|struct psock_buf {
DECL|psockpt|member|struct pt pt, psockpt; /* Protothreads - one that's using the psock
DECL|psock|struct|struct psock {
DECL|ptr|member|uint8_t *ptr;
DECL|pt|member|struct pt pt, psockpt; /* Protothreads - one that's using the psock
DECL|readlen|member|uint16_t readlen; /* The number of bytes left to be read. */
DECL|readptr|member|uint8_t *readptr; /* Pointer to the next data to be read. */
DECL|sendlen|member|uint16_t sendlen; /* The number of bytes left to be sent. */
DECL|sendptr|member|const uint8_t *sendptr; /* Pointer to the next data to be sent. */
DECL|state|member|unsigned char state; /* The state of the protosocket. */
