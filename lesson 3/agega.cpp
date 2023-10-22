#include <iostream>
using namespace std;

int main(){
    int x = 24;
    int y = 6;
    double z = x++ / --y;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
}