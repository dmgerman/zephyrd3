DECL|AsyncDeQFinished|function|void AsyncDeQFinished(struct chbuff *pChBuff, int iTransferID)
DECL|AsyncDeQRegstr|function|int AsyncDeQRegstr(struct chbuff *pChBuff, int iSize)
DECL|AsyncEnQFinished|function|void AsyncEnQFinished(struct chbuff *pChBuff, int iTransferID)
DECL|AsyncEnQRegstr|function|int AsyncEnQRegstr(struct chbuff *pChBuff, int iSize)
DECL|BuffDeQA_End|function|void BuffDeQA_End(struct chbuff *pChBuff, int iTransferID, int iSize /*optional */)
DECL|BuffDeQA|function|int BuffDeQA(struct chbuff *pChBuff, int iSize, unsigned char **ppRead, int *piTransferID)
DECL|BuffDeQ|function|int BuffDeQ(struct chbuff *pChBuff, int iSize, unsigned char **ppRead)
DECL|BuffEmpty|function|int BuffEmpty(struct chbuff *pChBuff)
DECL|BuffEnQA_End|function|void BuffEnQA_End(struct chbuff *pChBuff, int iTransferID, int iSize /*optional */)
DECL|BuffEnQA|function|int BuffEnQA(struct chbuff *pChBuff, int iSize, unsigned char **ppWrite, int *piTransferID)
DECL|BuffEnQ|function|int BuffEnQ(struct chbuff *pChBuff, int iSize, unsigned char **ppWrite)
DECL|BuffFull|function|int BuffFull(struct chbuff *pChBuff)
DECL|BuffGetAvailDataTotal|function|void BuffGetAvailDataTotal(struct chbuff *pChBuff, int *piAvailDataTotal)
DECL|BuffGetAvailData|function|void BuffGetAvailData(struct chbuff *pChBuff, int *piAvailDataTotal, int *piAvailDataCont, int *piAvailDataAWA)
DECL|BuffGetFreeSpaceTotal|function|void BuffGetFreeSpaceTotal(struct chbuff *pChBuff, int *piFreeSpaceTotal)
DECL|BuffGetFreeSpace|function|void BuffGetFreeSpace(struct chbuff *pChBuff, int *piFreeSpaceTotal, int *piFreeSpaceCont, int *piFreeSpaceAWA)
DECL|BuffInit|function|void BuffInit(unsigned char *pBuffer, int *piBuffSize, struct chbuff *pChBuff)
DECL|BuffReset|function|void BuffReset(struct chbuff *pChBuff)
DECL|CHECK_CHBUFF_POINTER|macro|CHECK_CHBUFF_POINTER
DECL|CalcAvailData|function|int CalcAvailData(struct chbuff *pChBuff, int *piAvailDataCont, int *piAvailDataAWA)
DECL|CalcFreeSpace|function|int CalcFreeSpace(struct chbuff *pChBuff, int *piFreeSpaceCont, int *piFreeSpaceAWA)
DECL|ReadMarkersClear|function|void ReadMarkersClear(struct chbuff *pChBuff)
DECL|ScanMarkers|function|int ScanMarkers(struct marker_list *pMarkerList, int *piSizeBWA,int *piSizeAWA, int *piNbrPendingXfers)
DECL|WriteMarkersClear|function|void WriteMarkersClear(struct chbuff *pChBuff)
