board_runner_args(nrfjprog "--nrf-family=NRF51")
board_runner_args(jlink "--device=nrf51" "--speed=4000")
include($ENV{ZEPHYR_BASE}/boards/common/nrfjprog.board.cmake)
include($ENV{ZEPHYR_BASE}/boards/common/jlink.board.cmake)
