#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream MyFile("GameData.txt");

    if(MyFile.is_open())
    {
        MyFile << "Hola Mundo!";

        for(int i = 0; i < 10; i++ )

        MyFile << i << endl;
    }

    return 0;
}