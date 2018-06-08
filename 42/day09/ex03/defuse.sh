#!/bin/sh
last_modified = $(stat -r bomb.txt | cut -d' ' -f 9 )
echo ($last_modified - 1) | bc
