// Bài 3: Viết chương trình nhập vào một số nguyên n từ bàn phím.
// Tính giai thừa của n vừa nhập;
// 	Ví dụ: n=4 => n!=1*2*3*4
// -------------------------------------------------------------

#include <stdio.h>

// Declare function factorial
int factorial(int num);

// Function: Implement fuction factorial
int factorial(int num)
{
    int ans = 1;
    for (int i = 1; i <= num; i++)
    {
        ans *= i;
    }
    return ans;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calling function factorial()
    printf("Factorial of %d is %d", num, factorial(num));
}