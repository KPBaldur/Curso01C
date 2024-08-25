#include <iostream>

using namespace std;

class Cat
{
public:
    string Name;

    Cat()
    {
        Name = "KittyNoName";
    }

    Cat(string iName)
    {
        Name = iName;
    }

    void Meow()
    {
        cout << Name << " dice onta la comia " << endl;
    }
};

int main()
{
    Cat MyFirstKitty;
    Cat MySecondKitty("Juancho");

    MyFirstKitty.Meow();

    return 0;
}