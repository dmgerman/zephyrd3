DECL|CMD_PKT_SET_INSTANCE|macro|CMD_PKT_SET_INSTANCE
DECL|CMD_PKT_SET|macro|CMD_PKT_SET
DECL|CMD_PKT_SIZE_IN_WORDS|macro|CMD_PKT_SIZE_IN_WORDS
DECL|_COMMAND_PACKET_H|macro|_COMMAND_PACKET_H
DECL|cmdPkt_t|typedef|typedef uint32_t cmdPkt_t[CMD_PKT_SIZE_IN_WORDS];
DECL|cmd_pkt_set|struct|struct cmd_pkt_set {
DECL|command_packet|member|cmdPkt_t command_packet[]; /* array of command packets */
DECL|index|member|uint32_t index; /* index into command packet array */
DECL|num_packets|member|uint32_t num_packets; /* number of command packets in set */
