#!/bin/bash

# Originally from the Galileo port in contiki
# https://github.com/otcshare/contiki-x86

set -e

JOBS=5
HEAD="grub-2.02"
SCRIPT_DIR=$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )

if [ "x$1" == "x" ]; then
  echo "Usage: $0 [i386|x86_64]"
  exit 1
fi

TARGET_ARCH=$1

prepare() {
  if [[ ! -d ./src ]]; then
    git clone http://git.savannah.gnu.org/r/grub.git src
  fi

  pushd src
  git checkout $HEAD
  git clean -fdx
  popd
}

build() {
  pushd src

  ./autogen.sh
  ./configure --with-platform=efi --target=${TARGET_ARCH}

  make -j${JOBS}

  ./grub-mkimage -p /EFI/BOOT -d ./grub-core/ -O ${TARGET_ARCH}-efi \
           -o grub_${TARGET_ARCH}.efi \
            boot efifwsetup efi_gop efinet efi_uga lsefimmap lsefi lsefisystab \
            exfat fat multiboot2 multiboot terminal part_msdos part_gpt normal \
            all_video aout configfile echo file fixvideo fshelp gfxterm gfxmenu \
            gfxterm_background gfxterm_menu legacycfg video_bochs video_cirrus \
            video_colors video_fb videoinfo video

  popd
}

setup() {
  mkdir -p bin
  cp src/grub_${TARGET_ARCH}.efi bin/
}

cleanup() {
  rm -rf ./src
  rm -rf ./bin
}

# This script will always run on its own basepath, no matter where you call it from.
mkdir -p ${SCRIPT_DIR}/grub
pushd ${SCRIPT_DIR}/grub

case $1 in
  -c | --cleanup)
    cleanup
    ;;
  *)
    prepare && build && setup
    ;;
esac

popd
