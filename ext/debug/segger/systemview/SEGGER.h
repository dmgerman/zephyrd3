DECL|BufferSize|member|int BufferSize;
DECL|CacheLineSize|member|int CacheLineSize; // 0: No Cache. Most Systems such as ARM9 use a 32 bytes cache line size.
DECL|Cnt|member|int Cnt;
DECL|INLINE|macro|INLINE
DECL|INLINE|macro|INLINE
DECL|INLINE|macro|INLINE
DECL|SEGGER_BUFFER_DESC|typedef|} SEGGER_BUFFER_DESC;
DECL|SEGGER_CACHE_CONFIG|typedef|} SEGGER_CACHE_CONFIG;
DECL|SEGGER_COUNTOF|macro|SEGGER_COUNTOF
DECL|SEGGER_H|macro|SEGGER_H
DECL|SEGGER_MAX|macro|SEGGER_MAX
DECL|SEGGER_MIN|macro|SEGGER_MIN
DECL|pBuffer|member|char *pBuffer;
DECL|pfClean|member|void (*pfClean) (void *p, unsigned NumBytes); // Optional clean function for cached memory.
DECL|pfDMB|member|void (*pfDMB) (void); // Optional DMB function for Data Memory Barrier to make sure all memory operations are completed.
DECL|pfInvalidate|member|void (*pfInvalidate)(void *p, unsigned NumBytes); // Optional invalidate function for cached memory.
