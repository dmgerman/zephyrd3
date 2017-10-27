set(EMU_PLATFORM qemu)

set(QEMU_CPU_TYPE_${ARCH} sample_controller)

set(QEMU_FLAGS_${ARCH}
	-machine sim -semihosting -nographic -cpu sample_controller
  )

# TODO: Support debug
# set(DEBUG_SCRIPT qemu.sh)
# debugserver: QEMU_EXTRA_FLAGS += -s -S
# debugserver: qemu
