#include <iostream>
#include <string>

using namespace std;

int main () {
    string a;
    cin >> a;
    if (a.length() > 20){
        a.clear();
        cout << "here: " << a;
        }
    cout << "here: " << a;
}