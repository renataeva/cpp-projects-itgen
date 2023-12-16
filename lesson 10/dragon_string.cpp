#include <iostream>
#include <string>

using namespace std;

int main () {
    string run = "Run away from the dragon!";
    cout << run.replace(18, 24, "me");
}