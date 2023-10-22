#include <iostream>
#include <string>
#include <ctime>
using namespace std; 

int main(){
    srand(time(NULL));
    int strenght;
    cout << "Strenght of the dragon (from 20 to 100): ";
    cin >> strenght;
    while (strenght < 20 || strenght > 100){
        if (strenght < 20){
            cout << "Your dragon is way too weak for a dragon, it's a lizard. Enter again: ";
            cin >> strenght;
        }
        else if (strenght > 100){
            cout << "Hey buddy, you sure you'll beat that? Me, not so much, enter again: ";
            cin >> strenght;
        }
    }
    int num;
    int i;
    int input;
    while (strenght > 0){
        cin >> input;
        if (input == 1){
            int num = rand() % 5 + 5;
            cout << "Attack strenght: " << num << endl;
            strenght -= num;
            i++;
        }
    }
    cout << "You defeated the dragon in " << i << " attacks! You get nothing!";
}