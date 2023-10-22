#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int num = rand() % 11;
    int guess;
    while (guess != num){
        cout << "Guess the number: ";
        cin >> guess;
        if (guess < num)
        cout << "The number is bigger" << endl;
        else if (guess > num)
        cout << "The number is smaller" << endl;
        }
    cout << "You guessed the number";
}