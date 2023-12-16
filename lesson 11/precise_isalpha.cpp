#include <iostream>
#include <stdio.h>
#include <string>
#include <cctype>

using namespace std;

int main () {
    string s;
    string a;
    cin >> s;
    if (isdigit(s[3])){
        a.append(s.substr(3, 3));
    }
    if (isdigit(s[6])){
        a.append(s.substr(6, 6));
    }
    if (isdigit(s[9])){
        a.append(s.substr(9, 9));
    }
    cout << a;
}  