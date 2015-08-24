DECL|AreasCheck4Intrusion|function|static bool AreasCheck4Intrusion(unsigned char *pBegin1, int iSize1, unsigned char *pBegin2, int iSize2)
DECL|AsyncDeQFinished|function|static void AsyncDeQFinished(struct _k_pipe_desc *desc, int iTransferID)
DECL|AsyncDeQRegstr|function|static int AsyncDeQRegstr(struct _k_pipe_desc *desc, int iSize)
DECL|AsyncEnQFinished|function|static void AsyncEnQFinished(struct _k_pipe_desc *desc, int iTransferID)
DECL|AsyncEnQRegstr|function|static int AsyncEnQRegstr(struct _k_pipe_desc *desc, int iSize)
DECL|BuffDeQA_End|function|void BuffDeQA_End(struct _k_pipe_desc *desc, int iTransferID, int iSize /* optional */)
DECL|BuffDeQA|function|int BuffDeQA(struct _k_pipe_desc *desc, int iSize, unsigned char **ppRead, int *piTransferID)
DECL|BuffDeQ|function|int BuffDeQ(struct _k_pipe_desc *desc, int iSize, unsigned char **ppRead)
DECL|BuffEmpty|function|int BuffEmpty(struct _k_pipe_desc *desc)
DECL|BuffEnQA_End|function|void BuffEnQA_End(struct _k_pipe_desc *desc, int iTransferID, int iSize /* optional */)
DECL|BuffEnQA|function|int BuffEnQA(struct _k_pipe_desc *desc, int iSize, unsigned char **ppWrite, int *piTransferID)
DECL|BuffEnQ|function|int BuffEnQ(struct _k_pipe_desc *desc, int iSize, unsigned char **ppWrite)
DECL|BuffFull|function|int BuffFull(struct _k_pipe_desc *desc)
DECL|BuffGetAvailDataTotal|function|void BuffGetAvailDataTotal(struct _k_pipe_desc *desc, int *piAvailDataTotal)
DECL|BuffGetAvailData|function|void BuffGetAvailData(struct _k_pipe_desc *desc, int *piAvailDataTotal, int *piAvailDataCont, int *piAvailDataAWA)
DECL|BuffGetFreeSpaceTotal|function|void BuffGetFreeSpaceTotal(struct _k_pipe_desc *desc, int *piFreeSpaceTotal)
DECL|BuffGetFreeSpace|function|void BuffGetFreeSpace(struct _k_pipe_desc *desc, int *piFreeSpaceTotal, int *piFreeSpaceCont, int *piFreeSpaceAWA)
DECL|BuffInit|function|void BuffInit(unsigned char *pBuffer, int *piBuffSize, struct _k_pipe_desc *desc)
DECL|CHECK_BUFFER_POINTER|macro|CHECK_BUFFER_POINTER
DECL|CalcAvailData|function|int CalcAvailData(struct _k_pipe_desc *desc, int *piAvailDataCont, int *piAvailDataAWA)
DECL|CalcFreeSpace|function|int CalcFreeSpace(struct _k_pipe_desc *desc, int *piFreeSpaceCont, int *piFreeSpaceAWA)
DECL|MarkerAddLast|function|static int MarkerAddLast(struct _k_pipe_marker_list *pMarkerList, unsigned char *pointer, int iSize, bool buffer_xfer_busy)
DECL|MarkerDelete|function|static void MarkerDelete(struct _k_pipe_marker_list *pMarkerList, int index)
DECL|MarkerFindFree|function|static int MarkerFindFree(struct _k_pipe_marker aMarkers[])
DECL|MarkerLinkToListAfter|function|static void MarkerLinkToListAfter(struct _k_pipe_marker aMarkers[], int iMarker, int iNewMarker)
DECL|MarkerUnlinkFromList|function|static void MarkerUnlinkFromList(struct _k_pipe_marker aMarkers[], int iMarker, int *piPredecessor, int *piSuccessor)
DECL|MarkersClear|function|static void MarkersClear(struct _k_pipe_marker_list *pMarkerList)
DECL|STORE_NBR_MARKERS|macro|STORE_NBR_MARKERS
DECL|ScanMarkers|function|static int ScanMarkers(struct _k_pipe_marker_list *pMarkerList, int *piSizeBWA, int *piSizeAWA, int *piNbrPendingXfers)
DECL|pipe_intrusion_check|function|static void pipe_intrusion_check(struct _k_pipe_desc *desc, unsigned char *pBegin, int iSize)
