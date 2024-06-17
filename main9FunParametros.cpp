#include <iostream>
// Funciones
using namespace std;

// Declaracion de la funcion
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
    int TotalLifes = 0;

    if (IsPlayerDead(TotalLifes))
    {
        cout << "Game Over";
    }

    return 0;
}