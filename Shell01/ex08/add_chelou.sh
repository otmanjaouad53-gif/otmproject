#!/bin/sh

B5='01234'

CONV1=$(echo "$FT_NBR1" | tr "'\\\\\"?!" "$B5")
CONV2=$(echo "$FT_NBR2" | tr "mrdoc" "$B5")

echo "obase=13;ibase=5;$CONV1+$CONV2" | bc | tr "0123456789ABC" "gtaio luSnemf"
