#include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int i;
    while (a >= 3){
        a -= 3;
        i++;
    }
    cout << i;

}