#include <iostream>
// Funciones
using namespace std;

// Declaracion de la funcion
void PrintCuteMessage()
{
    cout << "Eres terrible pulento!" << endl;
    cout << "<3" << endl;
}

bool IsPlayerDead(int hp)
{
    if (hp <= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    // Llamado de la funcion
    PrintCuteMessage();

    return 0;
}