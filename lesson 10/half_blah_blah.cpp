#include <iostream>
#include <string>

using namespace std;

int main () {
    string a;
    cin >> a;
    cout << a.replace(0, a.length()/2, "blah-blah-blah");
}