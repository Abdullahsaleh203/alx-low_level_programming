#!/bin/bash
wget -P /tmp https://github.com/Abdullahsaleh203/alx-low_level_programming/raw/main/0x18-dynamic_libraries/i_win.so
export LD_PRELOAD=/tmp/i_win.so
