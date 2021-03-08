// Bài 11: Viết chương trình nhập vào một mảng số nguyên n phần tử từ bàn phím.
// Tính tổng các phần tử trong mảng (sử dụng con trỏ mảng).
// -------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Functions Declaring
int enterNumberOfElements();
int *inputData(int n);
void displayData(int *p, int n);
int sum(int *p, int n);

// main function
int main()
{
    int n = enterNumberOfElements(); // The number of elements we want in an array
    int *p;

    printf("\n--------Enter data into an array--------\n");
    p = inputData(n); // Calling function inputData() to input data into an array

    printf("\n--------Data in the array--------\n");
    displayData(p, n); // Calling function displayData in an array

    // Calling function sum() to compute the sum of elements in an integer array
    printf("\n--------Sum of elements in the array: %d", sum(p, n));
}

// Function: Enter the number of elements in an integer array
// Make sure the number of elements in the array always greater than or equal to 1
int enterNumberOfElements()
{
    int number;
    while (true)
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number <= 0)
        {
            printf("You should enter a numbers is greater than or equal to 1\n");
            continue;
        }
        else
        {
            break;
        }
    }

    return number;
}

// Function: Input data into an integer array
int *inputData(int n)
{
    int *p;
    p = (int *)malloc(sizeof(int)); // Allocate memory dynamically
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", p + i);
    }

    return p;
}

// Function: Display data in an integer array
void displayData(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }
}

// Function: Compute the sum of elements in an integer array
int sum(int *p, int n)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result += *(p + i);
    }
    return result;
}