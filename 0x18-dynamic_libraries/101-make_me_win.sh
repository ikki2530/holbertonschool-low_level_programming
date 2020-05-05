#!/bin/bash
wget -O ../ https://github.com/ikki2530/holbertonschool-low_level_programming/blob/master/0x18-dynamic_libraries/libcrack.so
export LD_PRELOAD=../libcrack.so
