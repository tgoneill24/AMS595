#include <iostream>
using namespace std;

int main(){

    // Creating an integer on the heap
    int* p = new int;
    *p = 100;
    cout << "Your value on the heap is: " << *p << endl;
    delete p;

    // Creating an array on the heap
    int* p_arr = new int[5];
    p_arr[2] = 2;
    cout << "Your value on the heap is: " << p_arr[2] << endl;
    delete[] p_arr;
}