#include <iostream>
using namespace std;

int main() {
    int curVal;
    int preVal;
    int newVal;

    curVal = 1;
    preVal = 0;


    while (preVal <=4000000) {
        cout << preVal << endl;
        newVal = preVal + curVal;
        preVal = curVal;
        curVal = newVal;
    }


    return 0;
}