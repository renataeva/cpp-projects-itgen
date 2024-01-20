#include <iostream>
#include <climits>

using namespace std;

int main() {
    int ARR_LEN = 5;
    int ways[ARR_LEN];
    int time[ARR_LEN];
    int min = INT_MAX;
    int temp;
    
    for (int i = 0; i != ARR_LEN; i++) {
        cin >> temp;
        ways[i] = temp;
    }

    for (int i = 0; i != ARR_LEN; i++) {
        if(ways[i]%2==0){
		    time[i] = ways[i] * 2 + 20;
        } else {
            time[i] = ways[i] * 2 -15;
        }
    }

    for (int i = 0; i != ARR_LEN; i++) {
        cout << time[i] << " ";
    }

    for (int i = 0; i < ARR_LEN; i++) {
        if(time[i] < min){
            min = time[i];   
        }
    }
    cout << min;
}