#! /usr/bin/bash

# Prends des paramètres pour les afficher ensuite en ordre inverse

args=($*)
for((i = $# - 1; i >= 0; i = $((i - 1))))
do 
    echo ${args[i]}
done