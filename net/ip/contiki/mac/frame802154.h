DECL|FRAME802154_1_BYTE_KEY_ID_MODE|macro|FRAME802154_1_BYTE_KEY_ID_MODE
DECL|FRAME802154_5_BYTE_KEY_ID_MODE|macro|FRAME802154_5_BYTE_KEY_ID_MODE
DECL|FRAME802154_9_BYTE_KEY_ID_MODE|macro|FRAME802154_9_BYTE_KEY_ID_MODE
DECL|FRAME802154_ACKFRAME|macro|FRAME802154_ACKFRAME
DECL|FRAME802154_BEACONFRAME|macro|FRAME802154_BEACONFRAME
DECL|FRAME802154_BEACONREQ|macro|FRAME802154_BEACONREQ
DECL|FRAME802154_BROADCASTADDR|macro|FRAME802154_BROADCASTADDR
DECL|FRAME802154_BROADCASTPANDID|macro|FRAME802154_BROADCASTPANDID
DECL|FRAME802154_CMDFRAME|macro|FRAME802154_CMDFRAME
DECL|FRAME802154_DATAFRAME|macro|FRAME802154_DATAFRAME
DECL|FRAME802154_IEEE802154_2003|macro|FRAME802154_IEEE802154_2003
DECL|FRAME802154_IEEE802154_2006|macro|FRAME802154_IEEE802154_2006
DECL|FRAME802154_IEEERESERVED|macro|FRAME802154_IEEERESERVED
DECL|FRAME802154_IMPLICIT_KEY|macro|FRAME802154_IMPLICIT_KEY
DECL|FRAME802154_LONGADDRMODE|macro|FRAME802154_LONGADDRMODE
DECL|FRAME802154_NOADDR|macro|FRAME802154_NOADDR
DECL|FRAME802154_NOBEACONS|macro|FRAME802154_NOBEACONS
DECL|FRAME802154_SECURITY_LEVEL_ENC_MIC_128|macro|FRAME802154_SECURITY_LEVEL_ENC_MIC_128
DECL|FRAME802154_SECURITY_LEVEL_ENC_MIC_32|macro|FRAME802154_SECURITY_LEVEL_ENC_MIC_32
DECL|FRAME802154_SECURITY_LEVEL_ENC_MIC_64|macro|FRAME802154_SECURITY_LEVEL_ENC_MIC_64
DECL|FRAME802154_SECURITY_LEVEL_ENC|macro|FRAME802154_SECURITY_LEVEL_ENC
DECL|FRAME802154_SECURITY_LEVEL_MIC_128|macro|FRAME802154_SECURITY_LEVEL_MIC_128
DECL|FRAME802154_SECURITY_LEVEL_MIC_32|macro|FRAME802154_SECURITY_LEVEL_MIC_32
DECL|FRAME802154_SECURITY_LEVEL_MIC_64|macro|FRAME802154_SECURITY_LEVEL_MIC_64
DECL|FRAME802154_SECURITY_LEVEL_NONE|macro|FRAME802154_SECURITY_LEVEL_NONE
DECL|FRAME802154_SHORTADDRMODE|macro|FRAME802154_SHORTADDRMODE
DECL|FRAME_802154_H|macro|FRAME_802154_H
DECL|IEEE802154_PANID|macro|IEEE802154_PANID
DECL|IEEE802154_PANID|macro|IEEE802154_PANID
DECL|ack_required|member|uint8_t ack_required; /**< 1 bit. Is an ack frame required? */
DECL|aux_hdr|member|frame802154_aux_hdr_t aux_hdr; /**< Aux security header */
DECL|dest_addr_mode|member|uint8_t dest_addr_mode; /**< 2 bit. Destination address mode, see 802.15.4 */
DECL|dest_addr|member|uint8_t dest_addr[8]; /**< Destination address */
DECL|dest_pid|member|uint16_t dest_pid; /**< Destination PAN ID */
DECL|fcf|member|frame802154_fcf_t fcf; /**< Frame control field */
DECL|frame802154_aux_hdr_t|typedef|} frame802154_aux_hdr_t;
DECL|frame802154_fcf_t|typedef|} frame802154_fcf_t;
DECL|frame802154_frame_counter_t|typedef|} frame802154_frame_counter_t;
DECL|frame802154_key_source_t|typedef|} frame802154_key_source_t;
DECL|frame802154_scf_t|typedef|} frame802154_scf_t;
DECL|frame802154_t|typedef|} frame802154_t;
DECL|frame_counter|member|frame802154_frame_counter_t frame_counter; /**< Frame counter, used for security */
DECL|frame_pending|member|uint8_t frame_pending; /**< 1 bit. True if sender has more data to send */
DECL|frame_type|member|uint8_t frame_type; /**< 3 bit. Frame type field, see 802.15.4 */
DECL|frame_version|member|uint8_t frame_version; /**< 2 bit. 802.15.4 frame version */
DECL|key_id_mode|member|uint8_t key_id_mode; /**< 2 bit. Key identifier mode */
DECL|key_index|member|uint8_t key_index; /**< Key Index subfield */
DECL|key_source|member|frame802154_key_source_t key_source; /**< Key Source subfield */
DECL|panid_compression|member|uint8_t panid_compression; /**< 1 bit. Is this a compressed header? */
DECL|payload_len|member|int payload_len; /**< Length of payload field */
DECL|payload|member|uint8_t *payload; /**< Pointer to 802.15.4 payload */
DECL|reserved|member|uint8_t reserved; /**< 3 bit. Reserved bits */
DECL|security_control|member|frame802154_scf_t security_control; /**< Security control bitfield */
DECL|security_enabled|member|uint8_t security_enabled; /**< 1 bit. True if security is used in this frame */
DECL|security_level|member|uint8_t security_level; /**< 3 bit. security level */
DECL|seq|member|uint8_t seq; /**< Sequence number */
DECL|src_addr_mode|member|uint8_t src_addr_mode; /**< 2 bit. Source address mode, see 802.15.4 */
DECL|src_addr|member|uint8_t src_addr[8]; /**< Source address */
DECL|src_pid|member|uint16_t src_pid; /**< Source PAN ID */
DECL|u16|member|uint16_t u16[2];
DECL|u16|member|uint16_t u16[4];
DECL|u32|member|uint32_t u32;
DECL|u8|member|uint8_t u8[4];
DECL|u8|member|uint8_t u8[8];
