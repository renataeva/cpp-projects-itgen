#include <iostream>
#include <stdio.h>
#include <cctype>
#include <cstring>

using namespace std;

int main () {
    string s;
    string a;
    cin >> s;
    cin >> a;
    string comb = s.insert(s.length()/2, a);
    cout << comb;
}