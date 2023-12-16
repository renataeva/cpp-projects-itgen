#include <iostream>
#include <stdio.h>
#include <string>
#include <cctype>

using namespace std;

int main () {
    string a;
    string b;
    cin >> a;
    cout << endl;
    cin >> b;
    int aa = stoi(a);
    int bb = stoi(b);
    if (aa > bb){
        cout << aa-bb;
        return 0;
    }
    if (aa < bb){
        cout << aa+bb;
        return 0;
    }
    if (aa == bb){
        cout << aa*bb;
        return 0;
    }
}