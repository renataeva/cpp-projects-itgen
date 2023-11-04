#include <iostream>

using namespace std;

//эта программа расчитывает сложный процент от вложеных денег

int main() {
    float money;
    int years;
    cout << "Amount of money in deposit: ";
    cin >> money;
    cout << "Amount of years: ";
    cin >> years;
    if (money>=100 && money<=399){
        for (int i; i!=years; i++){
            money = money+(money/100)*5;
        }
        cout << money;
    }
    else if (money>=400 && money<=599){
        for (int i; i!=years; i++){
            money = money+(money/100)*7;
        }
        cout << money;
    }
    else if (money>=600 && money<=999){
        for (int i; i!=years; i++){
            money = money+(money/100)*8;
        }
        cout << money;
    }
    else if (money>1000){
        for (int i; i!=years; i++){
            money = money+(money/100)*10;
        }
        cout << money; 
    }
}