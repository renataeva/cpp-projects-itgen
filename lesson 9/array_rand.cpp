#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int array[20];
    for (int i = 0; i != 20; i++){
        int num = rand() % 100;
        array[i] = num;
    }
    for (int i = 0; i != 20; i++){
        cout << array[i] << " ";
    }
}