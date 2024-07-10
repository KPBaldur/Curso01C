#include <iostream>

using namespace std;

class Dog
{
public:
    Dog(string Name, string BarkType){
        mName = Name;
        mBark = BarkType;
    }

    string GetName()
    {
        return mName;
    }

    void SetName(string NewName)
    {
        mName = NewName;
    }

    void Bark()
    {
        cout << mBark << endl;
    }
private:
    string mName;
    string mBark;
};

int main()
{

    Dog PerroUno("Woofers", "berk");
    PerroUno.SetName("Poopy");

    Dog PerroDos("Comodoro", "woof");

    cout << PerroUno.GetName() << endl;

    cout << PerroDos.GetName() << endl;

    PerroUno.Bark();

    PerroDos.Bark();

    return 0;
}