add_custom_target(run
  COMMAND
  ${APPLICATION_BINARY_DIR}/zephyr/${KERNEL_ELF_NAME}
  WORKING_DIRECTORY ${APPLICATION_BINARY_DIR}
  USES_TERMINAL
  )
