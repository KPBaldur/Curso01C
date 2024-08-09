#include <iostream>
#include "Player.h"
#include "Player.cpp"
#include "MapCell.h"
#include "MapCell.cpp"
#include "GameMap.h"
#include "GameMap.cpp"

using namespace std;

int main()
{

    bool isGameOver = false;
    GameMap Map;
    Player Hero;

    cout << "Inicia el Juego!!!!!" << endl;

    while (isGameOver == false)
    {
        
        Hero.CallInput();
        Map.Draw();
    }
    return 0;
}
