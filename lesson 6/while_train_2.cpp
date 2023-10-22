#include <iostream>
using namespace std;

int main(){
    int summ = 1;
    int i = 0;
    while (i != 99){
        summ += i;
        i += 3;
    }
    cout << summ;
}