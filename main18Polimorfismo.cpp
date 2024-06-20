#include <iostream>

using namespace std;

class Mage
{
    public:
    Mage(int BasePower, int BaseHp)
    {
        Power = BasePower;
        hp = BaseHp;
    }

    float Damage()
    {
        return Power;
    }

    void GetDamage(int Value)
    {
        hp -= Value;
        cout << "Mi mago le queda: " << hp << endl;
    }

    void PrintHP()
    {
        cout << hp << endl;
    }

    protected:
    int Power, hp;
};

class IceMage: public Mage
    {
    public:
        IceMage(int BasePower, int BaseHp) : Mage(BasePower,BaseHp)
        {
            Power = BasePower + 1;
            hp = BaseHp;
        }
    };

    class FireMage: public Mage
    {   
    public:
        FireMage(int BasePower, int BaseHp) : Mage(BasePower,BaseHp)
        {
            Power = BasePower;
            hp = BaseHp + 10;
        }
    };

int main()
{

    Mage* CurrentMage;

    FireMage Gandalf(10,10);
    IceMage Dumbledore(10,10);

    CurrentMage = &Gandalf;
    CurrentMage->GetDamage(1);

    CurrentMage = &Dumbledore;
    CurrentMage->GetDamage(5);

    Gandalf.PrintHP();
    Dumbledore.PrintHP();

    return 0;
}