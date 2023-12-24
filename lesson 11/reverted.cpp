#include <iostream>
#include <stdio.h>
#include <cctype>
#include <cstring>

using namespace std;

int main () {
    string s;
    string r;
    string temp;
    cin >> s;
    for(int i = s.length(); i > -1; i--){
        temp = s.substr(i, 1);
        r.append(temp);
    }
    cout << r;
}