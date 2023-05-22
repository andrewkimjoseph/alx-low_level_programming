#!/bin/bash
wget -P /tmp/ https://github.com/andrewkimjoseph/alx-low_level_programming/blob/96b4c237eada16a71ae636e88f7120b5150d013c/0x18-dynamic_libraries/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
