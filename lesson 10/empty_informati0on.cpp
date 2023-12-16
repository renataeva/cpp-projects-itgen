#include <iostream>
#include <string>

using namespace std;

int main () {
    string a;
    getline(cin, a);
    while (a.empty()) {
        if (!a.empty()) {
        cout << "got the info";
        }
        cout << "type info";
        getline(cin, a);
    }
}