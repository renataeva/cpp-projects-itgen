#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "What do you want to start the washing from? (1: soaking, 2: rinsing, 3: gettting the water out, 4: drying)  ";
    cin >> a;
    cout << "...Toss your dirty shoes in my washing machine heart..." << endl << endl;
    switch (a){
    case 1:
        cout << "Soking done." << endl;
    case 2:
        cout << "Rinsing done." << endl;
    case 3:
        cout << "Got the water out." << endl;
    case 4:
        cout << "Drying finished." << endl;
    case 5:
        cout << "Done!" << endl;
    }
}