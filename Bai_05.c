// Bài 5: Viết chương trình nhập vào một số nguyên n từ bàn phím. Tính tổng các chữ số của n.
//  Ví dụ: Nhập n=567
//         Xuất: s=7+6+5 => s=18
// -------------------------------------------------------------

#include <stdio.h>

// Declare function compute()
int compute(int num);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Result: %d", compute(num));
}

// Function: Implement function compute()
int compute(int num)
{
    int ans = 0;
    int remainder;

    while (num != 0)
    {
        remainder = num % 10;
        ans += remainder;
        num = num / 10;
    }
    return ans;
}