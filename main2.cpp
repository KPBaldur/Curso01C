#include<iostream>

using namespace std;

class Persona {
private:
    string nombre;
    int edad;
public:    
    Persona(string nombre, int edad){
        this-> nombre = nombre;
        this-> edad = edad;
    }
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
    void saludar() {
        cout << "Hola soy " << nombre << ", mi edad es " << edad << endl;
    }
};

int main() {
    Persona *p = new Persona("Diana", 25);
   
    /*
    Persona *p2 = new Persona("Ximena", 26);
    */

    p->establecerNombre("Ximena").establecerEdad(26);

    p -> saludar();
    
    /*
    p2 -> saludar();
    */
}