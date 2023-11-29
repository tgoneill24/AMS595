#include <stdio.h>


// Taking in an array as an input
void print_first_element(int a[]){
    printf("The first element of the array is: %i \n", a[0]);
}

// Returning an array - incorrect approach: 
int* return_arr(int a, int b){
int arr[2] = {a, b};
return arr;
}

// Returning an array - static array
int* return_arr_static(int a, int b){
static int arr[2];
arr[0] = a;
arr[1] = b;
return arr;
}

// Returning an array - preallocated 
void return_arr_prealloc (int* arr_prealloc, int a, int b){
arr_prealloc[0] = a;
arr_prealloc[1] = b;
}

int main(){
    int arr1[4] = {5, 10, 9, 1};
    print_first_element(arr1);
    printf("The first element of arr1 inside the main function is: %i \n", arr1[0]);

    // Get the size of an array:
    int size = sizeof(arr1)/sizeof(arr1[0]);
    printf("The array arr1 has %i elements \n", size);

    // Returning an array - incorrect approach 
    int* p = return_arr(4, 5);
    printf("The first element of p is %i \n", *p);

    // Returning an array - static approach 
    int pre_alloc[2];
    return_arr_prealloc(pre_alloc, 4, 5);
    printf("The first element of pre_alloc is %i \n", pre_alloc[0]);
}