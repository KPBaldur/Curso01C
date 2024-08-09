#include <iostream>
#include <cmath>
/*#include "aritmetica.h"
#include "aritmetica.cpp"
*/
using namespace std;

int main()
{
    int opcion;
    float a = 0;
    float b = 0;

    do{
        cout << "Calculadora Simple" << endl;
        cout << "Seleccione una Opcion para la operacion." << endl;
        cout << "1. Suma." << endl;
        cout << "2. Resta." << endl;
        cout << "3. Multiplicacion." << endl;
        cout << "4. Division." << endl;
        cout << "5. Salir." << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Ingrese primer numero: " << endl;
            cin >> a;
            cout << "Ingrese segundo numero: " << endl;
            cin >> b;
            cout << "El resultado de la suma es: " << a + b << endl;
            break;
        case 2:
            cout << "Ingrese primer numero: " << endl;
            cin >> a;
            cout << "Ingrese segundo numero: " << endl;
            cin >> b;
            cout << "El resultado de la resta es: " << a - b << endl;
            break;
        case 3:
            cout << "Ingrese primer numero: " << endl;
            cin >> a;
            cout << "Ingrese segundo numero: " << endl;
            cin >> b;
            cout << "El resultado de la multiplicacion es: " << a * b << endl;
            break;
        case 4:
            cout << "Ingrese primer numero: " << endl;
            cin >> a;
            cout << "Ingrese segundo numero: " << endl;
            cin >> b;
            cout << "El resultado de la division es: " << a / b << endl;
            break;
        default:
            cout << "Opcion no valida. Intentalo de nuevo" << endl;
            break;
        }
    } while (opcion != 5);

        return 0;
    }

/*
    float a = 2;
    float b = 1;

    int option = 0;
    cout << "Ingresa una operacion: ";
    cin >> option;
    switch (option)
    {
    case 1:
        cout << "La suma de los numeros es: " << a + b;
        break;
    case 2:
        cout << "La resta de los numeros es " << a - b;
        break;
    case 3:
        cout << "La multi de los numeros es " << a * b;
        break;
    case 4:
        cout << "La divi de los numeros es " << a / b;
        break;
    default:
        cout << "esta opcion no existe";
        break;
        return 0;
    }
*/