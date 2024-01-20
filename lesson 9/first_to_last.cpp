#include <iostream>

using namespace std;

int main() {
    char array[20];
    char temp;
    for (int i = 0; i != 20; i++) {
        cin >> temp;
        array[i] = temp;
    }

    temp = array[0];
    array[0] = array[19];
    array[19] = temp;

    for (int i = 0; i != 20; i++) {
        cout << array[i] << " ";
    }
}