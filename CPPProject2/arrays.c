#include <stdio.h>

int main(){

    // Initializing an array can be done in a variety of ways:
    int arr1[4] = {5, 10, 9, 1};
    int arr2[4] = {5, 10};
    int arr3[4] = { };
    int arr4[] = {5, 10, 9, 1 };

    // Accessing values
    int a = arr1[2];
    printf("The first element in arr1 is %i\n", arr1[0]);
    printf("The 100th element in arr1 is %i\n", arr1[100]);

    // Arrays and pointers
    int arr[4];
    printf("The array arr prints %p\n", arr);
    int* p_arr = arr;
    printf("The pointer p_arr prints %p\n", p_arr);
    arr[2] = 2;
    printf("The third element in arr is: %i\n", arr[2]);
    printf("The third element in arr is: %i\n", *(arr + 2));

}