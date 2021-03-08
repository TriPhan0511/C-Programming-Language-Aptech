// Bài 12: Viết chương trình nhập vào một mảng số nguyên a có n phần tử dạng con trỏ và
// thực hiện các yêu cầu sau:
//  a. Tính tổng các phần tử chia hết cho 3 và 5
//  b. Đếm có bao nhiêu phần tử chẵn
//  c. Nhập một giá trị x, kiểm tra giá trị x vừa nhập có trong mảng hay không?
//  d. Đếm có bao nhiêu phần tử là số nguyên tố
//  e. Tìm giá trị lớn nhất trong mảng
//  i. Sắp xếp mảng tăng dần, dùng thuật toán nổi bọt.
// -------------------------------------------------------------

// Functions:
// 1. Enter a number of elements in an integer array
// 2. Input data into an integer array
// 3. Display data in an integer array

// Compute the sum of elements divisible by 3 and divisible by 5
// Count how many even elements in the array
// Check whether an X value exists in the array or not.
// Check whether a number is a prime number or not
// Count how many prime numbers in the array
// Finding the max value in an array
// Swap two numbers
// Sort the elements in an integer array incremently by Buble Sort method

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Functions Declaring
int enterNumberOfElements();
int *inputData(int n);
void displayData(int *p, int n);
int sum2(int *p, int n);
int evenCount(int *p, int n);
bool checkX(int *p, int n, int x);
bool isPrime(int num);
int primeCount(int *p, int n);
int max(int *p, int n);
int *bubleSort(int *p, int n);

// main function
int main()
{
    int n = enterNumberOfElements();
    int *p;

    printf("\n--------Enter data into an array--------\n");
    p = inputData(n); // Calling function inputData() to input data into an array

    printf("\n--------Data in the array--------\n");
    displayData(p, n); // Calling function displayData in an array

    //  a. Tính tổng các phần tử chia hết cho 3 và 5
    printf("\n--------Sum of elements divisible by 3 and divisible by 5--------\n");
    printf("Result = %d", sum2(p, n));

    //  b. Đếm có bao nhiêu phần tử chẵn
    printf("\n--------Count how many even elements in the array--------\n");
    printf("Result = %d", evenCount(p, n));

    //  c. Nhập một giá trị x, kiểm tra giá trị x vừa nhập có trong mảng hay không?
    int x;
    printf("\nEnter a number for checking: ");
    scanf("%d", &x);

    if (checkX(p, n, x))
    {
        printf("Value %d exists in the array.", x);
    }
    else
    {
        printf("Value %d DOES NOT exist in the array.", x);
    }

    //  d. Đếm có bao nhiêu phần tử là số nguyên tố
    printf("\n--------Count how many prime numbers in the array--------\n");
    printf("Result = %d", primeCount(p, n));

    //  e. Tìm giá trị lớn nhất trong mảng
    printf("\n--------The max value in the array--------\n");
    printf("Result = %d", max(p, n));

    //  i. Sắp xếp mảng tăng dần, dùng thuật toán nổi bọt.
    int *newP = bubleSort(p, n);
    printf("\n--------The sorted array--------\n");
    displayData(newP, n);
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

//  a. Tính tổng các phần tử chia hết cho 3 và 5
// Function: Compute the sum of elements divisible by 3 and divisible by 5
int sum2(int *p, int n)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        int element = *(p + i);
        if ((element % 3 == 0) && (element % 5 == 0))
        {
            result += element;
        }
    }

    return result;
}

//  b. Đếm có bao nhiêu phần tử chẵn
// Function: Count how many even elements in the array
int evenCount(int *p, int n)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        int element = *(p + i);
        if (element % 2 == 0)
        {
            result += 1;
        }
    }

    return result;
}

//  c. Nhập một giá trị x, kiểm tra giá trị x vừa nhập có trong mảng hay không?
// Function: Check whether an X value exists in the array or not.
bool checkX(int *p, int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        int element = *(p + i);
        if (element == x)
        {
            return true;
        }
    }
    return false;
}

//  d. Đếm có bao nhiêu phần tử là số nguyên tố: sử dụng hai hàm: isPrime() và primeCount()
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

// Function: count how many prime numbers in the array
int primeCount(int *p, int n)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        int element = *(p + i);
        if (isPrime(element))
        {
            result += 1;
        }
    }

    return result;
}

//  e. Tìm giá trị lớn nhất trong mảng
// Function: Finding the max value in three numbers
int max(int *p, int n)
{
    int result = *p;
    for (int i = 1; i < n; i++)
    {
        int element = *(p + i);
        if (element > result)
        {
            result = element;
        }
    }

    return result;
}

//  i. Sắp xếp mảng tăng dần, dùng thuật toán nổi bọt: sử dụng hai hàm: swap() và bubleSort()
// Function: Swap two numbers
void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

// Function: Sort the elements in an integer array incremently by Buble Sort method
int *bubleSort(int *p, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (*(p + i) > *(p + j))
            {
                swap((p + i), (p + j));
            }
        }
    }

    return p;
}