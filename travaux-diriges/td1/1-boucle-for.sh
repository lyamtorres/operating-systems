#! /usr/bin/bash

# Affiche les fichiers qui sont accesibles en lecture 

for FILE in /etc/* ; do
    if [ -r $FILE ] ; then
        echo $FILE
    fi 
done