// Bài 13: Viết chương trình nhập vào một mảng số nguyên a có n phần tử dạng con trỏ và
// thực hiện các yêu cầu sau:
//  a. Viết hàm in các phần tử là số nguyên tố.(hàm kiểm tra nguyên tố, hàm đếm số nguyên tố)
//  b. Viết hàm tính trung bình cộng các phần tử trong mảng.
//  c. Viết hàm nhập vào một giá x từ bàn phím và chèn giá trị x vào vị trí thứ 3 trong mảng.
//  d. Viết hàm xóa tất cả các phần tử x vừa nhập có trong mảng.
// -------------------------------------------------------------

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Functions:
// 1. Enter a number of elements in an integer array
// 2. Input data into an integer array
// 3. Display data in an integer array

// Check whether a number is a prime number or not
// Print out Prime numbers in an integer array
// Compute the average of the elements in an integer array
// Insert an X value into an integer array at position pos
// Delete value X if X exists in the array
// Count how many times X value appears in the array

// Functions Declaring
int enterNumberOfElements();
int *inputData(int n);
void displayData(int *p, int n);
bool isPrime(int num);
void displayPrimes(int *p, int n);
float avg(int *p, int n);
int *insertX(int *p, int n, int x, int pos);
int countX(int *p, int n, int x);
int *deleteX(int *p, int n, int x);

// main function
int main()
{
    int n = enterNumberOfElements(); // The number of elements we want in an array
    int *p;

    printf("\n--------Enter data into an array--------\n");
    p = inputData(n); // Calling function inputData() to input data into an array

    printf("\n--------Data in the array--------\n");
    displayData(p, n); // Calling function displayData in an array

    //  a. Viết hàm in các phần tử là số nguyên tố.(hàm kiểm tra nguyên tố, hàm đếm số nguyên tố)
    printf("\n--------Prime numbers in the array--------\n");
    displayPrimes(p, n);

    //  b. Viết hàm tính trung bình cộng các phần tử trong mảng.
    printf("\n--------Average of elements in the array--------\n");
    printf("Result = %.2f", avg(p, n));

    //  c. Viết hàm nhập vào một giá x từ bàn phím và
    // chèn giá trị x vào vị trí thứ 3 trong mảng.
    int pos = 2; // array's index begins at zero
    int x;
    printf("\nEnter the number you want to insert: ");
    scanf("%d", &x);
    int *newP = insertX(p, n, x, pos);
    if (newP == NULL)
    {
        printf("\nCANNOT insert X value into the array\n");
    }
    else
    {
        p = newP;
        n++;

        printf("\n--------The array after a new value inserted--------\n");
        displayData(p, n);
    }

    //  d. Viết hàm xóa tất cả các phần tử x vừa nhập có trong mảng.
    int deletedValue;
    printf("\nEnter the number you want to delete: ");
    scanf("%d", &deletedValue);
    int xCount = countX(p, n, deletedValue);
    if (xCount == 0)
    {
        printf("\nValue %d DOES NOT exist in the array.", deletedValue);
    }
    else
    {
        p = deleteX(p, n, deletedValue);
        n -= xCount;
        printf("\n--------The array after deleting value X--------\n");
        displayData(p, n);
    }
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

//  a. Viết hàm in các phần tử là số nguyên tố: sử dụng hai hàm: isPrime() và displayPrimes()
// Function: check whether a number is a prime number or not
bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

// Function: Print out Prime numbers in an integer array
void displayPrimes(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        int element = *(p + i);
        if (isPrime(element))
        {
            printf("%d ", element);
        }
    }
}

//  b. Viết hàm tính trung bình cộng các phần tử trong mảng.
// Function: Compute the average of the elements in an integer array
float avg(int *p, int n)
{
    int count = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        count++;
        sum += *(p + i);
    }

    if (count != 0)
    {
        return sum / count;
    }
}

//  c. Viết hàm nhập vào một giá x từ bàn phím và
// chèn giá trị x vào vị trí thứ 3 trong mảng.
// Function: Insert an X value into an integer array at position pos
int *insertX(int *p, int n, int x, int pos)
{
    if (pos >= n)
    {
        return NULL;
    }
    else
    {
        for (int i = n; i > pos; i--)
        {
            *(p + i) = *(p + (i - 1));
        }
        *(p + pos) = x;
        return p;
    }
}

//  d. Viết hàm xóa tất cả các phần tử x vừa nhập có trong mảng.
// Function: Count how many times X value appears in the array
int countX(int *p, int n, int x)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        int element = *(p + i);
        if (element == x)
        {
            result++;
        }
    }

    return result;
}

// Function: Delete value X if X exists in the array
int *deleteX(int *p, int n, int x)
{
    int i = 0;
    while (i < n)
    {
        int element = *(p + i);
        if (element == x)
        {
            int pos = i;
            while (pos < n - 1)
            {
                *(p + pos) = *(p + (pos + 1));
                pos++;
            }
            // n = n - 1;
            n--;
        }
        else
        {
            i++;
        }
    }

    return p;
}