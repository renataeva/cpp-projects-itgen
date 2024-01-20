#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int ARR_LEN = 100;
    char max_char = 0;
    char min_char = 122;
    int countmax = 0;
    int countmin = ARR_LEN + 1;

    char array[ARR_LEN];
    int arraycount[ARR_LEN];
    for (int i = 0; i < ARR_LEN; i++){
        arraycount[i] = 0;
    }

    int RANGE = 26;

    srand(time(NULL));
    for (int i = 0; i < ARR_LEN; i++){
        int num = rand() % RANGE + 97;
        array[i] = num;
    }
    for (int i = 0; i < ARR_LEN; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    // filling in the parallel array containing how many times the letter was found
    for (int i = 0; i < ARR_LEN; i++){
        for(int ii = 0; ii < ARR_LEN; ii++){
            if(array[i] == array[ii]){
                arraycount[i] += 1;
            }
        }
    }

    // determining the most and least repeated letter
    for (int i = 0; i < ARR_LEN; i++) {
        if(arraycount[i] > countmax){
            countmax = arraycount[i];
            max_char = array[i];
            cout << "New max char: " << max_char << endl;
        }
        if(arraycount[i] < countmin){
            countmin = arraycount[i];
            min_char = array[i];
            cout << "New min char: " << min_char << endl;    
        } 
    }
    cout << "->> Most repeated char: " << max_char << endl;
    cout << "->> Least repeated char: " << min_char << endl;


    for (int i = 0; i < ARR_LEN; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < ARR_LEN; i++) {
        cout << arraycount[i] << " ";
    }
}