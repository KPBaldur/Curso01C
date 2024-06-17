#include <iostream>

using namespace std;

int main()
{

    // Ejemplo 1 Arrays
    /*
    char Corbatas[5];

    Corbatas[0] = 'v';
    Corbatas[1] = 'n';
    Corbatas[2] = 'p';
    Corbatas[3] = 'r';
    Corbatas[4] = 'f';

    cout << Corbatas[0] << endl;
    cout << Corbatas[1] << endl;
    cout << Corbatas[2] << endl;
    cout << Corbatas[3] << endl;
    cout << Corbatas[4] << endl;
    */

    // Ejemplo 2 Arrays

    int index = 0;
    cin >> index;

    string Names[4] = {"Asterix", "Idiafix", "Obelix", "Panoramix"};
    string CurrentName = Names[index];

    cout << CurrentName << endl;

    return 0;
}