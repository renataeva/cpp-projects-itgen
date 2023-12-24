#include <iostream>
#include <stdio.h>
#include <cctype>
#include <cstring>

using namespace std;

int main () {
    string s;
    cin >> s;
    if (s.find("son") != -1 || s.find("Son") != -1 || s.find("SON") != -1){
        cout << "yes";
    } else {
        cout << "no";
    }
}
