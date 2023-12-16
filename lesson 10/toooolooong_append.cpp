#include <iostream>
#include <string>

using namespace std;

int main () {
    string a;
    cin >> a;
    if (a.length() < 5) {
        cout << a.append("$");
        exit(0);
    }
    if (a.length() >= 5 && a.length() < 10) {
        cout << a.append("$$$");
        exit(0);
    }
    if (a.length() > 10){ 
        cout << a.append(a.length(), '$');
    }
}