#include <iostream>
#include <stdio.h>
#include <string>
#include <cctype>

using namespace std;

int main () {
    string s = "17.07.2007.ItGenio";
    for (int i = 0; i != s.length(); i++){
        if (isdigit(s[i])){
            cout << "num" << endl;
        } else {
            cout << "char" << endl;
        }
    }
}