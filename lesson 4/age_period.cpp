#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    if (a < 10)
        cout << "Childhood";
    else if (a >= 10 && a < 16)
        cout << "Teenhood";
    else if(a >= 16 && a < 22)
        cout << "Young Adulthood";
    else if(a >= 22 && a < 35)
        cout << "Middle Adulthood";
    else if(a >= 35 && a < 60)
        cout << "Adulthood";
    else if(a >= 60 && a < 80)
        cout << "Old age";
    else if(a >= 80 && a < 10000)
        cout << "Fossil";
}