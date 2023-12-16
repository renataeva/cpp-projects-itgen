#include <iostream>
#include <string>

using namespace std;

int main () {
    string a;
    cin >> a;
    cout << a.substr(0, a.length()/2);
}