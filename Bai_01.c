// Bài 1: Viết chương trình nhập ba số a,b,c là số nguyên dương.
// Tìm số lớn nhất trong 3 số.
// -------------------------------------------------------------

#include <stdio.h>

// Declare function max()
int max(int num1, int num2, int num3);

int main()
{
    int num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    printf("The maximum number is %d", max(num1, num2, num3));
}

// Function: implement function max()
int max(int num1, int num2, int num3)
{
    int maxNum;
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            maxNum = num1;
        }
        else
        {
            maxNum = num3;
        }
    }
    else
    {
        if (num2 > num3)
        {
            maxNum = num2;
        }
        else
        {
            maxNum = num3;
        }
    }
}
