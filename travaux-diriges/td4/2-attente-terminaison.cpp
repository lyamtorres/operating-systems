#include <iostream>
#include <unistd.h>
#include <thread>
#include <string>

using namespace std;

void afficher(string message) {
    cout << message;
}

int main() {
    thread a(afficher, "Hello ");
    a.join();
    thread b(afficher, "World "); // Le thread "b" s'exécute après que le thread "a" aie fini
    b.join();
    cout << "! " << endl;

    return 0;
}