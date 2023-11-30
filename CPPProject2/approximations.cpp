#include "approximations.h"
#include <math.h>
#include <vector>

double* approximations(std::vector<int> n){
    double* arr = new double[n.size()];
    for (int i=0; i<n.size(); i++) {
        arr[i]=pi_approx(n[i]).approx;
    }

    return arr;
}