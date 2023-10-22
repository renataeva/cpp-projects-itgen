#include <iostream>
using namespace std;

int main(){
    int p;
    int s;
    int t;
    // shop and choices
    cout << "Choose a product:" << endl << "1.gfgf  Price: 30$" << endl << "2.rgdfg  Price: 76$" << endl << "3.lili  Price: 25$" << endl;
    cin >> p;
    // shipping
    cout << "Choose a shipping method: 1.classic (free), 2.carrier (250), 3.express (500)" << endl;
    cin >> s;
    // here hell starts (well not anymore but still ~sCaRy cOdE~)
    switch (p)
    {
    case 1:
        t += 30;
        break;
    case 2:
        t += 76;
    case 3:
        t += 25;
    }
    switch (s)
    {
    case 1:
        t += 0;
        break;
    case 2:
        t += 250;
    case 3:
        t += 500;
    }
    cout << "Total price: " << t;
}