#include <iostream>

using namespace std;

int main()
{

    // Loop While
    /*
    int Counter = 0;

    while (Counter <= 100)
    {
        cout << Counter << endl;
        Counter = Counter + 1;
    }
    */
    // Loop doWhile
    /*
    bool isHappy = true;
    char input = ' ';
    do
    {
        cout << ":D" << endl;
        cout << "Sigues feliz? (T/F)" << endl;
        cin >> input;

        if (input == 'F')
        {
            isHappy = false;
            cout << ":C";
        }

    } while (isHappy == true);
    */

    // Loop For

    for (int i = 0; i < 100; i++)
    {
        // cout << i << endl;

        if (i % 2 == 0)
        {
            cout << "es Par" << endl;
        }
        else
        {
            cout << "es Impar" << endl;
        }
    }
    return 0;
}