#include <iostream>
#include <vector>
using namespace std;

void print_vector(std::vector<int> v) {
    for (int value : v) {
        cout << value << " ";
    }
    cout << endl;
}

// Recursively calculate the nth row of Pascal's triangle from the previous row
vector<int> pascalrow(int n) {

    vector<int> result;

    // Set first row equal to just 1
    if (n==1) {
        result.push_back(1);
        return result;
    }

    int prevalue = 0;

    // Calculate middle values
    for (int value : pascalrow(n-1)) {
        result.push_back(prevalue + value);
        prevalue = value;
    }

    // Add on 1 for last element
    result.push_back(1);

    return result;
}


// Call pascalrow for rows 1 through n
void pascal(int n) {
    for (int i = 1; i<=n; i++) {
        print_vector(pascalrow(i));
    }
}

int main() {

    pascal(6); 

    return 0;
}