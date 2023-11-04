#include <iostream>
#include <ctime>

using namespace std;

int main () {
    srand(time(NULL));
    int binary;
    int part1;
    int part2;
    int answer;
    int correct;
    do{
        int binary = rand() % 2 + 1;
        int part1 = rand() % 10 + 1;
        int part2 = rand() % 10 + 1;
        if (binary == 1){
            cout << part1 << " + " << part2 << " ";
            correct = part1 + part2;
            cin >> answer;
        }
        else{
            cout << part1 << " - " << part2 << " ";
            correct = part1 - part2;
            cin >> answer; 
        }
    }while(answer == correct);
}