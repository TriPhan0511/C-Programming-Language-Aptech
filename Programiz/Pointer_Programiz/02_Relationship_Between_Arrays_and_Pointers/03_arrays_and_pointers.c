// Using a pointer to access the array's elements

#include<stdio.h>

int main() {
    int arr[5] = {1, 4, 6, 3, 8};
    // Declare a pointer
    // and assign the address of third array's element to it
    int * p;
    p = &arr[2];

    // Display the value of third element
    printf("\nThe value of third element: %d",*p); // 6
    // Display the value of second element
    printf("\nThe value of second element: %d", *(p-1)); // 4
    // Display the value of fourth element   
    printf("\nThe value of fourth element: %d", *(p+1)); // 3

    return 0;
}