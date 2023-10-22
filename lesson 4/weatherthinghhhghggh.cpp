#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout << "Temperture outside: ";
    cin >> a;
    
    short answer;
    cout << "Other weather conditions: " << endl << "1. sun" << endl << "2. rain" << endl << "3. snow" << endl;
    cin >> b;

    if (a >= -20 && a < -10)
        cout << "Dress very warm, thick coat, warm hat, many layers!";
    else if(a >= -10 && a < 0)
        cout << "Dress waarm enought, a few layers, a hat.";
    else if(a >= 0 && a < 5)
        cout << "Wear a coat, maybe a hat.";
    else if(a >= 5 && a < 13)
        cout << "You dont need soo much layers, but still wear a coat.";
    else if(a >= 13 && a < 18)
        cout << "Okay weather, jeans, light coat.";
    else if(a >= 18 && a < 22)
        cout << "Warm enough so you dont need a coat.";
    else if(a >= 22 && a < 27)
        cout << "Really warm! You can wear shorts";
    else if(a >= 27 && a < 35)
        cout << "Really hot. be carefull while outside, wear a hat, light clothes";
    else if(a >= 35 && a < 77)
        cout << "This is heatstoke. Stay inside.";
    
    if(b == 1)
        cout << "Wear a hat and/or sunscreen";
    else if(b == 2)
        cout << "Take an umbrella or raincoat";
    else if(b == 3)
        cout << "Take thicker clothes, waterproof";
    
}