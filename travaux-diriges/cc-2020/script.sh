#! /usr/bin/bash

# TO-DO : Trouver une manière de redémarrer le case en cas de réponse invalide

if [ $# -eq 0 ]; then
    echo "Ajoutez au moins un argument." >&2
    exit 1
fi

for FILE in $*; do
    if [ -d "$FILE" ]; then
        echo "$FILE est un répertoire." >&2     
    elif [ ! -f "$FILE" ]; then
        echo "$FILE n'existe pas." >&2
    else
        read -p "Voulez vous vraiment effacer le fichier $FILE ? (O/N) " ANSWER        
        case "$ANSWER" in         
            [oO])
                rm $FILE
                echo "Suppression confirmée."
                ;;
            [nN])
                echo "Suppression abandonée."
                ;;
            *)
                echo "Réponse invalide."
                ;;
        esac
    fi
done

