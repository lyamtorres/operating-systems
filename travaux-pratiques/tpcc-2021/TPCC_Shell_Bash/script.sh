#! /usr/bin/bash

if [ $# -eq 1 ]
then
    if [ -d $1 ]
    then
        VAR=`ls -R  $1`
        echo $VAR
    else
        echo "Ce n'est pas un répertoire" >&2
        exit 1
    fi
else 
    echo "Vous devez avoir un seul argument" >&2
    exit 1
fi