#include<iostream>

using namespace std;

class Persona {
public:
    string nombre;
    int edad;
    Persona(string n) {
        nombre = n;
    }
    void saludar() {
        cout << nombre << endl;
    }
};

int main() {
    Persona *p = new Persona("Diana");
    Persona *p2 = new Persona("Ximena");

    p -> saludar();
    p2 -> saludar();
}