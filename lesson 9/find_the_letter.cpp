#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char array[] = "ajtigenio";
    char arraycom[] = "gennadij";
    int temp = 0;
    // char array[9] = {"a", "j", "t", "i", "g", "e", "n", "i", "o"};
    // char arraycom[5] = {"g", "e", "n", "i", "j"};

    for (int i = 0; i < 5; i++){
        for(int ii = 0; ii < 9; ii++){
            if(arraycom[i] == array[ii]){
                array[i] = '*';
                temp++;
            } else {
                continue;;
            }
        }
    }

    if(temp!=0){
        cout << "yes";
    } else if(temp==0){
        cout << "no";
    }

    
}