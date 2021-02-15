#! /usr/bin/bash

# Affiche le jour de la semaine en toutes lettres en fonction du paramètre

if [ $# -gt 1 ] ; then # Si le nombre de paramètres est superieur à 1 
    echo "Erreur..." >&2
    exit 1
fi

if [ $# -eq 0 ] ; then # Si le nombre de paramètres est equivalent à 0
    DAY=$(date +%w)
else 
    DAY=$1
fi

case $DAY in
    1) echo "lundi" ;;
    2) echo "mardi" ;;
    3) echo "mercredi" ;;
    4) echo "jeudi" ;;
    5) echo "vendredi" ;;
    6) echo "samedi" ;;
    7) echo "dimanche" ;;
    *) echo "Erreur, nombre incorrect." >&2 ;;
esac