#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    
    ofstream MyFile("GameData.txt");
    string PlayerName = "";

    if(MyFile.is_open())
    {
        MyFile << "Hola Mundo!" << endl;
        MyFile << "Mi nombre es" << endl;
        MyFile << "Kevin"
    }

    MyFile.close();

    ifstream MyFileRead("GameData.txt");

    if(MyFileRead.is_open())
    {
    
    } 
    return 0;
}