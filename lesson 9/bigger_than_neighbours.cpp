#include <iostream>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int array[20];
    for (int i = 0; i != 20; i++){
        int num = rand() % 100 - 17;
        array[i] = num;
    }
    for (int i = 0; i != 20; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    int temp;
    for (int i = 1; i != 19; i++){
        if (array[i-1] < array[i] && array[i+1] < array[i] ){
            temp++;
        }
    }
    cout << temp;
}