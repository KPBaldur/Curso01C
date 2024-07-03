#include <cmath> // Incluir la biblioteca matemática para usar exp()
#include <iostream>

// Función para calcular la reducción de daño
float damageReduction(int armor, float k)
{
    return 1 - exp(-k * armor);
}

int main()
{
    // Variables
    int armors[] = {0, 25, 50, 80, 115, 155, 205};      // Array de valores de armadura
    float k = 0.0065;                                   // Valor de k ajustado para inicio en 0.15%
    int numArmors = sizeof(armors) / sizeof(armors[0]); // Número de elementos en el array armors

    // Calcular y mostrar la reducción de daño para cada valor de armadura
    for (int i = 0; i < numArmors; i++)
    {
        float reduction = damageReduction(armors[i], k);
        std::cout << "Armadura: " << armors[i] << ", Reduccion de danio: " << reduction * 100 << "%" << std::endl;
    }

    return 0;
}
