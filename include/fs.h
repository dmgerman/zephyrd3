DECL|FS_DIR_ENTRY_DIR|enumerator|FS_DIR_ENTRY_DIR
DECL|FS_DIR_ENTRY_FILE|enumerator|FS_DIR_ENTRY_FILE,
DECL|FS_SEEK_CUR|macro|FS_SEEK_CUR
DECL|FS_SEEK_END|macro|FS_SEEK_END
DECL|FS_SEEK_SET|macro|FS_SEEK_SET
DECL|_FS_H_|macro|_FS_H_
DECL|f_bfree|member|unsigned long f_bfree;
DECL|f_blocks|member|unsigned long f_blocks;
DECL|f_bsize|member|unsigned long f_bsize;
DECL|f_frsize|member|unsigned long f_frsize;
DECL|fs_dir_entry_type|enum|enum fs_dir_entry_type {
DECL|fs_dir_t|typedef|typedef struct _fs_dir_object fs_dir_t;
DECL|fs_dirent|struct|struct fs_dirent {
DECL|fs_file_t|typedef|typedef struct _fs_file_object fs_file_t;
DECL|fs_statvfs|struct|struct fs_statvfs {
DECL|name|member|char name[MAX_FILE_NAME + 1];
DECL|size|member|size_t size;
DECL|type|member|enum fs_dir_entry_type type;
