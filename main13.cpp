#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    /*ofstream MyFile("GameData.txt");
    string PlayerName = "";

    if (MyFile.is_open())
    {
        MyFile << "Hola Mundo!" << endl;
        MyFile << "Mi nombre es: " << endl;

        cout << "Introduce el nombre de tu heroe: " << endl;
        cin >> PlayerName;
        MyFile << PlayerName;
    }

    MyFile.close();*/

    ifstream MyFileRead("GameData.txt");
    string line;
    string NombreDelHeroe = "";
    int Reglon = 0;

    if (MyFileRead.is_open())
    {
        while (getline(MyFileRead, line))
        {

            if (Reglon == 3)
            {
                NombreDelHeroe = line;
            }
        }
    }
    else
    {
        cout << "No logre abrir mi archivo, checar el antivirus!" << endl;
    }

    cout << "Bienvenida a tu aventura:  " << endl;
    cout << NombreDelHeroe << endl;

    return 0;
}