#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int sum;
    int array[20];
    int arrayy[20];
    int arrayp[20];
    for (int i = 0; i != 20; i++){
        int num = rand() % 100;
        array[i] = num;
    }

    for (int i = 0; i != 20; i++){
        int num = rand() % 100;
        arrayy[i] = num;
    }

    for (int i = 0; i != 20; i++){
        arrayp[i] = array[i] + arrayy[i];
    }
    for (int i = 0; i != 20; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    for (int i = 0; i != 20; i++){
        cout << arrayy[i] << " ";
    }
    cout << endl;
    for (int i = 0; i != 20; i++){
        cout << arrayp[i] << " ";
    }

}