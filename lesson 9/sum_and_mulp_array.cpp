#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int array[20];
    int sum;
    int mulp = 1;
    for (int i = 0; i != 20; i++){
        int num = rand() % 100;
        array[i] = num;
    }

    for (int i = 0; i != 20; i++){
        sum += array[i];
    }

    for (int i = 0; i != 20; i++){
        mulp = array[i] * mulp;
    }

    cout << sum << endl << mulp;
}