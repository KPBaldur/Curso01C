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

        cout << "Introduce el nombre de tu Heroe" << endl;
        cin >> PlayerName;
        MyFile << PlayerName;
    }

    MyFile.close();

    ifstream MyFileRead("GameData.txt");
    string line;
    string NombreDelHeroe = "";
    int Reglon = 0;

    if(MyFileRead.is_open())
    {
        while(getline(MyFileRead,line))
        {
            
            if(Reglon == 2){
                NombreDelHeroe = line;
            }

            Reglon = Reglon + 1;
        }
    } 

        cout << "Bienvenida a tu gran aventura! " << endl;
        cout << NombreDelHeroe;

    return 0;
}