#pragma once

struct PiResults {
        double approx;
        double error;
    };

PiResults pi_approx(int N);