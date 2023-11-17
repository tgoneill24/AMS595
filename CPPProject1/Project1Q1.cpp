#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    switch (n) {
        case -1:
            cout << "negative one";
            break;
        case 0:
            cout << "zero";
            break;
        case 1:
            cout << "positive one";
            break;
        default:
            cout << "other value";
    }


    return 0;
}