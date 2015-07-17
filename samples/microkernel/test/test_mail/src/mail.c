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
DECL|myMbox|variable|myMbox
DECL|noRcvrMbox|variable|noRcvrMbox
DECL|setMsg_Receiver|function|static void setMsg_Receiver(struct k_msg *inMsg, kmbox_t inMbox, ktask_t senderTask,void *inBuffer, uint32_t inBufferSize)
DECL|setMsg_RecvBuf|function|static void setMsg_RecvBuf(struct k_msg *inMsg, char *inBuffer, uint32_t inBufferSize)
DECL|setMsg_Sender|function|static void setMsg_Sender(struct k_msg *inMsg, kmbox_t inMbox, ktask_t receiverTask, void *dataArea, uint32_t dataSize, uint32_t info)
