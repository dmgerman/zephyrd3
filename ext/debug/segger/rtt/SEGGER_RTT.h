DECL|Flags|member|unsigned Flags; // Contains configuration flags
DECL|Flags|member|unsigned Flags; // Contains configuration flags
DECL|MaxNumDownBuffers|member|int MaxNumDownBuffers; // Initialized to SEGGER_RTT_MAX_NUM_DOWN_BUFFERS (type. 2)
DECL|MaxNumUpBuffers|member|int MaxNumUpBuffers; // Initialized to SEGGER_RTT_MAX_NUM_UP_BUFFERS (type. 2)
DECL|RTT_CTRL_BG_BLACK|macro|RTT_CTRL_BG_BLACK
DECL|RTT_CTRL_BG_BLUE|macro|RTT_CTRL_BG_BLUE
DECL|RTT_CTRL_BG_BRIGHT_BLACK|macro|RTT_CTRL_BG_BRIGHT_BLACK
DECL|RTT_CTRL_BG_BRIGHT_BLUE|macro|RTT_CTRL_BG_BRIGHT_BLUE
DECL|RTT_CTRL_BG_BRIGHT_CYAN|macro|RTT_CTRL_BG_BRIGHT_CYAN
DECL|RTT_CTRL_BG_BRIGHT_GREEN|macro|RTT_CTRL_BG_BRIGHT_GREEN
DECL|RTT_CTRL_BG_BRIGHT_MAGENTA|macro|RTT_CTRL_BG_BRIGHT_MAGENTA
DECL|RTT_CTRL_BG_BRIGHT_RED|macro|RTT_CTRL_BG_BRIGHT_RED
DECL|RTT_CTRL_BG_BRIGHT_WHITE|macro|RTT_CTRL_BG_BRIGHT_WHITE
DECL|RTT_CTRL_BG_BRIGHT_YELLOW|macro|RTT_CTRL_BG_BRIGHT_YELLOW
DECL|RTT_CTRL_BG_CYAN|macro|RTT_CTRL_BG_CYAN
DECL|RTT_CTRL_BG_GREEN|macro|RTT_CTRL_BG_GREEN
DECL|RTT_CTRL_BG_MAGENTA|macro|RTT_CTRL_BG_MAGENTA
DECL|RTT_CTRL_BG_RED|macro|RTT_CTRL_BG_RED
DECL|RTT_CTRL_BG_WHITE|macro|RTT_CTRL_BG_WHITE
DECL|RTT_CTRL_BG_YELLOW|macro|RTT_CTRL_BG_YELLOW
DECL|RTT_CTRL_CLEAR|macro|RTT_CTRL_CLEAR
DECL|RTT_CTRL_RESET|macro|RTT_CTRL_RESET
DECL|RTT_CTRL_TEXT_BLACK|macro|RTT_CTRL_TEXT_BLACK
DECL|RTT_CTRL_TEXT_BLUE|macro|RTT_CTRL_TEXT_BLUE
DECL|RTT_CTRL_TEXT_BRIGHT_BLACK|macro|RTT_CTRL_TEXT_BRIGHT_BLACK
DECL|RTT_CTRL_TEXT_BRIGHT_BLUE|macro|RTT_CTRL_TEXT_BRIGHT_BLUE
DECL|RTT_CTRL_TEXT_BRIGHT_CYAN|macro|RTT_CTRL_TEXT_BRIGHT_CYAN
DECL|RTT_CTRL_TEXT_BRIGHT_GREEN|macro|RTT_CTRL_TEXT_BRIGHT_GREEN
DECL|RTT_CTRL_TEXT_BRIGHT_MAGENTA|macro|RTT_CTRL_TEXT_BRIGHT_MAGENTA
DECL|RTT_CTRL_TEXT_BRIGHT_RED|macro|RTT_CTRL_TEXT_BRIGHT_RED
DECL|RTT_CTRL_TEXT_BRIGHT_WHITE|macro|RTT_CTRL_TEXT_BRIGHT_WHITE
DECL|RTT_CTRL_TEXT_BRIGHT_YELLOW|macro|RTT_CTRL_TEXT_BRIGHT_YELLOW
DECL|RTT_CTRL_TEXT_CYAN|macro|RTT_CTRL_TEXT_CYAN
DECL|RTT_CTRL_TEXT_GREEN|macro|RTT_CTRL_TEXT_GREEN
DECL|RTT_CTRL_TEXT_MAGENTA|macro|RTT_CTRL_TEXT_MAGENTA
DECL|RTT_CTRL_TEXT_RED|macro|RTT_CTRL_TEXT_RED
DECL|RTT_CTRL_TEXT_WHITE|macro|RTT_CTRL_TEXT_WHITE
DECL|RTT_CTRL_TEXT_YELLOW|macro|RTT_CTRL_TEXT_YELLOW
DECL|RdOff|member|unsigned RdOff; // Position of next item to be read by target (down-buffer).
DECL|RdOff|member|volatile unsigned RdOff; // Position of next item to be read by host. Must be volatile since it may be modified by host.
DECL|SEGGER_RTT_BUFFER_DOWN|typedef|} SEGGER_RTT_BUFFER_DOWN;
DECL|SEGGER_RTT_BUFFER_UP|typedef|} SEGGER_RTT_BUFFER_UP;
DECL|SEGGER_RTT_CB|typedef|} SEGGER_RTT_CB;
DECL|SEGGER_RTT_HASDATA|macro|SEGGER_RTT_HASDATA
DECL|SEGGER_RTT_H|macro|SEGGER_RTT_H
DECL|SEGGER_RTT_MODE_BLOCK_IF_FIFO_FULL|macro|SEGGER_RTT_MODE_BLOCK_IF_FIFO_FULL
DECL|SEGGER_RTT_MODE_MASK|macro|SEGGER_RTT_MODE_MASK
DECL|SEGGER_RTT_MODE_NO_BLOCK_SKIP|macro|SEGGER_RTT_MODE_NO_BLOCK_SKIP
DECL|SEGGER_RTT_MODE_NO_BLOCK_TRIM|macro|SEGGER_RTT_MODE_NO_BLOCK_TRIM
DECL|SizeOfBuffer|member|unsigned SizeOfBuffer; // Buffer size in bytes. Note that one byte is lost, as this implementation does not fill up the buffer in order to avoid the problem of being unable to distinguish between full and empty.
DECL|SizeOfBuffer|member|unsigned SizeOfBuffer; // Buffer size in bytes. Note that one byte is lost, as this implementation does not fill up the buffer in order to avoid the problem of being unable to distinguish between full and empty.
DECL|WrOff|member|unsigned WrOff; // Position of next item to be written by either target.
DECL|WrOff|member|volatile unsigned WrOff; // Position of next item to be written by host. Must be volatile since it may be modified by host.
DECL|aDown|member|SEGGER_RTT_BUFFER_DOWN aDown[SEGGER_RTT_MAX_NUM_DOWN_BUFFERS]; // Down buffers, transferring information down from host via debug probe to target
DECL|aUp|member|SEGGER_RTT_BUFFER_UP aUp[SEGGER_RTT_MAX_NUM_UP_BUFFERS]; // Up buffers, transferring information up from target via debug probe to host
DECL|acID|member|char acID[16]; // Initialized to "SEGGER RTT"
DECL|pBuffer|member|char* pBuffer; // Pointer to start of buffer
DECL|pBuffer|member|char* pBuffer; // Pointer to start of buffer
DECL|sName|member|const char* sName; // Optional name. Standard names so far are: "Terminal", "SysView", "J-Scope_t4i4"
DECL|sName|member|const char* sName; // Optional name. Standard names so far are: "Terminal", "SysView", "J-Scope_t4i4"
