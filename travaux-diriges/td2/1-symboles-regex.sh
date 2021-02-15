#! /usr/bin/bash

# 1) Chercher toutes les lignes commençant par 'a' ou 'A'.
grep '^[aA]' dico.txt
grep -i '^a' dico.txt 

# 2) Chercher toutes les lignes finissant par 'rs'.
grep 'rs$' dico.txt

# 3) Chercher toutes les lignes finissant par 'rs'.
grep '[0-9]' dico.txt

# 4) Chercher toutes les lignes commençant par une majuscule.
grep '^[A-Z]' dico.txt

# 5) Chercher toutes les lignes commençant par 'B', 'E' ou 'Q' 
grep '^[BEQ]' dico.txt

# 6) Chercher toutes les lignes finissant par un point d'exclamation.
grep '\!$' dico.txt

# 7) Cherchez toutes les lignes se terminant par un point.
grep '\.$' dico.txt

# 8) Chercher toutes les lignes ne finissant pas par un signe de ponctuation (point, virgule,point-virgule, deux-points, point d'interrogation, point d'exclamation).
grep '[^.,;?!]$' dico.txt

# 9)  Comment chercher tous les mots contenant un 'r' précédé de n'importe quelle lettremajuscule ou minuscule ?
egrep '[a-zA-Z]+r[a-zA-Z]*' dico.txt

# 10) Chercher toutes les lignes dont la seconde lettre est un 'r'.
grep '^.r' dico.txt