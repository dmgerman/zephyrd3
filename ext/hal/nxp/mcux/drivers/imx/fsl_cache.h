DECL|FSL_CACHE_DRIVER_VERSION|macro|FSL_CACHE_DRIVER_VERSION
DECL|FSL_SDK_DISBLE_L2CACHE_PRESENT|macro|FSL_SDK_DISBLE_L2CACHE_PRESENT
DECL|L1CACHE_CleanDCacheByRange|function|static inline void L1CACHE_CleanDCacheByRange(uint32_t address, uint32_t size_byte)
DECL|L1CACHE_CleanDCache|function|static inline void L1CACHE_CleanDCache(void)
DECL|L1CACHE_CleanInvalidateDCacheByRange|function|static inline void L1CACHE_CleanInvalidateDCacheByRange(uint32_t address, uint32_t size_byte)
DECL|L1CACHE_CleanInvalidateDCache|function|static inline void L1CACHE_CleanInvalidateDCache(void)
DECL|L1CACHE_DisableDCache|function|static inline void L1CACHE_DisableDCache(void)
DECL|L1CACHE_DisableICache|function|static inline void L1CACHE_DisableICache(void)
DECL|L1CACHE_EnableDCache|function|static inline void L1CACHE_EnableDCache(void)
DECL|L1CACHE_EnableICache|function|static inline void L1CACHE_EnableICache(void)
DECL|L1CACHE_InvalidateDCacheByRange|function|static inline void L1CACHE_InvalidateDCacheByRange(uint32_t address, uint32_t size_byte)
DECL|L1CACHE_InvalidateDCache|function|static inline void L1CACHE_InvalidateDCache(void)
DECL|L1CACHE_InvalidateICache|function|static inline void L1CACHE_InvalidateICache(void)
DECL|L2cache_latency_config_t|typedef|} L2cache_latency_config_t;
DECL|_FSL_CACHE_H_|macro|_FSL_CACHE_H_
DECL|_l2cache_config|struct|typedef struct _l2cache_config
DECL|_l2cache_latency_config|struct|typedef struct _l2cache_latency_config
DECL|_l2cache_latency|enum|typedef enum _l2cache_latency
DECL|_l2cache_replacement|enum|typedef enum _l2cache_replacement
DECL|_l2cache_way_num|enum|typedef enum _l2cache_way_num
DECL|_l2cache_way_size|enum|typedef enum _l2cache_way_size
DECL|_l2cache_writealloc|enum|typedef enum _l2cache_writealloc
DECL|dataPrefetchEnable|member|bool dataPrefetchEnable; /*!< Data prefetch enable. */
DECL|dataReadLate|member|l2cache_latency_t dataReadLate; /*!< Data Read latency. */
DECL|dataSetupLate|member|l2cache_latency_t dataSetupLate; /*!< Data setup latency. */
DECL|dataWriteLate|member|l2cache_latency_t dataWriteLate; /*!< Data write latency. */
DECL|istrPrefetchEnable|member|bool istrPrefetchEnable; /*!< Instruction prefetch enable. */
DECL|kL2CACHE_128KBSize|enumerator|kL2CACHE_128KBSize = 4, /*!< 128 KB way size. */
DECL|kL2CACHE_16KBSize|enumerator|kL2CACHE_16KBSize = 1, /*!< 16 KB way size. */
DECL|kL2CACHE_16ways|enumerator|kL2CACHE_16ways /*!< 16 ways. */
DECL|kL2CACHE_1CycleLate|enumerator|kL2CACHE_1CycleLate = 0, /*!< 1 cycle of latency. */
DECL|kL2CACHE_256KBSize|enumerator|kL2CACHE_256KBSize = 5, /*!< 256 KB way size. */
DECL|kL2CACHE_2CycleLate|enumerator|kL2CACHE_2CycleLate, /*!< 2 cycle of latency. */
DECL|kL2CACHE_32KBSize|enumerator|kL2CACHE_32KBSize = 2, /*!< 32 KB way size. */
DECL|kL2CACHE_3CycleLate|enumerator|kL2CACHE_3CycleLate, /*!< 3 cycle of latency. */
DECL|kL2CACHE_4CycleLate|enumerator|kL2CACHE_4CycleLate, /*!< 4 cycle of latency. */
DECL|kL2CACHE_512KBSize|enumerator|kL2CACHE_512KBSize = 6 /*!< 512 KB way size. */
DECL|kL2CACHE_5CycleLate|enumerator|kL2CACHE_5CycleLate, /*!< 5 cycle of latency. */
DECL|kL2CACHE_64KBSize|enumerator|kL2CACHE_64KBSize = 3, /*!< 64 KB way size. */
DECL|kL2CACHE_6CycleLate|enumerator|kL2CACHE_6CycleLate, /*!< 6 cycle of latency. */
DECL|kL2CACHE_7CycleLate|enumerator|kL2CACHE_7CycleLate, /*!< 7 cycle of latency. */
DECL|kL2CACHE_8CycleLate|enumerator|kL2CACHE_8CycleLate /*!< 8 cycle of latency. */
DECL|kL2CACHE_8ways|enumerator|kL2CACHE_8ways = 0, /*!< 8 ways. */
DECL|kL2CACHE_NoWriteallocate|enumerator|kL2CACHE_NoWriteallocate, /*!< Force no write allocate. */
DECL|kL2CACHE_Pseudorandom|enumerator|kL2CACHE_Pseudorandom = 0U, /*!< Peseudo-random replacement policy using an lfsr. */
DECL|kL2CACHE_Roundrobin|enumerator|kL2CACHE_Roundrobin /*!< Round-robin replacemnt policy. */
DECL|kL2CACHE_UseAwcache|enumerator|kL2CACHE_UseAwcache = 0, /*!< Use AWCAHE attribute for the write allocate. */
DECL|kL2CACHE_forceWriteallocate|enumerator|kL2CACHE_forceWriteallocate /*!< Force write allocate when write misses. */
DECL|l2cache_config_t|typedef|} l2cache_config_t;
DECL|l2cache_latency_t|typedef|} l2cache_latency_t;
DECL|l2cache_replacement_t|typedef|} l2cache_replacement_t;
DECL|l2cache_way_num_t|typedef|} l2cache_way_num_t;
DECL|l2cache_way_size|typedef|} l2cache_way_size;
DECL|l2cache_writealloc_t|typedef|} l2cache_writealloc_t;
DECL|lateConfig|member|L2cache_latency_config_t *lateConfig; /*!< Tag/data latency configure. Set NUll if not required. */
DECL|nsLockdownEnable|member|bool nsLockdownEnable; /*!< None-secure lockdown enable. */
DECL|repacePolicy|member|l2cache_replacement_t repacePolicy;/*!< Replacemnet policy. */
DECL|tagReadLate|member|l2cache_latency_t tagReadLate; /*!< Tag Read latency. */
DECL|tagSetupLate|member|l2cache_latency_t tagSetupLate; /*!< Tag setup latency. */
DECL|tagWriteLate|member|l2cache_latency_t tagWriteLate; /*!< Tag write latency. */
DECL|wayNum|member|l2cache_way_num_t wayNum; /*!< The number of ways. */
DECL|waySize|member|l2cache_way_size waySize; /*!< The way size = Cache Ram size / wayNum. */
DECL|writeAlloc|member|l2cache_writealloc_t writeAlloc;/*!< Write allcoate force option. */
