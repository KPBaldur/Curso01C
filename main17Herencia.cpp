#include <iostream>

using namespace std;

class Mage
{
private:
    

public:
    int mana, hp, power;

    Mage(int iMana, int iHP, int iPower)
    {
        mana = iMana;
        hp = iHP;
        power = iPower;
    }

    void Spell(){
        cout << "Fuegos artificiales: " << power << endl;
    }
    
};

class IceMage : public Mage
{
public:
    IceMage(int iMana, int iHP, int iPower): Mage(iMana,iHP,iPower)
    {
        mana = iMana;
        hp = iHP;
        power = iPower + 10;        
    }
};



int main()
{
    Mage Gandalf(100,10,20);
    IceMage Saruman(100,10,20);
    
    Gandalf.Spell();
    Saruman.Spell();

    return 0;
}