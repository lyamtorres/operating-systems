#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

using namespace std;

int main() {
    pid_t pid;
    int i;

    cout << "Le pid est du père est : " << getpid() << endl;
    pid = fork();
    if (pid == -1) {
        perror("Erreur");
        exit(1);
    } else if (pid == 0) {
        cout << "Impossible de créer le processus fils : " << getpid() << endl;
        execlp("who", "who", NULL); // Le 1er fils exécute la commande 'who'
        perror("execlp");
    } else {
        pid = fork();
        if (pid == -1) {
            perror("Impossible de créer le processus fils");
            exit(1);
        } else if (pid == 0) {
            cout << "Le pid est du 2e fils est : " << getpid() << endl;
            execlp("ps", "ps", NULL); // Le 2ème fils exécute la commande 'ps'
            perror("execlp");
        } else {
            execlp("ls", "ls", "-l", NULL); // Le père exécute la commande 'ls -l'
            perror("execlp");
        }
    }

    return 0;
}