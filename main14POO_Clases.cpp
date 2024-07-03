#include <iostream>

using namespace std; 

class Cat
{
public:
    string Name;

    Cat()
    {
        Name = "Guapo";
    }

    Cat(string iName)
    {
        Name = iName;
    }

    void Meow(){
        cout << Name << " dice meow" << endl;
    }

};

int main(){
    
    Cat MyFyrstKitty;
    Cat MySecondKitty("Toriel"); 

    MyFyrstKitty.Meow();

    for(int i = 0; i < 3; i++){
        MySecondKitty.Meow();
    }

    cout << MyFyrstKitty.Name << endl;
    cout << MySecondKitty.Name << endl;

    return 0;
}