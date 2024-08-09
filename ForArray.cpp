#include <iostream>

using namespace std;

int main(){
    int numeros[] = {10, 20, 30, 40, 50};
    int tamano = sizeof(numeros) / sizeof(numeros[0]);

    // Ciclo for que recorre un array e imprime sus elementos
    for(int i = 0; i< tamano; ++i) {
        cout << numeros[i] << endl;
    }

    return 0;
}