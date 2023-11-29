#include <iostream>
#include "approximations.cpp"
using namespace std;

int main() {

    // Print the pi approximation and error for N=1000 using Q1
    cout << pi_approx(1000).approx << endl;
    cout << pi_approx(1000).error << endl;

    return 0;
}