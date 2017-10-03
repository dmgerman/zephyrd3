DECL|ActualNumOfSysFiles|member|_u8 ActualNumOfSysFiles;
DECL|ActualNumOfUserFiles|member|_u8 ActualNumOfUserFiles;
DECL|Bundlestate|member|_u8 Bundlestate; /*see SlFsBundleState_e*/
DECL|ClosedFilesCntWithValidFailSafeImage|member|_u8 ClosedFilesCntWithValidFailSafeImage;
DECL|ClosedFilesCnt|member|_u8 ClosedFilesCnt;
DECL|DeviceBlockSize|member|_u16 DeviceBlockSize;
DECL|DeviceBlocksCapacity|member|_u16 DeviceBlocksCapacity;
DECL|DeviceUsage|member|SlFsControlDeviceUsage_t DeviceUsage;
DECL|ErrorNumber|member|_i32 ErrorNumber;
DECL|FATWriteCounter|member|_u16 FATWriteCounter;/*Though it is increased during the programming, the programming and ret to factory takes only 1- write to the FAT, independ of the number of the programming files */
DECL|FileAllocatedBlocks|member|_u32 FileAllocatedBlocks;/*1 block = 4096 bytes*/
DECL|FileMaxSize|member|_u32 FileMaxSize;
DECL|FilesUsage|member|SlFsControlFilesUsage_t FilesUsage;
DECL|Flags|member|_u16 Flags; /* see Flags options */
DECL|IncludeFilters|member|_u32 IncludeFilters;
DECL|IncludeFilters|member|_u32 IncludeFilters; /* see SlFsControlFilterCounterFlags_e*/
DECL|Index|member|SlFsFileNameIndex_t Index;
DECL|Index|member|_u8 Index;
DECL|IsDevlopmentFormatType|member|_u8 IsDevlopmentFormatType;
DECL|Key|member|_u32 Key[4];/*16 bytes*/
DECL|LargestAllocatedGapInBlocks|member|_u16 LargestAllocatedGapInBlocks;
DECL|Len|member|_u32 Len; /* In bytes, The actual size of the copy which is used for read*/
DECL|MaxFsFilesReservedForSysFiles|member|_u8 MaxFsFilesReservedForSysFiles;
DECL|MaxFsFiles|member|_u8 MaxFsFiles;
DECL|MaxSize|member|_u32 MaxSize; /* In bytes, The max file size */
DECL|NumOfAlertsThreshold|member|_u32 NumOfAlertsThreshold;
DECL|NumOfAlerts|member|_u32 NumOfAlerts;
DECL|NumOfAllocatedBlocks|member|_u16 NumOfAllocatedBlocks;
DECL|NumOfAvailableBlocksForUserFiles|member|_u16 NumOfAvailableBlocksForUserFiles;
DECL|NumOfReservedBlocksForSystemfiles|member|_u16 NumOfReservedBlocksForSystemfiles;
DECL|NumOfReservedBlocks|member|_u16 NumOfReservedBlocks;
DECL|OpeneForReadCntWithValidFailSafeImage|member|_u8 OpeneForReadCntWithValidFailSafeImage;
DECL|OpeneForReadCnt|member|_u8 OpeneForReadCnt;
DECL|OpenedForWriteCntWithValidFailSafeImage|member|_u8 OpenedForWriteCntWithValidFailSafeImage;
DECL|OpenedForWriteCnt|member|_u8 OpenedForWriteCnt;
DECL|Operation|member|_u32 Operation;/*see _SlFsRetToFactoryOper_e*/
DECL|Padding2|member|_u16 Padding2;
DECL|Padding|member|_u8 Padding;
DECL|Padding|member|_u8 Padding[2];
DECL|Properties|member|_u32 Properties; /* see SL_FS_INFO_ flags */
DECL|Reserved|member|_u8 Reserved;
DECL|SL_FS_BUNDLE_STATE_PENDING_COMMIT|enumerator|SL_FS_BUNDLE_STATE_PENDING_COMMIT = 3
DECL|SL_FS_BUNDLE_STATE_STARTED|enumerator|SL_FS_BUNDLE_STATE_STARTED = 1,
DECL|SL_FS_BUNDLE_STATE_STOPPED|enumerator|SL_FS_BUNDLE_STATE_STOPPED = 0,
DECL|SL_FS_CREATE_FAILSAFE|macro|SL_FS_CREATE_FAILSAFE
DECL|SL_FS_CREATE_MAX_SIZE|macro|SL_FS_CREATE_MAX_SIZE
DECL|SL_FS_CREATE_NOSIGNATURE|macro|SL_FS_CREATE_NOSIGNATURE
DECL|SL_FS_CREATE_PUBLIC_READ|macro|SL_FS_CREATE_PUBLIC_READ
DECL|SL_FS_CREATE_PUBLIC_WRITE|macro|SL_FS_CREATE_PUBLIC_WRITE
DECL|SL_FS_CREATE_SECURE|macro|SL_FS_CREATE_SECURE
DECL|SL_FS_CREATE_STATIC_TOKEN|macro|SL_FS_CREATE_STATIC_TOKEN
DECL|SL_FS_CREATE_VENDOR_TOKEN|macro|SL_FS_CREATE_VENDOR_TOKEN
DECL|SL_FS_CREATE|macro|SL_FS_CREATE
DECL|SL_FS_CTL_BUNDLE_COMMIT|enumerator|SL_FS_CTL_BUNDLE_COMMIT = 7
DECL|SL_FS_CTL_BUNDLE_ROLLBACK|enumerator|SL_FS_CTL_BUNDLE_ROLLBACK = 6,
DECL|SL_FS_CTL_COMMIT|enumerator|SL_FS_CTL_COMMIT = 2,
DECL|SL_FS_CTL_GET_STORAGE_INFO|enumerator|SL_FS_CTL_GET_STORAGE_INFO = 5,
DECL|SL_FS_CTL_RENAME|enumerator|SL_FS_CTL_RENAME = 3,
DECL|SL_FS_CTL_RESTORE|enumerator|SL_FS_CTL_RESTORE = 0, /* restores the factory default */
DECL|SL_FS_CTL_ROLLBACK|enumerator|SL_FS_CTL_ROLLBACK = 1,
DECL|SL_FS_FACTORY_RET_TO_DEFAULT|enumerator|SL_FS_FACTORY_RET_TO_DEFAULT = 2 /*return to factory default*/
DECL|SL_FS_FACTORY_RET_TO_IMAGE|enumerator|SL_FS_FACTORY_RET_TO_IMAGE = 0,/*The system will be back to the production image.*/
DECL|SL_FS_GET_FILE_ATTRIBUTES|enumerator|SL_FS_GET_FILE_ATTRIBUTES = 0x1
DECL|SL_FS_INFO_BUNDLE_FILE|macro|SL_FS_INFO_BUNDLE_FILE
DECL|SL_FS_INFO_MUST_COMMIT|macro|SL_FS_INFO_MUST_COMMIT
DECL|SL_FS_INFO_NOSIGNATURE|macro|SL_FS_INFO_NOSIGNATURE
DECL|SL_FS_INFO_NOT_FAILSAFE|macro|SL_FS_INFO_NOT_FAILSAFE
DECL|SL_FS_INFO_NOT_VALID|macro|SL_FS_INFO_NOT_VALID
DECL|SL_FS_INFO_OPEN_READ|macro|SL_FS_INFO_OPEN_READ
DECL|SL_FS_INFO_OPEN_WRITE|macro|SL_FS_INFO_OPEN_WRITE
DECL|SL_FS_INFO_PENDING_BUNDLE_COMMIT|macro|SL_FS_INFO_PENDING_BUNDLE_COMMIT
DECL|SL_FS_INFO_PENDING_COMMIT|macro|SL_FS_INFO_PENDING_COMMIT
DECL|SL_FS_INFO_PUBLIC_READ|macro|SL_FS_INFO_PUBLIC_READ
DECL|SL_FS_INFO_PUBLIC_WRITE|macro|SL_FS_INFO_PUBLIC_WRITE
DECL|SL_FS_INFO_SECURE|macro|SL_FS_INFO_SECURE
DECL|SL_FS_INFO_SYS_FILE|macro|SL_FS_INFO_SYS_FILE
DECL|SL_FS_MAX_FILE_NAME_LENGTH|macro|SL_FS_MAX_FILE_NAME_LENGTH
DECL|SL_FS_OPEN_FLAGS_BIT_MASK|macro|SL_FS_OPEN_FLAGS_BIT_MASK
DECL|SL_FS_OPEN_MAXSIZE_BIT_MASK|macro|SL_FS_OPEN_MAXSIZE_BIT_MASK
DECL|SL_FS_OPEN_MODE_BIT_MASK|macro|SL_FS_OPEN_MODE_BIT_MASK
DECL|SL_FS_OVERWRITE|macro|SL_FS_OVERWRITE
DECL|SL_FS_READ|macro|SL_FS_READ
DECL|SL_FS_TOKEN_MASTER|enumerator|SL_FS_TOKEN_MASTER = 0,
DECL|SL_FS_TOKEN_READ_ONLY|enumerator|SL_FS_TOKEN_READ_ONLY = 3
DECL|SL_FS_TOKEN_WRITE_ONLY|enumerator|SL_FS_TOKEN_WRITE_ONLY = 2,
DECL|SL_FS_TOKEN_WRITE_READ|enumerator|SL_FS_TOKEN_WRITE_READ = 1,
DECL|SL_FS_WRITE_BUNDLE_FILE|macro|SL_FS_WRITE_BUNDLE_FILE
DECL|SL_FS_WRITE_ENCRYPTED|macro|SL_FS_WRITE_ENCRYPTED
DECL|SL_FS_WRITE_MUST_COMMIT|macro|SL_FS_WRITE_MUST_COMMIT
DECL|SL_FS_WRITE|macro|SL_FS_WRITE
DECL|SL_NUM_OF_FLAGS_BIT|macro|SL_NUM_OF_FLAGS_BIT
DECL|SL_NUM_OF_MAXSIZE_BIT|macro|SL_NUM_OF_MAXSIZE_BIT
DECL|SL_NUM_OF_MODE_BIT|macro|SL_NUM_OF_MODE_BIT
DECL|SlFileAttributes_t|typedef|}SlFileAttributes_t;
DECL|SlFileListFlags_t|typedef|}SlFileListFlags_t;
DECL|SlFsBundleState_e|typedef|}SlFsBundleState_e;
DECL|SlFsControlDeviceUsage_t|typedef|} SlFsControlDeviceUsage_t;
DECL|SlFsControlFilesUsage_t|typedef|}SlFsControlFilesUsage_t;
DECL|SlFsControlGetCountersResponse_t|typedef|} SlFsControlGetCountersResponse_t;
DECL|SlFsControlGetStorageInfoResponse_t|typedef|} SlFsControlGetStorageInfoResponse_t;
DECL|SlFsControl_t|typedef|}SlFsControl_t;
DECL|SlFsCtl_e|typedef|}SlFsCtl_e;
DECL|SlFsFileInfo_t|typedef|}SlFsFileInfo_t;
DECL|SlFsFileNameIndexOrError_t|typedef|}SlFsFileNameIndexOrError_t;
DECL|SlFsFileNameIndex_t|typedef|}SlFsFileNameIndex_t;
DECL|SlFsKey_t|typedef|}SlFsKey_t;
DECL|SlFsRetToFactoryCommand_t|typedef|}SlFsRetToFactoryCommand_t;
DECL|SlFsRetToFactoryOper_e|typedef|}SlFsRetToFactoryOper_e;
DECL|SlFsTokenId_e|typedef|}SlFsTokenId_e;
DECL|StorageSize|member|_u32 StorageSize; /* In bytes, The total size that the file required on the storage including the mirror */
DECL|Token|member|_u32 Token[4]; /* see SlFsTokenId_e */
DECL|WriteCounter|member|_u32 WriteCounter; /* Number of times in which the file have been written successfully */
DECL|__FS_H__|macro|__FS_H__
DECL|padding|member|_u8 padding[2];
