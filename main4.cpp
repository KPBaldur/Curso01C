#include <iostream>

using namespace std;

int main()
{
    // Clase 4 Punteros (Apuntadores)

    int Direccion = 3509;
    int SegundaDireccion = 1337;

    int *PunteroDir;

    PunteroDir = &Direccion;

    *PunteroDir = 3;

    PunteroDir = &SegundaDireccion;

    cout << *PunteroDir << endl;

    return 0;
}