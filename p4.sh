#!/bin/sh
If test $# -eq 0 ; then
Echo “Usage : $0 Pattern file”  >/dev/tty
Elif test $# -eq 2 ; then
Grep “ $1”  $2 || echo “$1 not found in $2”  >/dev/tty
Else
Echo “ you didn’t enter two arguments”  >/dev/tty
Fi