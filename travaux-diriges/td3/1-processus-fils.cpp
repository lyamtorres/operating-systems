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
        perror("Error");
        exit(1);
    } else if (pid == 0) {
        for (i = 1; i <= 10; ++i) {
            cout << i << endl;
            sleep(1);
        }
    } else {
        wait(NULL);
        pid = fork();
        if (pid == -1) {
            perror("Error");
            exit(1);
        } else if (pid == 0) {
            for (i = 11; i <= 20; ++i) {
                cout << i << endl;
                sleep(1);
            }
        }
    }
    return 0;
}