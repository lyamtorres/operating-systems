#! /usr/bin/bash

# Précondition : Le nom du fichier passé en paramètre ne doit pas exister 
for i in $(ls | grep ".txt"); do 
    cat $i >> $1;
done
