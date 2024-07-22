#include <iostream>

using namespace std;

int main() {

    int Direccion = 3509;

    int* ApuntadorDir;

    ApuntadorDir = &Direccion;
    *ApuntadorDir = 3;

    cout << ApuntadorDir << endl;
    cout << Direccion << endl;

    return 0;
}