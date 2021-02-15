#! /usr/bin/bash

VAL="|_"
echo $VAL
for i in {1..4}; do
    VAL="| ${VAL}"
    echo $VAL
done
