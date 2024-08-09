#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero positibo (o un numero negativo para salir): ";
    cin >> numero;

    while (numero >= 0){
        cout << "Numero Ingresado: " << numero << endl;
        cout << "Ingrese otro numero positivo (o un numero negativo para salir): ";
        cin >> numero;
    }

    cout << "Has ingresado un numero negativo. Saliendo del programa." <<  endl;

    return 0;
}