#! /usr/bin/bash

read -p "Saisir une adresse IP: " ADRESSE
# IP_PATTERN='(([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])\.){3}([0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5])' # Ne match pas correctement avec le dernier octet
echo $ADRESSE | cut -d\. -f1 # Me donne le premier octet
    # if [[ $ADRESSE  =~ $IP_PATTERN ]]; then
    #         read -p "$ADRESSE est une adresse valide, voulez vous l'enregistrer dans un fichier (O/N) ? " REPONSE
    #         case "$REPONSE" in 
    #             [oO] | [oO][uU][iI])
    #                 read -p "Donner le nom du fichier: " DOC
    #                 echo "Verification de la non redondance de l'adresse dans le fichier..."
    #                 MOT=$(grep $ADRESSE $DOC)
    #                 if [ "$ADRESSE" == "$MOT" ]; then
    #                         echo "ERREUR : $ADRESSE existe deja dans le fichier. $DOC !" >&2
    #                     else 
    #                         echo "Ajout de l'adresse $ADRESSE dans le fichier. $DOC."
    #                         echo "$ADRESSE" &>> $DOC
    #                 fi
    #                 ;;
    #             [nN] | [nN][oO][nN])
    #                 echo "Vous allez sortir du système." ;;
    #             *)
    #                 echo "Votre choix est incorrect." ;;
    #         esac
    #     else 
    #         echo "$ADRESSE est une adresse invalide."
    # fi


