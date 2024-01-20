#include <iostream>

using namespace std;

int main() {
    // base array
    int array[10];
    // array of odd numbers
    int arrayodd[10];
    // array of even numbers
    int arrayeven[10];
    // array of odd numbers without 0s (for easier reading)
    int no0arrayodd[10];
    // array of even numbers without 0s (for easier reading)
    int no0arrayeven[10];
    // variables for random uses
    int temp = 0;
    int temp2 = 0;
    // amount of even numbers
    int evencount;
    // amount of odd numbers
    int oddcount;


    // fillling in the arrays
    for (int i = 0; i != 10; i++){
        arrayodd[i] = 0;
        arrayeven[i] = 0;
        no0arrayeven[i] = 0;
        no0arrayodd[i] = 0;
    }
    for (int i = 0; i != 10; i++) {
        cin >> temp;
        array[i] = temp;
    }
    // checking odd/even and distributing into arrays accordingly
    for(int i = 0; i <= 10; i++){
        if(array[i]%2==0){
		    arrayeven[i] = array[i];
        }
	else 
		arrayodd[i] = array[i];
    }
    // test cout
    // for (int i = 0; i < 10; i++) {
    //     cout << array[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < 10; i++) {
    //     cout << arrayeven[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < 10; i++) {
    //     cout << arrayodd[i] << " ";
    // }

    // fillin in new arrays that don't contain 0s for easier output
    temp = 0;
    for(int i = 0; i != 10; i++){
        if(arrayeven[i] == 0){
            no0arrayodd[temp] = array[i];
            temp += 1;
        }
        if(arrayodd[i] == 0){
            no0arrayeven[temp2] = array[i];
            temp2 += 1;
        }
    }
    
    // test cout
    for (int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << arrayeven[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << arrayodd[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << no0arrayodd[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << no0arrayeven[i] << " ";
    }

    // checking if there's more odd or even numbers

    for (int i = 0; i < 10; i++) {
        if(no0arrayeven[i] != 0){
            
        }
    }
}