#include <iostream>

using namespace std;

class Persona {
public:
    string nombre;
    int edad;

    Persona(string n, int e){
        nombre = n;
        edad = e;
    }

    void presentarse(){
        cout << "Hola, mi nombre es " << nombre << " y tengo " << edad << " años." << endl;
    }
};

int main()
{
    Persona.persona1("Juan", 30);
    persona1.presentarse();
    
    return 0;
}