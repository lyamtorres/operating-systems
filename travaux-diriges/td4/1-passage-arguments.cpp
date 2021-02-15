#include <iostream>
#include <thread>
#include <unistd.h> // Bibliothèque pour utiliser la fonction sleep()

using namespace std;

void tache(int temps) {
    cout << "Début thread\n";
    sleep(temps);
    cout << "Fin thread\n";
}

int main() {
    cout << "Début main\n";
    int temps = 5;
    thread travailleur(tache, temps);
    travailleur.join(); // Attend la fin du thread
    cout << "Fin main\n";

    return 0;
}