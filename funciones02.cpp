#include <iostream>

using namespace std;

int Suma(int n1, int n2){
    int resultado;
    resultado = n1 + n2;
    return resultado;
}

int main(){

    int n1, n2;

    cout << "Ingrese el primer numero: "; cin >> n1;
    cout << "Ingrese el segundo numero: "; cin >> n2;

    int resultado = Suma(n1, n2);

    cout << "El resultado de la suma es: " << resultado << endl;

    return 0;
}