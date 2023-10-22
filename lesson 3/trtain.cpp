#include <iostream>
using namespace std;

int main(){
	int num1;
    int num2;
	cout << "Enter an integer number: ";
	cin >> num1;
    cout << "Enter another integer number: ";
    cin >> num2;
	if(num1%2!=0)
		cout << num1 << " ";
	if (num2%2!=0)
        cout << num2 << " ";
}