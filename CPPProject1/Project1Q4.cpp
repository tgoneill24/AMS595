#include <iostream>
#include <vector>
using namespace std;

void print_vector(std::vector<int> v) {
    for (int value : v) {
        cout << value << " ";
    }
    cout << endl;
}

std::vector<int> prime_factorize(int n) {
    std::vector<int> answer;
    bool prime = true;
    
    // Iterate through all integers (n0t including 1) less than or equal to n. Smallest one that divides n must be a prime.
    // Add this one to the prime factorization, then add the prime factors of n divided by this integer.
    
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            answer.push_back(i);
            for (int factor : prime_factorize(n / i)) {
                answer.push_back(factor);
            }

            return answer;
        }
    }

    return answer;
}

void test_prime_factorize() {
    print_vector(prime_factorize(2));
    print_vector(prime_factorize(72));
    print_vector(prime_factorize(196));
}

int main() {
    
    test_prime_factorize();

    return 0;
}