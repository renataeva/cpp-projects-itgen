#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int A;
    int B;
    int x;
    cout << "Enter A:";
    cin >> A;
    cout << "Enter B:";
    cin >> B;
    x = A + rand() % (B -A + 1);
    cout << "Here's a random number inbetween A and B:" << x;
}
