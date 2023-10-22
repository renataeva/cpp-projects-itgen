#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    if (a < 10)
        cout << "This number has 1 digit.";
    else if (a >= 10 && a < 100)
        cout << "This number has two digits.";
    else if(a >= 100 && a < 1000)
        cout << "This number has three digits.";
}