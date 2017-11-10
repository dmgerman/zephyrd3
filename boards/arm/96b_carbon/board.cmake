set(FLASH_SCRIPT dfuutil.sh)

set(DFUUTIL_PID 0483:df11)
set(DFUUTIL_ALT 0)
set(DFUUTIL_IMG ${PROJECT_BINARY_DIR}/${KERNEL_BIN_NAME})
set(DFUUTIL_DFUSE_ADDR ${CONFIG_FLASH_BASE_ADDRESS})

set_property(GLOBAL APPEND PROPERTY FLASH_SCRIPT_ENV_VARS
  DFUUTIL_PID
  DFUUTIL_ALT
  DFUUTIL_IMG
  DFUUTIL_DFUSE_ADDR
  )
