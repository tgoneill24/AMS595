#include <math.h>

struct PiResults {
        double approx;
        double error;
    };

PiResults pi_approx(int N) {
    PiResults results;
    double sum = 0.0;
    double dx = 1.0/double(N);
    
    for (int k=1; k<=N; k++) {
        sum += dx*(sqrt(1.0-pow(double(k)/double(N),2.0))+sqrt(1.0-pow(double(k-1)/double(N),2.0)))/2.0;
        
            
    }
    results.approx = sum*4.0;

    results.error = abs(results.approx-3.1415926);

    return results;
}