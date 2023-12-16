#include <iostream>
#include <stdio.h>
#include <string>
#include <cctype>

using namespace std;

int main () {
    string a;
    cin >> a;
    int aa = stoi(a);
    cout << aa << " " << a << endl;
    aa = aa*-1;
    cout << aa << " " << a;
}