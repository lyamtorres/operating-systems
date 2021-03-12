#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
    int i;
    for (i = 0; i < 3; i++) {
        fork();
        cout << "PID = " << getpid() << ", i = " << i << endl;
    }
    return 0;
}

// Dans ce programme 7 processus sont génerées