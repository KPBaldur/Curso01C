#include <iostream>

using namespace std;

int main()
{
    string Names[5] = {"Axterix", "Obelix", "Idiafix", "Panoramix", "Asurenceturix"};

    // For
    /*
    for (int i = 0; i < 5; i++)
    {
        cout << Names[i] << endl;
    }
    */

    // while
    /*
    int index = 0;
    while (index < 5)
    {

        cout << Names[index] << endl;
        index++;
    }
    */

    // Array Bidimencional

    int ids[5][5] =
        {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
        };

    for (int i = 0; i < 5; i++)
    {
        for (int p = 0; p < 5; p++)
        {
            cout << ids[i][p];
        }

        cout << endl;
    }

    return 0;
}
