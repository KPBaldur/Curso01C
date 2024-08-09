#include <iostream>

using namespace std;

int main() {
    int opcion;

    do{
        cout << "Menu de Opciones: " << endl;
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: " << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Has seleccionado la Opcion 1." << endl;
            break;
        case 2:
            cout << "Has seleccionado la Opcion 2." << endl;
            break;
        case 3:
            cout << "Has seleccionado la Opcion 3." << endl;
            break;
        default:
            cout << "Opcion no valida. Intentalo de nuevo." << endl;
        }
    } while (opcion != 3);
    
    return 0;
}