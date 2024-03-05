#!/bin/sh
cat /etc/passwd | sed '/^#/d' | sed -n '2~2p' | awk -F ':' '{ print $1 }' | rev | sort -r | sed -n ''$FT_LINE1','$FT_LINE2'p' | sed -z 's/\n/, /g' | sed 's/, $/./'
