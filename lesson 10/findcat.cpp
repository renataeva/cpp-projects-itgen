#include <iostream>
#include <string>

using namespace std;

int main () {
    string a;
    cin >> a;
    int c = a.find("cat");
    int rc = a.rfind("cat");
    if (c == -1){
        cout << "no cats?";
        exit(0);
    }
    if (c == rc){
        cout << " ";
        exit(0);
    }
    if (c != rc){
        cout << "you really like cats?";
        exit(0);
    }
    
}