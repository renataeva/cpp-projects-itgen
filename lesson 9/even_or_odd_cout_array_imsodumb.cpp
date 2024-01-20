#include <iostream>

using namespace std;

int main() {
    // base array
    int array[10];
    // amount of even numbers
    int evencount = 0;
    // amount of odd numbers
    int oddcount = 0;
    int temp = 0;

    for (int i = 0; i != 10; i++) {
        cin >> temp;
        array[i] = temp;
    }

    for (int i = 0; i != 10; i++) {
        if(array[i]%2==0){
		    evencount++;
        } else {
            oddcount++;
        }
    }

    if(evencount>oddcount){
        cout << "Printing even numbers: ";  
        for (int i = 0; i != 10; i++){
            if(array[i]%2==0){
		        cout << array[i] << " ";
            } else {
                continue;
            }
        }
    } else if(evencount<oddcount){
        cout << "Printing odd numbers: ";
        for (int i = 0; i != 10; i++){
            if(array[i]%2==0){
		        continue;
            } else {
                cout << array[i] << " ";
            }
        }
    } else if(evencount==oddcount){
        cout << "Printing all numbers: ";
        for (int i = 0; i < 10; i++) {
            cout << array[i] << " ";
        }
    }
}