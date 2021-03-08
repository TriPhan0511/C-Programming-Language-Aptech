// Write a program to print addresses of array elements.

#include<stdio.h>

int main() {
    // Declare and initialize an array of integers
    int arr[5] = {3, 1, 5, 7, 10};
    
    for (int i = 0; i < 5; i++)
    {
        printf("\n&arr[%d] = %d", i, &arr[i]);
    }

    printf("\nAddress of array: %d", arr);
    
    printf("\n%d", arr[0]); // 3
    printf("\n%d", *arr); // 3


}