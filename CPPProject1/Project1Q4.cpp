#include <iostream>
#include <vector>
using namespace std;

// Helper function
void print_vector(std::vector<int> v) {
    for (int value : v) {
        cout << value << " ";
    }
    cout << endl;
}


std::vector<int> factorize(int n) {
    std::vector<int> answer;
    // Iterate through all integers less than or equal to n. If it divides n, add it to the list of factors.
    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            answer.push_back(i);
        }
    }

    return answer;
}



// Test function
void test_factorize() {
    print_vector(factorize(2));
    print_vector(factorize(72));
    print_vector(factorize(196));
}

std::vector<int> prime_factorize(int n) {
    std::vector<int> answer;
    
    // Iterate through all integers (not including 1) less than or equal to n. Smallest one that divides n must be a prime.
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


// Test function
void test_prime_factorize() {
    print_vector(prime_factorize(2));
    print_vector(prime_factorize(72));
    print_vector(prime_factorize(196));
}

bool isprime(int n) {
    bool result;

    // There are no prime integers below 2
    if (n < 2) {
        return false;
    }
        
    // Iterate through all integers (not including 1) less n. If none divide n, n is prime.
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

// Test function
void test_isprime() {
    std::cout << "isprime(2) = " << isprime(2) << '\n';
    std::cout << "isprime(10) = " << isprime(10) << '\n';
    std::cout << "isprime(17) = " << isprime(17) << '\n';
}


int main() {
    
    test_isprime();
    test_factorize();
    test_prime_factorize();

    return 0;
}