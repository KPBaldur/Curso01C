#include <iostream>

using namespace std;

int main() {
    int contador = 1;

    // Coclo do-while que imprime los numeros del 1 al 5
    do {
        cout << contador << endl;
        ++contador;
    } while (contador <= 5);

    return 0;
}

