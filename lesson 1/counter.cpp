#include <iostream>
using namespace std;

int main() {
    int brekfast;
    int supper;
    int dinner;
    cout << "Hello! Enter please:" << endl << "How much did you eat for brekfast: ";
    cin >> brekfast;
    cout << "How much did you eat for supper: ";
    cin >> supper;
    cout << "How much did you eat for dinner: ";
    cin >> dinner;
    int kalories;
    kalories = brekfast + supper + dinner;
    cout << "Today, you ate " << kalories << " kalories.";
}