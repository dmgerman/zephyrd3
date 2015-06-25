DECL|AreasCheck4Intrusion|function|static bool AreasCheck4Intrusion(unsigned char *pBegin1, int iSize1, unsigned char *pBegin2, int iSize2)
DECL|AsyncDeQFinished|function|static void AsyncDeQFinished(struct chbuff *pChBuff, int iTransferID)
DECL|AsyncDeQRegstr|function|static int AsyncDeQRegstr(struct chbuff *pChBuff, int iSize)
DECL|AsyncEnQFinished|function|static void AsyncEnQFinished(struct chbuff *pChBuff, int iTransferID)
DECL|AsyncEnQRegstr|function|static int AsyncEnQRegstr(struct chbuff *pChBuff, int iSize)
DECL|BuffDeQA_End|function|void BuffDeQA_End(struct chbuff *pChBuff, int iTransferID, int iSize /* optional */)
DECL|BuffDeQA|function|int BuffDeQA(struct chbuff *pChBuff, int iSize, unsigned char **ppRead, int *piTransferID)
DECL|BuffDeQ|function|int BuffDeQ(struct chbuff *pChBuff, int iSize, unsigned char **ppRead)
DECL|BuffEmpty|function|int BuffEmpty(struct chbuff *pChBuff)
DECL|BuffEnQA_End|function|void BuffEnQA_End(struct chbuff *pChBuff, int iTransferID, int iSize /* optional */)
DECL|BuffEnQA|function|int BuffEnQA(struct chbuff *pChBuff, int iSize, unsigned char **ppWrite, int *piTransferID)
DECL|BuffEnQ|function|int BuffEnQ(struct chbuff *pChBuff, int iSize, unsigned char **ppWrite)
DECL|BuffFull|function|int BuffFull(struct chbuff *pChBuff)
DECL|BuffGetAvailDataTotal|function|void BuffGetAvailDataTotal(struct chbuff *pChBuff, int *piAvailDataTotal)
DECL|BuffGetAvailData|function|void BuffGetAvailData(struct chbuff *pChBuff, int *piAvailDataTotal, int *piAvailDataCont, int *piAvailDataAWA)
DECL|BuffGetFreeSpaceTotal|function|void BuffGetFreeSpaceTotal(struct chbuff *pChBuff, int *piFreeSpaceTotal)
DECL|BuffGetFreeSpace|function|void BuffGetFreeSpace(struct chbuff *pChBuff, int *piFreeSpaceTotal, int *piFreeSpaceCont, int *piFreeSpaceAWA)
DECL|BuffInit|function|void BuffInit(unsigned char *pBuffer, int *piBuffSize, struct chbuff *pChBuff)
DECL|CHECK_CHBUFF_POINTER|macro|CHECK_CHBUFF_POINTER
DECL|CalcAvailData|function|int CalcAvailData(struct chbuff *pChBuff, int *piAvailDataCont, int *piAvailDataAWA)
DECL|CalcFreeSpace|function|int CalcFreeSpace(struct chbuff *pChBuff, int *piFreeSpaceCont, int *piFreeSpaceAWA)
DECL|MarkerAddLast|function|static int MarkerAddLast(struct marker_list *pMarkerList, unsigned char *pointer, int iSize, bool bXferBusy)
DECL|MarkerDelete|function|static void MarkerDelete(struct marker_list *pMarkerList, int index)
DECL|MarkerFindFree|function|static int MarkerFindFree(struct marker aMarkers[])
DECL|MarkerLinkToListAfter|function|static void MarkerLinkToListAfter(struct marker aMarkers[], int iMarker, int iNewMarker)
DECL|MarkerUnlinkFromList|function|static void MarkerUnlinkFromList(struct marker aMarkers[], int iMarker, int *piPredecessor, int *piSuccessor)
DECL|MarkersClear|function|static void MarkersClear(struct marker_list *pMarkerList)
DECL|STORE_NBR_MARKERS|macro|STORE_NBR_MARKERS
DECL|ScanMarkers|function|static int ScanMarkers(struct marker_list *pMarkerList, int *piSizeBWA, int *piSizeAWA, int *piNbrPendingXfers)
DECL|pipe_intrusion_check|function|static void pipe_intrusion_check(struct chbuff *pChBuff, unsigned char *pBegin, int iSize)
