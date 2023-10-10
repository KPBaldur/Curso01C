#include <iostream>

using namespace std;

int main() {
    int edad = 0;
    cout << "edad: ";
    cin >> edad;
    if (edad < 18) {
        cout <<"No puedes votar";
    } else if (edad > 40) {
        cout << "No puedes votar";
    } else {    
        cout << "Puedes votar";
    }
}



/*
Clase 03
## Tipos de datos

Bool(Boolean):

- Valor lógico
- Puede ser Verdadero o Falso
- Tamaño 4 bytes

Int(Integer)

- Números enteros
- Tamaño 5 bytes

Float

- Números decimales (punto flotante)
- Tamaño: 4 bytes

Double:

- Números de punto flotante de doble precisión
- Tamaño 8 bytes (4+4 = doble flotante)

Char (Character): 

- Carácter (ASCII)
- Muestra el caracter o su numero en ASCII
- Tamaño 4 bytes

Por ejemplo: “Hola Mundo” o “65”

También se tiene:

Short Int

Unsign Int

Long Double

Clase05 
# Operadores de C++

Aritméticos:  + - * / %

Comparación: == < > >= <=

Asignación: = += -= *= /= ++  --

Lógicos: && || !

Otros: sizeof <<>>
*/
