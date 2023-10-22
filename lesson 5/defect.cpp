#include <iostream>
using namespace std;

int main(){
    int defect;
    int price;
    cout << "Choose defect persentage:" << endl << "1. 0%" << endl << "2. 3%" << endl << "3. 5%" << endl << "4. 10%" << endl;
    cin >> defect;
    cout << "Enter price: ";
    cin >> price;
    switch (defect){
    case 1:
        cout << "Final price: " << price;
        break;
    case 2:
        price *= 0.97;
        cout << "Final price: " << price;
        break;
    case 3:
        price *= 0.95;
        cout << "Final price: " << price;
        break;
    case 4:
        cout << "thing too brokn sori";
        break;
    }
}