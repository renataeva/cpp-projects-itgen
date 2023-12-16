#include <iostream>
#include <string>

using namespace std;

int main () {
    string a = "";
    cin >> a;
    if (a.substr(0, 3 ) == "Hel"){
        cout << ":)";
    }
    else if (a.substr(0, 3 ) == "Bye"){
        cout << ":(";
    }
}