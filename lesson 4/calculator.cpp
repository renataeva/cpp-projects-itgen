#include <iostream>
#include <string>
using namespace std;

int main(){
    int a;
    int b;
    char o;
    cout << endl << "Enter first number: ";
    cin >> a;
    cout << endl << "Enter second number: ";
    cin >> b;
    cout << endl << "Enter operation: ";
    cin >> o;

    switch (o) {
        case '+':
            cout << endl << a+b;
            break;
        case '-':
            cout << endl << a-b;
            break;
        case '*':
            cout << endl << a*b;
            break;
        case '/':
            cout << endl << a/b;
            break;
    }
}