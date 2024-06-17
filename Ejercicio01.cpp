#include <iostream>

using namespace std;

int main()
{
    // Calcular el radio

    float Pi = 3.1416;
    float radio, area = 0;
    int opcion = 0;

    cout << "Calculadora de radio" << endl;
    cout << "¿Que quieres calcular?" << endl;
    cout << "1. Circulo." << endl;
    cout << "2. Esfera." << endl;
    cout << "9. para salir" << endl;

    cin >> opcion;

    if (opcion = 1)
    {
        cout << "Calculo para el redio de un circulo" << endl;
        cout << "Ingrese el radio del circulo" << endl;
        cin >> radio;

        area = Pi * (radio * radio);

        cout << "El area del circulo es: " << area << endl;
    }

    if (opcion = 2)
    {
        cout << "Calculo para el redio de una esfera" << endl;
        cout << "Ingrese el radio de la esfera" << endl;
        cin >> radio;

        area = (4 * Pi) * (radio * radio);

        cout << "El area de la esfera es: " << area << endl;
    }

    if (opcion = 9)
    {
        exit;
    }

    return 0;
}