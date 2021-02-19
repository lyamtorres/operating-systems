#include <iostream>
#include <thread> 

using namespace std;

int i;       

void fils() {
    i += 10;
    cout << "Bonjour fils : " << i << endl;
    i += 20;
    cout << "Bonjour fils : " << i << endl;
}

int main() {
    pid_t pid;  
    i = 0;  
    thread t(fils);
    i += 1000;
    cout << "Bonjour père : " << i << endl;
    i += 2000;
    cout << "Bonjour père : " << i << endl;
    t.join();

    return 0;
}