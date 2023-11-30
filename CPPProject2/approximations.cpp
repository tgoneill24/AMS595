#include "approximations.h"
#include <math.h>
#include <vector>

float* approximations(std::vector<int> n){
    float* arr = new float[n.size()];
    for (int i=0; i<=n.size(); i++) {
        arr[i]=pi_approx(n[i]).approx;
    }

    return arr;
}