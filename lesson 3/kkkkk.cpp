#include <iostream>
using namespace std;

int main(){
    // unsigned short fn;
    short fn;   
    cout << "Enter a number from 1 to 5: ";
    cin >> fn;
    if(fn == 1)
        cout << "Thumb";
    else if(fn == 2)
        cout << "Index finger";
    else if(fn == 3)
        cout << "Middle finger";
    else if(fn == 4)
        cout << "Ring finger";
    else if(fn == 5)
        cout << "Pinky";

    cout << endl << fn;
} 