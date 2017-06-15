#!/bin/sh

# This script is loosly based on a script with same purpose provided
# by RIOT-OS (https://github.com/RIOT-OS/RIOT)

BOSSAC_CMD="${BOSSAC:-bossac}"
BOSSAC_PORT=${BOSSAC_PORT:-"/dev/ttyACM0"}
if [ `uname` = "Linux" ]; then
    stty -F ${BOSSAC_PORT} raw ispeed 1200 ospeed 1200 cs8 \
-cstopb ignpar eol 255 eof 255
    ${BOSSAC_CMD} -p ${BOSSAC_PORT} -R -e -w -v -b "${O}/${KERNEL_BIN_NAME}"
else
    echo "CAUTION: No flash tool for your host system found!"
fi

