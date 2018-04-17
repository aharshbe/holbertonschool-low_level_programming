#!/bin/bash
wget -q https://github.com/aharshbe/holbertonschool-low_level_programming/blob/master/0x17-dynamic_libraries/win.so
LD_PRELOAD=/./win.so
