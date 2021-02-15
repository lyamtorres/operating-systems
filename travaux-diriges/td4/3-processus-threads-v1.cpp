#include <iostream>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

using namespace std;

int i;

int main() {
    pid_t pid;
    i = 0;
    pid = fork();
    if (pid == -1)
        perror("Impossible de créer le processus fils");
    else if (pid == 0) {
        i += 10;
        cout << "Bonjour fils : " << i << endl;
        i += 20;
        cout << "Bonjour fils : " << i << endl;
        exit(0);
    } else {
        i += 1000;
        cout << "Bonjour père : " << i << endl;
        i += 2000;
        cout << "Bonjour père : " << i << endl;
        wait(NULL);
    } 
    return 0;
}

// Question : Pourquoi le père s'exécute toujours avant le fils ?