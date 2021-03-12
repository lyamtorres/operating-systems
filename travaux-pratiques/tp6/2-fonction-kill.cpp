#include <iostream>
#include <unistd.h>
#include <signal.h>

using namespace std;

void handINT (int signo) { 
    cout << "reception d'un signal SIGINT\n";
}

int main(){ 
    struct sigaction s;
    s.sa_handler = handINT; 
    int retval = sigaction(SIGINT, &s, NULL);
    if (retval < 0) {
        perror("sigaction failed");
        exit(1);
    } 
    cout << "processus : " << getpid() << endl;
    while(1);
    return 0; 
}