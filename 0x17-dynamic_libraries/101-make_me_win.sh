#!/bin/bash
wget -qO https://github.com/aharshbe/holbertonschool-low_level_programming/raw/master/0x17-dynamic_libraries/u.so
export LD_PELOAD=$PWD/u.so
