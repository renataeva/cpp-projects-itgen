#include <iostream>
using namespace std;

int main(){
    int p;
    int s;
    // shop and choices
    cout << "Choose a product:" << endl << "1.gfgf  Price: 30$" << endl << "2.rgdfg  Price: 76$" << endl << "3.lili  Price: 25$" << endl;
    cin >> p;
    // shipping
    cout << "Choose a shipping method: 1.classic (free), 2.carrier (250), 3.express (500)" << endl;
    cin >> s;
    // here hell starts
    switch (p)
    {
    case 1:
        switch (s)
        {
        case 1:
            cout << "Total price: " << 30 + 0;
        break;
        case 2:
            cout << "Total price: " << 30 + 250;
        break;
        case 3:
            cout << "Total price: " << 30 + 500;
        break;
        }
    case 2:
        switch (s)
        {
        case 1:
            cout << "Total price: " << 76 + 0;
        break;
        case 2:
            cout << "Total price: " << 76 + 250;
        break;
        case 3:
            cout << "Total price: " << 76 + 500;
        break;
        }
    case 3:
        switch (s)
        {
        case 1:
            cout << "Total price: " << 25 + 0;
        break;
        case 2:
            cout << "Total price: " << 25 + 250;
        break;
        case 3:
            cout << "Total price: " << 25 + 500;
        break;
        }
    
    }
}