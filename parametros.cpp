#include <iostream>

using namespace std;

bool IsPlayerDead(int hp){
    if(hp <= 0){
        return true;
    } else {
        return false;
    }
}

int main(){

    int TotalLife = 0;

    if(IsPlayerDead(TotalLife))
    {
        cout << "Game Over";
    }

    cout << IsPlayerDead(TotalLife) << endl;

    return 0;
}