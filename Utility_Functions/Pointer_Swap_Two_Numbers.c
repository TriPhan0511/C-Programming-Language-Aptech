// Swap two numbers

#include <stdio.h>

void swap(int *p1, int *p2);

// Function: Swap two numbers
void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

// main function
int main()
{
    int num1 = 5;
    int num2 = 10;

    printf("\nBefore swap:\n");
    printf("Number 1: %d, Number 2: %d", num1, num2);

    // Swap to numbers
    swap(&num1, &num2); // Pass addresses to function

    printf("\nAfter swap:\n");
    printf("Number 1: %d, Number 2: %d", num1, num2);
}