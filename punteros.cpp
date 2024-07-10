#include <iostream>

using namespace std;

int main()
{
    int direccion = 4909;

    int *PunteroDireccion;

    PunteroDireccion = &direccion;

    cout << PunteroDireccion << endl;
}