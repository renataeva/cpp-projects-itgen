#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter the car speed: ";
    cin >> a;
    switch (a){
    case 1:
        cout << "You can go up to 20 kmph.";
        break;
    case 2:
        cout << "You can go from 20 to 40 kmph.";
        break;
    case 3:
        cout << "You can go from 40 to 80 kmph.";
        break;
    case 4:
        cout << "You can go from 80 to 100 kmph.";
        break;
    case 5:
        cout << "You can go from 100 to 150 kmph.";
        break;
    case 6:
        cout << "You can go from 150 to 200 kmph.";
        break;
    default:
        cout << "This speed doesnt exist.";
    }
}