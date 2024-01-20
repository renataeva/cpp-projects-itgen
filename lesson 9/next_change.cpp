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
    cout << endl;
    int temp = array[0];
    for (int i = 0; i != 20; i+=2){
        temp = array[i];
        array[i] = array[i+1];
        array[i+1] = temp;
    }

    for (int i = 0; i != 20; i++){
        cout << array[i] << " ";
    }
}