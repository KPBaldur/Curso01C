#include <iostream>

using namespace std;

int main()
{
    // Condicionales switch

    int Math = 0;
    int Biology = 0;

    cout << "Cuanto sacaste en Matematicas?" << endl;
    cin >> Math;

    switch (Math)
    {
    case 10:
        cout << "La alumna es una genio";
        break;
    case 7:
        cout << "La alumna saco 7";
        break;
    case 6:
        cout << "La alumna reprobo";

    default:
        cout << "Valor incorrecto";
        break;
    }

    return 0;
}