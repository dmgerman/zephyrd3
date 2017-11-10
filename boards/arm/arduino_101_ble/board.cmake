if(DEFINED ENV{ZEPHYR_FLASH_OVER_DFU})
  set(FLASH_SCRIPT dfuutil.sh)

  set(DFUUTIL_PID 8087:0aba)
  set(DFUUTIL_ALT ble_core)
  set(DFUUTIL_IMG ${PROJECT_BINARY_DIR}/${KERNEL_BIN_NAME})

  set_property(GLOBAL APPEND PROPERTY FLASH_SCRIPT_ENV_VARS
    DFUUTIL_PID
    DFUUTIL_ALT
    DFUUTIL_IMG
    )
endif()
