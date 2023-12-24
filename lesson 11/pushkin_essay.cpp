#include <iostream>
#include <stdio.h>
#include <cctype>
#include <cstring>

using namespace std;

int main () {
    string doc;
    cin >> doc;
    for (int i = 0; i != doc.length(); i++){
        if (isdigit(doc[i])){
            doc.replace(i, 1, " ");
        }
    }
    cout << doc;
}