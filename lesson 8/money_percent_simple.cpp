#include <iostream>

using namespace std;

//эта программа расчитывает простой процент от вложеных денег

int main() {
    int money;
    int years;
    cout << "Amount of money in deposit: ";
    cin >> money;
    int moneyhold =  money;
    cout << "Amount of years: ";
    cin >> years;
    if (money>=100 && money<=399){
        for (int i; i!=years; i++){
            money = money+(moneyhold/100)*5;
        }
        cout << money;
    }
    else if (money>=400 && money<=599){
        for (int i; i!=years; i++){
            money = money+(moneyhold/100)*7;
        }
        cout << money;
    }
    else if (money>=600 && money<=999){
        for (int i; i!=years; i++){
            money = money+(moneyhold/100)*8;
        }
        cout << money;
    }
    else if (money>1000){
        for (int i; i!=years; i++){
            money = money+(moneyhold/100)*10;
        }
        cout << money; 
    }
}