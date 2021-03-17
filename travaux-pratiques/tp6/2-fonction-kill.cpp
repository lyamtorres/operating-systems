// Créer une boucle infinie
// Écrire bonjour à l'écran
// Écrire bonsoir à l'écran
// Une seule réaction pour le signal SIGUSR1
// Autant de réactions que nécessaire pour le signal SIGUSR2  

#include <iostream>
#include <unistd.h>
#include <signal.h>

using namespace std;

void handleSigusr1 (int signo) { 
    cout << "Bonjour" << endl;
}

void handleSigusr2 (int signo) { 
    cout << "Bonsoir" << endl;
}

int main(){ 
    struct sigaction s1;
    struct sigaction s2;

    s1.sa_handler = handleSigusr1;
    s2.sa_handler = handleSigusr2; 
    int retval1 = sigaction(SIGUSR1, &s1, NULL);
    int retval2 = sigaction(SIGUSR2, &s2, NULL);

    if (retval1 < 0 || retval2 < 0) {
        perror("sigaction failed");
        exit(1);
    } 
    cout << "processus : " << getpid() << endl;
    while(1); // Boucle infinie
    return 0; 
} 