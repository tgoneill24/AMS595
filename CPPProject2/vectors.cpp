#include <iostream>
#include <vector> 
using namespace std;

// We can input and output vectors in functions
vector<int> plus_one(vector<int> a){
    vector<int> a_new(a.size());
    for(int i = 0; i< a.size(); i++){
        a_new[i] = a[i] + 1;
    }
    return a_new;
}

int main(){
    // Initialize a vector
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2{1, 2, 3, 4, 5};
    vector<int> v3(5);

    // Create a vector with 5 integers, each of which is initalized to 9
    vector<int> v4(5, 9);

    cout << v[2] << endl;
    cout << v2[2] << endl;

    // Inputting and returning a vector from a function
    vector<int> v_new = plus_one(v);
    cout << v_new[0] << endl;

    // Some useful vector functions:
    cout << v.size() << endl;
    v.push_back(100);
    cout << v.size() << endl;
}