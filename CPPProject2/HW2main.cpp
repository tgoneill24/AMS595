#include <iostream>
#include "approximations.h"
#include "pi_approx.h"
using namespace std;

int main() {

    // Print the pi approximation and error for N=1000 using Q1
    cout << pi_approx(1000).approx << endl;
    cout << pi_approx(1000).error << endl;

    // Create a vector to use as input
    vector<int> vec = {10,100,1000,10000,100000,1000000,10000000};

    // Get approximations for different values of N
    float* arr = approximations(vec);

    // Print approximations
    for (int i=0; i<7; i++) {
        cout << arr[i] << endl;
    }
    

    return 0;
}