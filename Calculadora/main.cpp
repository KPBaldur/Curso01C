#include <iostream>
#include <cmath>
/*#include "aritmetica.h"
#include "aritmetica.cpp"
*/
using namespace std;

int main()
{
    int a = 0;
    int b = 0;

    cout << "Ingrese el primer numero: " << endl;
    cin >> a;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> b;

    int option = 0;
    cout << "Ingresa una operacion: " << endl;
    cout << "1) Suma 2) Resta 3) Multiplicacion 4) Division" << endl;
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
}