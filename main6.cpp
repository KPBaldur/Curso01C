#include <iostream>

using namespace std;

int main()
{
    // Condicionales if, else if, else

    int Math = 0;
    int Biology = 0;

    cout << "Cuanto sacaste en Matematicas?" << endl;
    cin >> Math;
    cout << "Cuanto sacaste en Biologia?" << endl;
    cin >> Biology;

    if (Math == 10)
    {
        cout << "La alumna es una genio" << endl;
    }
    else if (Math > 6)
    {
        cout << "El alumno aprobo en matematicas" << endl;
    }
    else
    {
        cout << "El almuno reprobo en matematicas" << endl;
    }
    if (Biology < 8)
    {
        cout << "El alumno reprobo biologia" << endl;
    }
    else
    {
        cout << "El alumno aprobo biologia" << endl;
    }

    return 0;
}