#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Enter the day of the week: ";
    cin >> a;
    switch (a){
    case 1:
        cout << "6 days to go!";
        break;
    case 2:
        cout << "5 days to go!";
        break;
    case 3:
        cout << "4 days to go!";
        break;
    case 4:
        cout << "3 days to go!";
        break;
    case 5:
        cout << "2 days to go!";
        break;
    case 6:
        cout << "It's already the weekend dummy! Go listen to some songs, relax!";
        break;
    case 7:
        cout << "It's already the weekend dummy! Go listen to some songs, relax!";
        break;
    default:
        cout << "Enter an acutal day!";
    }
}