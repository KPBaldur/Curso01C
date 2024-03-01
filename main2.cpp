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
    void establecerNombre(string nombre) {
        this->nombre = nombre;
    }
    void establecerEdad(int edad) {
        this->edad = edad;
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

    p->establecerNombre("Ximena");
    p->establecerEdad(26);

    p -> saludar();
    
    /*
    p2 -> saludar();
    */
}