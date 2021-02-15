#include <iostream>
#include <thread>

using namespace std;

void afficher(string message) {
    cout << message;
}

int main() {
    thread t1(afficher, "Hello ");
    t1.join();
    thread t2(afficher, "World !\n");
    t2.join();

    return 0;
}