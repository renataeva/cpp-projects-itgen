#include <iostream>
#include <stdio.h>
#include <cctype>
#include <cstring>

using namespace std;

int main () {
    string s;
    int y;
    cin >> s;
    int l = s.length();
    if(l%2==0){
        for (int i = 0; i != l; i++){
        if (isdigit(s[i])){
        y++;
        }
        }
    }
    cout << y;
}