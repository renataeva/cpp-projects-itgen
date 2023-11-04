#include <iostream>

using namespace std;

int main () {
    int payment;
    int choice;
    int topay;
    cout << "1. Latte 20" << endl << "2. Cappucino 17" << endl << "3. Americano 13" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        topay = 20;
        break;
    case 2:
        topay = 17;
        break;
    case 3:
        topay = 13;
        break;
    }
    for (int i = 0; i < topay; i += payment){
        cout << "You paid " << i << ". Left to pay: " << topay - i << endl;
        cin >> payment;
    }
}