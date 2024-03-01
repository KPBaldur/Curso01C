#include<iostream>

using namespace std;

class Persona {
private:
    string nombre;
    int edad;
public: 
    static int numero_personas;   
    Persona(string nombre, int edad);

    ~Persona(){
        cout << "destructor" << endl;
    }
    Persona &establecerNombre(string nombre) {
        this->nombre = nombre;
        return *this;
    }
    Persona &establecerEdad(int edad) {
        this->edad = edad;
        return *this;
    }
    void saludar();
};

int Persona:: numero_personas = 0;
void Persona::saludar() {
    cout << "Hola soy " << nombre << ", mi edad es " << edad << endl;
}

Persona::Persona(string nombre, int edad){
        this-> nombre = nombre;
        this-> edad = edad;
        numero_personas += 1;
}

int main() {
    Persona *p = new Persona("Diana", 25);
    Persona *p2 = new Persona("Juana", 35);

    cout << "Numero de personas: " << Persona::numero_personas << endl;
   
    /*
    Persona *p2 = new Persona("Ximena", 26);
    */

    p->establecerNombre("Ximena").establecerEdad(26);

    p -> saludar();
    
    /*
    p2 -> saludar();
    */
}