#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
    pid_t pid;

    pid = fork();
    if (pid == -1) {
        perror("Erreur");
    } else {
        if (pid == 0) {
            execlp("chrt", "chrt", "-m", NULL);
        }
    }
}