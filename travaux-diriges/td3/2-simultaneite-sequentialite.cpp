#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

using namespace std;

int main() {
    pid_t pid;
    int i;

    pid = fork(); // Le père crée le 1er fils
    if (pid == -1) {
        perror("Error");
        exit(1);
    } else if (pid == 0) {
        execlp("who", "who", NULL); // Le 2ème fils crée exécute la commande 'who'
        perror("execlp");
    } else {
        pid = fork(); // Le père crée le 2ème fils
        if (pid == -1) {
            perror("fork");
            exit(1);
        } else if (pid == 0) {
            execlp("ps", "ps", NULL); // Le 2ème fils exécute la commande 'ps'
            perror("execlp");
        } else {
            execlp("ls", "ls", "-l", NULL); // Qui exécute la commande 'ls -l' ? Le père ou le 1er fils ?
            perror("execlp");
        }
    return 0;
    }
}