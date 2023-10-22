#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age;
    string city;
    cout << "Enter your name:" << endl;
    cin >> name;
    cout << "Enter your age:" << endl;
    cin >> age;
    cout << "Enter your city:" << endl;
    cin >> city;
    cout << endl;
    cout << "Your name is " << name << "\nYour age is " << age << "\nYour city is " << city << endl;
    return 0;
}