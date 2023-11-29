#include <math.h>
#include "pi_approx.h"

struct PiResults {
        float approx;
        float error;
    };

PiResults pi_approx(int N) {
    PiResults results;
    float sum = 0;
    float dx = 1.0/float(N);
    
    for (float k=1; k<=N; k++) {
        sum += dx*(sqrt(1-pow(k/float(N),2))+sqrt(1-pow((k-1)/float(N),2)))/2;
    }
    results.approx = sum*4.0;

    results.error = abs(results.approx-M_PI);

    return results;
}