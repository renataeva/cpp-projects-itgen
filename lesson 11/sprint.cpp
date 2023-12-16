#include <iostream>
#include <stdio.h>
#include <string>
#include <cctype>

using namespace std;

int main () {
    char str[70];
    sprintf(str, "%s, %i, %c, %.2f", "renata sk", 13, 'w', 08.07);
    cout << str;
}