#pragma once
#include <vector>

struct PiResults {
        double approx;
        double error;
    };

double* approximations(std::vector<int> n);
PiResults pi_approx(int N);