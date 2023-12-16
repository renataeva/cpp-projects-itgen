#include <iostream>
#include <string>

using namespace std;

int main () {
    string s;
    cin >> s;
    if(s.length()%2==0){
		cout << "$" << s << "$";
    } else {
		cout << s.insert(s.length()/2, "meow");
    }
}