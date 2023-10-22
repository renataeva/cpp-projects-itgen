#include <iostream>
using namespace std;

int main(){
    int number;
    do {
        cout << "Enter a number inbetween 0 and 10: ";
        cin >> number;
    }while (number < 1 || number > 10);
}