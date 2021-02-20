#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

using namespace std;

int main() {
    pid_t pid;
    int i;

    pid = fork();
    if (pid == -1) {
        perror("Impossible de créer le processus fils");
        exit(1);
    } else if (pid == 0) {
        execlp("who", "who", NULL); 
        perror("execlp");
    } else {
        pid = fork();
        if (pid == -1) {
            perror("Impossible de créer le processus fils");
            exit(1);
        } else if (pid == 0) {
            execlp("ps", "ps", NULL);
        } else {
            execlp("ls", "ls", "-l", NULL);
            perror("execlp");
            // Wait(NULL);
        }
    }

    return 0;
}