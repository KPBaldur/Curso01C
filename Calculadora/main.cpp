#include <iostream>
#include <cmath>
/*#include "aritmetica.h"
#include "aritmetica.cpp"
*/
using namespace std;

int main()
{
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
}