// Bài 9: Viết chương trình nhập vào một mảng số nguyên a có n phần tử và
// thực hiện các yêu cầu sau:
//  a. Tính tổng các giá trị của các phần tử trong mảng.
//  b. Tính tổng các phần tử chia hết cho 3 và 5
//  c. Đếm có bao nhiêu phần tử chẵn
//  d. Nhập một giá trị x, kiểm tra giá trị x vừa nhập có trong mảng hay không?
//  e. Đếm có bao nhiêu phần tử là số nguyên tố
//  i. Tìm giá trị lớn nhất trong mảng
// -------------------------------------------------------------

#include <stdio.h>
#include <stdbool.h>

// Global Variables
int numbers[100]; // an array of integers
int n;            // number of elements in the array

// Declare Functions
// Nhập giá trị vào mảng
void inputData();
// Hiển thị các giá trị trong mảng ra màn hình
void displayData();
//  a. Tính tổng các giá trị của các phần tử trong mảng.
int sum();
//  b. Tính tổng các phần tử chia hết cho 3 và 5
int sum2();
//  c. Đếm có bao nhiêu phần tử chẵn (gồm hai hàm: isEven() và evenCount())
bool isEven(int num);
int evenCount();
//  d. Nhập một giá trị x, kiểm tra giá trị x vừa nhập có trong mảng hay không?
bool findX(int x);
//  e. Đếm có bao nhiêu phần tử là số nguyên tố (gồm hai hàm: isPrime() và primeCount())
bool isPrime(int num);
int primeCount();
//  i. Tìm giá trị lớn nhất trong mảng
int findMaximumValue();

//  i. Tìm giá trị lớn nhất trong mảng
// Function: Find the maximum value in the array
int findMaximumValue()
{
    int max = numbers[0];
    for (int i = 1; i < n; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    return max;
}

// main function
int main()
{
    // Enter n (Number of elements in the array you want)
    // n should be greater than or equal to 1
    while (true)
    {
        printf("Enter n: "); // The number of elements in the array
        scanf("%d", &n);

        if (n < 1)
        {
            printf("n should be greater than or equal to 1\n");
            continue;
        }
        else
        {
            break;
        }
    }

    // Input data to the array
    printf("Enter values into the array\n");
    inputData(n);

    // Display data in the array
    printf("\nThe array: \n");
    displayData(n);

    //  a. Tính tổng các giá trị của các phần tử trong mảng.
    printf("\nSum all of elements:  %d", sum());

    //  b. Tính tổng các phần tử chia hết cho 3 và 5
    printf("\nSum of elements which divisible by 3 and divisible by 5: %d", sum2());

    //  c. Đếm có bao nhiêu phần tử chẵn (gồm hai hàm: isEven() và evenCount())
    int count = evenCount();
    if (count == 0)
    {
        printf("\nThere is NOT any even element in the array.");
    }
    else
    {
        if (count == 1)
        {
            printf("\nThere is only ONE even element in the array.");
        }
        else
        {
            printf("\nThere are %d even elements in the array.", count);
        }
    }

    //  d. Nhập một giá trị x, kiểm tra giá trị x vừa nhập có trong mảng hay không?
    int x;
    printf("\nEnter a number you want to find: ");
    scanf("%d", &x);

    if (findX(x))
    {
        printf("%d is FOUND", x);
    }
    else
    {
        printf("%d is NOT FOUND", x);
    }

    //  e. Đếm có bao nhiêu phần tử là số nguyên tố (gồm hai hàm: isPrime() và primeCount())
    int count2 = primeCount();
    if (count2 == 0)
    {
        printf("\nThere is NOT any prime element in the array.");
    }
    else
    {
        if (count2 == 1)
        {
            printf("\nThere is only ONE prime element in the array.");
        }
        else
        {
            printf("\nThere are %d prime elements in the array.", count2);
        }
    }

    //  i. Tìm giá trị lớn nhất trong mảng
    printf("\nMaximum value in the array: %d", findMaximumValue());
}

// Function: Input Data Into The Array
void inputData()
{
    for (int i = 0; i < n; i++)
    {
        printf("Element %d = ", i + 1);
        scanf("%d", &numbers[i]);
    }
}

// Function: Output Data In The Array
void displayData()
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", numbers[i]);
    }
}

//  a. Tính tổng các giá trị của các phần tử trong mảng.
// Function: Compute the sum of all elements in the array
int sum()
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result += numbers[i];
    }

    return result;
}

//  b. Tính tổng các phần tử chia hết cho 3 và 5
// Function: Sum of elements which divisible by 3 and divisible by 5
int sum2()
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        if ((numbers[i] % 3 == 0) && (numbers[i] % 5 == 0))
        {
            result += numbers[i];
        }
    }

    return result;
}

//  c. Đếm có bao nhiêu phần tử chẵn (gồm hai hàm: isEven() và evenCount())
// Function: Check whether a number is an even number or an odd number
bool isEven(int num)
{
    if (num % 2 != 0)
    {
        return false;
    }
    return true;
}

// Function: Count even elements in the array
int evenCount()
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (isEven(numbers[i]))
        {
            count++;
        }
    }

    return count;
}

//  d. Nhập một giá trị x, kiểm tra giá trị x vừa nhập có trong mảng hay không?
// Function: Input an value X, and check whether X exists in the array or not
bool findX(int x)
{
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] == x)
        {
            return true;
        }
    }
    return false;
}

//  e. Đếm có bao nhiêu phần tử là số nguyên tố (gồm hai hàm: isPrime() và primeCount())
// Function: Check whether a number is a Prime or not
bool isPrime(int num)
{
    if (num <= 1)
        return false;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Function: Count Prime in the array
int primeCount()
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(numbers[i]))
        {
            count++;
        }
    }

    return count;
}