#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int ARR_LEN = 20;

    int array[ARR_LEN];

    int RANGE = 100;

    int max = 0;
    int min = RANGE;

    int maxid;
    int minid;

    srand(time(NULL));
    for (int i = 0; i < ARR_LEN; i++){
        int num = rand() % RANGE;
        array[i] = num;
    }
    for (int i = 0; i < ARR_LEN; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < ARR_LEN; i++) {
        if(array[i] > max){
            maxid = i;
            max = array[i];
            cout << "New max: " << array[i];
            cout << endl;
        }
        if(array[i] < min){
            minid = i;
            min = array[i];
            cout << "New min: " << array[i] << endl;    
        }
    }

    array[maxid] = min;
    array[minid] = max;

    for (int i = 0; i < ARR_LEN; i++) {
        cout << array[i] << " ";
    }
}