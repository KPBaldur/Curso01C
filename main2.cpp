#include<iostream>

using namespace std;

class Persona {
public:
    string nombre;
    int edad;
    Persona(string n) {
        nombre = n;
    }
    ~Persona(){
        cout << "destructor" << endl;
    }
    void saludar() {
        cout << nombre << endl;
    }
};

int main() {
    Persona *p = new Persona("Diana");
    Persona *p2 = new Persona("Ximena");

    delete p2;

    p -> saludar();
    p2 -> saludar();
}