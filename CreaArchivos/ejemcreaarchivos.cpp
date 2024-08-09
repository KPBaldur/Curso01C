#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    
    ofstream MyFile("GameData.txt");

    if(MyFile.is_open())
    {
        MyFile << "Hola Mundo!" << endl;
        MyFile << "Mi nombre es" << endl;
        MyFile << "Kevin"
    }

    MyFile.close();

    ifstream MyFileRead("GameData.txt");
    string line;

    if(MyFileRead.is_open())
    {
        while (getline(MyFileRead, line))
        {
            cout << line << endl;
        }

    } 
    return 0;
}