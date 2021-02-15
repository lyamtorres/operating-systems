#! /usr/bin/bash

# Itére une lecture au clavier jusqu'a l'obtention de la chaîne "oui" ou de la chaîne "non"

ANSWER=""
while [ "$ANSWER" != "oui" -a "$ANSWER" != "non" ] ; do 
    echo "Saisissez une réponse: "
    read ANSWER
    if [ "$ANSWER" = "oui" -o "$ANSWER" = "non" ] ; then
        echo "Bonne réponse!"
    else
        echo "Mauvaise réponse!"
    fi
done