// Créer 2 processus (fils) x
// Exécuter la commande ls -l x
// Exécuter la commande ps -l x
// Faire que le père attende la fin de l'exécution des fils
// Afficher le premier processus à terminer

#include <iostream>
#include <unistd.h>
#include <sys/wait.h>

using namespace std;

int main() {
    pid_t pid;
    pid = fork();
    if (pid == -1) {
        perror("Impossible de créer le processus fils.");
    } else if (pid == 0) {
        execlp("ls", "ls", "-l", NULL);
        exit(0);
    } else {
        pid = fork();
        if (pid == -1) {
            perror("Impossible de créer le processus fils.");
        } else if (pid == 0) {
            execlp("ps", "ps", "-l", NULL);
            exit(0);
        } else {
            wait(NULL);
        }
    }
}