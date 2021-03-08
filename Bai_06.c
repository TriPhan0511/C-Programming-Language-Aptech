// Bài 6: Viết chương trình nhập vào một số nguyên n từ bàn phím. In số đảo ngược của n.
//  Ví dụ: Nhập n=567
// 	Xuất: 765
// -------------------------------------------------------------

#include <stdio.h>

// Declare function reverse()
int reverse(int num);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calling function reverse()
    printf("Reversed Number: %d", reverse(num));
}

// Function: Implement function reverse()
int reverse(int num)
{
    int rev = 0;
    int remainder;

    while (num != 0)
    {
        remainder = num % 10;
        rev = rev * 10 + remainder; // Important
        num = num / 10;
    }

    return rev;
}