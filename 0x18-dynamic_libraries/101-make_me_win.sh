#!/bin/bash
wgets -P .. https://raw.githubusercontent.com/kristofaumeh/alx-low_level_programming/main/0x18-dynamic_libraries/testshack.so
export LD_PRELOAD="PWD/../testshack.so"
