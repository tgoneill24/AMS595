#pragma once
#include <vector>

struct PiResults {
        float approx;
        float error;
    };

float* approximations(std::vector<int> n);
PiResults pi_approx(int N);