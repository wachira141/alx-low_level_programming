#!/bin/bash
wget -P /tmp https://github.com/wachira141/alx-low_level_programming/raw/main/0x18-dynamic_libraries/libmyprintf.so
export LD_PRELOAD=/tmp/libmyprintf.so
