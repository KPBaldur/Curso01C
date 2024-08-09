#include <iostream>

using namespace std;

int main() {
    int operacion = 0;
    cout << "Introduce una opcion" << endl;
    cin >> operacion;
    switch(operacion) {
        case 1:
            cout << "Opcion 1";
            //break;
        case 2: 
            cout << "Opcion 2";
            //break;
        default:
            cout << "Eliga una opcion correcta";
    }
}