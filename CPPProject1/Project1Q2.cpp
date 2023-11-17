#include <iostream>
#include <vector>
using namespace std;

void print_vector(std::vector<int> v) {
    for (int value : v) {
        cout << value << " ";
    }
    cout << endl;
}


int main() {
    vector <int> vect {2,42,5,7};
    print_vector(vect);

    return 0;
}