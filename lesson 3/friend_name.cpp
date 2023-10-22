#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    string friend_name;
    cout << "Enter your friend's name:" << endl;
    cin >> friend_name;
    cout << "Enter your name:" << endl;
    cin >> name;
    if (name == friend_name){
        cout << "You and your friend are namesakes!";
    }
    else
    {
        cout << "You have different names and that's good too!";
    }
}