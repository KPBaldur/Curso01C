#include <iostream>

using namespace std;

int main(){
    float alumn1, alumn2, alumn3, alumn4;
    float media;

    cout << "Ingrese la nota del alumno 1: "; cin >> alumn1;
    cout << "Ingrese la nota del alumno 2: "; cin >> alumn2;
    cout << "Ingrese la nota del alumno 3: "; cin >> alumn3;
    cout << "Ingrese la nota del alumno 4: "; cin >> alumn4;

    media = (alumn1 + alumn2 + alumn3 + alumn4) / 4;

    cout << "El promedio de la nota final de los alumnos es: " << media;

}