#include <iostream>

using namespace std;

class Human
{
    public:
        //Creamos el constructor de la clase 
        Human(int SpawnAge)
        {
            Age = SpawnAge;
        }

        //Creamos una funcion para "pensar" y abstraer la funcion de pensar
        void Think()
        {
            cout << GetThinkMessage() << endl;
        }

        int Age;
    
    private:
        //Creamos el proceso de pensar de forma privada
        int SocialLevel;
        int Inteligence;
        int Luck;

        //Declaramos el algoritmo de pensar
        string GetThinkMessage()
        {
            if(SocialLevel + Luck > 100)
            {
                return "Estoy teniendo pensamientos felices :D";
            }
            else if(Luck > Inteligence)
            {
                return "Soy un suertudo!";
            }
            else if(Age > 18)
            {
                return "Soy un bebe";
            }
            else{
                return "No pienso en nada";
            }
        }
};

int main()
{

    //Creamos al humano Bob y le asignamos su edad 
    Human Bob(19);


    //Llamamos la funcion de pensar
    Bob.Think();

    return 0;
}