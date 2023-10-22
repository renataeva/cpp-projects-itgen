#include <iostream>
#include <string>
using namespace std;

int main(){
    int a;
    int b;
    do{
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter a number bigger than the previous one: ";
    cin >> b;
    } while (a >= b);
    for (int i = a; i <= b; i++){
        cout << i;
    }
}