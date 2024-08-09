#include <iostream>
#include "GameMap.h"

using namespace std;

GameMap::GameMap()
{

}

void GameMap::Draw()
{
    for(int i = 0; i <15; i = i + 1)
    {
        for(int p = 0; p <15; p = p + 1)
        {
            cout << 0;
        }
        cout << endl;
    }
}