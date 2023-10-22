#include <iostream>
using namespace std;

int main(){
    short answer;
    cout << "How many colors are in a rainbow: " << endl << "1. 8" << endl << "2. 6" << endl << "3. 7" << endl;
    cin >> answer;
    if (answer != 3) {
        cout << "Wrong answer!";
        exit(0);
    }
    cout << "What is the opposite color of yellow: " << endl << "1. Purple" << endl << "2. Blue" << endl << "3. Red" << endl;
    cin >> answer;
    if (answer != 1) {
        cout << "Wrong answer!";
        exit(0);
    }
    cout << "What are the primary colors: " << endl << "1. Red, Green, Blue" << endl << "2. Red, Yellow, Blue" << endl << "3. Green, Yellow, Blue" << endl;
    cin >> answer;
    if (answer != 2) {
        cout << "Wrong answer!";
        exit(0);
    }
    else
        cout << "You got everything right! Congrats!";
}