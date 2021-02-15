#! /usr/bin/bash

# 1) 
ps aux | grep "/etc/X11/X"

# 2)
cat exemple1.txt | grep -v '^$' > exemple2.txt

# 3)
less /etc/passwd
cat /etc/passwd

# 4)
grep "ext4" /etc/fstab # Solution simple mais incomplète
grep -E "^[^#]*ext4" /etc/fstab # Meilleure solution

# 5)
ls /etc/ | grep '[0-9]'