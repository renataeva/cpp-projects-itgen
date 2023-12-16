#include <iostream>
#include <stdio.h>
#include <cctype>
#include <cstring>

using namespace std;

int main () {
    char a[70];
    sprintf(a, "%s, %i, %c, %.2f", "renata sk", 13, 'w', 08.07);
    cout << a << endl;
    cout << strlen(a);
}