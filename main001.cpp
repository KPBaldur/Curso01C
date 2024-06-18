#include <iostream>

using namespace std;

void DrawMap(int HeroPosX, int HeroPosY, char Gamemap[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int p = 0; p < 5; p = p + 1)
        {
            if (p != HeroPosX)
            {
                cout << Gamemap[i][p];
            }
            else
            {
                if (i != HeroPosY)
                {
                    cout << Gamemap[i][p];
                }
                else
                {
                    cout << 'H';
                }
            }
        }
        cout << endl;
    }
}

int main()
{
    int HeroPosY = 0;
    int HeroPosX = 0;
    bool isGameOver = false;
    char Input = ' ';
    char Gamemap[5][5] =
        {
            {'3', '_', '_', '_', '_'},
            {'_', '_', '_', '_', '_'},
            {'_', '_', '_', '_', '_'},
            {'_', '_', '_', '_', '_'},
            {'_', '_', '_', '_', '_'}};

    DrawMap(HeroPosX, HeroPosY, Gamemap);

    while (isGameOver == false)
    {
        cin >> Input;

        if (Input == 'd')
        {
            HeroPosX = HeroPosX + 1;
        }
        else if (Input == 'a')
        {
            HeroPosX = HeroPosX - 1;
        }
        else if (Input == 's')
        {
            HeroPosY = HeroPosY + 1;
        }
        else if (Input == 'w')
        {
            HeroPosY = HeroPosY - 1;
        }
        else if (Input == 'p')
        {
            isGameOver = true;
        }

        DrawMap(HeroPosX, HeroPosY, Gamemap);
    }

    return 0;
}