#include <iostream>

using namespace std;

int main() {
    int option = 0;
    cout << "Introduce una opcion: ";
    cin >> option;
    switch (option) {
    case 1:
        cout << "Opcion 1 seleccionada";
        break;
    case 2:
        cout << "Opcion 2 seleccionada";
        break;
    default:
        cout << "Esta opcion no existe";
        break;
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
