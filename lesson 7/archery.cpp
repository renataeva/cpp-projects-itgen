#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int input;
    int points;
    int landing;
    for (int i = 3; i != 0; i--){
        int landing = rand() % 10 + 1;
            if (input != 1){
                cout << "Press 1 to shoot. You have " << i << " shots. ";
                cin >> input;
            }
        cout << "Your arrow landed on " << landing << endl;
        if (0 < landing && landing < 6){
            points += 2;
        }
        else if (landing == 6 || landing == 7 || landing == 8){
            points += 4;
        }
        else if (landing == 9 || landing == 10){
            points += 7;
        }
        input++;
    }
    cout << "You scored " << points << " points";
}