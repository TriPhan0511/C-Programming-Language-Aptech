// Bài 7: Viết chương trình nhập vào một số nguyên n>0 từ bàn phím.
//  a. Nếu nhập n=0 hoặc n<0 thì yêu cầu nhập lại.
//  b. Nếu n>0 thì kiểm số n là số chẵn hay lẻ
// -------------------------------------------------------------

#include <stdio.h>
#include <stdbool.h>

// Declare function
bool isEven(int num);

int main()
{
    int n;
    // n is greater than 0
    while (true)
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("You should enter a number is greater than 0. Try again!\n");
            continue;
        }
        else
        {
            break;
        }
    }

    if (isEven(n))
    {
        printf("n is an EVEN number.");
    }
    else
    {
        printf("n is an ODD number.");
    }
}

// Function: Check whether a number is an even number or an odd number
bool isEven(int num)
{
    if (num % 2 != 0)
    {
        return false;
    }
    return true;
}