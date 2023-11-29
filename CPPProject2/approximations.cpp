#include <iostream>
#include <math.h>
#include <vector>
#include "pi_approx.cpp"
using namespace std;

int* approximations(vector<int> n){
    int* arr = new int[n.size()];
    for (int i=0; i<=n.size(); i++) {
        arr[i]=pi_approx(n[i]).approx;
    }

    return arr;
}