DECL|MSGSIZE|macro|MSGSIZE
DECL|MSG_INFO1|macro|MSG_INFO1
DECL|MSG_INFO2|macro|MSG_INFO2
DECL|MsgRcvrTask|function|int MsgRcvrTask(void)
DECL|MsgSenderTask|function|int MsgSenderTask(void)
DECL|XFER_PRIO|macro|XFER_PRIO
DECL|myData1|variable|myData1
DECL|myData2|variable|myData2
DECL|myData3|variable|myData3
DECL|myData4|variable|myData4
DECL|setMsg_Receiver|function|static void setMsg_Receiver( struct k_msg *inMsg, /* message descriptor */ kmbox_t inMbox, /* mail box to receive from */ ktask_t senderTask, /* sending task to receive from */
DECL|setMsg_RecvBuf|function|static void setMsg_RecvBuf( struct k_msg *inMsg, /* the message being received */ char *inBuffer, /* incoming data area */ uint32_t inBufferSize /* size of incoming data area */
DECL|setMsg_Sender|function|static void setMsg_Sender( struct k_msg *inMsg, /* the message being received */ kmbox_t inMbox, /* mail box to receive the message */ ktask_t receiverTask, /* destination for the message */
