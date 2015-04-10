DECL|BUFF_EMPTY|enumerator|BUFF_EMPTY, /* buffer is empty, disregarding the pending data Xfers
DECL|BUFF_FULL|enumerator|BUFF_FULL, /* buffer is full, disregarding the pending data Xfers
DECL|BUFF_OTHER|enumerator|BUFF_OTHER
DECL|BUFF_STATE|typedef|} BUFF_STATE;
DECL|BuffState|member|BUFF_STATE BuffState;
DECL|MAXNBR_MARKERS|macro|MAXNBR_MARKERS
DECL|Next|member|int Next; /* -1 == no successor */
DECL|Prev|member|int Prev; /* -1 == no predecessor */
DECL|ReadMarkers|member|struct marker_list ReadMarkers;
DECL|WriteMarkers|member|struct marker_list WriteMarkers;
DECL|_K_CHANSTRUCT_H|macro|_K_CHANSTRUCT_H
DECL|aMarkers|member|struct marker aMarkers[MAXNBR_MARKERS];
DECL|bReadWA|member|BOOL bReadWA;
DECL|bWriteWA|member|BOOL bWriteWA;
DECL|bXferBusy|member|BOOL bXferBusy;
DECL|chbuff|struct|struct chbuff {
DECL|iAWAMarker|member|int iAWAMarker; /* -1 means no AWAMarkers */
DECL|iAvailDataAWA|member|int iAvailDataAWA; /* AWA == After Wrap Around */
DECL|iAvailDataCont|member|int iAvailDataCont;
DECL|iBuffSize|member|int iBuffSize;
DECL|iFirstMarker|member|int iFirstMarker;
DECL|iFreeSpaceAWA|member|int iFreeSpaceAWA;
DECL|iFreeSpaceCont|member|int iFreeSpaceCont;
DECL|iLastMarker|member|int iLastMarker;
DECL|iNbrMarkers|member|int iNbrMarkers; /* Only used if STORE_NBR_MARKERS is defined */
DECL|iNbrPendingReads|member|int iNbrPendingReads;
DECL|iNbrPendingWrites|member|int iNbrPendingWrites;
DECL|marker_list|struct|struct marker_list {
DECL|marker|struct|struct marker {
DECL|pBegin|member|unsigned char *pBegin;
DECL|pEndOrig|member|unsigned char *pEndOrig;
DECL|pEnd|member|unsigned char *pEnd;
DECL|pReadGuard|member|unsigned char *pReadGuard; /* can be NULL --> invalid */
DECL|pRead|member|unsigned char *pRead;
DECL|pWriteGuard|member|unsigned char *pWriteGuard; /* can be NULL --> invalid */
DECL|pWrite|member|unsigned char *pWrite;
DECL|pointer|member|unsigned char *pointer; /* NULL == non valid marker == free */
DECL|size|member|int size;
