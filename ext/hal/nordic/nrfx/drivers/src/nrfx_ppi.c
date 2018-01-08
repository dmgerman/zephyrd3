DECL|NRFX_LOG_MODULE_NAME|macro|NRFX_LOG_MODULE_NAME
DECL|are_app_channels|function|__STATIC_INLINE bool are_app_channels(uint32_t channel_mask)
DECL|channel_allocated_clr_all|function|__STATIC_INLINE void channel_allocated_clr_all(void)
DECL|channel_allocated_clr|function|__STATIC_INLINE void channel_allocated_clr(nrf_ppi_channel_t channel)
DECL|channel_allocated_set|function|__STATIC_INLINE void channel_allocated_set(nrf_ppi_channel_t channel)
DECL|group_allocated_clr_all|function|__STATIC_INLINE void group_allocated_clr_all()
DECL|group_allocated_clr|function|__STATIC_INLINE void group_allocated_clr(nrf_ppi_channel_group_t group)
DECL|group_allocated_set|function|__STATIC_INLINE void group_allocated_set(nrf_ppi_channel_group_t group)
DECL|group_to_mask|function|__STATIC_INLINE uint32_t group_to_mask(nrf_ppi_channel_group_t group)
DECL|is_allocated_channel|function|__STATIC_INLINE bool is_allocated_channel(nrf_ppi_channel_t channel)
DECL|is_allocated_group|function|__STATIC_INLINE bool is_allocated_group(nrf_ppi_channel_group_t group)
DECL|is_app_channel|function|__STATIC_INLINE bool is_app_channel(nrf_ppi_channel_t channel)
DECL|is_app_group|function|__STATIC_INLINE bool is_app_group(nrf_ppi_channel_group_t group)
DECL|is_programmable_app_channel|function|__STATIC_INLINE bool is_programmable_app_channel(nrf_ppi_channel_t channel)
DECL|m_channels_allocated|variable|m_channels_allocated
DECL|m_groups_allocated|variable|m_groups_allocated
DECL|nrfx_ppi_channel_alloc|function|nrfx_err_t nrfx_ppi_channel_alloc(nrf_ppi_channel_t * p_channel)
DECL|nrfx_ppi_channel_assign|function|nrfx_err_t nrfx_ppi_channel_assign(nrf_ppi_channel_t channel, uint32_t eep, uint32_t tep)
DECL|nrfx_ppi_channel_disable|function|nrfx_err_t nrfx_ppi_channel_disable(nrf_ppi_channel_t channel)
DECL|nrfx_ppi_channel_enable|function|nrfx_err_t nrfx_ppi_channel_enable(nrf_ppi_channel_t channel)
DECL|nrfx_ppi_channel_fork_assign|function|nrfx_err_t nrfx_ppi_channel_fork_assign(nrf_ppi_channel_t channel, uint32_t fork_tep)
DECL|nrfx_ppi_channel_free|function|nrfx_err_t nrfx_ppi_channel_free(nrf_ppi_channel_t channel)
DECL|nrfx_ppi_channels_include_in_group|function|nrfx_err_t nrfx_ppi_channels_include_in_group(uint32_t channel_mask, nrf_ppi_channel_group_t group)
DECL|nrfx_ppi_channels_remove_from_group|function|nrfx_err_t nrfx_ppi_channels_remove_from_group(uint32_t channel_mask, nrf_ppi_channel_group_t group)
DECL|nrfx_ppi_free_all|function|void nrfx_ppi_free_all(void)
DECL|nrfx_ppi_group_alloc|function|nrfx_err_t nrfx_ppi_group_alloc(nrf_ppi_channel_group_t * p_group)
DECL|nrfx_ppi_group_disable|function|nrfx_err_t nrfx_ppi_group_disable(nrf_ppi_channel_group_t group)
DECL|nrfx_ppi_group_enable|function|nrfx_err_t nrfx_ppi_group_enable(nrf_ppi_channel_group_t group)
DECL|nrfx_ppi_group_free|function|nrfx_err_t nrfx_ppi_group_free(nrf_ppi_channel_group_t group)
