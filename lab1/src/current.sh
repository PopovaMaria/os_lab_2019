#!/bin/sh
D=$(date +%Y-%m-%d)
T=$(date +%H:%M:%S)
W=$(pwd)
P=$($PATH)
echo "$D" "$T" "$W" "$P"