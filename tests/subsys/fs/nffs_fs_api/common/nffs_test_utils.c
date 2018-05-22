DECL|AREA_BUF_MAX_SIZE|macro|AREA_BUF_MAX_SIZE
DECL|NFFS_TEST_BUF_SIZE|macro|NFFS_TEST_BUF_SIZE
DECL|NFFS_TEST_TOUCHED_ARR_SZ|macro|NFFS_TEST_TOUCHED_ARR_SZ
DECL|area_buf|variable|area_buf
DECL|nffs_test_assert_area_seqs|function|void nffs_test_assert_area_seqs(int seq1, int count1, int seq2, int count2)
DECL|nffs_test_assert_block_present|function|void nffs_test_assert_block_present(struct nffs_hash_entry *block_entry)
DECL|nffs_test_assert_branch_touched|function|void nffs_test_assert_branch_touched(struct nffs_inode_entry *inode_entry)
DECL|nffs_test_assert_child_inode_present|function|void nffs_test_assert_child_inode_present(struct nffs_inode_entry *child)
DECL|nffs_test_assert_children_sorted|function|void nffs_test_assert_children_sorted(struct nffs_inode_entry *inode_entry)
DECL|nffs_test_assert_file|function|void nffs_test_assert_file(const struct nffs_test_file_desc *file, struct nffs_inode_entry *inode_entry, const char *path)
DECL|nffs_test_assert_system_once|function|void nffs_test_assert_system_once(const struct nffs_test_file_desc *root_dir)
DECL|nffs_test_assert_system|function|void nffs_test_assert_system(const struct nffs_test_file_desc *root_dir, const struct nffs_area_desc *area_descs)
DECL|nffs_test_buf|variable|nffs_test_buf
DECL|nffs_test_copy_area|function|void nffs_test_copy_area(const struct nffs_area_desc *from, const struct nffs_area_desc *to)
DECL|nffs_test_num_touched_entries|variable|nffs_test_num_touched_entries
DECL|nffs_test_touched_entries|variable|nffs_test_touched_entries
DECL|nffs_test_util_append_file|function|void nffs_test_util_append_file(const char *filename, const char *contents,int contents_len)
DECL|nffs_test_util_assert_block_count|function|void nffs_test_util_assert_block_count(const char *filename, int expected_count)
DECL|nffs_test_util_assert_cache_is_sane|function|void nffs_test_util_assert_cache_is_sane(const char *filename)
DECL|nffs_test_util_assert_cache_range|function|void nffs_test_util_assert_cache_range(const char *filename, u32_t expected_cache_start, u32_t expected_cache_end)
DECL|nffs_test_util_assert_contents|function|nffs_test_util_assert_contents(const char *filename, const char *contents, int contents_len)
DECL|nffs_test_util_assert_ent_name|function|void nffs_test_util_assert_ent_name(struct fs_dirent *fs_dirent, const char *expected_name)
DECL|nffs_test_util_assert_file_len|function|void nffs_test_util_assert_file_len(struct nffs_file *file, u32_t expected)
DECL|nffs_test_util_block_count|function|int nffs_test_util_block_count(const char *filename)
DECL|nffs_test_util_create_file_blocks|function|void nffs_test_util_create_file_blocks(const char *filename, const struct nffs_test_block_desc *blocks, int num_blocks)
DECL|nffs_test_util_create_file|function|void nffs_test_util_create_file(const char *filename, const char *contents,int contents_len)
DECL|nffs_test_util_create_subtree|function|void nffs_test_util_create_subtree(const char *parent_path, const struct nffs_test_file_desc *elem)
DECL|nffs_test_util_create_tree|function|void nffs_test_util_create_tree(const struct nffs_test_file_desc *root_dir)
DECL|nffs_test_util_overwrite_data|function|void nffs_test_util_overwrite_data(u8_t *data, u32_t data_len, u32_t addr)
