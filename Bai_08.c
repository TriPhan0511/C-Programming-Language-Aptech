// Bài 8: Viết chương trình nhập vào một số nguyên dương n.
// Kiểm tra số n nhập vào là nguyên tố hay không nguyên tố.
// -------------------------------------------------------------

#include <stdio.h>
#include <stdbool.h>

// Declare function
bool isPrime(int num);

int main()
{
    int num;
    while (true)
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num <= 0)
        {
            printf("You should enter a number is greater than 0. Try again!\n");
            continue;
        }
        else
            break;
    }

    // Check whether the number is a Prime or not
    if (isPrime(num))
        printf("The number %d is a Prime.", num);
    else
        printf("The number %d is NOT a Prime.", num);
}

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
