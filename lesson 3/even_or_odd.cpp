#include <iostream>
using namespace std;

int main(){
	int num;
	cout << "Enter an integer number: ";
	cin >> num;
	if(num%2==0)
		cout << num << " is an even number.";
	else
		cout << num << " is an odd number.";
}
