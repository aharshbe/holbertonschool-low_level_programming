#!/bin/bash
wget -q -O /tmp/lib.so https://github.com/aharshbe/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/lib.so
export LD_PELOAD=/tmp/lib.so
