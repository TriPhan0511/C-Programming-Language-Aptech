// Bài 10: Viết chương trình nhập vào hai số nguyên biến con trỏ rồi
// so sánh hai giá trị dựa trên biến con trỏ.
// -------------------------------------------------------------

#include <stdio.h>
#include <stdbool.h>

// Declare function
bool isGreater(int *p1, int *p2);

// main function
int main()
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (isGreater(&num1, &num2))
    {
        printf("\nThe first number is GREATER than the second number.");
    }
    else
    {
        printf("\nThe first number is NOT GREATER than the second number.");
    }
}

// Function: Compare two numbers
bool isGreater(int *p1, int *p2)
{
    if (*p1 > *p2)
    {
        return true;
    }
    else
    {
        return false;
    }
}