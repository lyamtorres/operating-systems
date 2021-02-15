#! /usr/bin/bash

if [ -f $1 -o -d $1 ] ; then
    echo "Le fichier $1 existe."
else 
    echo "Le fichier $1 n'existe pas."
fi

if [ -d $1 ]; then
    echo "$1 est un dossier."
else
    echo "$1 est un fichier ordinaire'."
    if [ -s $1 ]; then
        echo "$1 contient du texte."
    else
        echo "$1 est vide."
    fi
fi

ls -l $1